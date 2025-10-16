#include "reader_modules/pgv_reader.h"

/**
 * @brief Constructor for the PGVReader
 */
PGVReader::PGVReader() : Node("pgv_reader"),
  m_serialConnected(false),
  m_consecutiveErrors(0),
  m_maxConsecutiveErrors(10),
  m_checksumErrors(0),
  m_readTimeouts(0),
  m_reconnectAttempts(0),
  m_maxReconnectAttempts(5),
  m_reconnectDelay(2.0),
  m_baudRate(115200),
  m_tagId(0),
  m_angleOffset(0.0),
  m_scaleX(1.0),
  m_scaleY(1.0),
  m_loopRate(50.0),
  m_checkSumState(false),
  m_scanDetected(false),
  m_pgvLocalX(0.0),
  m_pgvLocalY(0.0),
  m_pgvLocalAngle(0.0),
  m_pgvGlobalX(0.0),
  m_pgvGlobalY(0.0),
  m_pgvGlobalAngle(0.0)
{
  initializeParameters();
  readBarCodeInfoFromCSV();
  
  // Initialize publishers
  localPosePub_ = this->create_publisher<anscer_msgs::msg::PGVPose>(
    m_barcodeLocalTopic, 10);
  globalPosePub_ = this->create_publisher<anscer_msgs::msg::PGVPose>(
    m_barcodeGlobalTopic, 10);
  nodeMarkerPub_ = this->create_publisher<visualization_msgs::msg::MarkerArray>(
    "barcode_map", 10);
  
  // Try initial connection
  m_serialConnected = initializeConnection();
  
  // Create main data timer
  auto timer_duration = std::chrono::duration<double>(1.0 / m_loopRate);
  dataTimer_ = this->create_wall_timer(
    std::chrono::duration_cast<std::chrono::milliseconds>(timer_duration),
    std::bind(&PGVReader::dataReadCallback, this));
  
  // Create reconnection timer (checks every 2 seconds)
  reconnectTimer_ = this->create_wall_timer(
    std::chrono::seconds(static_cast<int>(m_reconnectDelay)),
    std::bind(&PGVReader::reconnectCallback, this));
  
  if (m_serialConnected) {
    RCLCPP_INFO(this->get_logger(), "PGV Reader node initialized successfully with serial connection");
    m_lastSuccessfulRead = std::chrono::steady_clock::now();
  } else {
    RCLCPP_WARN(this->get_logger(), "PGV Reader node initialized without serial connection");
    RCLCPP_WARN(this->get_logger(), "Node will attempt automatic reconnection");
  }
}

/**
 * @brief Destructor for the PGVReader
 */
PGVReader::~PGVReader()
{
  closeConnection();
  RCLCPP_INFO(this->get_logger(), "PGV Reader shutdown - Total checksum errors: %d, Timeouts: %d", 
              m_checksumErrors, m_readTimeouts);
}

/**
 * @brief Closes the serial connection safely
 */
void PGVReader::closeConnection()
{
  if (p_serialPort && p_serialPort->IsOpen()) {
    try {
      p_serialPort->Close();
      RCLCPP_INFO(this->get_logger(), "Serial port closed");
    } catch (const std::exception& e) {
      RCLCPP_ERROR(this->get_logger(), "Error closing serial port: %s", e.what());
    }
  }
  m_serialConnected = false;
}

/**
 * @brief Initializes the parameters from the parameter server
 */
void PGVReader::initializeParameters()
{
  this->declare_parameter<std::string>("port_name", "/dev/ttyUSB0");
  this->declare_parameter<std::string>("barcode_local_topic", "barcode/local");
  this->declare_parameter<std::string>("barcode_global_topic", "barcode/global");
  this->declare_parameter<std::string>("csv_file_name", "HybridData.csv");
  this->declare_parameter<int>("baud_rate", 115200);
  this->declare_parameter<double>("angle_offset", 270.0);
  this->declare_parameter<double>("loop_rate", 50.0);
  this->declare_parameter<int>("max_consecutive_errors", 10);
  this->declare_parameter<double>("reconnect_delay", 2.0);
  this->declare_parameter<int>("max_reconnect_attempts", 5);
  
  this->get_parameter("port_name", m_portName);
  this->get_parameter("barcode_local_topic", m_barcodeLocalTopic);
  this->get_parameter("barcode_global_topic", m_barcodeGlobalTopic);
  this->get_parameter("csv_file_name", m_csvFileName);
  this->get_parameter("baud_rate", m_baudRate);
  this->get_parameter("angle_offset", m_angleOffset);
  this->get_parameter("loop_rate", m_loopRate);
  this->get_parameter("max_consecutive_errors", m_maxConsecutiveErrors);
  this->get_parameter("reconnect_delay", m_reconnectDelay);
  this->get_parameter("max_reconnect_attempts", m_maxReconnectAttempts);
  
  // Convert angle offset to radians
  m_angleOffset = angles::from_degrees(m_angleOffset);
  
  try {
    m_packagePath = ament_index_cpp::get_package_share_directory("reader_modules");
  } catch (const std::exception& e) {
    RCLCPP_ERROR(this->get_logger(), "Failed to get package path: %s", e.what());
  }
  
  RCLCPP_INFO(this->get_logger(), "Parameters loaded - Port: %s, Baud: %d, Loop rate: %.1f Hz", 
              m_portName.c_str(), m_baudRate, m_loopRate);
  RCLCPP_INFO(this->get_logger(), "Reconnection config - Max errors: %d, Reconnect delay: %.1f s", 
              m_maxConsecutiveErrors, m_reconnectDelay);
}

/**
 * @brief Initializes the connection with the PGV device
 * @return true if connection successful, false otherwise
 */
bool PGVReader::initializeConnection()
{
  try {
    // Close any existing connection
    if (p_serialPort && p_serialPort->IsOpen()) {
      closeConnection();
    }
    
    p_serialPort = std::make_shared<LibSerial::SerialPort>();
    
    // Check if port exists
    if (access(m_portName.c_str(), F_OK) != 0) {
      RCLCPP_ERROR(this->get_logger(), "Serial port %s does not exist", m_portName.c_str());
      return false;
    }
    
    // Check port permissions
    if (access(m_portName.c_str(), R_OK | W_OK) != 0) {
      RCLCPP_ERROR(this->get_logger(), "No permission to access %s", m_portName.c_str());
      RCLCPP_INFO(this->get_logger(), "Run: sudo usermod -a -G dialout $USER");
      return false;
    }
    
    p_serialPort->Open(m_portName);
    rclcpp::sleep_for(std::chrono::milliseconds(100));
    
    if (!p_serialPort->IsOpen()) {
      RCLCPP_ERROR(this->get_logger(), "Failed to open serial port");
      return false;
    }
    
    // Configure serial port
    switch (m_baudRate) {
      case 115200:
        p_serialPort->SetBaudRate(LibSerial::BaudRate::BAUD_115200);
        break;
      case 57600:
        p_serialPort->SetBaudRate(LibSerial::BaudRate::BAUD_57600);
        break;
      case 19200:
        p_serialPort->SetBaudRate(LibSerial::BaudRate::BAUD_19200);
        break;
      case 9600:
        p_serialPort->SetBaudRate(LibSerial::BaudRate::BAUD_9600);
        break;
      default:
        RCLCPP_ERROR(this->get_logger(), "Unsupported baudrate: %d", m_baudRate);
        closeConnection();
        return false;
    }
    
    p_serialPort->SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8);
    p_serialPort->SetParity(LibSerial::Parity::PARITY_EVEN);
    p_serialPort->SetStopBits(LibSerial::StopBits::STOP_BITS_1);
    p_serialPort->SetFlowControl(LibSerial::FlowControl::FLOW_CONTROL_NONE);
    p_serialPort->FlushIOBuffers();
    
    rclcpp::sleep_for(std::chrono::milliseconds(500));
    sendTypeToScan();
    p_serialPort->FlushIOBuffers();
    
    // Reset error counters on successful connection
    m_consecutiveErrors = 0;
    m_reconnectAttempts = 0;
    m_lastSuccessfulRead = std::chrono::steady_clock::now();
    
    RCLCPP_INFO(this->get_logger(), "✓ Serial connection established on %s at %d baud", 
                m_portName.c_str(), m_baudRate);
    return true;
    
  } catch (const std::exception& e) {
    RCLCPP_ERROR(this->get_logger(), "Connection failed: %s", e.what());
    return false;
  }
}

/**
 * @brief Attempts to reconnect the serial port
 * @return true if reconnection successful
 */
bool PGVReader::reconnectSerial()
{
  if (m_reconnectAttempts >= m_maxReconnectAttempts) {
    RCLCPP_ERROR_THROTTLE(this->get_logger(), *this->get_clock(), 10000,
                          "Max reconnection attempts (%d) reached. Waiting for manual intervention...",
                          m_maxReconnectAttempts);
    // Reset counter after some time to retry
    if (m_reconnectAttempts > m_maxReconnectAttempts + 10) {
      m_reconnectAttempts = 0;
    }
    return false;
  }
  
  RCLCPP_WARN(this->get_logger(), "Attempting reconnection... (attempt %d/%d)", 
              m_reconnectAttempts + 1, m_maxReconnectAttempts);
  
  m_reconnectAttempts++;
  
  // Close existing connection
  closeConnection();
  
  // Wait before reconnecting
  rclcpp::sleep_for(std::chrono::milliseconds(500));
  
  // Try to reconnect
  bool success = initializeConnection();
  
  if (success) {
    RCLCPP_INFO(this->get_logger(), "✓ Reconnection successful!");
    m_serialConnected = true;
    return true;
  } else {
    RCLCPP_WARN(this->get_logger(), "✗ Reconnection attempt %d failed", m_reconnectAttempts);
    return false;
  }
}

/**
 * @brief Periodic reconnection check callback
 */
void PGVReader::reconnectCallback()
{
  // Only try to reconnect if not connected
  if (!m_serialConnected || !isSerialHealthy()) {
    if (!m_serialConnected) {
      RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 10000,
                           "Serial port disconnected. Attempting reconnection...");
    }
    
    bool reconnected = reconnectSerial();
    if (reconnected) {
      m_serialConnected = true;
    }
  }
}

/**
 * @brief Checks if serial connection is healthy
 * @return true if connection is healthy
 */
bool PGVReader::isSerialHealthy()
{
  if (!p_serialPort || !p_serialPort->IsOpen()) {
    return false;
  }
  
  // Check if we haven't had a successful read in too long
  auto now = std::chrono::steady_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::seconds>(now - m_lastSuccessfulRead);
  
  if (duration.count() > 5) {  // No successful read for 5 seconds
    RCLCPP_WARN(this->get_logger(), "No successful reads for %ld seconds. Connection may be unhealthy.", 
                duration.count());
    return false;
  }
  
  return true;
}

/**
 * @brief Sends the scan type configuration to PGV device
 */
void PGVReader::sendTypeToScan()
{
  if (!p_serialPort || !p_serialPort->IsOpen()) {
    return;
  }
  
  LibSerial::DataBuffer req_type(2);
  req_type[0] = 0xec;
  req_type[1] = ~req_type[0];
  
  try {
    p_serialPort->Write(req_type);
    p_serialPort->DrainWriteBuffer();
  } catch (const std::exception& e) {
    RCLCPP_WARN(this->get_logger(), "Failed to send scan type: %s", e.what());
    m_consecutiveErrors++;
  }
}

/**
 * @brief Sends scan request to PGV device
 */
void PGVReader::sendRequestToScan()
{
  if (!p_serialPort || !p_serialPort->IsOpen()) {
    return;
  }
  
  LibSerial::DataBuffer req_packet(2);
  req_packet[0] = 0xC8;
  req_packet[1] = ~req_packet[0];
  
  try {
    p_serialPort->Write(req_packet);
    p_serialPort->DrainWriteBuffer();
  } catch (const std::exception& e) {
    RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 1000,
                         "Failed to send scan request: %s", e.what());
    m_consecutiveErrors++;
  }
}

/**
 * @brief Timer callback for reading PGV data
 */
void PGVReader::dataReadCallback()
{
  // Check if serial port is connected
  if (!m_serialConnected || !p_serialPort || !p_serialPort->IsOpen()) {
    mapVisualization();  // Still visualize the map
    return;
  }
  
  // Check for too many consecutive errors - trigger reconnection
  if (m_consecutiveErrors >= m_maxConsecutiveErrors) {
    RCLCPP_ERROR(this->get_logger(), 
                 "⚠ Too many consecutive errors (%d). Marking connection as unhealthy.", 
                 m_consecutiveErrors);
    RCLCPP_ERROR(this->get_logger(), 
                 "Statistics - Checksum errors: %d, Read timeouts: %d", 
                 m_checksumErrors, m_readTimeouts);
    m_serialConnected = false;
    m_consecutiveErrors = 0;  // Reset for next connection attempt
    return;
  }
  
  sendRequestToScan();
  
  // Receive packet from PGV100
  LibSerial::DataBuffer receivedPacket(21);
  
  try {
    p_serialPort->Read(receivedPacket, 21, 100);  // 100ms timeout
  } catch (const LibSerial::ReadTimeout& e) {
    m_readTimeouts++;
    m_consecutiveErrors++;
    RCLCPP_DEBUG(this->get_logger(), "Read timeout - no barcode detected");
    p_serialPort->FlushIOBuffers();
    mapVisualization();
    return;
  } catch (const LibSerial::NotOpen& e) {
    RCLCPP_ERROR(this->get_logger(), "Serial port not open during read");
    m_serialConnected = false;
    return;
  } catch (const std::exception& e) {
    m_consecutiveErrors++;
    RCLCPP_ERROR_THROTTLE(this->get_logger(), *this->get_clock(), 1000,
                          "Serial read error: %s", e.what());
    
    if (p_serialPort && p_serialPort->IsOpen()) {
      p_serialPort->FlushIOBuffers();
    }
    mapVisualization();
    return;
  }
  
  // Calculate checksum
  int8_t checkSum = receivedPacket[0];
  for (size_t i = 1; i < 20; i++) {
    checkSum ^= receivedPacket[i];
  }
  
  // Validate checksum
  if (checkSum != receivedPacket[20]) {
    m_checksumErrors++;
    m_consecutiveErrors++;
    
    RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                         "⚠ Checksum mismatch (Total: %d). Possible vibration/interference.", 
                         m_checksumErrors);
    
    if (p_serialPort && p_serialPort->IsOpen()) {
      p_serialPort->FlushIOBuffers();
    }
    m_checkSumState = false;
    mapVisualization();
    return;
  }
  
  // Successful read - reset error counter
  m_checkSumState = true;
  m_consecutiveErrors = 0;
  m_lastSuccessfulRead = std::chrono::steady_clock::now();
  
  // Parse barcode data
  if (receivedPacket[1] & 0x40) {
    m_scanDetected = true;
    
    // Extract X position
    int32_t xps = ((int32_t)(receivedPacket[2] & 0x07) << 21 |
                   (int32_t)(receivedPacket[3] & 0x7f) << 14 |
                   (int32_t)(receivedPacket[4] & 0x7f) << 7 |
                   (receivedPacket[5] & 0x7f));
    
    if (xps & 0x40000) {
      xps |= 0xff800000;
    }
    
    // Extract Y position
    int16_t yps = ((int16_t)(receivedPacket[6] & 0x7f) << 7) |
                  (receivedPacket[7] & 0x7f);
    
    if (yps & 0x2000) {
      yps |= 0xC000;
    }
    
    m_pgvLocalX = (xps / 10000.0);
    m_pgvLocalY = (yps / 10000.0);
    
    // Extract angle
    int16_t angle = ((int16_t)(receivedPacket[10] & 0x3f) << 7) |
                    (receivedPacket[11] & 0x7f);
    
    if (angle & 0x1000) {
      angle |= 0xE000;
    }
    
    double ang = angles::from_degrees(angle / 10.0);
    double a = angles::normalize_angle(ang - m_angleOffset);
    m_pgvLocalAngle = a;
    
    // Extract tag ID
    uint32_t tag = ((uint32_t)(receivedPacket[14] & 0x07) << 21 |
                    (uint32_t)(receivedPacket[15] & 0x7f) << 14 |
                    (uint32_t)(receivedPacket[16] & 0x7f) << 7 |
                    (receivedPacket[17] & 0x7f));
    m_tagId = tag;
    
    // Publish local pose
    anscer_msgs::msg::PGVPose localMsg;
    localMsg.x = m_pgvLocalX;
    localMsg.y = m_pgvLocalY;
    localMsg.yaw = m_pgvLocalAngle;
    localMsg.id = m_tagId;
    localPosePub_->publish(localMsg);
    
    // Calculate and publish global pose
    if (m_barCodeMap.find(m_tagId) != m_barCodeMap.end()) {
      BarcodeInfo barcodeInfo = m_barCodeMap[m_tagId];
      m_pgvGlobalX = barcodeInfo.barcodeToMapX + m_pgvLocalX;
      m_pgvGlobalY = barcodeInfo.barcodeToMapY + m_pgvLocalY;
      m_pgvGlobalAngle = m_pgvLocalAngle;
      
      anscer_msgs::msg::PGVPose globalMsg;
      globalMsg.x = m_pgvGlobalX;
      globalMsg.y = m_pgvGlobalY;
      globalMsg.yaw = m_pgvGlobalAngle;
      globalMsg.id = m_tagId;
      globalPosePub_->publish(globalMsg);
      
      RCLCPP_DEBUG(this->get_logger(), "Barcode %d detected at (%.2f, %.2f)", 
                   m_tagId, m_pgvGlobalX, m_pgvGlobalY);
    }
  }
  
  mapVisualization();
}

/**
 * @brief Visualizes barcode map markers
 */
void PGVReader::mapVisualization()
{
  m_markerArray.markers.clear();
  
  for (const auto& it : m_barCodeMap) {
    visualization_msgs::msg::Marker marker;
    int currentMarker = it.first;
    
    // Highlight currently detected barcode in red
    if (currentMarker == m_tagId && m_serialConnected) {
      marker.color.r = 1.0;
      marker.color.g = 0.0;
      marker.color.b = 0.0;
    } else {
      marker.color.r = 0.0;
      marker.color.g = 0.0;
      marker.color.b = 1.0;
    }
    
    marker.header.frame_id = "map";
    marker.header.stamp = this->now();
    marker.ns = "node_" + std::to_string(it.first);
    marker.action = visualization_msgs::msg::Marker::ADD;
    marker.pose.orientation.w = 1.0;
    marker.id = it.first;
    marker.type = visualization_msgs::msg::Marker::SPHERE;
    marker.color.a = 1.0;
    marker.scale.x = 0.25;
    marker.scale.y = 0.25;
    marker.scale.z = 0.25;
    marker.pose.position.x = it.second.barcodeToMapX;
    marker.pose.position.y = it.second.barcodeToMapY;
    marker.pose.position.z = 0.0;
    
    m_markerArray.markers.push_back(marker);
  }
  
  nodeMarkerPub_->publish(m_markerArray);
}

/**
 * @brief Reads barcode to map relation from CSV file
 */
void PGVReader::readBarCodeInfoFromCSV()
{
  std::string filePath = m_packagePath + "/data/" + m_csvFileName;
  std::ifstream file(filePath);
  
  if (!file.is_open()) {
    RCLCPP_ERROR(this->get_logger(), "Unable to open CSV file: %s", filePath.c_str());
    return;
  }
  
  RCLCPP_INFO(this->get_logger(), "Reading data from CSV: %s", filePath.c_str());
  
  std::string line;
  bool firstLine = true;
  
  while (std::getline(file, line)) {
    if (firstLine) {
      firstLine = false;
      continue;
    }
    
    std::stringstream ss(line);
    std::string substr;
    std::vector<std::string> values;
    
    while (std::getline(ss, substr, ',')) {
      values.push_back(substr);
    }
    
    if (values.size() >= 3) {
      try {
        BarcodeInfo barCodeInfo;
        barCodeInfo.barcodeToMapX = std::stod(values[0]);
        barCodeInfo.barcodeToMapY = std::stod(values[1]);
        int id = std::stoi(values[2]);
        m_barCodeMap[id] = barCodeInfo;
      } catch (const std::exception& e) {
        RCLCPP_WARN(this->get_logger(), "Failed to parse CSV line: %s", e.what());
      }
    }
  }
  
  file.close();
  RCLCPP_INFO(this->get_logger(), "Loaded %zu barcode entries from CSV", m_barCodeMap.size());
}

/**
 * @brief Converts char array to string
 */
std::string PGVReader::convertToString(char *a, int size)
{
  std::string s = "";
  for (int i = 0; i < size; i++) {
    s = s + a[i];
  }
  return s;
}

/**
 * @brief Main function
 */
int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<PGVReader>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

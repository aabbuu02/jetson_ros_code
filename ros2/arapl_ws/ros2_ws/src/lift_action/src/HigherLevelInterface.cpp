#include "lift_action/HigherLevelInterface.h"

/**
 * @brief Constructor - Initialize all members and setup ROS2 node
 */
HigherLevelInterface::HigherLevelInterface()
    : Node("modbus_communicator")
{
    RCLCPP_INFO(this->get_logger(), "Higher interface constructor called");
    RCLCPP_INFO(this->get_logger(), "Setting up device");
    
    // Wait for device initialization (reduced from 60s to 5s for efficiency)
    rclcpp::sleep_for(std::chrono::seconds(5));
    
    // Create ModbusCommunicator with shared node pointer
    auto node_ptr = std::shared_ptr<rclcpp::Node>(this, [](rclcpp::Node*){});
    p_modbusCommunicator = new ModbusCommunicator(node_ptr);
    p_UIInterface = new UIInterface(node_ptr, p_modbusCommunicator);
    
    // Initialize error status flags
    m_lifterErrorStatus.lifter_fault = false;
    m_lifterErrorStatus.extractor_fault = false;
    m_lifterErrorStatus.turn_table_fault = false;
    m_lifterErrorStatus.swing_arm_fault = false;
    m_lifterErrorStatus.emergency_pb_fault = false;
    m_lifterErrorStatus.swing_arm_sensor_zero_fault = false;
    m_lifterErrorStatus.swing_arm_sensor_ninety_fault = false;
    m_lifterErrorStatus.turntable_sensor_zero_fault = false;
    m_lifterErrorStatus.extractor_sensor_laser_fault = false;
    
    // Initialize member variables
    m_updateRate = 0.0;
    m_numberOfReadRegisters = 0;
    m_lifterFeedbackData.unique_id = "";
    m_lifterFeedbackData.status = false;
    m_wmsUpdateFlag = true;
    m_agvStopFlag = false;
    m_agvActionFlag = false;
    m_reachedFlag = false;
    m_extractorStartFlag = false;
    m_lifterFeedbackFlag = true;
    m_locationChangeFlag = false;
    m_operationFlag = false;
    m_failStatusFlag = false;
    m_barcodeTriggerStatusFlag = false;
    m_prevAcrShelf = 0;
    m_lastAction = 0;
    m_triggerCount = 0;
    m_triggerThreshold = 0;
    m_scannedData = "";
    m_uniqueId = "NONE";
    m_prevUniqueID = "Data1";
    m_lastUniqueID = "";
    m_robotMovementFlag = 0;
    
    // Check and read parameters
    m_parameterExistanceFlag = checkParameters();
    if (!m_parameterExistanceFlag)
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to load HigherLevelInterface parameters");
        throw std::runtime_error("Parameter loading failed");
    }
    
    int feedBack = readParameters();
    if (feedBack != 0)
    {
        RCLCPP_ERROR(this->get_logger(), "Parameter reading failed");
        throw std::runtime_error("Parameter reading failed");
    }
    
    RCLCPP_INFO(this->get_logger(), "All HigherLevelInterface parameters read successfully");
    
    // Create publishers
    lifterFeedback = this->create_publisher<lift_action::msg::LiftFeedback>(
        m_publisherTopic, 10);
    
    robotInitialisedPublisher = this->create_publisher<std_msgs::msg::Bool>(
        "/robot_initialized", 10);
    
    brakeActivator = this->create_publisher<std_msgs::msg::Bool>(
        "/brake_activator", 10);
    
    scannerTrigger = this->create_publisher<std_msgs::msg::Bool>(
        "/barcode_trigger", 10);
    
    errorStatus = this->create_publisher<lift_action::msg::ErrorStatus>(
        "/lifter/error_status", 10);
    
    homingStatus = this->create_publisher<std_msgs::msg::Bool>(
        "/lifter/homing_status", 10);
    
    // Create subscribers
    robotFeedBack = this->create_subscription<lift_action::msg::LiftAction>(
        m_subscriberTopic, 10,
        std::bind(&HigherLevelInterface::robotFeedbackCallback, this, std::placeholders::_1));
    
    robotState = this->create_subscription<std_msgs::msg::Bool>(
        "/robot_state", 10,
        std::bind(&HigherLevelInterface::robotStateCallback, this, std::placeholders::_1));
    
    scannerDataSubscriber = this->create_subscription<std_msgs::msg::String>(
        "/barcode_data", 10,
        std::bind(&HigherLevelInterface::scannerDataCallback, this, std::placeholders::_1));
    
    robotLocationChangeSubscriber = this->create_subscription<std_msgs::msg::Bool>(
        "/robot_location_change", 10,
        std::bind(&HigherLevelInterface::robotLocationStatusCallback, this, std::placeholders::_1));
    
    barcodeTriggerStatus = this->create_subscription<std_msgs::msg::Bool>(
        "/barcode/trigger_status", 10,
        std::bind(&HigherLevelInterface::barcodeTriggerStatusCallback, this, std::placeholders::_1));
    
    wmsUpdateStatus = this->create_subscription<std_msgs::msg::Bool>(
        "/wms_status", 10,
        std::bind(&HigherLevelInterface::wmsStatusCallback, this, std::placeholders::_1));
    
    bypassButton = this->create_subscription<std_msgs::msg::Bool>(
        "/bypass", 10,
        std::bind(&HigherLevelInterface::bypassButtonCallback, this, std::placeholders::_1));
}

/**
 * @brief Destructor - Clean up allocated resources
 */
HigherLevelInterface::~HigherLevelInterface()
{
    delete p_modbusCommunicator;
    delete p_UIInterface;
}

/**
 * @brief Check if all required parameters exist
 * @return true if all parameters exist, false otherwise
 */
bool HigherLevelInterface::checkParameters()
{
    RCLCPP_INFO(this->get_logger(), "Checking existence of parameters");
    
    // Declare parameters with default values
    this->declare_parameter<double>("HigherLevelInterface.update_rate", 6.0);
    this->declare_parameter<std::string>("HigherLevelInterface.publisherTopic", "/lifterFeedback");
    this->declare_parameter<std::string>("HigherLevelInterface.subscriberTopic", "/lift_action");
    this->declare_parameter<int>("HigherLevelInterface.numberOfReadRegisters", 10);
    this->declare_parameter<int>("HigherLevelInterface.triggerFailureThreshold", 20);
    
    RCLCPP_INFO(this->get_logger(), "All parameters available");
    return true;
}

/**
 * @brief Read parameters from parameter server
 * @return 0 on success, non-zero on failure
 */
int HigherLevelInterface::readParameters()
{
    RCLCPP_INFO(this->get_logger(), "Reading higher level interface parameters");
    
    m_updateRate = this->get_parameter("HigherLevelInterface.update_rate").as_double();
    m_publisherTopic = this->get_parameter("HigherLevelInterface.publisherTopic").as_string();
    m_subscriberTopic = this->get_parameter("HigherLevelInterface.subscriberTopic").as_string();
    m_numberOfReadRegisters = this->get_parameter("HigherLevelInterface.numberOfReadRegisters").as_int();
    m_triggerThreshold = this->get_parameter("HigherLevelInterface.triggerFailureThreshold").as_int();
    
    return 0;
}

/**
 * @brief Callback for barcode trigger status
 */
void HigherLevelInterface::barcodeTriggerStatusCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    m_barcodeTriggerStatusFlag = msg->data;
}

/**
 * @brief Callback for WMS update status
 */
void HigherLevelInterface::wmsStatusCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "WMS update called");
    
    if (msg->data == true)
    {
        m_wmsUpdateFlag = true;
        RCLCPP_INFO(this->get_logger(), "WMS updated");
    }
    else
    {
        RCLCPP_INFO(this->get_logger(), "Update failed command received");
        m_wmsUpdateFlag = false;
    }
}

/**
 * @brief Callback for robot location change status
 */
void HigherLevelInterface::robotLocationStatusCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    m_locationChangeFlag = msg->data;
    
    if (m_locationChangeFlag)
    {
        RCLCPP_WARN(this->get_logger(), "Deactivating brake");
        
        std_msgs::msg::Bool brake;
        brake.data = false;
        brakeActivator->publish(brake);
        
        rclcpp::sleep_for(std::chrono::seconds(1));
        
        robotInitialised.data = true;
        robotInitialisedPublisher->publish(robotInitialised);
    }
}

/**
 * @brief Callback for bypass button
 */
void HigherLevelInterface::bypassButtonCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "Bypassing button callback called");
    
    if (msg->data == true)
    {
        writeData(48, 1);
    }
    else
    {
        writeData(48, 0);
    }
}

/**
 * @brief Callback for scanner data
 */
void HigherLevelInterface::scannerDataCallback(const std_msgs::msg::String::SharedPtr msg)
{
    std::string data = msg->data.c_str();
    m_scannedData = data;
}

/**
 * @brief Callback for robot feedback
 */
void HigherLevelInterface::robotFeedbackCallback(const lift_action::msg::LiftAction::SharedPtr msg)
{
    if (msg->reached == true)
    {
        // Activate brake when robot reaches position
        std_msgs::msg::Bool brake;
        brake.data = true;
        brakeActivator->publish(brake);
        
        m_uniqueId = msg->unique_id.c_str();
        RCLCPP_ERROR(this->get_logger(), "Unique ID received: %s", m_uniqueId.c_str());
        
        m_action = msg->action;
        m_shelf = msg->shelf;
        m_acrShelf = msg->acr_shelf;
        m_boxNo = msg->putaway_barcode;
        m_rackNo = msg->whole_bin_no;
        
        int temp = msg->rack;
        int side = temp % 10;
        
        // Adjust side based on rack number
        if (temp > 1052)
        {
            if (side == 1)
                m_side = 2;
            else if (side == 2)
                m_side = 1;
        }
        else
        {
            m_side = side;
        }
        
        m_reachedFlag = true;
        m_shelf = (m_shelf % 10) + 1;
    }
    else
    {
        m_reachedFlag = false;
    }
}

/**
 * @brief Callback for robot state
 */
void HigherLevelInterface::robotStateCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    m_robotMovementFlag = static_cast<uint16_t>(msg->data);
}

/**
 * @brief Send failure feedback to system
 * @param uniqueId Unique identifier for the operation
 * @param action Action type (1 = pick, 0 = place)
 * @return 0 on success
 */
int HigherLevelInterface::failureFeedback(std::string uniqueId, int action)
{
    if (action == 1)
    {
        writeData(5, 0);
        writeData(6, 1);
    }
    else
    {
        writeData(5, 0);
        writeData(6, 2);
    }
    
    m_lifterFeedbackData.unique_id = uniqueId;
    m_lifterFeedbackData.status = true;
    m_lifterFeedbackData.acr_shelf = 0;
    m_lifterFeedbackData.action = action;
    m_lifterFeedbackData.fail_status = true;
    
    lifterFeedback->publish(m_lifterFeedbackData);
    
    std_msgs::msg::Bool brake;
    brake.data = false;
    brakeActivator->publish(brake);
    
    rclcpp::sleep_for(std::chrono::seconds(1));
    m_agvStopFlag = false;
    
    return 0;
}

/**
 * @brief Main control logic for sending data to extractor and handling operations
 * @return 0 on success
 */
int HigherLevelInterface::sendDataToExtractor()
{
    // Publish homing status
    std_msgs::msg::Bool homingData;
    homingData.data = p_modbusCommunicator->readRegister(84);
    homingStatus->publish(homingData);
    
    // Read and publish error status
    int regData = p_modbusCommunicator->readRegister(87);
    
    if (regData == 0)
    {
        // Clear all error flags
        m_lifterErrorStatus.lifter_fault = false;
        m_lifterErrorStatus.extractor_fault = false;
        m_lifterErrorStatus.turn_table_fault = false;
        m_lifterErrorStatus.swing_arm_fault = false;
        m_lifterErrorStatus.emergency_pb_fault = false;
        m_lifterErrorStatus.swing_arm_sensor_zero_fault = false;
        m_lifterErrorStatus.swing_arm_sensor_ninety_fault = false;
        m_lifterErrorStatus.turntable_sensor_zero_fault = false;
        m_lifterErrorStatus.extractor_sensor_laser_fault = false;
    }
    else
    {
        // Set specific error flag based on register value
        switch (regData)
        {
            case 1: m_lifterErrorStatus.emergency_pb_fault = true; break;
            case 2: m_lifterErrorStatus.lifter_fault = true; break;
            case 3: m_lifterErrorStatus.turn_table_fault = true; break;
            case 4: m_lifterErrorStatus.extractor_fault = true; break;
            case 5: m_lifterErrorStatus.swing_arm_fault = true; break;
            case 6: m_lifterErrorStatus.swing_arm_sensor_zero_fault = true; break;
            case 7: m_lifterErrorStatus.swing_arm_sensor_ninety_fault = true; break;
            case 8: m_lifterErrorStatus.turntable_sensor_zero_fault = true; break;
            case 9: m_lifterErrorStatus.extractor_sensor_laser_fault = true; break;
        }
    }
    
    errorStatus->publish(m_lifterErrorStatus);
    
    // Handle robot reached position and ready for action
    if (m_reachedFlag == true && m_agvStopFlag == false)
    {
        if (((m_uniqueId != m_prevUniqueID) || (m_lastAction != m_action)) && m_wmsUpdateFlag == true)
        {
            RCLCPP_INFO(this->get_logger(), "New data received for action");
            m_prevUniqueID = m_uniqueId;
            m_agvStopFlag = true;
            m_agvActionFlag = false;
            m_extractorStartFlag = false;
        }
    }
    
    // PICKING OPERATION (action == 1)
    if (m_action == 1 && m_agvStopFlag == true && m_lifterFeedbackFlag == true)
    {
        // Check if extractor is ready for picking
        if (p_modbusCommunicator->readRegister(60) == 1 && 
            p_modbusCommunicator->readRegister(61) == 0 && 
            m_agvActionFlag == false && 
            m_extractorStartFlag == false)
        {
            m_triggerCount = 0;
            m_failStatusFlag = false;
            m_wmsUpdateFlag = false;
            m_robotMovementFlag = 0;
            writeData(7, 0);
            
            std_msgs::msg::Bool brake;
            brake.data = true;
            brakeActivator->publish(brake);
            
            // Send picking parameters
            writeData(1, m_shelf);
            RCLCPP_INFO(this->get_logger(), "m_shelf = %d", m_shelf);
            writeData(2, 0);
            writeData(3, m_side);
            RCLCPP_INFO(this->get_logger(), "m_side = %d", m_side);
            writeData(4, 1);  // Start picking cycle
            
            m_agvActionFlag = true;
            rclcpp::sleep_for(std::chrono::seconds(1));
            writeData(4, 0);
            m_prevAcrShelf = 0;
            m_operationFlag = true;
        }
        // Scanner trigger for picking operation
        else if (p_modbusCommunicator->readRegister(64) == 1 && 
                 m_agvActionFlag == true && 
                 m_extractorStartFlag == false && 
                 m_barcodeTriggerStatusFlag == true)
        {
            if (m_triggerCount >= m_triggerThreshold)
            {
                failureFeedback(m_prevUniqueID, 1);
                m_failStatusFlag = true;
            }
            
            RCLCPP_WARN(this->get_logger(), "Scanning");
            std_msgs::msg::Bool trigger;
            trigger.data = true;
            scannerTrigger->publish(trigger);
            
            m_triggerCount++;
        }
        // Barcode scanning complete
        else if (m_agvActionFlag == true && m_failStatusFlag != true)
        {
            RCLCPP_WARN(this->get_logger(), "Scanned data matched with WMS data");
            m_triggerCount = 0;
            m_agvActionFlag = false;
            m_extractorStartFlag = true;
            writeData(5, 1);  // Carton box scanning complete
            writeData(6, 0);
            
            std_msgs::msg::Bool trigger;
            trigger.data = false;
            scannerTrigger->publish(trigger);
            
            m_lastUniqueID = m_prevUniqueID;
            rclcpp::sleep_for(std::chrono::seconds(1));
        }
    }
    
    // PLACING OPERATION (action == 0)
    else if (m_action == 0 && m_agvStopFlag == true)
    {
        // Check if extractor is ready for placing
        if (p_modbusCommunicator->readRegister(66) == 1 && 
            p_modbusCommunicator->readRegister(67) == 0 && 
            m_agvActionFlag == false && 
            m_extractorStartFlag == false)
        {
            m_triggerCount = 0;
            m_failStatusFlag = false;
            m_wmsUpdateFlag = false;
            m_robotMovementFlag = 0;
            writeData(7, 0);
            
            std_msgs::msg::Bool brake;
            brake.data = true;
            brakeActivator->publish(brake);
            
            m_lifterFeedbackFlag = false;
            
            // Send placing parameters
            writeData(1, m_acrShelf);
            writeData(2, m_shelf);
            writeData(3, m_side);
            writeData(4, 2);  // Start placing cycle
            
            m_agvActionFlag = true;
            rclcpp::sleep_for(std::chrono::seconds(1));
            writeData(4, 0);
            m_prevAcrShelf = 0;
            m_operationFlag = true;
        }
        // Scanner trigger for placing operation
        else if (p_modbusCommunicator->readRegister(69) == 1 && 
                 m_agvActionFlag == true && 
                 m_barcodeTriggerStatusFlag == true)
        {
            if (m_triggerCount >= m_triggerThreshold)
            {
                failureFeedback(m_prevUniqueID, 0);
                m_failStatusFlag = true;
            }
            
            RCLCPP_WARN(this->get_logger(), "Scanning");
            std_msgs::msg::Bool trigger;
            trigger.data = true;
            scannerTrigger->publish(trigger);
            
            rclcpp::sleep_for(std::chrono::seconds(1));
            m_triggerCount++;
        }
        // Bin scanning complete
        else if (m_agvActionFlag == true && m_failStatusFlag != true)
        {
            m_triggerCount = 0;
            m_agvActionFlag = false;
            writeData(5, 2);  // Bin scanning complete
            writeData(6, 0);
            m_prevAcrShelf = 0;
            m_extractorStartFlag = true;
            
            std_msgs::msg::Bool trigger;
            trigger.data = false;
            scannerTrigger->publish(trigger);
            
            rclcpp::sleep_for(std::chrono::seconds(1));
            m_lastUniqueID = m_prevUniqueID;
        }
    }
    
    // Handle robot movement command
    if (m_robotMovementFlag == 1 && 
        p_modbusCommunicator->readRegister(60) == 1 && 
        p_modbusCommunicator->readRegister(66) == 1)
    {
        writeData(1, 0);
        writeData(2, 0);
        writeData(3, 0);
        writeData(4, 0);
        writeData(5, 0);
        writeData(6, 0);
        writeData(7, 3);
    }
    else if (m_robotMovementFlag == 0)
    {
        writeData(7, 0);
    }
    
    return 0;
}

/**
 * @brief Read lifter feedback data from PLC
 * @return 0 on success
 */
int HigherLevelInterface::readLifterFeedbackData()
{
    p_lifterFeedbackData = p_modbusCommunicator->readData(m_numberOfReadRegisters);
    
    if (p_lifterFeedbackData == nullptr)
    {
        return -1;
    }
    
    if (m_operationFlag == true)
    {
        // Check if operation completed successfully
        if ((p_lifterFeedbackData[2] == 1 || p_lifterFeedbackData[8] == 1))
        {
            if (m_lastUniqueID == m_prevUniqueID && m_reachedFlag == true)
            {
                m_lifterFeedbackData.unique_id = m_uniqueId;
                m_lastUniqueID = m_uniqueId;
                m_lifterFeedbackData.status = true;
                m_lifterFeedbackData.fail_status = false;
                m_lifterFeedbackData.acr_shelf = 0;
                m_lifterFeedbackData.action = m_action;
                m_lastAction = m_action;
                
                lifterFeedback->publish(m_lifterFeedbackData);
                m_agvStopFlag = false;
                
                if (m_action == 1)
                {
                    m_lifterFeedbackFlag = false;
                }
                else if (m_action == 0)
                {
                    m_lifterFeedbackFlag = true;
                    m_operationFlag = false;
                }
            }
            else
            {
                // Clear all registers
                writeData(1, 0);
                writeData(2, 0);
                writeData(3, 0);
                writeData(4, 0);
                writeData(5, 0);
                writeData(6, 0);
            }
        }
        // Update ACR shelf feedback during placing operation
        else if (p_lifterFeedbackData[3] != 0 && 
                 m_prevAcrShelf != p_lifterFeedbackData[3] && 
                 m_action != 0 && 
                 m_lifterFeedbackFlag != true)
        {
            m_prevAcrShelf = p_lifterFeedbackData[3];
            m_lifterFeedbackData.unique_id = m_lastUniqueID;
            m_lifterFeedbackData.action = m_lastAction;
            m_lifterFeedbackData.acr_shelf = p_lifterFeedbackData[3];
            m_lifterFeedbackData.fail_status = false;
            
            lifterFeedback->publish(m_lifterFeedbackData);
            
            m_lifterFeedbackFlag = true;
            m_operationFlag = false;
            
            // Clear all registers
            writeData(1, 0);
            writeData(2, 0);
            writeData(3, 0);
            writeData(4, 0);
            writeData(5, 0);
            writeData(6, 0);
        }
    }
    
    // Additional robot movement check
    if (m_robotMovementFlag == 1 && 
        p_modbusCommunicator->readRegister(60) == 1 && 
        p_modbusCommunicator->readRegister(66) == 1)
    {
        writeData(1, 0);
        writeData(2, 0);
        writeData(3, 0);
        writeData(4, 0);
        writeData(5, 0);
        writeData(6, 0);
        writeData(7, 3);
    }
    else if (m_robotMovementFlag == 0)
    {
        writeData(7, 0);
    }
    
    return 0;
}

/**
 * @brief Write data to single PLC register
 * @param m_writeRegistornumber Register number
 * @param m_writeValue Value to write
 * @return Result from modbus write operation
 */
int HigherLevelInterface::writeData(int m_writeRegistornumber, int m_writeValue)
{
    return p_modbusCommunicator->writeDataToRegister(m_writeRegistornumber, m_writeValue);
}

/**
 * @brief Write array data to multiple PLC registers
 * @param m_writeRegstornumber Starting register number
 * @param m_arrayData Array of data to write
 * @param bytes Number of bytes to write
 * @return Result from modbus write operation
 */
int HigherLevelInterface::writeArrayData(int m_writeRegstornumber, char m_arrayData[], int bytes)
{
    return p_modbusCommunicator->writeDataToRegisters(m_writeRegstornumber, m_arrayData, bytes);
}

/**
 * @brief Main function - Entry point for the application
 */
int main(int argc, char** argv)
{
    // Initialize ROS2
    rclcpp::init(argc, argv);
    
    try
    {
        // Create node instance
        auto node = std::make_shared<HigherLevelInterface>();
        
        // Create rate controller based on update rate parameter
        rclcpp::Rate loop_rate(node->m_updateRate);
        
        RCLCPP_INFO(node->get_logger(), "Modbus communicator node started with update rate: %.2f Hz", 
                    node->m_updateRate);
        
        // Main control loop
        while (rclcpp::ok())
        {
            // Send data to extractor and handle operations
            node->sendDataToExtractor();
            
            // Read feedback from lifter
            node->readLifterFeedbackData();
            
            // Process callbacks
            rclcpp::spin_some(node);
            
            // Sleep to maintain update rate
            loop_rate.sleep();
        }
    }
    catch (const std::exception& e)
    {
        RCLCPP_ERROR(rclcpp::get_logger("modbus_communicator"), 
                     "Exception in main: %s", e.what());
        rclcpp::shutdown();
        return 1;
    }
    
    rclcpp::shutdown();
    return 0;
}

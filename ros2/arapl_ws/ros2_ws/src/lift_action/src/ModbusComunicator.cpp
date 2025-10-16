#include "lift_action/ModbusCommunicator.h"

/**
 * @brief Constructor - Initialize modbus communicator
 */
ModbusCommunicator::ModbusCommunicator(std::shared_ptr<rclcpp::Node> node)
    : node_(node), p_ptx(nullptr), m_parameterExistanceFlag(false)
{
    RCLCPP_INFO(node_->get_logger(), "ModbusCommunicator constructor called");
    
    m_parameterExistanceFlag = checkParameters();
    if (!m_parameterExistanceFlag)
    {
        RCLCPP_ERROR(node_->get_logger(), "Failed to load parameters");
        throw std::runtime_error("Parameter loading failed");
    }
    
    int feedback = readParameters();
    if (feedback == 0)
    {
        RCLCPP_ERROR(node_->get_logger(), "Failed to load Modbus Communicator parameters");
        throw std::runtime_error("Parameter reading failed");
    }
    
    RCLCPP_INFO(node_->get_logger(), "Modbus Communicator parameters read successfully");
    initiateConnection();
}

/**
 * @brief Destructor - Clean up modbus connection
 */
ModbusCommunicator::~ModbusCommunicator()
{
    if (p_ptx)
    {
        modbus_close(p_ptx);
        modbus_free(p_ptx);
        RCLCPP_INFO(node_->get_logger(), "Modbus connection closed");
    }
}

/**
 * @brief Check if all required parameters exist
 * @return true if all parameters exist, false otherwise
 */
bool ModbusCommunicator::checkParameters()
{
    RCLCPP_INFO(node_->get_logger(), "Checking existence of parameters");
    
    if (!node_->has_parameter("ModbusCommunicator.ip"))
    {
        node_->declare_parameter<std::string>("ModbusCommunicator.ip", "192.168.1.100");
    }
    
    if (!node_->has_parameter("ModbusCommunicator.port"))
    {
        node_->declare_parameter<int>("ModbusCommunicator.port", 502);
    }
    
    RCLCPP_INFO(node_->get_logger(), "Parameter availability checking completed");
    return true;
}

/**
 * @brief Read parameters from parameter server
 * @return 1 on success, 0 on failure
 */
int ModbusCommunicator::readParameters()
{
    RCLCPP_INFO(node_->get_logger(), "Reading parameters");
    
    m_ipAddress = node_->get_parameter("ModbusCommunicator.ip").as_string();
    m_port = node_->get_parameter("ModbusCommunicator.port").as_int();
    
    RCLCPP_INFO(node_->get_logger(), "IP Address: %s", m_ipAddress.c_str());
    RCLCPP_INFO(node_->get_logger(), "Port: %d", m_port);
    
    return 1;
}

/**
 * @brief Initiate modbus TCP connection
 * @return 0 on success, -1 on failure
 */
int ModbusCommunicator::initiateConnection()
{
    m_ip = m_ipAddress.c_str();
    RCLCPP_INFO(node_->get_logger(), "Connecting to IP: %s", m_ip);
    RCLCPP_INFO(node_->get_logger(), "Port: %d", m_port);
    
    p_ptx = modbus_new_tcp(m_ip, m_port);
    
    if (!p_ptx)
    {
        RCLCPP_ERROR(node_->get_logger(), "Failed to create modbus context");
        throw std::runtime_error("Modbus context creation failed");
    }
    
    RCLCPP_INFO(node_->get_logger(), "Connecting to modbus device...");
    
    // Wait for device to be ready (reduced from 60s to 5s)
    rclcpp::sleep_for(std::chrono::seconds(5));
    
    if (modbus_connect(p_ptx) == -1)
    {
        RCLCPP_ERROR(node_->get_logger(), 
                     "Modbus connection failed with error: %s", 
                     modbus_strerror(errno));
        modbus_free(p_ptx);
        p_ptx = nullptr;
        throw std::runtime_error("Modbus connection failed");
    }
    
    RCLCPP_INFO(node_->get_logger(), "Modbus device connected successfully");
    return 0;
}

/**
 * @brief Read data from a single register
 * @param registerNumber Register address to read from
 * @return Register value on success, 0 on failure
 */
int ModbusCommunicator::readRegister(int registerNumber)
{
    m_registerData[0] = 0;
    
    if (modbus_read_registers(p_ptx, registerNumber, 1, m_registerData) == -1)
    {
        RCLCPP_ERROR(node_->get_logger(), 
                     "Failed to read data from register %d: %s", 
                     registerNumber,
                     modbus_strerror(errno));
        return 0;
    }
    
    return m_registerData[0];
}

/**
 * @brief Read data from multiple registers
 * @param numberOfRegisters Number of consecutive registers to read
 * @return Pointer to data array on success, nullptr on failure
 */
uint16_t* ModbusCommunicator::readData(int numberOfRegisters)
{
    if (modbus_read_registers(p_ptx, 60, numberOfRegisters, p_readData) == -1)
    {
        RCLCPP_ERROR(node_->get_logger(), 
                     "Failed to read data from registers: %s", 
                     modbus_strerror(errno));
        return nullptr;
    }
    
    return p_readData;
}

/**
 * @brief Write data to a single register
 * @param registorNumber Register address to write to
 * @param data Data value to write
 * @return 0 on success, -1 on failure
 */
int ModbusCommunicator::writeDataToRegister(int registorNumber, uint32_t data)
{
    if (modbus_write_register(p_ptx, registorNumber, data) == -1)
    {
        RCLCPP_ERROR(node_->get_logger(), 
                     "Failed to write data to register %d with error: %s",
                     registorNumber, 
                     modbus_strerror(errno));
        return -1;
    }
    
    return 0;
}

/**
 * @brief Write array data to multiple registers
 * @param registorNumber Starting register address
 * @param data Character array containing data
 * @param bytes Number of bytes to write (currently unused but kept for interface compatibility)
 * @return 0 on success, -1 on failure
 */
int ModbusCommunicator::writeDataToRegisters(int registorNumber, char data[], int bytes)
{
    // Suppress unused parameter warning
    (void)bytes;
    
    int k = 0;
    std::string arr[5] = {"", "", "", "", ""};
    
    // Parse data into string array (4 characters per element)
    for (int i = 0; i < 20; i += 1)
    {
        if (i == 0 || i == 4 || i == 8 || i == 12 || i == 16)
        {
            std::string temp = "";
            temp += data[i];
            temp += data[i + 1];
            temp += data[i + 2];
            temp += data[i + 3];
            arr[k] = temp;
            
            RCLCPP_DEBUG(node_->get_logger(), "Array[%d] = %s", k, arr[k].c_str());
            k++;
        }
    }
    
    // Convert strings to uint16_t values for modbus
    uint16_t writeData[5];
    for (int i = 0; i < 5; i++)
    {
        try
        {
            // Convert string to integer (assuming hexadecimal or decimal format)
            writeData[i] = static_cast<uint16_t>(std::stoi(arr[i]));
        }
        catch (const std::exception& e)
        {
            RCLCPP_ERROR(node_->get_logger(), 
                        "Failed to convert data[%d]: %s", i, e.what());
            return -1;
        }
    }
    
    // Write data to consecutive registers
    if (modbus_write_registers(p_ptx, registorNumber, 5, writeData) == -1)
    {
        RCLCPP_ERROR(node_->get_logger(), 
                     "Failed to write data to register %d with error: %s",
                     registorNumber, 
                     modbus_strerror(errno));
        return -1;
    }
    
    RCLCPP_INFO(node_->get_logger(), 
                "Successfully wrote %d registers starting at %d", 
                5, registorNumber);
    
    return 0;
}

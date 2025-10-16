#include "brake_action/ModbusCommunicator.h"

namespace brake_action
{

ModbusCommunicator::ModbusCommunicator(const std::string& node_name)
: Node(node_name),
  port_(502),
  modbus_ctx_(nullptr),
  is_connected_(false)
{
  RCLCPP_INFO(this->get_logger(), "ModbusCommunicator constructor called");

  initializeParameters();

  if (!validateParameters()) {
    RCLCPP_ERROR(this->get_logger(), "Failed to load Modbus parameters");
    throw std::runtime_error("Parameter validation failed");
  }

  if (!initiateConnection()) {
    RCLCPP_ERROR(this->get_logger(), "Failed to establish Modbus connection");
    throw std::runtime_error("Modbus connection failed");
  }

  RCLCPP_INFO(this->get_logger(), "ModbusCommunicator initialized successfully");
}

ModbusCommunicator::~ModbusCommunicator()
{
  closeConnection();
  RCLCPP_INFO(this->get_logger(), "ModbusCommunicator destroyed");
}

void ModbusCommunicator::initializeParameters()
{
  // Declare parameters with default values
  this->declare_parameter<std::string>("ip", "192.168.1.1");
  this->declare_parameter<int>("port", 502);

  // Get parameter values
  ip_address_ = this->get_parameter("ip").as_string();
  port_ = this->get_parameter("port").as_int();

  RCLCPP_INFO(
    this->get_logger(),
    "Parameters loaded - IP: %s, Port: %d",
    ip_address_.c_str(),
    port_
  );
}

bool ModbusCommunicator::validateParameters()
{
  if (ip_address_.empty()) {
    RCLCPP_ERROR(this->get_logger(), "IP address parameter is empty");
    return false;
  }

  if (port_ <= 0 || port_ > 65535) {
    RCLCPP_ERROR(this->get_logger(), "Invalid port number: %d", port_);
    return false;
  }

  RCLCPP_INFO(this->get_logger(), "Parameter validation completed successfully");
  return true;
}

bool ModbusCommunicator::initiateConnection()
{
  RCLCPP_INFO(
    this->get_logger(),
    "Initiating Modbus TCP connection to %s:%d",
    ip_address_.c_str(),
    port_
  );

  modbus_ctx_ = modbus_new_tcp(ip_address_.c_str(), port_);
  
  if (modbus_ctx_ == nullptr) {
    RCLCPP_ERROR(
      this->get_logger(),
      "Failed to create Modbus context: %s",
      modbus_strerror(errno)
    );
    return false;
  }

  if (modbus_connect(modbus_ctx_) == -1) {
    RCLCPP_ERROR(
      this->get_logger(),
      "Modbus connection failed: %s",
      modbus_strerror(errno)
    );
    modbus_free(modbus_ctx_);
    modbus_ctx_ = nullptr;
    return false;
  }

  is_connected_ = true;
  RCLCPP_INFO(this->get_logger(), "Modbus device connected successfully");
  return true;
}

void ModbusCommunicator::closeConnection()
{
  if (modbus_ctx_ != nullptr) {
    modbus_close(modbus_ctx_);
    modbus_free(modbus_ctx_);
    modbus_ctx_ = nullptr;
    is_connected_ = false;
    RCLCPP_INFO(this->get_logger(), "Modbus connection closed");
  }
}

bool ModbusCommunicator::writeDataToRegister(int register_number, uint16_t data)
{
  if (!is_connected_ || modbus_ctx_ == nullptr) {
    RCLCPP_ERROR(this->get_logger(), "Modbus not connected");
    return false;
  }

  if (modbus_write_register(modbus_ctx_, register_number, data) == -1) {
    RCLCPP_ERROR(
      this->get_logger(),
      "Failed to write data to register %d: %s",
      register_number,
      modbus_strerror(errno)
    );
    return false;
  }

  RCLCPP_INFO(
    this->get_logger(),
    "Successfully written value %d to register %d",
    data,
    register_number
  );
  return true;
}

}  // namespace brake_action

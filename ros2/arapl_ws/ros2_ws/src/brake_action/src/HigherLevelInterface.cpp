#include "brake_action/HigherLevelInterface.h"

namespace brake_action
{

HigherLevelInterface::HigherLevelInterface()
: Node("higher_level_interface"),
  update_rate_(10.0),
  write_register_number_(0)
{
  RCLCPP_INFO(this->get_logger(), "HigherLevelInterface constructor called");

  // Initialize parameters first
  initializeParameters();

  if (!validateParameters()) {
    RCLCPP_ERROR(this->get_logger(), "Failed to validate HigherLevelInterface parameters");
    throw std::runtime_error("Parameter validation failed");
  }

  // Create Modbus communicator as a shared pointer
  try {
    modbus_communicator_ = std::make_shared<ModbusCommunicator>("modbus_communicator");
  } catch (const std::exception& e) {
    RCLCPP_ERROR(
      this->get_logger(),
      "Failed to create ModbusCommunicator: %s",
      e.what()
    );
    throw;
  }

  // Create subscriber with quality of service settings
  rclcpp::QoS qos(10);
  qos.reliable();
  
  brake_activator_sub_ = this->create_subscription<std_msgs::msg::Bool>(
    subscriber_topic_,
    qos,
    std::bind(&HigherLevelInterface::brakeActivatorCallback, this, std::placeholders::_1)
  );

  RCLCPP_INFO(
    this->get_logger(),
    "HigherLevelInterface initialized - Subscribed to topic: %s",
    subscriber_topic_.c_str()
  );
}

HigherLevelInterface::~HigherLevelInterface()
{
  RCLCPP_INFO(this->get_logger(), "HigherLevelInterface destroyed");
}

void HigherLevelInterface::initializeParameters()
{
  // Declare parameters with defaults
  this->declare_parameter<double>("update_rate", 10.0);
  this->declare_parameter<std::string>("subscriber_topic", "/brake_command");
  this->declare_parameter<int>("register_number", 0);

  // Read parameters
  update_rate_ = this->get_parameter("update_rate").as_double();
  subscriber_topic_ = this->get_parameter("subscriber_topic").as_string();
  write_register_number_ = this->get_parameter("register_number").as_int();

  RCLCPP_INFO(
    this->get_logger(),
    "Parameters loaded - Update Rate: %.2f Hz, Topic: %s, Register: %d",
    update_rate_,
    subscriber_topic_.c_str(),
    write_register_number_
  );
}

bool HigherLevelInterface::validateParameters()
{
  if (update_rate_ <= 0.0) {
    RCLCPP_ERROR(this->get_logger(), "Invalid update rate: %.2f", update_rate_);
    return false;
  }

  if (subscriber_topic_.empty()) {
    RCLCPP_ERROR(this->get_logger(), "Subscriber topic is empty");
    return false;
  }

  if (write_register_number_ < 0) {
    RCLCPP_ERROR(this->get_logger(), "Invalid register number: %d", write_register_number_);
    return false;
  }

  RCLCPP_INFO(this->get_logger(), "All HigherLevelInterface parameters validated successfully");
  return true;
}

void HigherLevelInterface::brakeActivatorCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
  RCLCPP_INFO(
    this->get_logger(),
    "Brake activator callback - Command: %s",
    msg->data ? "ACTIVATE" : "DEACTIVATE"
  );

  int write_value = static_cast<int>(msg->data);
  
  if (!writeData(write_register_number_, write_value)) {
    RCLCPP_ERROR(this->get_logger(), "Failed to write brake command to Modbus");
  }
}

bool HigherLevelInterface::writeData(int register_number, int value)
{
  if (!modbus_communicator_) {
    RCLCPP_ERROR(this->get_logger(), "ModbusCommunicator not initialized");
    return false;
  }

  if (!modbus_communicator_->isConnected()) {
    RCLCPP_ERROR(this->get_logger(), "Modbus not connected");
    return false;
  }

  return modbus_communicator_->writeDataToRegister(
    register_number,
    static_cast<uint16_t>(value)
  );
}

}  // namespace brake_action

/**
 * @brief Main function
 */
int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);

  try {
    auto node = std::make_shared<brake_action::HigherLevelInterface>();
    rclcpp::spin(node);
  } catch (const std::exception& e) {
    RCLCPP_ERROR(
      rclcpp::get_logger("main"),
      "Exception in main: %s",
      e.what()
    );
    rclcpp::shutdown();
    return 1;
  }

  rclcpp::shutdown();
  return 0;
}

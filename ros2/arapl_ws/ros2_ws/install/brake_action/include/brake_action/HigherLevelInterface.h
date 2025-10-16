#ifndef BRAKE_ACTION__HIGHER_LEVEL_INTERFACE_H_
#define BRAKE_ACTION__HIGHER_LEVEL_INTERFACE_H_

#include "brake_action/ModbusCommunicator.h"
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <memory>
#include <string>

namespace brake_action
{

class HigherLevelInterface : public rclcpp::Node
{
public:
  explicit HigherLevelInterface();
  ~HigherLevelInterface();

  // Delete copy constructor and assignment operator
  HigherLevelInterface(const HigherLevelInterface&) = delete;
  HigherLevelInterface& operator=(const HigherLevelInterface&) = delete;

private:
  /**
   * @brief Initialize and declare all parameters
   */
  void initializeParameters();

  /**
   * @brief Validate all parameters
   * @return true if parameters valid, false otherwise
   */
  bool validateParameters();

  /**
   * @brief Callback for brake activation messages
   * @param msg Boolean message to activate/deactivate brake
   */
  void brakeActivatorCallback(const std_msgs::msg::Bool::SharedPtr msg);

  /**
   * @brief Write data to Modbus register
   * @param register_number Target register
   * @param value Value to write
   * @return true if successful, false otherwise
   */
  bool writeData(int register_number, int value);

  // Modbus communicator instance
  std::shared_ptr<ModbusCommunicator> modbus_communicator_;

  // ROS2 subscriber
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr brake_activator_sub_;

  // Parameters
  double update_rate_;
  int write_register_number_;
  std::string subscriber_topic_;
};

}  // namespace brake_action

#endif  // BRAKE_ACTION__HIGHER_LEVEL_INTERFACE_H_

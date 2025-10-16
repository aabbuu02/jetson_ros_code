#ifndef POWER_CONTROL_HPP
#define POWER_CONTROL_HPP

#include <rclcpp/rclcpp.hpp>
#include <std_srvs/srv/trigger.hpp>
#include <rcl_interfaces/msg/parameter_descriptor.hpp>
#include <rcl_interfaces/msg/set_parameters_result.hpp>

#include <string>
#include <vector>
#include <memory>
#include <sstream>
#include <cstdlib>

/**
 * @class PowerControl
 * @brief ROS2 node for managing system power control operations in master-slave architecture
 * 
 * This class provides power management functionality including:
 * - System poweroff and reboot services
 * - Master-slave coordination for distributed power control
 * - Dynamic parameter reconfiguration
 */
class PowerControl : public rclcpp::Node
{
public:
  /**
   * @brief Construct a new Power Control object
   */
  explicit PowerControl();

  /**
   * @brief Main execution loop for power control operations
   */
  void run();

private:
  // Power control command enum
  enum PowerCtrlCommands
  {
    WAIT = 0,
    POWEROFF = 1,
    REBOOT = 2
  };

  // Current power control command
  std::atomic<uint8_t> power_ctrl_cmd_{WAIT};

  // System settings
  bool is_master_system_;
  bool enable_system_power_control_;
  bool enable_slave_power_control_;
  std::string system_name_;

  // Slave system settings
  int num_slaves_;
  std::vector<std::string> slave_system_names_;

  // Service servers
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr poweroff_srv_server_;
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr reboot_srv_server_;

  // Service clients for slave systems
  std::vector<rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr> slave_poweroff_clients_;
  std::vector<rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr> slave_reboot_clients_;

  // Parameter callback handle
  OnSetParametersCallbackHandle::SharedPtr param_callback_handle_;

  // Timer for periodic checks
  rclcpp::TimerBase::SharedPtr timer_;

  // Service callbacks
  void poweroffServiceCallback(
    const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
    std::shared_ptr<std_srvs::srv::Trigger::Response> response);

  void rebootServiceCallback(
    const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
    std::shared_ptr<std_srvs::srv::Trigger::Response> response);

  // Parameter callback
  rcl_interfaces::msg::SetParametersResult parametersCallback(
    const std::vector<rclcpp::Parameter> &parameters);

  // Helper functions
  void declareParameters();
  void loadParameters();
  void initializeServices();
  void initializeServiceClients();
  void waitForServices();
  bool powerOffSystem();
  bool rebootSystem();
  bool poweroffSlaveSystems();
  bool rebootSlaveSystems();
  void timerCallback();
};

#endif // POWER_CONTROL_HPP

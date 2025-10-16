#ifndef EMERGENCY_HANDLER_HPP
#define EMERGENCY_HANDLER_HPP

#include <memory>
#include <string>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "anscer_msgs/msg/safety_fields.hpp"

/**
 * @class EmergencyHandler
 * @brief A node that aggregates e-stop signals from multiple sources
 */
class EmergencyHandler : public rclcpp::Node
{
public:
  /**
   * @brief Constructor for the EmergencyHandler
   */
  EmergencyHandler();

  /**
   * @brief Destructor for the EmergencyHandler
   */
  ~EmergencyHandler();

  /**
   * @brief Publishes e_stop messages based on input from various sources
   */
  void publishMessages();

private:
  // Subscribers
  rclcpp::Subscription<anscer_msgs::msg::SafetyFields>::SharedPtr detection_sub_;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr button_sub_;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr web_app_sub_;
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_sub_;
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr key_cmd_sub_;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr tag_det_fail_sub_;

  // Publishers
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr e_stop_pub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr e_stop_lidar_pub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr e_stop_button_pub_;

  // Timer for publishing
  rclcpp::TimerBase::SharedPtr timer_;

  // Callback functions
  void detectionCallback(const anscer_msgs::msg::SafetyFields::SharedPtr msg);
  void eStopButtonCallback(const std_msgs::msg::Bool::SharedPtr msg);
  void eStopWebAppCallback(const std_msgs::msg::Bool::SharedPtr msg);
  void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg);
  void keyCmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg);
  void tagDetFailCallback(const std_msgs::msg::Bool::SharedPtr msg);

  // Member variables
  bool m_lidar_forward_;
  bool m_lidar_backward_;
  bool m_e_stop_button_;
  bool m_e_stop_web_app_;
  bool m_e_stop_tag_detection_;
  double m_key_linear_vel_;
  double m_key_angular_vel_;
  double m_linear_vel_;
};

#endif  // EMERGENCY_HANDLER_HPP

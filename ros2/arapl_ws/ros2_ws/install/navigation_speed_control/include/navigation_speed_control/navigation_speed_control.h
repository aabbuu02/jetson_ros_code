#ifndef NAVIGATION_SPEED_CONTROL_H
#define NAVIGATION_SPEED_CONTROL_H

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <rcl_interfaces/msg/parameter.hpp>
#include <rcl_interfaces/msg/set_parameters_result.hpp>
#include <rcl_interfaces/srv/set_parameters.hpp>
#include <rcl_interfaces/srv/get_parameters.hpp>

#include "anscer_msgs/msg/field_status.hpp"
#include "anscer_msgs/msg/zone_information.hpp"

#include <string>
#include <memory>
#include <vector>

constexpr int AUTO_MODE = 1;

/**
 * @class NavigationSpeedControl
 * @brief Controls the speed from navigation controllers based on LiDAR feedback and zone information
 */
class NavigationSpeedControl : public rclcpp::Node
{
public:
  NavigationSpeedControl();
  ~NavigationSpeedControl();

private:
  // Subscriber callbacks
  void fieldCallback(const anscer_msgs::msg::FieldStatus::SharedPtr msg);
  void selectorSwitchCallback(const std_msgs::msg::Int32::SharedPtr msg);
  void preNavigateCallback(const geometry_msgs::msg::Twist::SharedPtr msg);
  void zoneInfoCallback(const anscer_msgs::msg::ZoneInformation::SharedPtr msg);
  
  // Utility functions
  void initializeParameters();
  void reconfigureParameters(bool warningStatus);
  void setControllerParameters(double linearVel, double reverseVel);
  
  // Subscribers
  rclcpp::Subscription<anscer_msgs::msg::FieldStatus>::SharedPtr fieldSub_;
  rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr selectorSub_;
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmdVelSub_;
  rclcpp::Subscription<anscer_msgs::msg::ZoneInformation>::SharedPtr zoneInfoSub_;
  
  // Publisher
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmdVelPub_;
  
  // Service client for parameter reconfiguration
  rclcpp::Client<rcl_interfaces::srv::SetParameters>::SharedPtr paramClient_;
  
  // Member variables
  bool m_warningPreviousStatus;
  bool m_warningCurrentStatus;
  double m_linearVel__m_s;
  double m_reverseVel__m_s;
  double m_speedFactor;
  double m_zoneSpeedFactor;
  int m_selectorSwitchStatus;
  
  std::string m_controller;
  std::string m_controllerMaxVelocityParam;
  std::string m_controllerReversedVelocityParam;
  std::string m_fieldTopic;
  std::string m_preNavigationTopic;
  std::string m_navigationTopic;
  std::string m_selectorSwitchTopic;
  std::string m_zoneInfoTopic;
  std::string m_controllerNodeName;
};

#endif // NAVIGATION_SPEED_CONTROL_H

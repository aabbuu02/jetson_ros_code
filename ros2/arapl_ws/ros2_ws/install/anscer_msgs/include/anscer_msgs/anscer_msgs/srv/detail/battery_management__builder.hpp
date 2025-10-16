// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/BatteryManagement.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/battery_management__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_BatteryManagement_Request_robot_pose
{
public:
  Init_BatteryManagement_Request_robot_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::BatteryManagement_Request robot_pose(::anscer_msgs::srv::BatteryManagement_Request::_robot_pose_type arg)
  {
    msg_.robot_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::BatteryManagement_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::BatteryManagement_Request>()
{
  return anscer_msgs::srv::builder::Init_BatteryManagement_Request_robot_pose();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_BatteryManagement_Response_is_available
{
public:
  explicit Init_BatteryManagement_Response_is_available(::anscer_msgs::srv::BatteryManagement_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::BatteryManagement_Response is_available(::anscer_msgs::srv::BatteryManagement_Response::_is_available_type arg)
  {
    msg_.is_available = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::BatteryManagement_Response msg_;
};

class Init_BatteryManagement_Response_id
{
public:
  Init_BatteryManagement_Response_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryManagement_Response_is_available id(::anscer_msgs::srv::BatteryManagement_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BatteryManagement_Response_is_available(msg_);
  }

private:
  ::anscer_msgs::srv::BatteryManagement_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::BatteryManagement_Response>()
{
  return anscer_msgs::srv::builder::Init_BatteryManagement_Response_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/ZoneSpeed.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__ZONE_SPEED__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__ZONE_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/zone_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ZoneSpeed_Request_speed_factor
{
public:
  Init_ZoneSpeed_Request_speed_factor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ZoneSpeed_Request speed_factor(::anscer_msgs::srv::ZoneSpeed_Request::_speed_factor_type arg)
  {
    msg_.speed_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ZoneSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ZoneSpeed_Request>()
{
  return anscer_msgs::srv::builder::Init_ZoneSpeed_Request_speed_factor();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ZoneSpeed_Response_status
{
public:
  Init_ZoneSpeed_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ZoneSpeed_Response status(::anscer_msgs::srv::ZoneSpeed_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ZoneSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ZoneSpeed_Response>()
{
  return anscer_msgs::srv::builder::Init_ZoneSpeed_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__ZONE_SPEED__BUILDER_HPP_

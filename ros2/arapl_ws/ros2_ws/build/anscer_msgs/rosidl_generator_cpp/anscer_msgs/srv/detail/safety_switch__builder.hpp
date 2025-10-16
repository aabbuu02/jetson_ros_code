// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/SafetySwitch.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAFETY_SWITCH__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAFETY_SWITCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/safety_switch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SafetySwitch_Request_safety_switch
{
public:
  Init_SafetySwitch_Request_safety_switch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::SafetySwitch_Request safety_switch(::anscer_msgs::srv::SafetySwitch_Request::_safety_switch_type arg)
  {
    msg_.safety_switch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SafetySwitch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SafetySwitch_Request>()
{
  return anscer_msgs::srv::builder::Init_SafetySwitch_Request_safety_switch();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SafetySwitch_Response_status
{
public:
  Init_SafetySwitch_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::SafetySwitch_Response status(::anscer_msgs::srv::SafetySwitch_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SafetySwitch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SafetySwitch_Response>()
{
  return anscer_msgs::srv::builder::Init_SafetySwitch_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SAFETY_SWITCH__BUILDER_HPP_

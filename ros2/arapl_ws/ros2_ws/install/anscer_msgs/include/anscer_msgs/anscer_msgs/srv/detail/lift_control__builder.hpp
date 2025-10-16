// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/LiftControl.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__LIFT_CONTROL__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__LIFT_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/lift_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_LiftControl_Request_command
{
public:
  Init_LiftControl_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::LiftControl_Request command(::anscer_msgs::srv::LiftControl_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::LiftControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::LiftControl_Request>()
{
  return anscer_msgs::srv::builder::Init_LiftControl_Request_command();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_LiftControl_Response_status
{
public:
  Init_LiftControl_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::LiftControl_Response status(::anscer_msgs::srv::LiftControl_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::LiftControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::LiftControl_Response>()
{
  return anscer_msgs::srv::builder::Init_LiftControl_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__LIFT_CONTROL__BUILDER_HPP_

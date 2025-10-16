// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/ControllerMode.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__CONTROLLER_MODE__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__CONTROLLER_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/controller_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerMode_controller_mode
{
public:
  Init_ControllerMode_controller_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::ControllerMode controller_mode(::anscer_msgs::msg::ControllerMode::_controller_mode_type arg)
  {
    msg_.controller_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::ControllerMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::ControllerMode>()
{
  return anscer_msgs::msg::builder::Init_ControllerMode_controller_mode();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__CONTROLLER_MODE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lift_action:msg/UiInterface.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__BUILDER_HPP_
#define LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lift_action/msg/detail/ui_interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lift_action
{

namespace msg
{

namespace builder
{

class Init_UiInterface_direction
{
public:
  explicit Init_UiInterface_direction(::lift_action::msg::UiInterface & msg)
  : msg_(msg)
  {}
  ::lift_action::msg::UiInterface direction(::lift_action::msg::UiInterface::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_action::msg::UiInterface msg_;
};

class Init_UiInterface_button
{
public:
  explicit Init_UiInterface_button(::lift_action::msg::UiInterface & msg)
  : msg_(msg)
  {}
  Init_UiInterface_direction button(::lift_action::msg::UiInterface::_button_type arg)
  {
    msg_.button = std::move(arg);
    return Init_UiInterface_direction(msg_);
  }

private:
  ::lift_action::msg::UiInterface msg_;
};

class Init_UiInterface_process
{
public:
  Init_UiInterface_process()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UiInterface_button process(::lift_action::msg::UiInterface::_process_type arg)
  {
    msg_.process = std::move(arg);
    return Init_UiInterface_button(msg_);
  }

private:
  ::lift_action::msg::UiInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_action::msg::UiInterface>()
{
  return lift_action::msg::builder::Init_UiInterface_process();
}

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__BUILDER_HPP_

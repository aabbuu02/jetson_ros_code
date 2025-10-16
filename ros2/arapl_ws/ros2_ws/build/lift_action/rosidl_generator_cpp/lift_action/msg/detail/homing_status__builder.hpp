// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lift_action:msg/HomingStatus.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__BUILDER_HPP_
#define LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lift_action/msg/detail/homing_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lift_action
{

namespace msg
{

namespace builder
{

class Init_HomingStatus_is_homed
{
public:
  explicit Init_HomingStatus_is_homed(::lift_action::msg::HomingStatus & msg)
  : msg_(msg)
  {}
  ::lift_action::msg::HomingStatus is_homed(::lift_action::msg::HomingStatus::_is_homed_type arg)
  {
    msg_.is_homed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_action::msg::HomingStatus msg_;
};

class Init_HomingStatus_turn_table_status
{
public:
  explicit Init_HomingStatus_turn_table_status(::lift_action::msg::HomingStatus & msg)
  : msg_(msg)
  {}
  Init_HomingStatus_is_homed turn_table_status(::lift_action::msg::HomingStatus::_turn_table_status_type arg)
  {
    msg_.turn_table_status = std::move(arg);
    return Init_HomingStatus_is_homed(msg_);
  }

private:
  ::lift_action::msg::HomingStatus msg_;
};

class Init_HomingStatus_extractor_status
{
public:
  explicit Init_HomingStatus_extractor_status(::lift_action::msg::HomingStatus & msg)
  : msg_(msg)
  {}
  Init_HomingStatus_turn_table_status extractor_status(::lift_action::msg::HomingStatus::_extractor_status_type arg)
  {
    msg_.extractor_status = std::move(arg);
    return Init_HomingStatus_turn_table_status(msg_);
  }

private:
  ::lift_action::msg::HomingStatus msg_;
};

class Init_HomingStatus_lifter_status
{
public:
  Init_HomingStatus_lifter_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomingStatus_extractor_status lifter_status(::lift_action::msg::HomingStatus::_lifter_status_type arg)
  {
    msg_.lifter_status = std::move(arg);
    return Init_HomingStatus_extractor_status(msg_);
  }

private:
  ::lift_action::msg::HomingStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_action::msg::HomingStatus>()
{
  return lift_action::msg::builder::Init_HomingStatus_lifter_status();
}

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__BUILDER_HPP_

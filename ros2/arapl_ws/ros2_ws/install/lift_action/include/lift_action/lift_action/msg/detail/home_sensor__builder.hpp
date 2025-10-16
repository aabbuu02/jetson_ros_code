// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lift_action:msg/HomeSensor.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__HOME_SENSOR__BUILDER_HPP_
#define LIFT_ACTION__MSG__DETAIL__HOME_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lift_action/msg/detail/home_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lift_action
{

namespace msg
{

namespace builder
{

class Init_HomeSensor_homing_status
{
public:
  explicit Init_HomeSensor_homing_status(::lift_action::msg::HomeSensor & msg)
  : msg_(msg)
  {}
  ::lift_action::msg::HomeSensor homing_status(::lift_action::msg::HomeSensor::_homing_status_type arg)
  {
    msg_.homing_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_action::msg::HomeSensor msg_;
};

class Init_HomeSensor_process
{
public:
  Init_HomeSensor_process()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomeSensor_homing_status process(::lift_action::msg::HomeSensor::_process_type arg)
  {
    msg_.process = std::move(arg);
    return Init_HomeSensor_homing_status(msg_);
  }

private:
  ::lift_action::msg::HomeSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_action::msg::HomeSensor>()
{
  return lift_action::msg::builder::Init_HomeSensor_process();
}

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__HOME_SENSOR__BUILDER_HPP_

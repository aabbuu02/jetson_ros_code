// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/MotorDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/motor_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorDiagnostics_status_flags
{
public:
  explicit Init_MotorDiagnostics_status_flags(::anscer_msgs::msg::MotorDiagnostics & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::MotorDiagnostics status_flags(::anscer_msgs::msg::MotorDiagnostics::_status_flags_type arg)
  {
    msg_.status_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::MotorDiagnostics msg_;
};

class Init_MotorDiagnostics_fault_flags
{
public:
  explicit Init_MotorDiagnostics_fault_flags(::anscer_msgs::msg::MotorDiagnostics & msg)
  : msg_(msg)
  {}
  Init_MotorDiagnostics_status_flags fault_flags(::anscer_msgs::msg::MotorDiagnostics::_fault_flags_type arg)
  {
    msg_.fault_flags = std::move(arg);
    return Init_MotorDiagnostics_status_flags(msg_);
  }

private:
  ::anscer_msgs::msg::MotorDiagnostics msg_;
};

class Init_MotorDiagnostics_name
{
public:
  Init_MotorDiagnostics_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorDiagnostics_fault_flags name(::anscer_msgs::msg::MotorDiagnostics::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorDiagnostics_fault_flags(msg_);
  }

private:
  ::anscer_msgs::msg::MotorDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::MotorDiagnostics>()
{
  return anscer_msgs::msg::builder::Init_MotorDiagnostics_name();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__BUILDER_HPP_

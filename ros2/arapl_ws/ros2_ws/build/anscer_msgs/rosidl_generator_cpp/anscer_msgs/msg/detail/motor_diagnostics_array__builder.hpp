// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/MotorDiagnosticsArray.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS_ARRAY__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/motor_diagnostics_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorDiagnosticsArray_motor_diagnostics
{
public:
  Init_MotorDiagnosticsArray_motor_diagnostics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::MotorDiagnosticsArray motor_diagnostics(::anscer_msgs::msg::MotorDiagnosticsArray::_motor_diagnostics_type arg)
  {
    msg_.motor_diagnostics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::MotorDiagnosticsArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::MotorDiagnosticsArray>()
{
  return anscer_msgs::msg::builder::Init_MotorDiagnosticsArray_motor_diagnostics();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS_ARRAY__BUILDER_HPP_

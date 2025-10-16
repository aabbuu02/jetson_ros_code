// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lift_action:msg/ErrorStatus.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__BUILDER_HPP_
#define LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lift_action/msg/detail/error_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lift_action
{

namespace msg
{

namespace builder
{

class Init_ErrorStatus_extractor_sensor_laser_fault
{
public:
  explicit Init_ErrorStatus_extractor_sensor_laser_fault(::lift_action::msg::ErrorStatus & msg)
  : msg_(msg)
  {}
  ::lift_action::msg::ErrorStatus extractor_sensor_laser_fault(::lift_action::msg::ErrorStatus::_extractor_sensor_laser_fault_type arg)
  {
    msg_.extractor_sensor_laser_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_action::msg::ErrorStatus msg_;
};

class Init_ErrorStatus_turntable_sensor_zero_fault
{
public:
  explicit Init_ErrorStatus_turntable_sensor_zero_fault(::lift_action::msg::ErrorStatus & msg)
  : msg_(msg)
  {}
  Init_ErrorStatus_extractor_sensor_laser_fault turntable_sensor_zero_fault(::lift_action::msg::ErrorStatus::_turntable_sensor_zero_fault_type arg)
  {
    msg_.turntable_sensor_zero_fault = std::move(arg);
    return Init_ErrorStatus_extractor_sensor_laser_fault(msg_);
  }

private:
  ::lift_action::msg::ErrorStatus msg_;
};

class Init_ErrorStatus_swing_arm_sensor_ninety_fault
{
public:
  explicit Init_ErrorStatus_swing_arm_sensor_ninety_fault(::lift_action::msg::ErrorStatus & msg)
  : msg_(msg)
  {}
  Init_ErrorStatus_turntable_sensor_zero_fault swing_arm_sensor_ninety_fault(::lift_action::msg::ErrorStatus::_swing_arm_sensor_ninety_fault_type arg)
  {
    msg_.swing_arm_sensor_ninety_fault = std::move(arg);
    return Init_ErrorStatus_turntable_sensor_zero_fault(msg_);
  }

private:
  ::lift_action::msg::ErrorStatus msg_;
};

class Init_ErrorStatus_swing_arm_sensor_zero_fault
{
public:
  explicit Init_ErrorStatus_swing_arm_sensor_zero_fault(::lift_action::msg::ErrorStatus & msg)
  : msg_(msg)
  {}
  Init_ErrorStatus_swing_arm_sensor_ninety_fault swing_arm_sensor_zero_fault(::lift_action::msg::ErrorStatus::_swing_arm_sensor_zero_fault_type arg)
  {
    msg_.swing_arm_sensor_zero_fault = std::move(arg);
    return Init_ErrorStatus_swing_arm_sensor_ninety_fault(msg_);
  }

private:
  ::lift_action::msg::ErrorStatus msg_;
};

class Init_ErrorStatus_emergency_pb_fault
{
public:
  explicit Init_ErrorStatus_emergency_pb_fault(::lift_action::msg::ErrorStatus & msg)
  : msg_(msg)
  {}
  Init_ErrorStatus_swing_arm_sensor_zero_fault emergency_pb_fault(::lift_action::msg::ErrorStatus::_emergency_pb_fault_type arg)
  {
    msg_.emergency_pb_fault = std::move(arg);
    return Init_ErrorStatus_swing_arm_sensor_zero_fault(msg_);
  }

private:
  ::lift_action::msg::ErrorStatus msg_;
};

class Init_ErrorStatus_swing_arm_fault
{
public:
  explicit Init_ErrorStatus_swing_arm_fault(::lift_action::msg::ErrorStatus & msg)
  : msg_(msg)
  {}
  Init_ErrorStatus_emergency_pb_fault swing_arm_fault(::lift_action::msg::ErrorStatus::_swing_arm_fault_type arg)
  {
    msg_.swing_arm_fault = std::move(arg);
    return Init_ErrorStatus_emergency_pb_fault(msg_);
  }

private:
  ::lift_action::msg::ErrorStatus msg_;
};

class Init_ErrorStatus_turn_table_fault
{
public:
  explicit Init_ErrorStatus_turn_table_fault(::lift_action::msg::ErrorStatus & msg)
  : msg_(msg)
  {}
  Init_ErrorStatus_swing_arm_fault turn_table_fault(::lift_action::msg::ErrorStatus::_turn_table_fault_type arg)
  {
    msg_.turn_table_fault = std::move(arg);
    return Init_ErrorStatus_swing_arm_fault(msg_);
  }

private:
  ::lift_action::msg::ErrorStatus msg_;
};

class Init_ErrorStatus_extractor_fault
{
public:
  explicit Init_ErrorStatus_extractor_fault(::lift_action::msg::ErrorStatus & msg)
  : msg_(msg)
  {}
  Init_ErrorStatus_turn_table_fault extractor_fault(::lift_action::msg::ErrorStatus::_extractor_fault_type arg)
  {
    msg_.extractor_fault = std::move(arg);
    return Init_ErrorStatus_turn_table_fault(msg_);
  }

private:
  ::lift_action::msg::ErrorStatus msg_;
};

class Init_ErrorStatus_lifter_fault
{
public:
  Init_ErrorStatus_lifter_fault()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorStatus_extractor_fault lifter_fault(::lift_action::msg::ErrorStatus::_lifter_fault_type arg)
  {
    msg_.lifter_fault = std::move(arg);
    return Init_ErrorStatus_extractor_fault(msg_);
  }

private:
  ::lift_action::msg::ErrorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_action::msg::ErrorStatus>()
{
  return lift_action::msg::builder::Init_ErrorStatus_lifter_fault();
}

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__BUILDER_HPP_

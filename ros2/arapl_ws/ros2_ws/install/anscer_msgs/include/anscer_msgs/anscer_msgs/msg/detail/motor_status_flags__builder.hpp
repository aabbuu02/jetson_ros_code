// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/MotorStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/motor_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatusFlags_motor_tuning_mode
{
public:
  explicit Init_MotorStatusFlags_motor_tuning_mode(::anscer_msgs::msg::MotorStatusFlags & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::MotorStatusFlags motor_tuning_mode(::anscer_msgs::msg::MotorStatusFlags::_motor_tuning_mode_type arg)
  {
    msg_.motor_tuning_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::MotorStatusFlags msg_;
};

class Init_MotorStatusFlags_micro_basic_script_running
{
public:
  explicit Init_MotorStatusFlags_micro_basic_script_running(::anscer_msgs::msg::MotorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_MotorStatusFlags_motor_tuning_mode micro_basic_script_running(::anscer_msgs::msg::MotorStatusFlags::_micro_basic_script_running_type arg)
  {
    msg_.micro_basic_script_running = std::move(arg);
    return Init_MotorStatusFlags_motor_tuning_mode(msg_);
  }

private:
  ::anscer_msgs::msg::MotorStatusFlags msg_;
};

class Init_MotorStatusFlags_unused
{
public:
  explicit Init_MotorStatusFlags_unused(::anscer_msgs::msg::MotorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_MotorStatusFlags_micro_basic_script_running unused(::anscer_msgs::msg::MotorStatusFlags::_unused_type arg)
  {
    msg_.unused = std::move(arg);
    return Init_MotorStatusFlags_micro_basic_script_running(msg_);
  }

private:
  ::anscer_msgs::msg::MotorStatusFlags msg_;
};

class Init_MotorStatusFlags_at_limit
{
public:
  explicit Init_MotorStatusFlags_at_limit(::anscer_msgs::msg::MotorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_MotorStatusFlags_unused at_limit(::anscer_msgs::msg::MotorStatusFlags::_at_limit_type arg)
  {
    msg_.at_limit = std::move(arg);
    return Init_MotorStatusFlags_unused(msg_);
  }

private:
  ::anscer_msgs::msg::MotorStatusFlags msg_;
};

class Init_MotorStatusFlags_stall_detected
{
public:
  explicit Init_MotorStatusFlags_stall_detected(::anscer_msgs::msg::MotorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_MotorStatusFlags_at_limit stall_detected(::anscer_msgs::msg::MotorStatusFlags::_stall_detected_type arg)
  {
    msg_.stall_detected = std::move(arg);
    return Init_MotorStatusFlags_at_limit(msg_);
  }

private:
  ::anscer_msgs::msg::MotorStatusFlags msg_;
};

class Init_MotorStatusFlags_power_stage_off
{
public:
  explicit Init_MotorStatusFlags_power_stage_off(::anscer_msgs::msg::MotorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_MotorStatusFlags_stall_detected power_stage_off(::anscer_msgs::msg::MotorStatusFlags::_power_stage_off_type arg)
  {
    msg_.power_stage_off = std::move(arg);
    return Init_MotorStatusFlags_stall_detected(msg_);
  }

private:
  ::anscer_msgs::msg::MotorStatusFlags msg_;
};

class Init_MotorStatusFlags_analog_mode
{
public:
  explicit Init_MotorStatusFlags_analog_mode(::anscer_msgs::msg::MotorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_MotorStatusFlags_power_stage_off analog_mode(::anscer_msgs::msg::MotorStatusFlags::_analog_mode_type arg)
  {
    msg_.analog_mode = std::move(arg);
    return Init_MotorStatusFlags_power_stage_off(msg_);
  }

private:
  ::anscer_msgs::msg::MotorStatusFlags msg_;
};

class Init_MotorStatusFlags_pulse_mode
{
public:
  explicit Init_MotorStatusFlags_pulse_mode(::anscer_msgs::msg::MotorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_MotorStatusFlags_analog_mode pulse_mode(::anscer_msgs::msg::MotorStatusFlags::_pulse_mode_type arg)
  {
    msg_.pulse_mode = std::move(arg);
    return Init_MotorStatusFlags_analog_mode(msg_);
  }

private:
  ::anscer_msgs::msg::MotorStatusFlags msg_;
};

class Init_MotorStatusFlags_serial_mode
{
public:
  Init_MotorStatusFlags_serial_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatusFlags_pulse_mode serial_mode(::anscer_msgs::msg::MotorStatusFlags::_serial_mode_type arg)
  {
    msg_.serial_mode = std::move(arg);
    return Init_MotorStatusFlags_pulse_mode(msg_);
  }

private:
  ::anscer_msgs::msg::MotorStatusFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::MotorStatusFlags>()
{
  return anscer_msgs::msg::builder::Init_MotorStatusFlags_serial_mode();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__BUILDER_HPP_

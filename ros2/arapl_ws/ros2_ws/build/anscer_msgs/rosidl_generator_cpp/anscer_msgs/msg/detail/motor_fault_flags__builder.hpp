// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/MotorFaultFlags.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_FAULT_FLAGS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_FAULT_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/motor_fault_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorFaultFlags_default_configuration
{
public:
  explicit Init_MotorFaultFlags_default_configuration(::anscer_msgs::msg::MotorFaultFlags & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::MotorFaultFlags default_configuration(::anscer_msgs::msg::MotorFaultFlags::_default_configuration_type arg)
  {
    msg_.default_configuration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::MotorFaultFlags msg_;
};

class Init_MotorFaultFlags_mosfet_failure
{
public:
  explicit Init_MotorFaultFlags_mosfet_failure(::anscer_msgs::msg::MotorFaultFlags & msg)
  : msg_(msg)
  {}
  Init_MotorFaultFlags_default_configuration mosfet_failure(::anscer_msgs::msg::MotorFaultFlags::_mosfet_failure_type arg)
  {
    msg_.mosfet_failure = std::move(arg);
    return Init_MotorFaultFlags_default_configuration(msg_);
  }

private:
  ::anscer_msgs::msg::MotorFaultFlags msg_;
};

class Init_MotorFaultFlags_motor_setup_fault
{
public:
  explicit Init_MotorFaultFlags_motor_setup_fault(::anscer_msgs::msg::MotorFaultFlags & msg)
  : msg_(msg)
  {}
  Init_MotorFaultFlags_mosfet_failure motor_setup_fault(::anscer_msgs::msg::MotorFaultFlags::_motor_setup_fault_type arg)
  {
    msg_.motor_setup_fault = std::move(arg);
    return Init_MotorFaultFlags_mosfet_failure(msg_);
  }

private:
  ::anscer_msgs::msg::MotorFaultFlags msg_;
};

class Init_MotorFaultFlags_emergency_stop
{
public:
  explicit Init_MotorFaultFlags_emergency_stop(::anscer_msgs::msg::MotorFaultFlags & msg)
  : msg_(msg)
  {}
  Init_MotorFaultFlags_motor_setup_fault emergency_stop(::anscer_msgs::msg::MotorFaultFlags::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_MotorFaultFlags_motor_setup_fault(msg_);
  }

private:
  ::anscer_msgs::msg::MotorFaultFlags msg_;
};

class Init_MotorFaultFlags_short_circuit
{
public:
  explicit Init_MotorFaultFlags_short_circuit(::anscer_msgs::msg::MotorFaultFlags & msg)
  : msg_(msg)
  {}
  Init_MotorFaultFlags_emergency_stop short_circuit(::anscer_msgs::msg::MotorFaultFlags::_short_circuit_type arg)
  {
    msg_.short_circuit = std::move(arg);
    return Init_MotorFaultFlags_emergency_stop(msg_);
  }

private:
  ::anscer_msgs::msg::MotorFaultFlags msg_;
};

class Init_MotorFaultFlags_undervoltage
{
public:
  explicit Init_MotorFaultFlags_undervoltage(::anscer_msgs::msg::MotorFaultFlags & msg)
  : msg_(msg)
  {}
  Init_MotorFaultFlags_short_circuit undervoltage(::anscer_msgs::msg::MotorFaultFlags::_undervoltage_type arg)
  {
    msg_.undervoltage = std::move(arg);
    return Init_MotorFaultFlags_short_circuit(msg_);
  }

private:
  ::anscer_msgs::msg::MotorFaultFlags msg_;
};

class Init_MotorFaultFlags_overvoltage
{
public:
  explicit Init_MotorFaultFlags_overvoltage(::anscer_msgs::msg::MotorFaultFlags & msg)
  : msg_(msg)
  {}
  Init_MotorFaultFlags_undervoltage overvoltage(::anscer_msgs::msg::MotorFaultFlags::_overvoltage_type arg)
  {
    msg_.overvoltage = std::move(arg);
    return Init_MotorFaultFlags_undervoltage(msg_);
  }

private:
  ::anscer_msgs::msg::MotorFaultFlags msg_;
};

class Init_MotorFaultFlags_overheat
{
public:
  Init_MotorFaultFlags_overheat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorFaultFlags_overvoltage overheat(::anscer_msgs::msg::MotorFaultFlags::_overheat_type arg)
  {
    msg_.overheat = std::move(arg);
    return Init_MotorFaultFlags_overvoltage(msg_);
  }

private:
  ::anscer_msgs::msg::MotorFaultFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::MotorFaultFlags>()
{
  return anscer_msgs::msg::builder::Init_MotorFaultFlags_overheat();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_FAULT_FLAGS__BUILDER_HPP_

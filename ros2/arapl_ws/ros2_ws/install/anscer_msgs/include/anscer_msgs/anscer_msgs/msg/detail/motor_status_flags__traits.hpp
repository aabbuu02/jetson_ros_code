// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/MotorStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/motor_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatusFlags & msg,
  std::ostream & out)
{
  out << "{";
  // member: serial_mode
  {
    out << "serial_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_mode, out);
    out << ", ";
  }

  // member: pulse_mode
  {
    out << "pulse_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.pulse_mode, out);
    out << ", ";
  }

  // member: analog_mode
  {
    out << "analog_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_mode, out);
    out << ", ";
  }

  // member: power_stage_off
  {
    out << "power_stage_off: ";
    rosidl_generator_traits::value_to_yaml(msg.power_stage_off, out);
    out << ", ";
  }

  // member: stall_detected
  {
    out << "stall_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.stall_detected, out);
    out << ", ";
  }

  // member: at_limit
  {
    out << "at_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.at_limit, out);
    out << ", ";
  }

  // member: unused
  {
    out << "unused: ";
    rosidl_generator_traits::value_to_yaml(msg.unused, out);
    out << ", ";
  }

  // member: micro_basic_script_running
  {
    out << "micro_basic_script_running: ";
    rosidl_generator_traits::value_to_yaml(msg.micro_basic_script_running, out);
    out << ", ";
  }

  // member: motor_tuning_mode
  {
    out << "motor_tuning_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_tuning_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: serial_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_mode, out);
    out << "\n";
  }

  // member: pulse_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pulse_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.pulse_mode, out);
    out << "\n";
  }

  // member: analog_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_mode, out);
    out << "\n";
  }

  // member: power_stage_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_stage_off: ";
    rosidl_generator_traits::value_to_yaml(msg.power_stage_off, out);
    out << "\n";
  }

  // member: stall_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stall_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.stall_detected, out);
    out << "\n";
  }

  // member: at_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "at_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.at_limit, out);
    out << "\n";
  }

  // member: unused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unused: ";
    rosidl_generator_traits::value_to_yaml(msg.unused, out);
    out << "\n";
  }

  // member: micro_basic_script_running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "micro_basic_script_running: ";
    rosidl_generator_traits::value_to_yaml(msg.micro_basic_script_running, out);
    out << "\n";
  }

  // member: motor_tuning_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_tuning_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_tuning_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatusFlags & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::msg::MotorStatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::MotorStatusFlags & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::MotorStatusFlags>()
{
  return "anscer_msgs::msg::MotorStatusFlags";
}

template<>
inline const char * name<anscer_msgs::msg::MotorStatusFlags>()
{
  return "anscer_msgs/msg/MotorStatusFlags";
}

template<>
struct has_fixed_size<anscer_msgs::msg::MotorStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::msg::MotorStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::msg::MotorStatusFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__TRAITS_HPP_

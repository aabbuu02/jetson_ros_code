// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/MotorDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/motor_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fault_flags'
#include "anscer_msgs/msg/detail/motor_fault_flags__traits.hpp"
// Member 'status_flags'
#include "anscer_msgs/msg/detail/motor_status_flags__traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorDiagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: fault_flags
  {
    out << "fault_flags: ";
    to_flow_style_yaml(msg.fault_flags, out);
    out << ", ";
  }

  // member: status_flags
  {
    out << "status_flags: ";
    to_flow_style_yaml(msg.status_flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: fault_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_flags:\n";
    to_block_style_yaml(msg.fault_flags, out, indentation + 2);
  }

  // member: status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_flags:\n";
    to_block_style_yaml(msg.status_flags, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorDiagnostics & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::MotorDiagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::MotorDiagnostics & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::MotorDiagnostics>()
{
  return "anscer_msgs::msg::MotorDiagnostics";
}

template<>
inline const char * name<anscer_msgs::msg::MotorDiagnostics>()
{
  return "anscer_msgs/msg/MotorDiagnostics";
}

template<>
struct has_fixed_size<anscer_msgs::msg::MotorDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::msg::MotorDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::msg::MotorDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__TRAITS_HPP_

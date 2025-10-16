// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/Debug.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DEBUG__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Debug & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_rpm_command
  {
    out << "left_rpm_command: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rpm_command, out);
    out << ", ";
  }

  // member: right_rpm_command
  {
    out << "right_rpm_command: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rpm_command, out);
    out << ", ";
  }

  // member: left_rpm_feedback
  {
    out << "left_rpm_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rpm_feedback, out);
    out << ", ";
  }

  // member: right_rpm_feedback
  {
    out << "right_rpm_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rpm_feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Debug & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_rpm_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_rpm_command: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rpm_command, out);
    out << "\n";
  }

  // member: right_rpm_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_rpm_command: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rpm_command, out);
    out << "\n";
  }

  // member: left_rpm_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_rpm_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rpm_feedback, out);
    out << "\n";
  }

  // member: right_rpm_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_rpm_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rpm_feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Debug & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::Debug & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::Debug & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::Debug>()
{
  return "anscer_msgs::msg::Debug";
}

template<>
inline const char * name<anscer_msgs::msg::Debug>()
{
  return "anscer_msgs/msg/Debug";
}

template<>
struct has_fixed_size<anscer_msgs::msg::Debug>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::msg::Debug>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::msg::Debug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__DEBUG__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/FieldStatus.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__FIELD_STATUS__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__FIELD_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/field_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FieldStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: is_safety
  {
    out << "is_safety: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safety, out);
    out << ", ";
  }

  // member: is_warning
  {
    out << "is_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.is_warning, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FieldStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: is_safety
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_safety: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safety, out);
    out << "\n";
  }

  // member: is_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.is_warning, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FieldStatus & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::FieldStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::FieldStatus & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::FieldStatus>()
{
  return "anscer_msgs::msg::FieldStatus";
}

template<>
inline const char * name<anscer_msgs::msg::FieldStatus>()
{
  return "anscer_msgs/msg/FieldStatus";
}

template<>
struct has_fixed_size<anscer_msgs::msg::FieldStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::msg::FieldStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::msg::FieldStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__FIELD_STATUS__TRAITS_HPP_

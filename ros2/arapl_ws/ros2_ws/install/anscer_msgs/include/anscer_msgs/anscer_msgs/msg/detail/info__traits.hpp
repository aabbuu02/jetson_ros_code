// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INFO__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'keyvalues'
#include "anscer_msgs/msg/detail/key_values__traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Info & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: keyvalues
  {
    out << "keyvalues: ";
    to_flow_style_yaml(msg.keyvalues, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Info & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: keyvalues
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keyvalues:\n";
    to_block_style_yaml(msg.keyvalues, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Info & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::Info & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::Info & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::Info>()
{
  return "anscer_msgs::msg::Info";
}

template<>
inline const char * name<anscer_msgs::msg::Info>()
{
  return "anscer_msgs/msg/Info";
}

template<>
struct has_fixed_size<anscer_msgs::msg::Info>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::msg::KeyValues>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<anscer_msgs::msg::Info>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::msg::KeyValues>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<anscer_msgs::msg::Info>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__INFO__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/ACRControl.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/acr_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ACRControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: acr_shelf
  {
    out << "acr_shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.acr_shelf, out);
    out << ", ";
  }

  // member: target_shelf
  {
    out << "target_shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.target_shelf, out);
    out << ", ";
  }

  // member: acr_action
  {
    out << "acr_action: ";
    rosidl_generator_traits::value_to_yaml(msg.acr_action, out);
    out << ", ";
  }

  // member: bar_code_number
  {
    out << "bar_code_number: ";
    rosidl_generator_traits::value_to_yaml(msg.bar_code_number, out);
    out << ", ";
  }

  // member: whole_bin_number
  {
    out << "whole_bin_number: ";
    rosidl_generator_traits::value_to_yaml(msg.whole_bin_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ACRControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: acr_shelf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acr_shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.acr_shelf, out);
    out << "\n";
  }

  // member: target_shelf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.target_shelf, out);
    out << "\n";
  }

  // member: acr_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acr_action: ";
    rosidl_generator_traits::value_to_yaml(msg.acr_action, out);
    out << "\n";
  }

  // member: bar_code_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bar_code_number: ";
    rosidl_generator_traits::value_to_yaml(msg.bar_code_number, out);
    out << "\n";
  }

  // member: whole_bin_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "whole_bin_number: ";
    rosidl_generator_traits::value_to_yaml(msg.whole_bin_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ACRControl & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::ACRControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::ACRControl & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::ACRControl>()
{
  return "anscer_msgs::msg::ACRControl";
}

template<>
inline const char * name<anscer_msgs::msg::ACRControl>()
{
  return "anscer_msgs/msg/ACRControl";
}

template<>
struct has_fixed_size<anscer_msgs::msg::ACRControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::msg::ACRControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::msg::ACRControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__TRAITS_HPP_

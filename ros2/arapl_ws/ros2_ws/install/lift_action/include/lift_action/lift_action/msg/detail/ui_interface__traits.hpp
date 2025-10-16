// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lift_action:msg/UiInterface.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__TRAITS_HPP_
#define LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lift_action/msg/detail/ui_interface__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lift_action
{

namespace msg
{

inline void to_flow_style_yaml(
  const UiInterface & msg,
  std::ostream & out)
{
  out << "{";
  // member: process
  {
    out << "process: ";
    rosidl_generator_traits::value_to_yaml(msg.process, out);
    out << ", ";
  }

  // member: button
  {
    out << "button: ";
    rosidl_generator_traits::value_to_yaml(msg.button, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UiInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: process
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process: ";
    rosidl_generator_traits::value_to_yaml(msg.process, out);
    out << "\n";
  }

  // member: button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button: ";
    rosidl_generator_traits::value_to_yaml(msg.button, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UiInterface & msg, bool use_flow_style = false)
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

}  // namespace lift_action

namespace rosidl_generator_traits
{

[[deprecated("use lift_action::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_action::msg::UiInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_action::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_action::msg::to_yaml() instead")]]
inline std::string to_yaml(const lift_action::msg::UiInterface & msg)
{
  return lift_action::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lift_action::msg::UiInterface>()
{
  return "lift_action::msg::UiInterface";
}

template<>
inline const char * name<lift_action::msg::UiInterface>()
{
  return "lift_action/msg/UiInterface";
}

template<>
struct has_fixed_size<lift_action::msg::UiInterface>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lift_action::msg::UiInterface>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lift_action::msg::UiInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__TRAITS_HPP_

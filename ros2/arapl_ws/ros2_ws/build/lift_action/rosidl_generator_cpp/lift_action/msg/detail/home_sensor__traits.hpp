// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lift_action:msg/HomeSensor.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__HOME_SENSOR__TRAITS_HPP_
#define LIFT_ACTION__MSG__DETAIL__HOME_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lift_action/msg/detail/home_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lift_action
{

namespace msg
{

inline void to_flow_style_yaml(
  const HomeSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: process
  {
    out << "process: ";
    rosidl_generator_traits::value_to_yaml(msg.process, out);
    out << ", ";
  }

  // member: homing_status
  {
    out << "homing_status: ";
    rosidl_generator_traits::value_to_yaml(msg.homing_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HomeSensor & msg,
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

  // member: homing_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "homing_status: ";
    rosidl_generator_traits::value_to_yaml(msg.homing_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HomeSensor & msg, bool use_flow_style = false)
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
  const lift_action::msg::HomeSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_action::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_action::msg::to_yaml() instead")]]
inline std::string to_yaml(const lift_action::msg::HomeSensor & msg)
{
  return lift_action::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lift_action::msg::HomeSensor>()
{
  return "lift_action::msg::HomeSensor";
}

template<>
inline const char * name<lift_action::msg::HomeSensor>()
{
  return "lift_action/msg/HomeSensor";
}

template<>
struct has_fixed_size<lift_action::msg::HomeSensor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lift_action::msg::HomeSensor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lift_action::msg::HomeSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIFT_ACTION__MSG__DETAIL__HOME_SENSOR__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lift_action:msg/HomingStatus.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__TRAITS_HPP_
#define LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lift_action/msg/detail/homing_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lift_action
{

namespace msg
{

inline void to_flow_style_yaml(
  const HomingStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: lifter_status
  {
    out << "lifter_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lifter_status, out);
    out << ", ";
  }

  // member: extractor_status
  {
    out << "extractor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.extractor_status, out);
    out << ", ";
  }

  // member: turn_table_status
  {
    out << "turn_table_status: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_table_status, out);
    out << ", ";
  }

  // member: is_homed
  {
    out << "is_homed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_homed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HomingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lifter_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifter_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lifter_status, out);
    out << "\n";
  }

  // member: extractor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extractor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.extractor_status, out);
    out << "\n";
  }

  // member: turn_table_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_table_status: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_table_status, out);
    out << "\n";
  }

  // member: is_homed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_homed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_homed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HomingStatus & msg, bool use_flow_style = false)
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
  const lift_action::msg::HomingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_action::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_action::msg::to_yaml() instead")]]
inline std::string to_yaml(const lift_action::msg::HomingStatus & msg)
{
  return lift_action::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lift_action::msg::HomingStatus>()
{
  return "lift_action::msg::HomingStatus";
}

template<>
inline const char * name<lift_action::msg::HomingStatus>()
{
  return "lift_action/msg/HomingStatus";
}

template<>
struct has_fixed_size<lift_action::msg::HomingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lift_action::msg::HomingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lift_action::msg::HomingStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__TRAITS_HPP_

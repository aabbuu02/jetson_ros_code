// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lift_action:msg/LiftFeedback.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__TRAITS_HPP_
#define LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lift_action/msg/detail/lift_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lift_action
{

namespace msg
{

inline void to_flow_style_yaml(
  const LiftFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: unique_id
  {
    out << "unique_id: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id, out);
    out << ", ";
  }

  // member: acr_shelf
  {
    out << "acr_shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.acr_shelf, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: fail_status
  {
    out << "fail_status: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LiftFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: unique_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unique_id: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id, out);
    out << "\n";
  }

  // member: acr_shelf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acr_shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.acr_shelf, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: fail_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_status: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LiftFeedback & msg, bool use_flow_style = false)
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
  const lift_action::msg::LiftFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_action::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_action::msg::to_yaml() instead")]]
inline std::string to_yaml(const lift_action::msg::LiftFeedback & msg)
{
  return lift_action::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lift_action::msg::LiftFeedback>()
{
  return "lift_action::msg::LiftFeedback";
}

template<>
inline const char * name<lift_action::msg::LiftFeedback>()
{
  return "lift_action/msg/LiftFeedback";
}

template<>
struct has_fixed_size<lift_action::msg::LiftFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lift_action::msg::LiftFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lift_action::msg::LiftFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/SafetyFields.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/safety_fields__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'warning'
// Member 'safety'
#include "anscer_msgs/msg/detail/safety_field__traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyFields & msg,
  std::ostream & out)
{
  out << "{";
  // member: warning
  {
    if (msg.warning.size() == 0) {
      out << "warning: []";
    } else {
      out << "warning: [";
      size_t pending_items = msg.warning.size();
      for (auto item : msg.warning) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: safety
  {
    if (msg.safety.size() == 0) {
      out << "safety: []";
    } else {
      out << "safety: [";
      size_t pending_items = msg.safety.size();
      for (auto item : msg.safety) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetyFields & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.warning.size() == 0) {
      out << "warning: []\n";
    } else {
      out << "warning:\n";
      for (auto item : msg.warning) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: safety
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.safety.size() == 0) {
      out << "safety: []\n";
    } else {
      out << "safety:\n";
      for (auto item : msg.safety) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetyFields & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::SafetyFields & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::SafetyFields & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::SafetyFields>()
{
  return "anscer_msgs::msg::SafetyFields";
}

template<>
inline const char * name<anscer_msgs::msg::SafetyFields>()
{
  return "anscer_msgs/msg/SafetyFields";
}

template<>
struct has_fixed_size<anscer_msgs::msg::SafetyFields>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::msg::SafetyFields>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::msg::SafetyFields>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__TRAITS_HPP_

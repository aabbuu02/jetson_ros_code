// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__TRAITS_HPP_
#define QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qr_navigation/msg/detail/goal_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qr_navigation
{

namespace msg
{

inline void to_flow_style_yaml(
  const GoalMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << ", ";
  }

  // member: start
  {
    if (msg.start.size() == 0) {
      out << "start: []";
    } else {
      out << "start: [";
      size_t pending_items = msg.start.size();
      for (auto item : msg.start) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal
  {
    if (msg.goal.size() == 0) {
      out << "goal: []";
    } else {
      out << "goal: [";
      size_t pending_items = msg.goal.size();
      for (auto item : msg.goal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoalMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << "\n";
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start.size() == 0) {
      out << "start: []\n";
    } else {
      out << "start:\n";
      for (auto item : msg.start) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal.size() == 0) {
      out << "goal: []\n";
    } else {
      out << "goal:\n";
      for (auto item : msg.goal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoalMsg & msg, bool use_flow_style = false)
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

}  // namespace qr_navigation

namespace rosidl_generator_traits
{

[[deprecated("use qr_navigation::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_navigation::msg::GoalMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_navigation::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_navigation::msg::to_yaml() instead")]]
inline std::string to_yaml(const qr_navigation::msg::GoalMsg & msg)
{
  return qr_navigation::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qr_navigation::msg::GoalMsg>()
{
  return "qr_navigation::msg::GoalMsg";
}

template<>
inline const char * name<qr_navigation::msg::GoalMsg>()
{
  return "qr_navigation/msg/GoalMsg";
}

template<>
struct has_fixed_size<qr_navigation::msg::GoalMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qr_navigation::msg::GoalMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qr_navigation::msg::GoalMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__TRAITS_HPP_

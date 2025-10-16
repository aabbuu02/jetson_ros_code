// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qr_mission_scheduler:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__TRAITS_HPP_
#define QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qr_mission_scheduler/msg/detail/goal_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qr_mission_scheduler
{

namespace msg
{

inline void to_flow_style_yaml(
  const GoalMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_type
  {
    out << "goal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_type, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: destination
  {
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoalMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_type, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: destination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
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

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::msg::GoalMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::msg::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::msg::GoalMsg & msg)
{
  return qr_mission_scheduler::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::msg::GoalMsg>()
{
  return "qr_mission_scheduler::msg::GoalMsg";
}

template<>
inline const char * name<qr_mission_scheduler::msg::GoalMsg>()
{
  return "qr_mission_scheduler/msg/GoalMsg";
}

template<>
struct has_fixed_size<qr_mission_scheduler::msg::GoalMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qr_mission_scheduler::msg::GoalMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qr_mission_scheduler::msg::GoalMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TASK__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'acr_info'
#include "anscer_msgs/msg/detail/acr_control__traits.hpp"
// Member 'charge_info'
#include "anscer_msgs/msg/detail/charge_info__traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Task & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: waypoint_index
  {
    out << "waypoint_index: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_index, out);
    out << ", ";
  }

  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << ", ";
  }

  // member: activate
  {
    out << "activate: ";
    rosidl_generator_traits::value_to_yaml(msg.activate, out);
    out << ", ";
  }

  // member: acr_info
  {
    out << "acr_info: ";
    to_flow_style_yaml(msg.acr_info, out);
    out << ", ";
  }

  // member: charge_info
  {
    out << "charge_info: ";
    to_flow_style_yaml(msg.charge_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Task & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: waypoint_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_index: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_index, out);
    out << "\n";
  }

  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }

  // member: activate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activate: ";
    rosidl_generator_traits::value_to_yaml(msg.activate, out);
    out << "\n";
  }

  // member: acr_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acr_info:\n";
    to_block_style_yaml(msg.acr_info, out, indentation + 2);
  }

  // member: charge_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_info:\n";
    to_block_style_yaml(msg.charge_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Task & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::Task & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::Task & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::Task>()
{
  return "anscer_msgs::msg::Task";
}

template<>
inline const char * name<anscer_msgs::msg::Task>()
{
  return "anscer_msgs/msg/Task";
}

template<>
struct has_fixed_size<anscer_msgs::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::msg::Task>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__TASK__TRAITS_HPP_

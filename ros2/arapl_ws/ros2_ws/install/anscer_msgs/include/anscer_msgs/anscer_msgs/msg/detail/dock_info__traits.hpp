// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/DockInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/dock_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DockInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: dock_marker
  {
    out << "dock_marker: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_marker, out);
    out << ", ";
  }

  // member: dock_mode
  {
    out << "dock_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DockInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dock_marker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_marker: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_marker, out);
    out << "\n";
  }

  // member: dock_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DockInfo & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::DockInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::DockInfo & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::DockInfo>()
{
  return "anscer_msgs::msg::DockInfo";
}

template<>
inline const char * name<anscer_msgs::msg::DockInfo>()
{
  return "anscer_msgs/msg/DockInfo";
}

template<>
struct has_fixed_size<anscer_msgs::msg::DockInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::msg::DockInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::msg::DockInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/TransitionZones.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TRANSITION_ZONES__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__TRANSITION_ZONES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/transition_zones__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'zones'
#include "anscer_msgs/msg/detail/transition_info__traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TransitionZones & msg,
  std::ostream & out)
{
  out << "{";
  // member: zones
  {
    if (msg.zones.size() == 0) {
      out << "zones: []";
    } else {
      out << "zones: [";
      size_t pending_items = msg.zones.size();
      for (auto item : msg.zones) {
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
  const TransitionZones & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: zones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.zones.size() == 0) {
      out << "zones: []\n";
    } else {
      out << "zones:\n";
      for (auto item : msg.zones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TransitionZones & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::TransitionZones & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::TransitionZones & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::TransitionZones>()
{
  return "anscer_msgs::msg::TransitionZones";
}

template<>
inline const char * name<anscer_msgs::msg::TransitionZones>()
{
  return "anscer_msgs/msg/TransitionZones";
}

template<>
struct has_fixed_size<anscer_msgs::msg::TransitionZones>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::msg::TransitionZones>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::msg::TransitionZones>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__TRANSITION_ZONES__TRAITS_HPP_

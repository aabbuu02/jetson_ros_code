// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/TransitionInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TRANSITION_INFO__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__TRANSITION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/transition_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_array__traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TransitionInfo & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TransitionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TransitionInfo & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::TransitionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::TransitionInfo & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::TransitionInfo>()
{
  return "anscer_msgs::msg::TransitionInfo";
}

template<>
inline const char * name<anscer_msgs::msg::TransitionInfo>()
{
  return "anscer_msgs/msg/TransitionInfo";
}

template<>
struct has_fixed_size<anscer_msgs::msg::TransitionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::msg::TransitionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::msg::TransitionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__TRANSITION_INFO__TRAITS_HPP_

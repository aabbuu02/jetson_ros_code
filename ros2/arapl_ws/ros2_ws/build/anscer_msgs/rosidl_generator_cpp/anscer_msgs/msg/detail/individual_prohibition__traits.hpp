// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/IndividualProhibition.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/individual_prohibition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'zone'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IndividualProhibition & msg,
  std::ostream & out)
{
  out << "{";
  // member: zone
  {
    if (msg.zone.size() == 0) {
      out << "zone: []";
    } else {
      out << "zone: [";
      size_t pending_items = msg.zone.size();
      for (auto item : msg.zone) {
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
  const IndividualProhibition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: zone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.zone.size() == 0) {
      out << "zone: []\n";
    } else {
      out << "zone:\n";
      for (auto item : msg.zone) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IndividualProhibition & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::IndividualProhibition & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::IndividualProhibition & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::IndividualProhibition>()
{
  return "anscer_msgs::msg::IndividualProhibition";
}

template<>
inline const char * name<anscer_msgs::msg::IndividualProhibition>()
{
  return "anscer_msgs/msg/IndividualProhibition";
}

template<>
struct has_fixed_size<anscer_msgs::msg::IndividualProhibition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::msg::IndividualProhibition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::msg::IndividualProhibition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__TRAITS_HPP_

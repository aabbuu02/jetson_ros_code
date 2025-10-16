// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/mission_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mission_info'
#include "anscer_msgs/msg/detail/mission_data__traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_info
  {
    if (msg.mission_info.size() == 0) {
      out << "mission_info: []";
    } else {
      out << "mission_info: [";
      size_t pending_items = msg.mission_info.size();
      for (auto item : msg.mission_info) {
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
  const MissionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mission_info.size() == 0) {
      out << "mission_info: []\n";
    } else {
      out << "mission_info:\n";
      for (auto item : msg.mission_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionInfo & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::MissionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::MissionInfo & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::MissionInfo>()
{
  return "anscer_msgs::msg::MissionInfo";
}

template<>
inline const char * name<anscer_msgs::msg::MissionInfo>()
{
  return "anscer_msgs/msg/MissionInfo";
}

template<>
struct has_fixed_size<anscer_msgs::msg::MissionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::msg::MissionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::msg::MissionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_

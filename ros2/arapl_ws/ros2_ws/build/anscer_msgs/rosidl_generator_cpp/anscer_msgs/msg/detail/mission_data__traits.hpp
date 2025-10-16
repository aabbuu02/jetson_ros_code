// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/MissionData.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/mission_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionData & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_name
  {
    out << "mission_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_name, out);
    out << ", ";
  }

  // member: success_count
  {
    out << "success_count: ";
    rosidl_generator_traits::value_to_yaml(msg.success_count, out);
    out << ", ";
  }

  // member: mission_count
  {
    out << "mission_count: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_name, out);
    out << "\n";
  }

  // member: success_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success_count: ";
    rosidl_generator_traits::value_to_yaml(msg.success_count, out);
    out << "\n";
  }

  // member: mission_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_count: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionData & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::MissionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::MissionData & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::MissionData>()
{
  return "anscer_msgs::msg::MissionData";
}

template<>
inline const char * name<anscer_msgs::msg::MissionData>()
{
  return "anscer_msgs/msg/MissionData";
}

template<>
struct has_fixed_size<anscer_msgs::msg::MissionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::msg::MissionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::msg::MissionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/ZoneInformation.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/zone_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'indication_info'
#include "anscer_msgs/msg/detail/indication__traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ZoneInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: indication_info
  {
    out << "indication_info: ";
    to_flow_style_yaml(msg.indication_info, out);
    out << ", ";
  }

  // member: speed_factor
  {
    out << "speed_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_factor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ZoneInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: indication_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "indication_info:\n";
    to_block_style_yaml(msg.indication_info, out, indentation + 2);
  }

  // member: speed_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_factor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ZoneInformation & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::ZoneInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::ZoneInformation & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::ZoneInformation>()
{
  return "anscer_msgs::msg::ZoneInformation";
}

template<>
inline const char * name<anscer_msgs::msg::ZoneInformation>()
{
  return "anscer_msgs/msg/ZoneInformation";
}

template<>
struct has_fixed_size<anscer_msgs::msg::ZoneInformation>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::msg::Indication>::value> {};

template<>
struct has_bounded_size<anscer_msgs::msg::ZoneInformation>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::msg::Indication>::value> {};

template<>
struct is_message<anscer_msgs::msg::ZoneInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__TRAITS_HPP_

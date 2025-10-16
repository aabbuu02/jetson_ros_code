// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:msg/ChargeInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__TRAITS_HPP_
#define ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/msg/detail/charge_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChargeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: charger_activate
  {
    out << "charger_activate: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_activate, out);
    out << ", ";
  }

  // member: charge_time
  {
    out << "charge_time: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_time, out);
    out << ", ";
  }

  // member: ignore_time
  {
    out << "ignore_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_time, out);
    out << ", ";
  }

  // member: charge_percentage
  {
    out << "charge_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_percentage, out);
    out << ", ";
  }

  // member: ignore_percentage
  {
    out << "ignore_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_percentage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: charger_activate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charger_activate: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_activate, out);
    out << "\n";
  }

  // member: charge_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_time: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_time, out);
    out << "\n";
  }

  // member: ignore_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_time, out);
    out << "\n";
  }

  // member: charge_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_percentage, out);
    out << "\n";
  }

  // member: ignore_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_percentage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeInfo & msg, bool use_flow_style = false)
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
  const anscer_msgs::msg::ChargeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::msg::ChargeInfo & msg)
{
  return anscer_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::msg::ChargeInfo>()
{
  return "anscer_msgs::msg::ChargeInfo";
}

template<>
inline const char * name<anscer_msgs::msg::ChargeInfo>()
{
  return "anscer_msgs/msg/ChargeInfo";
}

template<>
struct has_fixed_size<anscer_msgs::msg::ChargeInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::msg::ChargeInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::msg::ChargeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__TRAITS_HPP_

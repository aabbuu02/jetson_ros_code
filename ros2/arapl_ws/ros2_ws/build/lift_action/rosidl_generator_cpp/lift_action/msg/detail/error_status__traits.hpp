// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lift_action:msg/ErrorStatus.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__TRAITS_HPP_
#define LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lift_action/msg/detail/error_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lift_action
{

namespace msg
{

inline void to_flow_style_yaml(
  const ErrorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: lifter_fault
  {
    out << "lifter_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.lifter_fault, out);
    out << ", ";
  }

  // member: extractor_fault
  {
    out << "extractor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.extractor_fault, out);
    out << ", ";
  }

  // member: turn_table_fault
  {
    out << "turn_table_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_table_fault, out);
    out << ", ";
  }

  // member: swing_arm_fault
  {
    out << "swing_arm_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.swing_arm_fault, out);
    out << ", ";
  }

  // member: emergency_pb_fault
  {
    out << "emergency_pb_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_pb_fault, out);
    out << ", ";
  }

  // member: swing_arm_sensor_zero_fault
  {
    out << "swing_arm_sensor_zero_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.swing_arm_sensor_zero_fault, out);
    out << ", ";
  }

  // member: swing_arm_sensor_ninety_fault
  {
    out << "swing_arm_sensor_ninety_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.swing_arm_sensor_ninety_fault, out);
    out << ", ";
  }

  // member: turntable_sensor_zero_fault
  {
    out << "turntable_sensor_zero_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.turntable_sensor_zero_fault, out);
    out << ", ";
  }

  // member: extractor_sensor_laser_fault
  {
    out << "extractor_sensor_laser_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.extractor_sensor_laser_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ErrorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lifter_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifter_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.lifter_fault, out);
    out << "\n";
  }

  // member: extractor_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extractor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.extractor_fault, out);
    out << "\n";
  }

  // member: turn_table_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_table_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_table_fault, out);
    out << "\n";
  }

  // member: swing_arm_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swing_arm_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.swing_arm_fault, out);
    out << "\n";
  }

  // member: emergency_pb_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_pb_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_pb_fault, out);
    out << "\n";
  }

  // member: swing_arm_sensor_zero_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swing_arm_sensor_zero_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.swing_arm_sensor_zero_fault, out);
    out << "\n";
  }

  // member: swing_arm_sensor_ninety_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swing_arm_sensor_ninety_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.swing_arm_sensor_ninety_fault, out);
    out << "\n";
  }

  // member: turntable_sensor_zero_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turntable_sensor_zero_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.turntable_sensor_zero_fault, out);
    out << "\n";
  }

  // member: extractor_sensor_laser_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extractor_sensor_laser_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.extractor_sensor_laser_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ErrorStatus & msg, bool use_flow_style = false)
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

}  // namespace lift_action

namespace rosidl_generator_traits
{

[[deprecated("use lift_action::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_action::msg::ErrorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_action::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_action::msg::to_yaml() instead")]]
inline std::string to_yaml(const lift_action::msg::ErrorStatus & msg)
{
  return lift_action::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lift_action::msg::ErrorStatus>()
{
  return "lift_action::msg::ErrorStatus";
}

template<>
inline const char * name<lift_action::msg::ErrorStatus>()
{
  return "lift_action/msg/ErrorStatus";
}

template<>
struct has_fixed_size<lift_action::msg::ErrorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lift_action::msg::ErrorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lift_action::msg::ErrorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__TRAITS_HPP_

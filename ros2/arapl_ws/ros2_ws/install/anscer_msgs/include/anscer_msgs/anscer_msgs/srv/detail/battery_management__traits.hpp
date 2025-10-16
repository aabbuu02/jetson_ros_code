// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/BatteryManagement.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/battery_management__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'robot_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BatteryManagement_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_pose
  {
    out << "robot_pose: ";
    to_flow_style_yaml(msg.robot_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryManagement_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_pose:\n";
    to_block_style_yaml(msg.robot_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryManagement_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::srv::BatteryManagement_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::BatteryManagement_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::BatteryManagement_Request>()
{
  return "anscer_msgs::srv::BatteryManagement_Request";
}

template<>
inline const char * name<anscer_msgs::srv::BatteryManagement_Request>()
{
  return "anscer_msgs/srv/BatteryManagement_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::BatteryManagement_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<anscer_msgs::srv::BatteryManagement_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<anscer_msgs::srv::BatteryManagement_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BatteryManagement_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: is_available
  {
    out << "is_available: ";
    rosidl_generator_traits::value_to_yaml(msg.is_available, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryManagement_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: is_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_available: ";
    rosidl_generator_traits::value_to_yaml(msg.is_available, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryManagement_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::srv::BatteryManagement_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::BatteryManagement_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::BatteryManagement_Response>()
{
  return "anscer_msgs::srv::BatteryManagement_Response";
}

template<>
inline const char * name<anscer_msgs::srv::BatteryManagement_Response>()
{
  return "anscer_msgs/srv/BatteryManagement_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::BatteryManagement_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::BatteryManagement_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::BatteryManagement_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::BatteryManagement>()
{
  return "anscer_msgs::srv::BatteryManagement";
}

template<>
inline const char * name<anscer_msgs::srv::BatteryManagement>()
{
  return "anscer_msgs/srv/BatteryManagement";
}

template<>
struct has_fixed_size<anscer_msgs::srv::BatteryManagement>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::BatteryManagement_Request>::value &&
    has_fixed_size<anscer_msgs::srv::BatteryManagement_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::BatteryManagement>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::BatteryManagement_Request>::value &&
    has_bounded_size<anscer_msgs::srv::BatteryManagement_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::BatteryManagement>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::BatteryManagement_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::BatteryManagement_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__TRAITS_HPP_

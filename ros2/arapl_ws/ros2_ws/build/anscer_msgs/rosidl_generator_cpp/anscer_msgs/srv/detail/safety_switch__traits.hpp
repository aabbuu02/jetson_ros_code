// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/SafetySwitch.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAFETY_SWITCH__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAFETY_SWITCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/safety_switch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SafetySwitch_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: safety_switch
  {
    out << "safety_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_switch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetySwitch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: safety_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_switch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetySwitch_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::SafetySwitch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::SafetySwitch_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::SafetySwitch_Request>()
{
  return "anscer_msgs::srv::SafetySwitch_Request";
}

template<>
inline const char * name<anscer_msgs::srv::SafetySwitch_Request>()
{
  return "anscer_msgs/srv/SafetySwitch_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::SafetySwitch_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::SafetySwitch_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::SafetySwitch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SafetySwitch_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetySwitch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetySwitch_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::SafetySwitch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::SafetySwitch_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::SafetySwitch_Response>()
{
  return "anscer_msgs::srv::SafetySwitch_Response";
}

template<>
inline const char * name<anscer_msgs::srv::SafetySwitch_Response>()
{
  return "anscer_msgs/srv/SafetySwitch_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::SafetySwitch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::SafetySwitch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::SafetySwitch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::SafetySwitch>()
{
  return "anscer_msgs::srv::SafetySwitch";
}

template<>
inline const char * name<anscer_msgs::srv::SafetySwitch>()
{
  return "anscer_msgs/srv/SafetySwitch";
}

template<>
struct has_fixed_size<anscer_msgs::srv::SafetySwitch>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::SafetySwitch_Request>::value &&
    has_fixed_size<anscer_msgs::srv::SafetySwitch_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::SafetySwitch>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::SafetySwitch_Request>::value &&
    has_bounded_size<anscer_msgs::srv::SafetySwitch_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::SafetySwitch>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::SafetySwitch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::SafetySwitch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__SAFETY_SWITCH__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/GetTransitionZones.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GET_TRANSITION_ZONES__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__GET_TRANSITION_ZONES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/get_transition_zones__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTransitionZones_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTransitionZones_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTransitionZones_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::GetTransitionZones_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::GetTransitionZones_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::GetTransitionZones_Request>()
{
  return "anscer_msgs::srv::GetTransitionZones_Request";
}

template<>
inline const char * name<anscer_msgs::srv::GetTransitionZones_Request>()
{
  return "anscer_msgs/srv/GetTransitionZones_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::GetTransitionZones_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::GetTransitionZones_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::GetTransitionZones_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'transition_zones'
#include "anscer_msgs/msg/detail/transition_zones__traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTransitionZones_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: transition_zones
  {
    out << "transition_zones: ";
    to_flow_style_yaml(msg.transition_zones, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTransitionZones_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transition_zones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transition_zones:\n";
    to_block_style_yaml(msg.transition_zones, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTransitionZones_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::GetTransitionZones_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::GetTransitionZones_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::GetTransitionZones_Response>()
{
  return "anscer_msgs::srv::GetTransitionZones_Response";
}

template<>
inline const char * name<anscer_msgs::srv::GetTransitionZones_Response>()
{
  return "anscer_msgs/srv/GetTransitionZones_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::GetTransitionZones_Response>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::msg::TransitionZones>::value> {};

template<>
struct has_bounded_size<anscer_msgs::srv::GetTransitionZones_Response>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::msg::TransitionZones>::value> {};

template<>
struct is_message<anscer_msgs::srv::GetTransitionZones_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::GetTransitionZones>()
{
  return "anscer_msgs::srv::GetTransitionZones";
}

template<>
inline const char * name<anscer_msgs::srv::GetTransitionZones>()
{
  return "anscer_msgs/srv/GetTransitionZones";
}

template<>
struct has_fixed_size<anscer_msgs::srv::GetTransitionZones>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::GetTransitionZones_Request>::value &&
    has_fixed_size<anscer_msgs::srv::GetTransitionZones_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::GetTransitionZones>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::GetTransitionZones_Request>::value &&
    has_bounded_size<anscer_msgs::srv::GetTransitionZones_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::GetTransitionZones>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::GetTransitionZones_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::GetTransitionZones_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__GET_TRANSITION_ZONES__TRAITS_HPP_

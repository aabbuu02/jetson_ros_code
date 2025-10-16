// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/GlobalPath.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GLOBAL_PATH__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__GLOBAL_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/global_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GlobalPath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: initate
  {
    out << "initate: ";
    rosidl_generator_traits::value_to_yaml(msg.initate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GlobalPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initate: ";
    rosidl_generator_traits::value_to_yaml(msg.initate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalPath_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::GlobalPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::GlobalPath_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::GlobalPath_Request>()
{
  return "anscer_msgs::srv::GlobalPath_Request";
}

template<>
inline const char * name<anscer_msgs::srv::GlobalPath_Request>()
{
  return "anscer_msgs/srv/GlobalPath_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::GlobalPath_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::GlobalPath_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::GlobalPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'global_path'
#include "anscer_msgs/msg/detail/paths__traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GlobalPath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: global_path
  {
    out << "global_path: ";
    to_flow_style_yaml(msg.global_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GlobalPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: global_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_path:\n";
    to_block_style_yaml(msg.global_path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalPath_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::GlobalPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::GlobalPath_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::GlobalPath_Response>()
{
  return "anscer_msgs::srv::GlobalPath_Response";
}

template<>
inline const char * name<anscer_msgs::srv::GlobalPath_Response>()
{
  return "anscer_msgs/srv/GlobalPath_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::GlobalPath_Response>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::msg::Paths>::value> {};

template<>
struct has_bounded_size<anscer_msgs::srv::GlobalPath_Response>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::msg::Paths>::value> {};

template<>
struct is_message<anscer_msgs::srv::GlobalPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::GlobalPath>()
{
  return "anscer_msgs::srv::GlobalPath";
}

template<>
inline const char * name<anscer_msgs::srv::GlobalPath>()
{
  return "anscer_msgs/srv/GlobalPath";
}

template<>
struct has_fixed_size<anscer_msgs::srv::GlobalPath>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::GlobalPath_Request>::value &&
    has_fixed_size<anscer_msgs::srv::GlobalPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::GlobalPath>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::GlobalPath_Request>::value &&
    has_bounded_size<anscer_msgs::srv::GlobalPath_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::GlobalPath>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::GlobalPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::GlobalPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__GLOBAL_PATH__TRAITS_HPP_

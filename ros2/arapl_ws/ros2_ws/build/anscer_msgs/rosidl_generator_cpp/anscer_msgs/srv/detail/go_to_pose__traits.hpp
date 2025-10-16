// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/GoToPose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GO_TO_POSE__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__GO_TO_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/go_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GoToPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: initate
  {
    out << "initate: ";
    rosidl_generator_traits::value_to_yaml(msg.initate, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToPose_Request & msg,
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

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToPose_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::GoToPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::GoToPose_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::GoToPose_Request>()
{
  return "anscer_msgs::srv::GoToPose_Request";
}

template<>
inline const char * name<anscer_msgs::srv::GoToPose_Request>()
{
  return "anscer_msgs/srv/GoToPose_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::GoToPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::GoToPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::GoToPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GoToPose_Response & msg,
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
  const GoToPose_Response & msg,
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

inline std::string to_yaml(const GoToPose_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::GoToPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::GoToPose_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::GoToPose_Response>()
{
  return "anscer_msgs::srv::GoToPose_Response";
}

template<>
inline const char * name<anscer_msgs::srv::GoToPose_Response>()
{
  return "anscer_msgs/srv/GoToPose_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::GoToPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::GoToPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::GoToPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::GoToPose>()
{
  return "anscer_msgs::srv::GoToPose";
}

template<>
inline const char * name<anscer_msgs::srv::GoToPose>()
{
  return "anscer_msgs/srv/GoToPose";
}

template<>
struct has_fixed_size<anscer_msgs::srv::GoToPose>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::GoToPose_Request>::value &&
    has_fixed_size<anscer_msgs::srv::GoToPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::GoToPose>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::GoToPose_Request>::value &&
    has_bounded_size<anscer_msgs::srv::GoToPose_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::GoToPose>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::GoToPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::GoToPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__GO_TO_POSE__TRAITS_HPP_

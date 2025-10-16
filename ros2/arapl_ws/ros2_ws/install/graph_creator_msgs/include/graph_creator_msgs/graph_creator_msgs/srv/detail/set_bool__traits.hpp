// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_creator_msgs:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_BOOL__TRAITS_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_BOOL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_creator_msgs/srv/detail/set_bool__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace graph_creator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBool_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBool_Request & msg, bool use_flow_style = false)
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

}  // namespace graph_creator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graph_creator_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graph_creator_msgs::srv::SetBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::srv::SetBool_Request & msg)
{
  return graph_creator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::srv::SetBool_Request>()
{
  return "graph_creator_msgs::srv::SetBool_Request";
}

template<>
inline const char * name<graph_creator_msgs::srv::SetBool_Request>()
{
  return "graph_creator_msgs/srv/SetBool_Request";
}

template<>
struct has_fixed_size<graph_creator_msgs::srv::SetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<graph_creator_msgs::srv::SetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<graph_creator_msgs::srv::SetBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace graph_creator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBool_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBool_Response & msg, bool use_flow_style = false)
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

}  // namespace graph_creator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graph_creator_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graph_creator_msgs::srv::SetBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::srv::SetBool_Response & msg)
{
  return graph_creator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::srv::SetBool_Response>()
{
  return "graph_creator_msgs::srv::SetBool_Response";
}

template<>
inline const char * name<graph_creator_msgs::srv::SetBool_Response>()
{
  return "graph_creator_msgs/srv/SetBool_Response";
}

template<>
struct has_fixed_size<graph_creator_msgs::srv::SetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_creator_msgs::srv::SetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_creator_msgs::srv::SetBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_creator_msgs::srv::SetBool>()
{
  return "graph_creator_msgs::srv::SetBool";
}

template<>
inline const char * name<graph_creator_msgs::srv::SetBool>()
{
  return "graph_creator_msgs/srv/SetBool";
}

template<>
struct has_fixed_size<graph_creator_msgs::srv::SetBool>
  : std::integral_constant<
    bool,
    has_fixed_size<graph_creator_msgs::srv::SetBool_Request>::value &&
    has_fixed_size<graph_creator_msgs::srv::SetBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<graph_creator_msgs::srv::SetBool>
  : std::integral_constant<
    bool,
    has_bounded_size<graph_creator_msgs::srv::SetBool_Request>::value &&
    has_bounded_size<graph_creator_msgs::srv::SetBool_Response>::value
  >
{
};

template<>
struct is_service<graph_creator_msgs::srv::SetBool>
  : std::true_type
{
};

template<>
struct is_service_request<graph_creator_msgs::srv::SetBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<graph_creator_msgs::srv::SetBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_BOOL__TRAITS_HPP_

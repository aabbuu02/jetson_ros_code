// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msgs:srv/GetGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__SRV__DETAIL__GET_GRAPH__TRAITS_HPP_
#define GRAPH_MSGS__SRV__DETAIL__GET_GRAPH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_msgs/srv/detail/get_graph__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace graph_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGraph_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGraph_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGraph_Request & msg, bool use_flow_style = false)
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

}  // namespace graph_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graph_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graph_msgs::srv::GetGraph_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const graph_msgs::srv::GetGraph_Request & msg)
{
  return graph_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<graph_msgs::srv::GetGraph_Request>()
{
  return "graph_msgs::srv::GetGraph_Request";
}

template<>
inline const char * name<graph_msgs::srv::GetGraph_Request>()
{
  return "graph_msgs/srv/GetGraph_Request";
}

template<>
struct has_fixed_size<graph_msgs::srv::GetGraph_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<graph_msgs::srv::GetGraph_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<graph_msgs::srv::GetGraph_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'graph'
#include "graph_msgs/msg/detail/graph__traits.hpp"

namespace graph_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGraph_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: graph
  {
    out << "graph: ";
    to_flow_style_yaml(msg.graph, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGraph_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: graph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "graph:\n";
    to_block_style_yaml(msg.graph, out, indentation + 2);
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGraph_Response & msg, bool use_flow_style = false)
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

}  // namespace graph_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graph_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graph_msgs::srv::GetGraph_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const graph_msgs::srv::GetGraph_Response & msg)
{
  return graph_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<graph_msgs::srv::GetGraph_Response>()
{
  return "graph_msgs::srv::GetGraph_Response";
}

template<>
inline const char * name<graph_msgs::srv::GetGraph_Response>()
{
  return "graph_msgs/srv/GetGraph_Response";
}

template<>
struct has_fixed_size<graph_msgs::srv::GetGraph_Response>
  : std::integral_constant<bool, has_fixed_size<graph_msgs::msg::Graph>::value> {};

template<>
struct has_bounded_size<graph_msgs::srv::GetGraph_Response>
  : std::integral_constant<bool, has_bounded_size<graph_msgs::msg::Graph>::value> {};

template<>
struct is_message<graph_msgs::srv::GetGraph_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msgs::srv::GetGraph>()
{
  return "graph_msgs::srv::GetGraph";
}

template<>
inline const char * name<graph_msgs::srv::GetGraph>()
{
  return "graph_msgs/srv/GetGraph";
}

template<>
struct has_fixed_size<graph_msgs::srv::GetGraph>
  : std::integral_constant<
    bool,
    has_fixed_size<graph_msgs::srv::GetGraph_Request>::value &&
    has_fixed_size<graph_msgs::srv::GetGraph_Response>::value
  >
{
};

template<>
struct has_bounded_size<graph_msgs::srv::GetGraph>
  : std::integral_constant<
    bool,
    has_bounded_size<graph_msgs::srv::GetGraph_Request>::value &&
    has_bounded_size<graph_msgs::srv::GetGraph_Response>::value
  >
{
};

template<>
struct is_service<graph_msgs::srv::GetGraph>
  : std::true_type
{
};

template<>
struct is_service_request<graph_msgs::srv::GetGraph_Request>
  : std::true_type
{
};

template<>
struct is_service_response<graph_msgs::srv::GetGraph_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSGS__SRV__DETAIL__GET_GRAPH__TRAITS_HPP_

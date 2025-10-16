// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_creator_msgs:srv/GenerateGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__GENERATE_GRAPH__TRAITS_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__GENERATE_GRAPH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_creator_msgs/srv/detail/generate_graph__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'generator_config'
#include "graph_creator_msgs/msg/detail/graph_generator_config__traits.hpp"

namespace graph_creator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateGraph_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: generator_config
  {
    out << "generator_config: ";
    to_flow_style_yaml(msg.generator_config, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateGraph_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: generator_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generator_config:\n";
    to_block_style_yaml(msg.generator_config, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateGraph_Request & msg, bool use_flow_style = false)
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
  const graph_creator_msgs::srv::GenerateGraph_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::srv::GenerateGraph_Request & msg)
{
  return graph_creator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::srv::GenerateGraph_Request>()
{
  return "graph_creator_msgs::srv::GenerateGraph_Request";
}

template<>
inline const char * name<graph_creator_msgs::srv::GenerateGraph_Request>()
{
  return "graph_creator_msgs/srv/GenerateGraph_Request";
}

template<>
struct has_fixed_size<graph_creator_msgs::srv::GenerateGraph_Request>
  : std::integral_constant<bool, has_fixed_size<graph_creator_msgs::msg::GraphGeneratorConfig>::value> {};

template<>
struct has_bounded_size<graph_creator_msgs::srv::GenerateGraph_Request>
  : std::integral_constant<bool, has_bounded_size<graph_creator_msgs::msg::GraphGeneratorConfig>::value> {};

template<>
struct is_message<graph_creator_msgs::srv::GenerateGraph_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace graph_creator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateGraph_Response & msg,
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
  const GenerateGraph_Response & msg,
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

inline std::string to_yaml(const GenerateGraph_Response & msg, bool use_flow_style = false)
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
  const graph_creator_msgs::srv::GenerateGraph_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::srv::GenerateGraph_Response & msg)
{
  return graph_creator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::srv::GenerateGraph_Response>()
{
  return "graph_creator_msgs::srv::GenerateGraph_Response";
}

template<>
inline const char * name<graph_creator_msgs::srv::GenerateGraph_Response>()
{
  return "graph_creator_msgs/srv/GenerateGraph_Response";
}

template<>
struct has_fixed_size<graph_creator_msgs::srv::GenerateGraph_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_creator_msgs::srv::GenerateGraph_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_creator_msgs::srv::GenerateGraph_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_creator_msgs::srv::GenerateGraph>()
{
  return "graph_creator_msgs::srv::GenerateGraph";
}

template<>
inline const char * name<graph_creator_msgs::srv::GenerateGraph>()
{
  return "graph_creator_msgs/srv/GenerateGraph";
}

template<>
struct has_fixed_size<graph_creator_msgs::srv::GenerateGraph>
  : std::integral_constant<
    bool,
    has_fixed_size<graph_creator_msgs::srv::GenerateGraph_Request>::value &&
    has_fixed_size<graph_creator_msgs::srv::GenerateGraph_Response>::value
  >
{
};

template<>
struct has_bounded_size<graph_creator_msgs::srv::GenerateGraph>
  : std::integral_constant<
    bool,
    has_bounded_size<graph_creator_msgs::srv::GenerateGraph_Request>::value &&
    has_bounded_size<graph_creator_msgs::srv::GenerateGraph_Response>::value
  >
{
};

template<>
struct is_service<graph_creator_msgs::srv::GenerateGraph>
  : std::true_type
{
};

template<>
struct is_service_request<graph_creator_msgs::srv::GenerateGraph_Request>
  : std::true_type
{
};

template<>
struct is_service_response<graph_creator_msgs::srv::GenerateGraph_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__GENERATE_GRAPH__TRAITS_HPP_

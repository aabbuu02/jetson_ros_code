// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msgs:msg/GraphMetaData.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__TRAITS_HPP_
#define GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_msgs/msg/detail/graph_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace graph_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphMetaData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: graph_name
  {
    out << "graph_name: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_name, out);
    out << ", ";
  }

  // member: graph_type
  {
    out << "graph_type: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_type, out);
    out << ", ";
  }

  // member: number_of_vertices
  {
    out << "number_of_vertices: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_vertices, out);
    out << ", ";
  }

  // member: number_of_edges
  {
    out << "number_of_edges: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_edges, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphMetaData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: graph_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "graph_name: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_name, out);
    out << "\n";
  }

  // member: graph_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "graph_type: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_type, out);
    out << "\n";
  }

  // member: number_of_vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_vertices: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_vertices, out);
    out << "\n";
  }

  // member: number_of_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_edges: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_edges, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphMetaData & msg, bool use_flow_style = false)
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

}  // namespace graph_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graph_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graph_msgs::msg::GraphMetaData & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_msgs::msg::GraphMetaData & msg)
{
  return graph_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_msgs::msg::GraphMetaData>()
{
  return "graph_msgs::msg::GraphMetaData";
}

template<>
inline const char * name<graph_msgs::msg::GraphMetaData>()
{
  return "graph_msgs/msg/GraphMetaData";
}

template<>
struct has_fixed_size<graph_msgs::msg::GraphMetaData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msgs::msg::GraphMetaData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msgs::msg::GraphMetaData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__TRAITS_HPP_

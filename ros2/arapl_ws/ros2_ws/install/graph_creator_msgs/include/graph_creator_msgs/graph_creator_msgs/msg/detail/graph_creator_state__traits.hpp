// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_creator_msgs:msg/GraphCreatorState.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__TRAITS_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_creator_msgs/msg/detail/graph_creator_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace graph_creator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphCreatorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: graph_mode
  {
    out << "graph_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_mode, out);
    out << ", ";
  }

  // member: current_edge_type
  {
    out << "current_edge_type: ";
    rosidl_generator_traits::value_to_yaml(msg.current_edge_type, out);
    out << ", ";
  }

  // member: edge_is_bidirectional
  {
    out << "edge_is_bidirectional: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_is_bidirectional, out);
    out << ", ";
  }

  // member: all_vertices_locked
  {
    out << "all_vertices_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.all_vertices_locked, out);
    out << ", ";
  }

  // member: all_edges_locked
  {
    out << "all_edges_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.all_edges_locked, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphCreatorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: graph_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "graph_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_mode, out);
    out << "\n";
  }

  // member: current_edge_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_edge_type: ";
    rosidl_generator_traits::value_to_yaml(msg.current_edge_type, out);
    out << "\n";
  }

  // member: edge_is_bidirectional
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_is_bidirectional: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_is_bidirectional, out);
    out << "\n";
  }

  // member: all_vertices_locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_vertices_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.all_vertices_locked, out);
    out << "\n";
  }

  // member: all_edges_locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_edges_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.all_edges_locked, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphCreatorState & msg, bool use_flow_style = false)
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

}  // namespace graph_creator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graph_creator_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graph_creator_msgs::msg::GraphCreatorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::msg::GraphCreatorState & msg)
{
  return graph_creator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::msg::GraphCreatorState>()
{
  return "graph_creator_msgs::msg::GraphCreatorState";
}

template<>
inline const char * name<graph_creator_msgs::msg::GraphCreatorState>()
{
  return "graph_creator_msgs/msg/GraphCreatorState";
}

template<>
struct has_fixed_size<graph_creator_msgs::msg::GraphCreatorState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<graph_creator_msgs::msg::GraphCreatorState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<graph_creator_msgs::msg::GraphCreatorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__TRAITS_HPP_

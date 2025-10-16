// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GRAPH__TRAITS_HPP_
#define GRAPH_MSGS__MSG__DETAIL__GRAPH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_msgs/msg/detail/graph__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'meta_data'
#include "graph_msgs/msg/detail/graph_meta_data__traits.hpp"
// Member 'vertices'
#include "graph_msgs/msg/detail/vertex__traits.hpp"
// Member 'edges'
#include "graph_msgs/msg/detail/edge__traits.hpp"
// Member 'properties'
#include "graph_msgs/msg/detail/property__traits.hpp"

namespace graph_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Graph & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: meta_data
  {
    out << "meta_data: ";
    to_flow_style_yaml(msg.meta_data, out);
    out << ", ";
  }

  // member: vertices
  {
    if (msg.vertices.size() == 0) {
      out << "vertices: []";
    } else {
      out << "vertices: [";
      size_t pending_items = msg.vertices.size();
      for (auto item : msg.vertices) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: edges
  {
    if (msg.edges.size() == 0) {
      out << "edges: []";
    } else {
      out << "edges: [";
      size_t pending_items = msg.edges.size();
      for (auto item : msg.edges) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: properties
  {
    if (msg.properties.size() == 0) {
      out << "properties: []";
    } else {
      out << "properties: [";
      size_t pending_items = msg.properties.size();
      for (auto item : msg.properties) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Graph & msg,
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

  // member: meta_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_data:\n";
    to_block_style_yaml(msg.meta_data, out, indentation + 2);
  }

  // member: vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertices.size() == 0) {
      out << "vertices: []\n";
    } else {
      out << "vertices:\n";
      for (auto item : msg.vertices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.edges.size() == 0) {
      out << "edges: []\n";
    } else {
      out << "edges:\n";
      for (auto item : msg.edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.properties.size() == 0) {
      out << "properties: []\n";
    } else {
      out << "properties:\n";
      for (auto item : msg.properties) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Graph & msg, bool use_flow_style = false)
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
  const graph_msgs::msg::Graph & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_msgs::msg::Graph & msg)
{
  return graph_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_msgs::msg::Graph>()
{
  return "graph_msgs::msg::Graph";
}

template<>
inline const char * name<graph_msgs::msg::Graph>()
{
  return "graph_msgs/msg/Graph";
}

template<>
struct has_fixed_size<graph_msgs::msg::Graph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msgs::msg::Graph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msgs::msg::Graph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSGS__MSG__DETAIL__GRAPH__TRAITS_HPP_

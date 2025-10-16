// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_creator_msgs:msg/SelectedGraphElements.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__TRAITS_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_creator_msgs/msg/detail/selected_graph_elements__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace graph_creator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SelectedGraphElements & msg,
  std::ostream & out)
{
  out << "{";
  // member: all_vertices
  {
    if (msg.all_vertices.size() == 0) {
      out << "all_vertices: []";
    } else {
      out << "all_vertices: [";
      size_t pending_items = msg.all_vertices.size();
      for (auto item : msg.all_vertices) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: all_edges
  {
    if (msg.all_edges.size() == 0) {
      out << "all_edges: []";
    } else {
      out << "all_edges: [";
      size_t pending_items = msg.all_edges.size();
      for (auto item : msg.all_edges) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SelectedGraphElements & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: all_vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.all_vertices.size() == 0) {
      out << "all_vertices: []\n";
    } else {
      out << "all_vertices:\n";
      for (auto item : msg.all_vertices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: all_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.all_edges.size() == 0) {
      out << "all_edges: []\n";
    } else {
      out << "all_edges:\n";
      for (auto item : msg.all_edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SelectedGraphElements & msg, bool use_flow_style = false)
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
  const graph_creator_msgs::msg::SelectedGraphElements & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::msg::SelectedGraphElements & msg)
{
  return graph_creator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::msg::SelectedGraphElements>()
{
  return "graph_creator_msgs::msg::SelectedGraphElements";
}

template<>
inline const char * name<graph_creator_msgs::msg::SelectedGraphElements>()
{
  return "graph_creator_msgs/msg/SelectedGraphElements";
}

template<>
struct has_fixed_size<graph_creator_msgs::msg::SelectedGraphElements>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_creator_msgs::msg::SelectedGraphElements>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_creator_msgs::msg::SelectedGraphElements>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__TRAITS_HPP_

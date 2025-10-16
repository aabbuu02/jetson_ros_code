// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_creator_msgs:msg/GraphGeneratorConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__TRAITS_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_creator_msgs/msg/detail/graph_generator_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'edge_creation_type'
#include "graph_creator_msgs/msg/detail/edge_creation_type__traits.hpp"
// Member 'edge_direction_type'
#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__traits.hpp"
// Member 'start_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace graph_creator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphGeneratorConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: generation_type
  {
    out << "generation_type: ";
    rosidl_generator_traits::value_to_yaml(msg.generation_type, out);
    out << ", ";
  }

  // member: edge_creation_type
  {
    out << "edge_creation_type: ";
    to_flow_style_yaml(msg.edge_creation_type, out);
    out << ", ";
  }

  // member: edge_direction_type
  {
    out << "edge_direction_type: ";
    to_flow_style_yaml(msg.edge_direction_type, out);
    out << ", ";
  }

  // member: ignore_vertex_orientation
  {
    out << "ignore_vertex_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_vertex_orientation, out);
    out << ", ";
  }

  // member: use_edge_count_threshold
  {
    out << "use_edge_count_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.use_edge_count_threshold, out);
    out << ", ";
  }

  // member: edge_count_threshold
  {
    out << "edge_count_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_count_threshold, out);
    out << ", ";
  }

  // member: dxf_file_path
  {
    out << "dxf_file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.dxf_file_path, out);
    out << ", ";
  }

  // member: scale_x
  {
    out << "scale_x: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_x, out);
    out << ", ";
  }

  // member: scale_y
  {
    out << "scale_y: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_y, out);
    out << ", ";
  }

  // member: start_pose
  {
    out << "start_pose: ";
    to_flow_style_yaml(msg.start_pose, out);
    out << ", ";
  }

  // member: rows
  {
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << ", ";
  }

  // member: columns
  {
    out << "columns: ";
    rosidl_generator_traits::value_to_yaml(msg.columns, out);
    out << ", ";
  }

  // member: row_spacing
  {
    out << "row_spacing: ";
    rosidl_generator_traits::value_to_yaml(msg.row_spacing, out);
    out << ", ";
  }

  // member: column_spacing
  {
    out << "column_spacing: ";
    rosidl_generator_traits::value_to_yaml(msg.column_spacing, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphGeneratorConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: generation_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generation_type: ";
    rosidl_generator_traits::value_to_yaml(msg.generation_type, out);
    out << "\n";
  }

  // member: edge_creation_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_creation_type:\n";
    to_block_style_yaml(msg.edge_creation_type, out, indentation + 2);
  }

  // member: edge_direction_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_direction_type:\n";
    to_block_style_yaml(msg.edge_direction_type, out, indentation + 2);
  }

  // member: ignore_vertex_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_vertex_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_vertex_orientation, out);
    out << "\n";
  }

  // member: use_edge_count_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_edge_count_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.use_edge_count_threshold, out);
    out << "\n";
  }

  // member: edge_count_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_count_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_count_threshold, out);
    out << "\n";
  }

  // member: dxf_file_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dxf_file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.dxf_file_path, out);
    out << "\n";
  }

  // member: scale_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_x: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_x, out);
    out << "\n";
  }

  // member: scale_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_y: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_y, out);
    out << "\n";
  }

  // member: start_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_pose:\n";
    to_block_style_yaml(msg.start_pose, out, indentation + 2);
  }

  // member: rows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << "\n";
  }

  // member: columns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "columns: ";
    rosidl_generator_traits::value_to_yaml(msg.columns, out);
    out << "\n";
  }

  // member: row_spacing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "row_spacing: ";
    rosidl_generator_traits::value_to_yaml(msg.row_spacing, out);
    out << "\n";
  }

  // member: column_spacing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "column_spacing: ";
    rosidl_generator_traits::value_to_yaml(msg.column_spacing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphGeneratorConfig & msg, bool use_flow_style = false)
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
  const graph_creator_msgs::msg::GraphGeneratorConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::msg::GraphGeneratorConfig & msg)
{
  return graph_creator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::msg::GraphGeneratorConfig>()
{
  return "graph_creator_msgs::msg::GraphGeneratorConfig";
}

template<>
inline const char * name<graph_creator_msgs::msg::GraphGeneratorConfig>()
{
  return "graph_creator_msgs/msg/GraphGeneratorConfig";
}

template<>
struct has_fixed_size<graph_creator_msgs::msg::GraphGeneratorConfig>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_creator_msgs::msg::GraphGeneratorConfig>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_creator_msgs::msg::GraphGeneratorConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__TRAITS_HPP_

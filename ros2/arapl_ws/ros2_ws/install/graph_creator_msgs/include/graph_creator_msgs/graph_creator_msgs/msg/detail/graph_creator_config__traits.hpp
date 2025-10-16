// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_creator_msgs:msg/GraphCreatorConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__TRAITS_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_creator_msgs/msg/detail/graph_creator_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace graph_creator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphCreatorConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: vertex_sphere_scale
  {
    out << "vertex_sphere_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.vertex_sphere_scale, out);
    out << ", ";
  }

  // member: vertex_arrow_scale
  {
    out << "vertex_arrow_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.vertex_arrow_scale, out);
    out << ", ";
  }

  // member: control_pose_scale
  {
    out << "control_pose_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.control_pose_scale, out);
    out << ", ";
  }

  // member: edge_pose_spacing
  {
    out << "edge_pose_spacing: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_pose_spacing, out);
    out << ", ";
  }

  // member: bezier_resolution
  {
    out << "bezier_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.bezier_resolution, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphCreatorConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vertex_sphere_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertex_sphere_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.vertex_sphere_scale, out);
    out << "\n";
  }

  // member: vertex_arrow_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertex_arrow_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.vertex_arrow_scale, out);
    out << "\n";
  }

  // member: control_pose_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_pose_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.control_pose_scale, out);
    out << "\n";
  }

  // member: edge_pose_spacing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_pose_spacing: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_pose_spacing, out);
    out << "\n";
  }

  // member: bezier_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bezier_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.bezier_resolution, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphCreatorConfig & msg, bool use_flow_style = false)
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
  const graph_creator_msgs::msg::GraphCreatorConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::msg::GraphCreatorConfig & msg)
{
  return graph_creator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::msg::GraphCreatorConfig>()
{
  return "graph_creator_msgs::msg::GraphCreatorConfig";
}

template<>
inline const char * name<graph_creator_msgs::msg::GraphCreatorConfig>()
{
  return "graph_creator_msgs/msg/GraphCreatorConfig";
}

template<>
struct has_fixed_size<graph_creator_msgs::msg::GraphCreatorConfig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<graph_creator_msgs::msg::GraphCreatorConfig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<graph_creator_msgs::msg::GraphCreatorConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_creator_msgs:msg/SnapPoseConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__TRAITS_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_creator_msgs/msg/detail/snap_pose_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace graph_creator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SnapPoseConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable_for_vertices
  {
    out << "enable_for_vertices: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_for_vertices, out);
    out << ", ";
  }

  // member: enable_for_edges
  {
    out << "enable_for_edges: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_for_edges, out);
    out << ", ";
  }

  // member: enable_position_snap
  {
    out << "enable_position_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_position_snap, out);
    out << ", ";
  }

  // member: enable_orientation_snap
  {
    out << "enable_orientation_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_orientation_snap, out);
    out << ", ";
  }

  // member: position_snap_grid_size
  {
    out << "position_snap_grid_size: ";
    rosidl_generator_traits::value_to_yaml(msg.position_snap_grid_size, out);
    out << ", ";
  }

  // member: orientation_snap_angle
  {
    out << "orientation_snap_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_snap_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SnapPoseConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable_for_vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_for_vertices: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_for_vertices, out);
    out << "\n";
  }

  // member: enable_for_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_for_edges: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_for_edges, out);
    out << "\n";
  }

  // member: enable_position_snap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_position_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_position_snap, out);
    out << "\n";
  }

  // member: enable_orientation_snap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_orientation_snap: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_orientation_snap, out);
    out << "\n";
  }

  // member: position_snap_grid_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_snap_grid_size: ";
    rosidl_generator_traits::value_to_yaml(msg.position_snap_grid_size, out);
    out << "\n";
  }

  // member: orientation_snap_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_snap_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_snap_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SnapPoseConfig & msg, bool use_flow_style = false)
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
  const graph_creator_msgs::msg::SnapPoseConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::msg::SnapPoseConfig & msg)
{
  return graph_creator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::msg::SnapPoseConfig>()
{
  return "graph_creator_msgs::msg::SnapPoseConfig";
}

template<>
inline const char * name<graph_creator_msgs::msg::SnapPoseConfig>()
{
  return "graph_creator_msgs/msg/SnapPoseConfig";
}

template<>
struct has_fixed_size<graph_creator_msgs::msg::SnapPoseConfig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<graph_creator_msgs::msg::SnapPoseConfig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<graph_creator_msgs::msg::SnapPoseConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__TRAITS_HPP_

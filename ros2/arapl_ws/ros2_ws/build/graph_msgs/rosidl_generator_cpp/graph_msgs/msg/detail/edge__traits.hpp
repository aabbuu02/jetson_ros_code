// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__EDGE__TRAITS_HPP_
#define GRAPH_MSGS__MSG__DETAIL__EDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_msgs/msg/detail/edge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'control_points'
// Member 'control_orientation'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_array__traits.hpp"
// Member 'properties'
#include "graph_msgs/msg/detail/property__traits.hpp"

namespace graph_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Edge & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: alias
  {
    out << "alias: ";
    rosidl_generator_traits::value_to_yaml(msg.alias, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: edge_direction_type
  {
    out << "edge_direction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_direction_type, out);
    out << ", ";
  }

  // member: creation_type
  {
    out << "creation_type: ";
    rosidl_generator_traits::value_to_yaml(msg.creation_type, out);
    out << ", ";
  }

  // member: source_vertex_id
  {
    out << "source_vertex_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_vertex_id, out);
    out << ", ";
  }

  // member: target_vertex_id
  {
    out << "target_vertex_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_vertex_id, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: cost_factor
  {
    out << "cost_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.cost_factor, out);
    out << ", ";
  }

  // member: bidirectional
  {
    out << "bidirectional: ";
    rosidl_generator_traits::value_to_yaml(msg.bidirectional, out);
    out << ", ";
  }

  // member: independent_orientation
  {
    out << "independent_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.independent_orientation, out);
    out << ", ";
  }

  // member: control_points
  {
    if (msg.control_points.size() == 0) {
      out << "control_points: []";
    } else {
      out << "control_points: [";
      size_t pending_items = msg.control_points.size();
      for (auto item : msg.control_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: control_orientation
  {
    out << "control_orientation: ";
    to_flow_style_yaml(msg.control_orientation, out);
    out << ", ";
  }

  // member: poses
  {
    out << "poses: ";
    to_flow_style_yaml(msg.poses, out);
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
  const Edge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: alias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alias: ";
    rosidl_generator_traits::value_to_yaml(msg.alias, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: edge_direction_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_direction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_direction_type, out);
    out << "\n";
  }

  // member: creation_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "creation_type: ";
    rosidl_generator_traits::value_to_yaml(msg.creation_type, out);
    out << "\n";
  }

  // member: source_vertex_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_vertex_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_vertex_id, out);
    out << "\n";
  }

  // member: target_vertex_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_vertex_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_vertex_id, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: cost_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.cost_factor, out);
    out << "\n";
  }

  // member: bidirectional
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bidirectional: ";
    rosidl_generator_traits::value_to_yaml(msg.bidirectional, out);
    out << "\n";
  }

  // member: independent_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "independent_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.independent_orientation, out);
    out << "\n";
  }

  // member: control_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.control_points.size() == 0) {
      out << "control_points: []\n";
    } else {
      out << "control_points:\n";
      for (auto item : msg.control_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: control_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_orientation:\n";
    to_block_style_yaml(msg.control_orientation, out, indentation + 2);
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poses:\n";
    to_block_style_yaml(msg.poses, out, indentation + 2);
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

inline std::string to_yaml(const Edge & msg, bool use_flow_style = false)
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
  const graph_msgs::msg::Edge & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_msgs::msg::Edge & msg)
{
  return graph_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_msgs::msg::Edge>()
{
  return "graph_msgs::msg::Edge";
}

template<>
inline const char * name<graph_msgs::msg::Edge>()
{
  return "graph_msgs/msg/Edge";
}

template<>
struct has_fixed_size<graph_msgs::msg::Edge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msgs::msg::Edge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msgs::msg::Edge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSGS__MSG__DETAIL__EDGE__TRAITS_HPP_

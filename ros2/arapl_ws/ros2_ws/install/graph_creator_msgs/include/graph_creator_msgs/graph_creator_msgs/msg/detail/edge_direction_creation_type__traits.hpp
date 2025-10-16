// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_creator_msgs:msg/EdgeDirectionCreationType.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_DIRECTION_CREATION_TYPE__TRAITS_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_DIRECTION_CREATION_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace graph_creator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EdgeDirectionCreationType & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction_type
  {
    out << "direction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EdgeDirectionCreationType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EdgeDirectionCreationType & msg, bool use_flow_style = false)
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
  const graph_creator_msgs::msg::EdgeDirectionCreationType & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_creator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_creator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_creator_msgs::msg::EdgeDirectionCreationType & msg)
{
  return graph_creator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_creator_msgs::msg::EdgeDirectionCreationType>()
{
  return "graph_creator_msgs::msg::EdgeDirectionCreationType";
}

template<>
inline const char * name<graph_creator_msgs::msg::EdgeDirectionCreationType>()
{
  return "graph_creator_msgs/msg/EdgeDirectionCreationType";
}

template<>
struct has_fixed_size<graph_creator_msgs::msg::EdgeDirectionCreationType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<graph_creator_msgs::msg::EdgeDirectionCreationType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<graph_creator_msgs::msg::EdgeDirectionCreationType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_DIRECTION_CREATION_TYPE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_
#define GRAPH_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_msgs/msg/detail/edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_msgs
{

namespace msg
{

namespace builder
{

class Init_Edge_properties
{
public:
  explicit Init_Edge_properties(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  ::graph_msgs::msg::Edge properties(::graph_msgs::msg::Edge::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_poses
{
public:
  explicit Init_Edge_poses(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_properties poses(::graph_msgs::msg::Edge::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_Edge_properties(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_control_orientation
{
public:
  explicit Init_Edge_control_orientation(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_poses control_orientation(::graph_msgs::msg::Edge::_control_orientation_type arg)
  {
    msg_.control_orientation = std::move(arg);
    return Init_Edge_poses(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_control_points
{
public:
  explicit Init_Edge_control_points(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_control_orientation control_points(::graph_msgs::msg::Edge::_control_points_type arg)
  {
    msg_.control_points = std::move(arg);
    return Init_Edge_control_orientation(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_independent_orientation
{
public:
  explicit Init_Edge_independent_orientation(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_control_points independent_orientation(::graph_msgs::msg::Edge::_independent_orientation_type arg)
  {
    msg_.independent_orientation = std::move(arg);
    return Init_Edge_control_points(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_bidirectional
{
public:
  explicit Init_Edge_bidirectional(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_independent_orientation bidirectional(::graph_msgs::msg::Edge::_bidirectional_type arg)
  {
    msg_.bidirectional = std::move(arg);
    return Init_Edge_independent_orientation(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_cost_factor
{
public:
  explicit Init_Edge_cost_factor(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_bidirectional cost_factor(::graph_msgs::msg::Edge::_cost_factor_type arg)
  {
    msg_.cost_factor = std::move(arg);
    return Init_Edge_bidirectional(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_length
{
public:
  explicit Init_Edge_length(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_cost_factor length(::graph_msgs::msg::Edge::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Edge_cost_factor(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_target_vertex_id
{
public:
  explicit Init_Edge_target_vertex_id(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_length target_vertex_id(::graph_msgs::msg::Edge::_target_vertex_id_type arg)
  {
    msg_.target_vertex_id = std::move(arg);
    return Init_Edge_length(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_source_vertex_id
{
public:
  explicit Init_Edge_source_vertex_id(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_target_vertex_id source_vertex_id(::graph_msgs::msg::Edge::_source_vertex_id_type arg)
  {
    msg_.source_vertex_id = std::move(arg);
    return Init_Edge_target_vertex_id(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_creation_type
{
public:
  explicit Init_Edge_creation_type(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_source_vertex_id creation_type(::graph_msgs::msg::Edge::_creation_type_type arg)
  {
    msg_.creation_type = std::move(arg);
    return Init_Edge_source_vertex_id(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_edge_direction_type
{
public:
  explicit Init_Edge_edge_direction_type(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_creation_type edge_direction_type(::graph_msgs::msg::Edge::_edge_direction_type_type arg)
  {
    msg_.edge_direction_type = std::move(arg);
    return Init_Edge_creation_type(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_type
{
public:
  explicit Init_Edge_type(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_edge_direction_type type(::graph_msgs::msg::Edge::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Edge_edge_direction_type(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_alias
{
public:
  explicit Init_Edge_alias(::graph_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_type alias(::graph_msgs::msg::Edge::_alias_type arg)
  {
    msg_.alias = std::move(arg);
    return Init_Edge_type(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

class Init_Edge_name
{
public:
  Init_Edge_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Edge_alias name(::graph_msgs::msg::Edge::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Edge_alias(msg_);
  }

private:
  ::graph_msgs::msg::Edge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::msg::Edge>()
{
  return graph_msgs::msg::builder::Init_Edge_name();
}

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_

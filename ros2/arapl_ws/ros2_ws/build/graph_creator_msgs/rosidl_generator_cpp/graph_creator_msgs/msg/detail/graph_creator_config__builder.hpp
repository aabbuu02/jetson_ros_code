// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:msg/GraphCreatorConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/msg/detail/graph_creator_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphCreatorConfig_bezier_resolution
{
public:
  explicit Init_GraphCreatorConfig_bezier_resolution(::graph_creator_msgs::msg::GraphCreatorConfig & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::msg::GraphCreatorConfig bezier_resolution(::graph_creator_msgs::msg::GraphCreatorConfig::_bezier_resolution_type arg)
  {
    msg_.bezier_resolution = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorConfig msg_;
};

class Init_GraphCreatorConfig_edge_pose_spacing
{
public:
  explicit Init_GraphCreatorConfig_edge_pose_spacing(::graph_creator_msgs::msg::GraphCreatorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphCreatorConfig_bezier_resolution edge_pose_spacing(::graph_creator_msgs::msg::GraphCreatorConfig::_edge_pose_spacing_type arg)
  {
    msg_.edge_pose_spacing = std::move(arg);
    return Init_GraphCreatorConfig_bezier_resolution(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorConfig msg_;
};

class Init_GraphCreatorConfig_control_pose_scale
{
public:
  explicit Init_GraphCreatorConfig_control_pose_scale(::graph_creator_msgs::msg::GraphCreatorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphCreatorConfig_edge_pose_spacing control_pose_scale(::graph_creator_msgs::msg::GraphCreatorConfig::_control_pose_scale_type arg)
  {
    msg_.control_pose_scale = std::move(arg);
    return Init_GraphCreatorConfig_edge_pose_spacing(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorConfig msg_;
};

class Init_GraphCreatorConfig_vertex_arrow_scale
{
public:
  explicit Init_GraphCreatorConfig_vertex_arrow_scale(::graph_creator_msgs::msg::GraphCreatorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphCreatorConfig_control_pose_scale vertex_arrow_scale(::graph_creator_msgs::msg::GraphCreatorConfig::_vertex_arrow_scale_type arg)
  {
    msg_.vertex_arrow_scale = std::move(arg);
    return Init_GraphCreatorConfig_control_pose_scale(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorConfig msg_;
};

class Init_GraphCreatorConfig_vertex_sphere_scale
{
public:
  Init_GraphCreatorConfig_vertex_sphere_scale()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphCreatorConfig_vertex_arrow_scale vertex_sphere_scale(::graph_creator_msgs::msg::GraphCreatorConfig::_vertex_sphere_scale_type arg)
  {
    msg_.vertex_sphere_scale = std::move(arg);
    return Init_GraphCreatorConfig_vertex_arrow_scale(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::msg::GraphCreatorConfig>()
{
  return graph_creator_msgs::msg::builder::Init_GraphCreatorConfig_vertex_sphere_scale();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__BUILDER_HPP_

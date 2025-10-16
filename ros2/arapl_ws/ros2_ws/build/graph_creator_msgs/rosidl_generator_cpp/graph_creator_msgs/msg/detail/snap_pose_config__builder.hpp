// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:msg/SnapPoseConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/msg/detail/snap_pose_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace msg
{

namespace builder
{

class Init_SnapPoseConfig_orientation_snap_angle
{
public:
  explicit Init_SnapPoseConfig_orientation_snap_angle(::graph_creator_msgs::msg::SnapPoseConfig & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::msg::SnapPoseConfig orientation_snap_angle(::graph_creator_msgs::msg::SnapPoseConfig::_orientation_snap_angle_type arg)
  {
    msg_.orientation_snap_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::msg::SnapPoseConfig msg_;
};

class Init_SnapPoseConfig_position_snap_grid_size
{
public:
  explicit Init_SnapPoseConfig_position_snap_grid_size(::graph_creator_msgs::msg::SnapPoseConfig & msg)
  : msg_(msg)
  {}
  Init_SnapPoseConfig_orientation_snap_angle position_snap_grid_size(::graph_creator_msgs::msg::SnapPoseConfig::_position_snap_grid_size_type arg)
  {
    msg_.position_snap_grid_size = std::move(arg);
    return Init_SnapPoseConfig_orientation_snap_angle(msg_);
  }

private:
  ::graph_creator_msgs::msg::SnapPoseConfig msg_;
};

class Init_SnapPoseConfig_enable_orientation_snap
{
public:
  explicit Init_SnapPoseConfig_enable_orientation_snap(::graph_creator_msgs::msg::SnapPoseConfig & msg)
  : msg_(msg)
  {}
  Init_SnapPoseConfig_position_snap_grid_size enable_orientation_snap(::graph_creator_msgs::msg::SnapPoseConfig::_enable_orientation_snap_type arg)
  {
    msg_.enable_orientation_snap = std::move(arg);
    return Init_SnapPoseConfig_position_snap_grid_size(msg_);
  }

private:
  ::graph_creator_msgs::msg::SnapPoseConfig msg_;
};

class Init_SnapPoseConfig_enable_position_snap
{
public:
  explicit Init_SnapPoseConfig_enable_position_snap(::graph_creator_msgs::msg::SnapPoseConfig & msg)
  : msg_(msg)
  {}
  Init_SnapPoseConfig_enable_orientation_snap enable_position_snap(::graph_creator_msgs::msg::SnapPoseConfig::_enable_position_snap_type arg)
  {
    msg_.enable_position_snap = std::move(arg);
    return Init_SnapPoseConfig_enable_orientation_snap(msg_);
  }

private:
  ::graph_creator_msgs::msg::SnapPoseConfig msg_;
};

class Init_SnapPoseConfig_enable_for_edges
{
public:
  explicit Init_SnapPoseConfig_enable_for_edges(::graph_creator_msgs::msg::SnapPoseConfig & msg)
  : msg_(msg)
  {}
  Init_SnapPoseConfig_enable_position_snap enable_for_edges(::graph_creator_msgs::msg::SnapPoseConfig::_enable_for_edges_type arg)
  {
    msg_.enable_for_edges = std::move(arg);
    return Init_SnapPoseConfig_enable_position_snap(msg_);
  }

private:
  ::graph_creator_msgs::msg::SnapPoseConfig msg_;
};

class Init_SnapPoseConfig_enable_for_vertices
{
public:
  Init_SnapPoseConfig_enable_for_vertices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SnapPoseConfig_enable_for_edges enable_for_vertices(::graph_creator_msgs::msg::SnapPoseConfig::_enable_for_vertices_type arg)
  {
    msg_.enable_for_vertices = std::move(arg);
    return Init_SnapPoseConfig_enable_for_edges(msg_);
  }

private:
  ::graph_creator_msgs::msg::SnapPoseConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::msg::SnapPoseConfig>()
{
  return graph_creator_msgs::msg::builder::Init_SnapPoseConfig_enable_for_vertices();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__BUILDER_HPP_

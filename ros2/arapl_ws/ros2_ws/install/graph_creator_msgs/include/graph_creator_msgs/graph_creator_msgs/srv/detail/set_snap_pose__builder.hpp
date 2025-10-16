// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:srv/SetSnapPose.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_SNAP_POSE__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_SNAP_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/srv/detail/set_snap_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSnapPose_Request_orientation_angle
{
public:
  explicit Init_SetSnapPose_Request_orientation_angle(::graph_creator_msgs::srv::SetSnapPose_Request & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::srv::SetSnapPose_Request orientation_angle(::graph_creator_msgs::srv::SetSnapPose_Request::_orientation_angle_type arg)
  {
    msg_.orientation_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetSnapPose_Request msg_;
};

class Init_SetSnapPose_Request_position_grid_size
{
public:
  explicit Init_SetSnapPose_Request_position_grid_size(::graph_creator_msgs::srv::SetSnapPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetSnapPose_Request_orientation_angle position_grid_size(::graph_creator_msgs::srv::SetSnapPose_Request::_position_grid_size_type arg)
  {
    msg_.position_grid_size = std::move(arg);
    return Init_SetSnapPose_Request_orientation_angle(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetSnapPose_Request msg_;
};

class Init_SetSnapPose_Request_enable_orientation_snap_mode
{
public:
  explicit Init_SetSnapPose_Request_enable_orientation_snap_mode(::graph_creator_msgs::srv::SetSnapPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetSnapPose_Request_position_grid_size enable_orientation_snap_mode(::graph_creator_msgs::srv::SetSnapPose_Request::_enable_orientation_snap_mode_type arg)
  {
    msg_.enable_orientation_snap_mode = std::move(arg);
    return Init_SetSnapPose_Request_position_grid_size(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetSnapPose_Request msg_;
};

class Init_SetSnapPose_Request_enable_position_snap_mode
{
public:
  explicit Init_SetSnapPose_Request_enable_position_snap_mode(::graph_creator_msgs::srv::SetSnapPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetSnapPose_Request_enable_orientation_snap_mode enable_position_snap_mode(::graph_creator_msgs::srv::SetSnapPose_Request::_enable_position_snap_mode_type arg)
  {
    msg_.enable_position_snap_mode = std::move(arg);
    return Init_SetSnapPose_Request_enable_orientation_snap_mode(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetSnapPose_Request msg_;
};

class Init_SetSnapPose_Request_enable_edge_snap_mode
{
public:
  explicit Init_SetSnapPose_Request_enable_edge_snap_mode(::graph_creator_msgs::srv::SetSnapPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetSnapPose_Request_enable_position_snap_mode enable_edge_snap_mode(::graph_creator_msgs::srv::SetSnapPose_Request::_enable_edge_snap_mode_type arg)
  {
    msg_.enable_edge_snap_mode = std::move(arg);
    return Init_SetSnapPose_Request_enable_position_snap_mode(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetSnapPose_Request msg_;
};

class Init_SetSnapPose_Request_enable_vertex_snap_mode
{
public:
  Init_SetSnapPose_Request_enable_vertex_snap_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSnapPose_Request_enable_edge_snap_mode enable_vertex_snap_mode(::graph_creator_msgs::srv::SetSnapPose_Request::_enable_vertex_snap_mode_type arg)
  {
    msg_.enable_vertex_snap_mode = std::move(arg);
    return Init_SetSnapPose_Request_enable_edge_snap_mode(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetSnapPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::SetSnapPose_Request>()
{
  return graph_creator_msgs::srv::builder::Init_SetSnapPose_Request_enable_vertex_snap_mode();
}

}  // namespace graph_creator_msgs


namespace graph_creator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSnapPose_Response_message
{
public:
  explicit Init_SetSnapPose_Response_message(::graph_creator_msgs::srv::SetSnapPose_Response & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::srv::SetSnapPose_Response message(::graph_creator_msgs::srv::SetSnapPose_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetSnapPose_Response msg_;
};

class Init_SetSnapPose_Response_success
{
public:
  Init_SetSnapPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSnapPose_Response_message success(::graph_creator_msgs::srv::SetSnapPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetSnapPose_Response_message(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetSnapPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::SetSnapPose_Response>()
{
  return graph_creator_msgs::srv::builder::Init_SetSnapPose_Response_success();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_SNAP_POSE__BUILDER_HPP_

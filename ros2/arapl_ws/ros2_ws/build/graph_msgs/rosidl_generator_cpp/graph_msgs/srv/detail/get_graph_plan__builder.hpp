// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msgs:srv/GetGraphPlan.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__BUILDER_HPP_
#define GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_msgs/srv/detail/get_graph_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGraphPlan_Request_ignore_path_orientation
{
public:
  explicit Init_GetGraphPlan_Request_ignore_path_orientation(::graph_msgs::srv::GetGraphPlan_Request & msg)
  : msg_(msg)
  {}
  ::graph_msgs::srv::GetGraphPlan_Request ignore_path_orientation(::graph_msgs::srv::GetGraphPlan_Request::_ignore_path_orientation_type arg)
  {
    msg_.ignore_path_orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::srv::GetGraphPlan_Request msg_;
};

class Init_GetGraphPlan_Request_ignore_goal_orientation
{
public:
  explicit Init_GetGraphPlan_Request_ignore_goal_orientation(::graph_msgs::srv::GetGraphPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GetGraphPlan_Request_ignore_path_orientation ignore_goal_orientation(::graph_msgs::srv::GetGraphPlan_Request::_ignore_goal_orientation_type arg)
  {
    msg_.ignore_goal_orientation = std::move(arg);
    return Init_GetGraphPlan_Request_ignore_path_orientation(msg_);
  }

private:
  ::graph_msgs::srv::GetGraphPlan_Request msg_;
};

class Init_GetGraphPlan_Request_target_id
{
public:
  explicit Init_GetGraphPlan_Request_target_id(::graph_msgs::srv::GetGraphPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GetGraphPlan_Request_ignore_goal_orientation target_id(::graph_msgs::srv::GetGraphPlan_Request::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_GetGraphPlan_Request_ignore_goal_orientation(msg_);
  }

private:
  ::graph_msgs::srv::GetGraphPlan_Request msg_;
};

class Init_GetGraphPlan_Request_source_id
{
public:
  Init_GetGraphPlan_Request_source_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGraphPlan_Request_target_id source_id(::graph_msgs::srv::GetGraphPlan_Request::_source_id_type arg)
  {
    msg_.source_id = std::move(arg);
    return Init_GetGraphPlan_Request_target_id(msg_);
  }

private:
  ::graph_msgs::srv::GetGraphPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::srv::GetGraphPlan_Request>()
{
  return graph_msgs::srv::builder::Init_GetGraphPlan_Request_source_id();
}

}  // namespace graph_msgs


namespace graph_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGraphPlan_Response_message
{
public:
  explicit Init_GetGraphPlan_Response_message(::graph_msgs::srv::GetGraphPlan_Response & msg)
  : msg_(msg)
  {}
  ::graph_msgs::srv::GetGraphPlan_Response message(::graph_msgs::srv::GetGraphPlan_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::srv::GetGraphPlan_Response msg_;
};

class Init_GetGraphPlan_Response_success
{
public:
  explicit Init_GetGraphPlan_Response_success(::graph_msgs::srv::GetGraphPlan_Response & msg)
  : msg_(msg)
  {}
  Init_GetGraphPlan_Response_message success(::graph_msgs::srv::GetGraphPlan_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetGraphPlan_Response_message(msg_);
  }

private:
  ::graph_msgs::srv::GetGraphPlan_Response msg_;
};

class Init_GetGraphPlan_Response_plan_distance
{
public:
  explicit Init_GetGraphPlan_Response_plan_distance(::graph_msgs::srv::GetGraphPlan_Response & msg)
  : msg_(msg)
  {}
  Init_GetGraphPlan_Response_success plan_distance(::graph_msgs::srv::GetGraphPlan_Response::_plan_distance_type arg)
  {
    msg_.plan_distance = std::move(arg);
    return Init_GetGraphPlan_Response_success(msg_);
  }

private:
  ::graph_msgs::srv::GetGraphPlan_Response msg_;
};

class Init_GetGraphPlan_Response_plan
{
public:
  explicit Init_GetGraphPlan_Response_plan(::graph_msgs::srv::GetGraphPlan_Response & msg)
  : msg_(msg)
  {}
  Init_GetGraphPlan_Response_plan_distance plan(::graph_msgs::srv::GetGraphPlan_Response::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return Init_GetGraphPlan_Response_plan_distance(msg_);
  }

private:
  ::graph_msgs::srv::GetGraphPlan_Response msg_;
};

class Init_GetGraphPlan_Response_vertices_in_plan
{
public:
  Init_GetGraphPlan_Response_vertices_in_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGraphPlan_Response_plan vertices_in_plan(::graph_msgs::srv::GetGraphPlan_Response::_vertices_in_plan_type arg)
  {
    msg_.vertices_in_plan = std::move(arg);
    return Init_GetGraphPlan_Response_plan(msg_);
  }

private:
  ::graph_msgs::srv::GetGraphPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::srv::GetGraphPlan_Response>()
{
  return graph_msgs::srv::builder::Init_GetGraphPlan_Response_vertices_in_plan();
}

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__BUILDER_HPP_

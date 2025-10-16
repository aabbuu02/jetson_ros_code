// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:srv/SaveGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__SAVE_GRAPH__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__SAVE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/srv/detail/save_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveGraph_Request_file_path
{
public:
  Init_SaveGraph_Request_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::graph_creator_msgs::srv::SaveGraph_Request file_path(::graph_creator_msgs::srv::SaveGraph_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::srv::SaveGraph_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::SaveGraph_Request>()
{
  return graph_creator_msgs::srv::builder::Init_SaveGraph_Request_file_path();
}

}  // namespace graph_creator_msgs


namespace graph_creator_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveGraph_Response_message
{
public:
  explicit Init_SaveGraph_Response_message(::graph_creator_msgs::srv::SaveGraph_Response & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::srv::SaveGraph_Response message(::graph_creator_msgs::srv::SaveGraph_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::srv::SaveGraph_Response msg_;
};

class Init_SaveGraph_Response_success
{
public:
  Init_SaveGraph_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveGraph_Response_message success(::graph_creator_msgs::srv::SaveGraph_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SaveGraph_Response_message(msg_);
  }

private:
  ::graph_creator_msgs::srv::SaveGraph_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::SaveGraph_Response>()
{
  return graph_creator_msgs::srv::builder::Init_SaveGraph_Response_success();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__SAVE_GRAPH__BUILDER_HPP_

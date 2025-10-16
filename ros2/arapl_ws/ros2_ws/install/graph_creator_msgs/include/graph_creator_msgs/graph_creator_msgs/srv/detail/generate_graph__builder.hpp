// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:srv/GenerateGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__GENERATE_GRAPH__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__GENERATE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/srv/detail/generate_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateGraph_Request_generator_config
{
public:
  Init_GenerateGraph_Request_generator_config()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::graph_creator_msgs::srv::GenerateGraph_Request generator_config(::graph_creator_msgs::srv::GenerateGraph_Request::_generator_config_type arg)
  {
    msg_.generator_config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::srv::GenerateGraph_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::GenerateGraph_Request>()
{
  return graph_creator_msgs::srv::builder::Init_GenerateGraph_Request_generator_config();
}

}  // namespace graph_creator_msgs


namespace graph_creator_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateGraph_Response_message
{
public:
  explicit Init_GenerateGraph_Response_message(::graph_creator_msgs::srv::GenerateGraph_Response & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::srv::GenerateGraph_Response message(::graph_creator_msgs::srv::GenerateGraph_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::srv::GenerateGraph_Response msg_;
};

class Init_GenerateGraph_Response_success
{
public:
  Init_GenerateGraph_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateGraph_Response_message success(::graph_creator_msgs::srv::GenerateGraph_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GenerateGraph_Response_message(msg_);
  }

private:
  ::graph_creator_msgs::srv::GenerateGraph_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::GenerateGraph_Response>()
{
  return graph_creator_msgs::srv::builder::Init_GenerateGraph_Response_success();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__GENERATE_GRAPH__BUILDER_HPP_

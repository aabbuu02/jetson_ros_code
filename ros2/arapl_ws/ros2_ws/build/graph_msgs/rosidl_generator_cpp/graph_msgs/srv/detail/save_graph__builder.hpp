// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msgs:srv/SaveGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__SRV__DETAIL__SAVE_GRAPH__BUILDER_HPP_
#define GRAPH_MSGS__SRV__DETAIL__SAVE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_msgs/srv/detail/save_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveGraph_Request_save_graph_url
{
public:
  explicit Init_SaveGraph_Request_save_graph_url(::graph_msgs::srv::SaveGraph_Request & msg)
  : msg_(msg)
  {}
  ::graph_msgs::srv::SaveGraph_Request save_graph_url(::graph_msgs::srv::SaveGraph_Request::_save_graph_url_type arg)
  {
    msg_.save_graph_url = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::srv::SaveGraph_Request msg_;
};

class Init_SaveGraph_Request_graph_file_name
{
public:
  Init_SaveGraph_Request_graph_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveGraph_Request_save_graph_url graph_file_name(::graph_msgs::srv::SaveGraph_Request::_graph_file_name_type arg)
  {
    msg_.graph_file_name = std::move(arg);
    return Init_SaveGraph_Request_save_graph_url(msg_);
  }

private:
  ::graph_msgs::srv::SaveGraph_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::srv::SaveGraph_Request>()
{
  return graph_msgs::srv::builder::Init_SaveGraph_Request_graph_file_name();
}

}  // namespace graph_msgs


namespace graph_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveGraph_Response_result
{
public:
  explicit Init_SaveGraph_Response_result(::graph_msgs::srv::SaveGraph_Response & msg)
  : msg_(msg)
  {}
  ::graph_msgs::srv::SaveGraph_Response result(::graph_msgs::srv::SaveGraph_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::srv::SaveGraph_Response msg_;
};

class Init_SaveGraph_Response_graph
{
public:
  Init_SaveGraph_Response_graph()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveGraph_Response_result graph(::graph_msgs::srv::SaveGraph_Response::_graph_type arg)
  {
    msg_.graph = std::move(arg);
    return Init_SaveGraph_Response_result(msg_);
  }

private:
  ::graph_msgs::srv::SaveGraph_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::srv::SaveGraph_Response>()
{
  return graph_msgs::srv::builder::Init_SaveGraph_Response_graph();
}

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__SRV__DETAIL__SAVE_GRAPH__BUILDER_HPP_

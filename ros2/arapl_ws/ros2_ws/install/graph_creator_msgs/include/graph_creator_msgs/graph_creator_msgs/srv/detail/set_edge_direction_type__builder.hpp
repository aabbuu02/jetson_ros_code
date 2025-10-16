// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:srv/SetEdgeDirectionType.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_EDGE_DIRECTION_TYPE__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_EDGE_DIRECTION_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/srv/detail/set_edge_direction_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEdgeDirectionType_Request_edge_direction_creation_type
{
public:
  Init_SetEdgeDirectionType_Request_edge_direction_creation_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::graph_creator_msgs::srv::SetEdgeDirectionType_Request edge_direction_creation_type(::graph_creator_msgs::srv::SetEdgeDirectionType_Request::_edge_direction_creation_type_type arg)
  {
    msg_.edge_direction_creation_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetEdgeDirectionType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::SetEdgeDirectionType_Request>()
{
  return graph_creator_msgs::srv::builder::Init_SetEdgeDirectionType_Request_edge_direction_creation_type();
}

}  // namespace graph_creator_msgs


namespace graph_creator_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEdgeDirectionType_Response_message
{
public:
  explicit Init_SetEdgeDirectionType_Response_message(::graph_creator_msgs::srv::SetEdgeDirectionType_Response & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::srv::SetEdgeDirectionType_Response message(::graph_creator_msgs::srv::SetEdgeDirectionType_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetEdgeDirectionType_Response msg_;
};

class Init_SetEdgeDirectionType_Response_success
{
public:
  Init_SetEdgeDirectionType_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEdgeDirectionType_Response_message success(::graph_creator_msgs::srv::SetEdgeDirectionType_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetEdgeDirectionType_Response_message(msg_);
  }

private:
  ::graph_creator_msgs::srv::SetEdgeDirectionType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::SetEdgeDirectionType_Response>()
{
  return graph_creator_msgs::srv::builder::Init_SetEdgeDirectionType_Response_success();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_EDGE_DIRECTION_TYPE__BUILDER_HPP_

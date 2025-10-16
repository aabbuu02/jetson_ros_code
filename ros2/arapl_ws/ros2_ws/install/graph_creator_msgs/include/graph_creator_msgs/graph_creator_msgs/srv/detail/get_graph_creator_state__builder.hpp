// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:srv/GetGraphCreatorState.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__GET_GRAPH_CREATOR_STATE__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__GET_GRAPH_CREATOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/srv/detail/get_graph_creator_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::GetGraphCreatorState_Request>()
{
  return ::graph_creator_msgs::srv::GetGraphCreatorState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace graph_creator_msgs


namespace graph_creator_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGraphCreatorState_Response_message
{
public:
  explicit Init_GetGraphCreatorState_Response_message(::graph_creator_msgs::srv::GetGraphCreatorState_Response & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::srv::GetGraphCreatorState_Response message(::graph_creator_msgs::srv::GetGraphCreatorState_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::srv::GetGraphCreatorState_Response msg_;
};

class Init_GetGraphCreatorState_Response_success
{
public:
  explicit Init_GetGraphCreatorState_Response_success(::graph_creator_msgs::srv::GetGraphCreatorState_Response & msg)
  : msg_(msg)
  {}
  Init_GetGraphCreatorState_Response_message success(::graph_creator_msgs::srv::GetGraphCreatorState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetGraphCreatorState_Response_message(msg_);
  }

private:
  ::graph_creator_msgs::srv::GetGraphCreatorState_Response msg_;
};

class Init_GetGraphCreatorState_Response_state
{
public:
  Init_GetGraphCreatorState_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGraphCreatorState_Response_success state(::graph_creator_msgs::srv::GetGraphCreatorState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_GetGraphCreatorState_Response_success(msg_);
  }

private:
  ::graph_creator_msgs::srv::GetGraphCreatorState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::srv::GetGraphCreatorState_Response>()
{
  return graph_creator_msgs::srv::builder::Init_GetGraphCreatorState_Response_state();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__GET_GRAPH_CREATOR_STATE__BUILDER_HPP_

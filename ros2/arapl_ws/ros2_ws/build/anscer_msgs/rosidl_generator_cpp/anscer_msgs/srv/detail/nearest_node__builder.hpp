// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/NearestNode.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__NEAREST_NODE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__NEAREST_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/nearest_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::NearestNode_Request>()
{
  return ::anscer_msgs::srv::NearestNode_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_NearestNode_Response_id
{
public:
  Init_NearestNode_Response_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::NearestNode_Response id(::anscer_msgs::srv::NearestNode_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::NearestNode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::NearestNode_Response>()
{
  return anscer_msgs::srv::builder::Init_NearestNode_Response_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__NEAREST_NODE__BUILDER_HPP_

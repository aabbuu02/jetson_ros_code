// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/Undock.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__UNDOCK__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__UNDOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/undock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_Undock_Request_undock_call
{
public:
  Init_Undock_Request_undock_call()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::Undock_Request undock_call(::anscer_msgs::srv::Undock_Request::_undock_call_type arg)
  {
    msg_.undock_call = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::Undock_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::Undock_Request>()
{
  return anscer_msgs::srv::builder::Init_Undock_Request_undock_call();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_Undock_Response_result
{
public:
  Init_Undock_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::Undock_Response result(::anscer_msgs::srv::Undock_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::Undock_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::Undock_Response>()
{
  return anscer_msgs::srv::builder::Init_Undock_Response_result();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__UNDOCK__BUILDER_HPP_

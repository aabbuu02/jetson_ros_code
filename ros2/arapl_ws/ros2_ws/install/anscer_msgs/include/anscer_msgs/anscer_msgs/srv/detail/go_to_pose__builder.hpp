// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/GoToPose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GO_TO_POSE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__GO_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/go_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_GoToPose_Request_level
{
public:
  explicit Init_GoToPose_Request_level(::anscer_msgs::srv::GoToPose_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::GoToPose_Request level(::anscer_msgs::srv::GoToPose_Request::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::GoToPose_Request msg_;
};

class Init_GoToPose_Request_initate
{
public:
  Init_GoToPose_Request_initate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPose_Request_level initate(::anscer_msgs::srv::GoToPose_Request::_initate_type arg)
  {
    msg_.initate = std::move(arg);
    return Init_GoToPose_Request_level(msg_);
  }

private:
  ::anscer_msgs::srv::GoToPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::GoToPose_Request>()
{
  return anscer_msgs::srv::builder::Init_GoToPose_Request_initate();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_GoToPose_Response_status
{
public:
  Init_GoToPose_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::GoToPose_Response status(::anscer_msgs::srv::GoToPose_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::GoToPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::GoToPose_Response>()
{
  return anscer_msgs::srv::builder::Init_GoToPose_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__GO_TO_POSE__BUILDER_HPP_

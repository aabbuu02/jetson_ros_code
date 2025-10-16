// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/GlobalPath.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GLOBAL_PATH__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__GLOBAL_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/global_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_GlobalPath_Request_initate
{
public:
  Init_GlobalPath_Request_initate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::GlobalPath_Request initate(::anscer_msgs::srv::GlobalPath_Request::_initate_type arg)
  {
    msg_.initate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::GlobalPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::GlobalPath_Request>()
{
  return anscer_msgs::srv::builder::Init_GlobalPath_Request_initate();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_GlobalPath_Response_global_path
{
public:
  Init_GlobalPath_Response_global_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::GlobalPath_Response global_path(::anscer_msgs::srv::GlobalPath_Response::_global_path_type arg)
  {
    msg_.global_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::GlobalPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::GlobalPath_Response>()
{
  return anscer_msgs::srv::builder::Init_GlobalPath_Response_global_path();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__GLOBAL_PATH__BUILDER_HPP_

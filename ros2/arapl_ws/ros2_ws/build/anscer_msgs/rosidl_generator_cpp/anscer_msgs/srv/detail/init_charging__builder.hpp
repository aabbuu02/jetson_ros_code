// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/InitCharging.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__INIT_CHARGING__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__INIT_CHARGING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/init_charging__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_InitCharging_Request_dock
{
public:
  Init_InitCharging_Request_dock()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::InitCharging_Request dock(::anscer_msgs::srv::InitCharging_Request::_dock_type arg)
  {
    msg_.dock = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::InitCharging_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::InitCharging_Request>()
{
  return anscer_msgs::srv::builder::Init_InitCharging_Request_dock();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_InitCharging_Response_result
{
public:
  Init_InitCharging_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::InitCharging_Response result(::anscer_msgs::srv::InitCharging_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::InitCharging_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::InitCharging_Response>()
{
  return anscer_msgs::srv::builder::Init_InitCharging_Response_result();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__INIT_CHARGING__BUILDER_HPP_

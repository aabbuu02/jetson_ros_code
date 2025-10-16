// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/SetZone.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SET_ZONE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SET_ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/set_zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SetZone_Request_zone_points
{
public:
  Init_SetZone_Request_zone_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::SetZone_Request zone_points(::anscer_msgs::srv::SetZone_Request::_zone_points_type arg)
  {
    msg_.zone_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SetZone_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SetZone_Request>()
{
  return anscer_msgs::srv::builder::Init_SetZone_Request_zone_points();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SetZone_Response_status
{
public:
  Init_SetZone_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::SetZone_Response status(::anscer_msgs::srv::SetZone_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SetZone_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SetZone_Response>()
{
  return anscer_msgs::srv::builder::Init_SetZone_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SET_ZONE__BUILDER_HPP_

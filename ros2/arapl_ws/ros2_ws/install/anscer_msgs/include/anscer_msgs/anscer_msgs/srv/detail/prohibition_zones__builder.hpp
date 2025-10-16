// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/ProhibitionZones.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__PROHIBITION_ZONES__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__PROHIBITION_ZONES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/prohibition_zones__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ProhibitionZones_Request_prohibition_zones
{
public:
  Init_ProhibitionZones_Request_prohibition_zones()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ProhibitionZones_Request prohibition_zones(::anscer_msgs::srv::ProhibitionZones_Request::_prohibition_zones_type arg)
  {
    msg_.prohibition_zones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ProhibitionZones_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ProhibitionZones_Request>()
{
  return anscer_msgs::srv::builder::Init_ProhibitionZones_Request_prohibition_zones();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ProhibitionZones_Response_status
{
public:
  Init_ProhibitionZones_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ProhibitionZones_Response status(::anscer_msgs::srv::ProhibitionZones_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ProhibitionZones_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ProhibitionZones_Response>()
{
  return anscer_msgs::srv::builder::Init_ProhibitionZones_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__PROHIBITION_ZONES__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/ZoneValues.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__ZONE_VALUES__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__ZONE_VALUES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/zone_values__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ZoneValues_Request_zone_values
{
public:
  Init_ZoneValues_Request_zone_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ZoneValues_Request zone_values(::anscer_msgs::srv::ZoneValues_Request::_zone_values_type arg)
  {
    msg_.zone_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ZoneValues_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ZoneValues_Request>()
{
  return anscer_msgs::srv::builder::Init_ZoneValues_Request_zone_values();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ZoneValues_Response_status
{
public:
  Init_ZoneValues_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ZoneValues_Response status(::anscer_msgs::srv::ZoneValues_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ZoneValues_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ZoneValues_Response>()
{
  return anscer_msgs::srv::builder::Init_ZoneValues_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__ZONE_VALUES__BUILDER_HPP_

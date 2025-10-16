// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/SafetyZone.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAFETY_ZONE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAFETY_ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/safety_zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SafetyZone_Request_safety_zone
{
public:
  Init_SafetyZone_Request_safety_zone()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::SafetyZone_Request safety_zone(::anscer_msgs::srv::SafetyZone_Request::_safety_zone_type arg)
  {
    msg_.safety_zone = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SafetyZone_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SafetyZone_Request>()
{
  return anscer_msgs::srv::builder::Init_SafetyZone_Request_safety_zone();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SafetyZone_Response>()
{
  return ::anscer_msgs::srv::SafetyZone_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SAFETY_ZONE__BUILDER_HPP_

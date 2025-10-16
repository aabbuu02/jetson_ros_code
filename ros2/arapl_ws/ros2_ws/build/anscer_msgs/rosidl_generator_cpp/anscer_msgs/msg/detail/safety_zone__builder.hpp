// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/SafetyZone.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SAFETY_ZONE__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__SAFETY_ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/safety_zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyZone_rear_zone
{
public:
  explicit Init_SafetyZone_rear_zone(::anscer_msgs::msg::SafetyZone & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::SafetyZone rear_zone(::anscer_msgs::msg::SafetyZone::_rear_zone_type arg)
  {
    msg_.rear_zone = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::SafetyZone msg_;
};

class Init_SafetyZone_front_zone
{
public:
  Init_SafetyZone_front_zone()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyZone_rear_zone front_zone(::anscer_msgs::msg::SafetyZone::_front_zone_type arg)
  {
    msg_.front_zone = std::move(arg);
    return Init_SafetyZone_rear_zone(msg_);
  }

private:
  ::anscer_msgs::msg::SafetyZone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::SafetyZone>()
{
  return anscer_msgs::msg::builder::Init_SafetyZone_front_zone();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__SAFETY_ZONE__BUILDER_HPP_

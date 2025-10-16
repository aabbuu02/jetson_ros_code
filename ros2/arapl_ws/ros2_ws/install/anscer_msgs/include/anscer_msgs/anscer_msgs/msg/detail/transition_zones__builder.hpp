// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/TransitionZones.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TRANSITION_ZONES__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__TRANSITION_ZONES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/transition_zones__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_TransitionZones_zones
{
public:
  Init_TransitionZones_zones()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::TransitionZones zones(::anscer_msgs::msg::TransitionZones::_zones_type arg)
  {
    msg_.zones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::TransitionZones msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::TransitionZones>()
{
  return anscer_msgs::msg::builder::Init_TransitionZones_zones();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__TRANSITION_ZONES__BUILDER_HPP_

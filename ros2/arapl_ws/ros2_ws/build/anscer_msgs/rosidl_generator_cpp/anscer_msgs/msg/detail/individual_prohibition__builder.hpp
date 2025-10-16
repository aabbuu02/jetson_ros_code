// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/IndividualProhibition.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/individual_prohibition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_IndividualProhibition_zone
{
public:
  Init_IndividualProhibition_zone()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::IndividualProhibition zone(::anscer_msgs::msg::IndividualProhibition::_zone_type arg)
  {
    msg_.zone = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::IndividualProhibition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::IndividualProhibition>()
{
  return anscer_msgs::msg::builder::Init_IndividualProhibition_zone();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/StaticLidars.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__STATIC_LIDARS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__STATIC_LIDARS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/static_lidars__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_StaticLidars_point
{
public:
  explicit Init_StaticLidars_point(::anscer_msgs::msg::StaticLidars & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::StaticLidars point(::anscer_msgs::msg::StaticLidars::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::StaticLidars msg_;
};

class Init_StaticLidars_header
{
public:
  Init_StaticLidars_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaticLidars_point header(::anscer_msgs::msg::StaticLidars::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StaticLidars_point(msg_);
  }

private:
  ::anscer_msgs::msg::StaticLidars msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::StaticLidars>()
{
  return anscer_msgs::msg::builder::Init_StaticLidars_header();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__STATIC_LIDARS__BUILDER_HPP_

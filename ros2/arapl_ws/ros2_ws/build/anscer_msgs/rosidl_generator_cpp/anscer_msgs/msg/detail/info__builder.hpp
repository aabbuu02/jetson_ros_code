// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INFO__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Info_keyvalues
{
public:
  explicit Init_Info_keyvalues(::anscer_msgs::msg::Info & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Info keyvalues(::anscer_msgs::msg::Info::_keyvalues_type arg)
  {
    msg_.keyvalues = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Info msg_;
};

class Init_Info_header
{
public:
  Init_Info_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Info_keyvalues header(::anscer_msgs::msg::Info::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Info_keyvalues(msg_);
  }

private:
  ::anscer_msgs::msg::Info msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Info>()
{
  return anscer_msgs::msg::builder::Init_Info_header();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__INFO__BUILDER_HPP_

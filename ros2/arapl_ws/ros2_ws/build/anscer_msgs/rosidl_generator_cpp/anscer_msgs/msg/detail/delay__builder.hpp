// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Delay.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DELAY__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__DELAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/delay__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Delay_map_name
{
public:
  explicit Init_Delay_map_name(::anscer_msgs::msg::Delay & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Delay map_name(::anscer_msgs::msg::Delay::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Delay msg_;
};

class Init_Delay_value
{
public:
  explicit Init_Delay_value(::anscer_msgs::msg::Delay & msg)
  : msg_(msg)
  {}
  Init_Delay_map_name value(::anscer_msgs::msg::Delay::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_Delay_map_name(msg_);
  }

private:
  ::anscer_msgs::msg::Delay msg_;
};

class Init_Delay_name
{
public:
  Init_Delay_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Delay_value name(::anscer_msgs::msg::Delay::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Delay_value(msg_);
  }

private:
  ::anscer_msgs::msg::Delay msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Delay>()
{
  return anscer_msgs::msg::builder::Init_Delay_name();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__DELAY__BUILDER_HPP_

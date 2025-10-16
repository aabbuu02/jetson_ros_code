// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Indication.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INDICATION__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__INDICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/indication__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Indication_priority
{
public:
  explicit Init_Indication_priority(::anscer_msgs::msg::Indication & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Indication priority(::anscer_msgs::msg::Indication::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Indication msg_;
};

class Init_Indication_buzzer_mode
{
public:
  explicit Init_Indication_buzzer_mode(::anscer_msgs::msg::Indication & msg)
  : msg_(msg)
  {}
  Init_Indication_priority buzzer_mode(::anscer_msgs::msg::Indication::_buzzer_mode_type arg)
  {
    msg_.buzzer_mode = std::move(arg);
    return Init_Indication_priority(msg_);
  }

private:
  ::anscer_msgs::msg::Indication msg_;
};

class Init_Indication_buzzer
{
public:
  explicit Init_Indication_buzzer(::anscer_msgs::msg::Indication & msg)
  : msg_(msg)
  {}
  Init_Indication_buzzer_mode buzzer(::anscer_msgs::msg::Indication::_buzzer_type arg)
  {
    msg_.buzzer = std::move(arg);
    return Init_Indication_buzzer_mode(msg_);
  }

private:
  ::anscer_msgs::msg::Indication msg_;
};

class Init_Indication_color_mode
{
public:
  explicit Init_Indication_color_mode(::anscer_msgs::msg::Indication & msg)
  : msg_(msg)
  {}
  Init_Indication_buzzer color_mode(::anscer_msgs::msg::Indication::_color_mode_type arg)
  {
    msg_.color_mode = std::move(arg);
    return Init_Indication_buzzer(msg_);
  }

private:
  ::anscer_msgs::msg::Indication msg_;
};

class Init_Indication_color
{
public:
  Init_Indication_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Indication_color_mode color(::anscer_msgs::msg::Indication::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Indication_color_mode(msg_);
  }

private:
  ::anscer_msgs::msg::Indication msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Indication>()
{
  return anscer_msgs::msg::builder::Init_Indication_color();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__INDICATION__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/ACRControl.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/acr_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_ACRControl_whole_bin_number
{
public:
  explicit Init_ACRControl_whole_bin_number(::anscer_msgs::msg::ACRControl & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::ACRControl whole_bin_number(::anscer_msgs::msg::ACRControl::_whole_bin_number_type arg)
  {
    msg_.whole_bin_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::ACRControl msg_;
};

class Init_ACRControl_bar_code_number
{
public:
  explicit Init_ACRControl_bar_code_number(::anscer_msgs::msg::ACRControl & msg)
  : msg_(msg)
  {}
  Init_ACRControl_whole_bin_number bar_code_number(::anscer_msgs::msg::ACRControl::_bar_code_number_type arg)
  {
    msg_.bar_code_number = std::move(arg);
    return Init_ACRControl_whole_bin_number(msg_);
  }

private:
  ::anscer_msgs::msg::ACRControl msg_;
};

class Init_ACRControl_acr_action
{
public:
  explicit Init_ACRControl_acr_action(::anscer_msgs::msg::ACRControl & msg)
  : msg_(msg)
  {}
  Init_ACRControl_bar_code_number acr_action(::anscer_msgs::msg::ACRControl::_acr_action_type arg)
  {
    msg_.acr_action = std::move(arg);
    return Init_ACRControl_bar_code_number(msg_);
  }

private:
  ::anscer_msgs::msg::ACRControl msg_;
};

class Init_ACRControl_target_shelf
{
public:
  explicit Init_ACRControl_target_shelf(::anscer_msgs::msg::ACRControl & msg)
  : msg_(msg)
  {}
  Init_ACRControl_acr_action target_shelf(::anscer_msgs::msg::ACRControl::_target_shelf_type arg)
  {
    msg_.target_shelf = std::move(arg);
    return Init_ACRControl_acr_action(msg_);
  }

private:
  ::anscer_msgs::msg::ACRControl msg_;
};

class Init_ACRControl_acr_shelf
{
public:
  Init_ACRControl_acr_shelf()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ACRControl_target_shelf acr_shelf(::anscer_msgs::msg::ACRControl::_acr_shelf_type arg)
  {
    msg_.acr_shelf = std::move(arg);
    return Init_ACRControl_target_shelf(msg_);
  }

private:
  ::anscer_msgs::msg::ACRControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::ACRControl>()
{
  return anscer_msgs::msg::builder::Init_ACRControl_acr_shelf();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__BUILDER_HPP_

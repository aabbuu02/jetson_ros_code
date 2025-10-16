// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/key_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyValue_errorlevel
{
public:
  explicit Init_KeyValue_errorlevel(::anscer_msgs::msg::KeyValue & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::KeyValue errorlevel(::anscer_msgs::msg::KeyValue::_errorlevel_type arg)
  {
    msg_.errorlevel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::KeyValue msg_;
};

class Init_KeyValue_unit
{
public:
  explicit Init_KeyValue_unit(::anscer_msgs::msg::KeyValue & msg)
  : msg_(msg)
  {}
  Init_KeyValue_errorlevel unit(::anscer_msgs::msg::KeyValue::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_KeyValue_errorlevel(msg_);
  }

private:
  ::anscer_msgs::msg::KeyValue msg_;
};

class Init_KeyValue_value
{
public:
  explicit Init_KeyValue_value(::anscer_msgs::msg::KeyValue & msg)
  : msg_(msg)
  {}
  Init_KeyValue_unit value(::anscer_msgs::msg::KeyValue::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_KeyValue_unit(msg_);
  }

private:
  ::anscer_msgs::msg::KeyValue msg_;
};

class Init_KeyValue_key
{
public:
  Init_KeyValue_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyValue_value key(::anscer_msgs::msg::KeyValue::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyValue_value(msg_);
  }

private:
  ::anscer_msgs::msg::KeyValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::KeyValue>()
{
  return anscer_msgs::msg::builder::Init_KeyValue_key();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_

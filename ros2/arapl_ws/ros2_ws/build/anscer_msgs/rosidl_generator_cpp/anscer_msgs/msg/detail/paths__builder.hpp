// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Paths.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__PATHS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__PATHS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/paths__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Paths_global_path
{
public:
  Init_Paths_global_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::Paths global_path(::anscer_msgs::msg::Paths::_global_path_type arg)
  {
    msg_.global_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Paths msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Paths>()
{
  return anscer_msgs::msg::builder::Init_Paths_global_path();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__PATHS__BUILDER_HPP_

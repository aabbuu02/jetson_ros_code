// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/StaticLidar.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__STATIC_LIDAR__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__STATIC_LIDAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/static_lidar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_StaticLidar_data
{
public:
  explicit Init_StaticLidar_data(::anscer_msgs::msg::StaticLidar & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::StaticLidar data(::anscer_msgs::msg::StaticLidar::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::StaticLidar msg_;
};

class Init_StaticLidar_header
{
public:
  Init_StaticLidar_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaticLidar_data header(::anscer_msgs::msg::StaticLidar::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StaticLidar_data(msg_);
  }

private:
  ::anscer_msgs::msg::StaticLidar msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::StaticLidar>()
{
  return anscer_msgs::msg::builder::Init_StaticLidar_header();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__STATIC_LIDAR__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/ZoneInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ZONE_INFO__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__ZONE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/zone_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_ZoneInfo_coordinates
{
public:
  explicit Init_ZoneInfo_coordinates(::anscer_msgs::msg::ZoneInfo & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::ZoneInfo coordinates(::anscer_msgs::msg::ZoneInfo::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::ZoneInfo msg_;
};

class Init_ZoneInfo_index
{
public:
  Init_ZoneInfo_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ZoneInfo_coordinates index(::anscer_msgs::msg::ZoneInfo::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_ZoneInfo_coordinates(msg_);
  }

private:
  ::anscer_msgs::msg::ZoneInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::ZoneInfo>()
{
  return anscer_msgs::msg::builder::Init_ZoneInfo_index();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__ZONE_INFO__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/ZoneInformation.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/zone_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_ZoneInformation_speed_factor
{
public:
  explicit Init_ZoneInformation_speed_factor(::anscer_msgs::msg::ZoneInformation & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::ZoneInformation speed_factor(::anscer_msgs::msg::ZoneInformation::_speed_factor_type arg)
  {
    msg_.speed_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::ZoneInformation msg_;
};

class Init_ZoneInformation_indication_info
{
public:
  Init_ZoneInformation_indication_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ZoneInformation_speed_factor indication_info(::anscer_msgs::msg::ZoneInformation::_indication_info_type arg)
  {
    msg_.indication_info = std::move(arg);
    return Init_ZoneInformation_speed_factor(msg_);
  }

private:
  ::anscer_msgs::msg::ZoneInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::ZoneInformation>()
{
  return anscer_msgs::msg::builder::Init_ZoneInformation_indication_info();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__BUILDER_HPP_

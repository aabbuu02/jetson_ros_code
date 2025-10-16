// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/BatteryInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__BATTERY_INFO__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__BATTERY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/battery_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryInfo_current
{
public:
  explicit Init_BatteryInfo_current(::anscer_msgs::msg::BatteryInfo & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::BatteryInfo current(::anscer_msgs::msg::BatteryInfo::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryInfo msg_;
};

class Init_BatteryInfo_percentage
{
public:
  explicit Init_BatteryInfo_percentage(::anscer_msgs::msg::BatteryInfo & msg)
  : msg_(msg)
  {}
  Init_BatteryInfo_current percentage(::anscer_msgs::msg::BatteryInfo::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return Init_BatteryInfo_current(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryInfo msg_;
};

class Init_BatteryInfo_voltage
{
public:
  Init_BatteryInfo_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryInfo_percentage voltage(::anscer_msgs::msg::BatteryInfo::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryInfo_percentage(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::BatteryInfo>()
{
  return anscer_msgs::msg::builder::Init_BatteryInfo_voltage();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__BATTERY_INFO__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryState_current
{
public:
  explicit Init_BatteryState_current(::anscer_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::BatteryState current(::anscer_msgs::msg::BatteryState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_voltage
{
public:
  Init_BatteryState_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryState_current voltage(::anscer_msgs::msg::BatteryState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryState_current(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::BatteryState>()
{
  return anscer_msgs::msg::builder::Init_BatteryState_voltage();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

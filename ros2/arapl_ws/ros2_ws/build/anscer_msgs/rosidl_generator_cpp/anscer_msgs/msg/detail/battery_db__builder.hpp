// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/BatteryDB.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__BATTERY_DB__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__BATTERY_DB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/battery_db__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryDB_state_of_charge
{
public:
  explicit Init_BatteryDB_state_of_charge(::anscer_msgs::msg::BatteryDB & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::BatteryDB state_of_charge(::anscer_msgs::msg::BatteryDB::_state_of_charge_type arg)
  {
    msg_.state_of_charge = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryDB msg_;
};

class Init_BatteryDB_angular_velocity
{
public:
  explicit Init_BatteryDB_angular_velocity(::anscer_msgs::msg::BatteryDB & msg)
  : msg_(msg)
  {}
  Init_BatteryDB_state_of_charge angular_velocity(::anscer_msgs::msg::BatteryDB::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_BatteryDB_state_of_charge(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryDB msg_;
};

class Init_BatteryDB_linear_velocity
{
public:
  explicit Init_BatteryDB_linear_velocity(::anscer_msgs::msg::BatteryDB & msg)
  : msg_(msg)
  {}
  Init_BatteryDB_angular_velocity linear_velocity(::anscer_msgs::msg::BatteryDB::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_BatteryDB_angular_velocity(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryDB msg_;
};

class Init_BatteryDB_current
{
public:
  explicit Init_BatteryDB_current(::anscer_msgs::msg::BatteryDB & msg)
  : msg_(msg)
  {}
  Init_BatteryDB_linear_velocity current(::anscer_msgs::msg::BatteryDB::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BatteryDB_linear_velocity(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryDB msg_;
};

class Init_BatteryDB_voltage
{
public:
  explicit Init_BatteryDB_voltage(::anscer_msgs::msg::BatteryDB & msg)
  : msg_(msg)
  {}
  Init_BatteryDB_current voltage(::anscer_msgs::msg::BatteryDB::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryDB_current(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryDB msg_;
};

class Init_BatteryDB_capacity
{
public:
  explicit Init_BatteryDB_capacity(::anscer_msgs::msg::BatteryDB & msg)
  : msg_(msg)
  {}
  Init_BatteryDB_voltage capacity(::anscer_msgs::msg::BatteryDB::_capacity_type arg)
  {
    msg_.capacity = std::move(arg);
    return Init_BatteryDB_voltage(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryDB msg_;
};

class Init_BatteryDB_timestamp
{
public:
  Init_BatteryDB_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryDB_capacity timestamp(::anscer_msgs::msg::BatteryDB::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BatteryDB_capacity(msg_);
  }

private:
  ::anscer_msgs::msg::BatteryDB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::BatteryDB>()
{
  return anscer_msgs::msg::builder::Init_BatteryDB_timestamp();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__BATTERY_DB__BUILDER_HPP_

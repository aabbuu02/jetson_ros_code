// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/ChargeInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/charge_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_ChargeInfo_ignore_percentage
{
public:
  explicit Init_ChargeInfo_ignore_percentage(::anscer_msgs::msg::ChargeInfo & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::ChargeInfo ignore_percentage(::anscer_msgs::msg::ChargeInfo::_ignore_percentage_type arg)
  {
    msg_.ignore_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::ChargeInfo msg_;
};

class Init_ChargeInfo_charge_percentage
{
public:
  explicit Init_ChargeInfo_charge_percentage(::anscer_msgs::msg::ChargeInfo & msg)
  : msg_(msg)
  {}
  Init_ChargeInfo_ignore_percentage charge_percentage(::anscer_msgs::msg::ChargeInfo::_charge_percentage_type arg)
  {
    msg_.charge_percentage = std::move(arg);
    return Init_ChargeInfo_ignore_percentage(msg_);
  }

private:
  ::anscer_msgs::msg::ChargeInfo msg_;
};

class Init_ChargeInfo_ignore_time
{
public:
  explicit Init_ChargeInfo_ignore_time(::anscer_msgs::msg::ChargeInfo & msg)
  : msg_(msg)
  {}
  Init_ChargeInfo_charge_percentage ignore_time(::anscer_msgs::msg::ChargeInfo::_ignore_time_type arg)
  {
    msg_.ignore_time = std::move(arg);
    return Init_ChargeInfo_charge_percentage(msg_);
  }

private:
  ::anscer_msgs::msg::ChargeInfo msg_;
};

class Init_ChargeInfo_charge_time
{
public:
  explicit Init_ChargeInfo_charge_time(::anscer_msgs::msg::ChargeInfo & msg)
  : msg_(msg)
  {}
  Init_ChargeInfo_ignore_time charge_time(::anscer_msgs::msg::ChargeInfo::_charge_time_type arg)
  {
    msg_.charge_time = std::move(arg);
    return Init_ChargeInfo_ignore_time(msg_);
  }

private:
  ::anscer_msgs::msg::ChargeInfo msg_;
};

class Init_ChargeInfo_charger_activate
{
public:
  Init_ChargeInfo_charger_activate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeInfo_charge_time charger_activate(::anscer_msgs::msg::ChargeInfo::_charger_activate_type arg)
  {
    msg_.charger_activate = std::move(arg);
    return Init_ChargeInfo_charge_time(msg_);
  }

private:
  ::anscer_msgs::msg::ChargeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::ChargeInfo>()
{
  return anscer_msgs::msg::builder::Init_ChargeInfo_charger_activate();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/ChargingOverride.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__CHARGING_OVERRIDE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__CHARGING_OVERRIDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/charging_override__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ChargingOverride_Request_charge_override
{
public:
  Init_ChargingOverride_Request_charge_override()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ChargingOverride_Request charge_override(::anscer_msgs::srv::ChargingOverride_Request::_charge_override_type arg)
  {
    msg_.charge_override = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ChargingOverride_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ChargingOverride_Request>()
{
  return anscer_msgs::srv::builder::Init_ChargingOverride_Request_charge_override();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ChargingOverride_Response_status
{
public:
  Init_ChargingOverride_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ChargingOverride_Response status(::anscer_msgs::srv::ChargingOverride_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ChargingOverride_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ChargingOverride_Response>()
{
  return anscer_msgs::srv::builder::Init_ChargingOverride_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__CHARGING_OVERRIDE__BUILDER_HPP_

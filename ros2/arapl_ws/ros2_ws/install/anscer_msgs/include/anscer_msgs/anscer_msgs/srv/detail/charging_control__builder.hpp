// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/ChargingControl.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__CHARGING_CONTROL__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__CHARGING_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/charging_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ChargingControl_Request_charge_initate
{
public:
  Init_ChargingControl_Request_charge_initate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ChargingControl_Request charge_initate(::anscer_msgs::srv::ChargingControl_Request::_charge_initate_type arg)
  {
    msg_.charge_initate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ChargingControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ChargingControl_Request>()
{
  return anscer_msgs::srv::builder::Init_ChargingControl_Request_charge_initate();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ChargingControl_Response_status
{
public:
  Init_ChargingControl_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ChargingControl_Response status(::anscer_msgs::srv::ChargingControl_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ChargingControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ChargingControl_Response>()
{
  return anscer_msgs::srv::builder::Init_ChargingControl_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__CHARGING_CONTROL__BUILDER_HPP_

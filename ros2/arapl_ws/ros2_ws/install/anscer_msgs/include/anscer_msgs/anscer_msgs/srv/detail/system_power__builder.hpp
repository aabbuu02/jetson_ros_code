// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/SystemPower.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SYSTEM_POWER__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SYSTEM_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/system_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SystemPower_Request_power_option
{
public:
  Init_SystemPower_Request_power_option()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::SystemPower_Request power_option(::anscer_msgs::srv::SystemPower_Request::_power_option_type arg)
  {
    msg_.power_option = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SystemPower_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SystemPower_Request>()
{
  return anscer_msgs::srv::builder::Init_SystemPower_Request_power_option();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SystemPower_Response>()
{
  return ::anscer_msgs::srv::SystemPower_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SYSTEM_POWER__BUILDER_HPP_

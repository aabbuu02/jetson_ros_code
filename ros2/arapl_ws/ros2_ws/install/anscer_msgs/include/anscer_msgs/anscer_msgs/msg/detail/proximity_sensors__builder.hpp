// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/ProximitySensors.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__PROXIMITY_SENSORS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__PROXIMITY_SENSORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/proximity_sensors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_ProximitySensors_sensor
{
public:
  Init_ProximitySensors_sensor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::ProximitySensors sensor(::anscer_msgs::msg::ProximitySensors::_sensor_type arg)
  {
    msg_.sensor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::ProximitySensors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::ProximitySensors>()
{
  return anscer_msgs::msg::builder::Init_ProximitySensors_sensor();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__PROXIMITY_SENSORS__BUILDER_HPP_

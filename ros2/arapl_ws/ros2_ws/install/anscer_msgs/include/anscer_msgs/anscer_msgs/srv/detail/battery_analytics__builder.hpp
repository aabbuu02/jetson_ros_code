// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/BatteryAnalytics.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BATTERY_ANALYTICS__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BATTERY_ANALYTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/battery_analytics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_BatteryAnalytics_Request_end_date
{
public:
  explicit Init_BatteryAnalytics_Request_end_date(::anscer_msgs::srv::BatteryAnalytics_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::BatteryAnalytics_Request end_date(::anscer_msgs::srv::BatteryAnalytics_Request::_end_date_type arg)
  {
    msg_.end_date = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::BatteryAnalytics_Request msg_;
};

class Init_BatteryAnalytics_Request_start_date
{
public:
  Init_BatteryAnalytics_Request_start_date()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryAnalytics_Request_end_date start_date(::anscer_msgs::srv::BatteryAnalytics_Request::_start_date_type arg)
  {
    msg_.start_date = std::move(arg);
    return Init_BatteryAnalytics_Request_end_date(msg_);
  }

private:
  ::anscer_msgs::srv::BatteryAnalytics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::BatteryAnalytics_Request>()
{
  return anscer_msgs::srv::builder::Init_BatteryAnalytics_Request_start_date();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_BatteryAnalytics_Response_battery_db
{
public:
  Init_BatteryAnalytics_Response_battery_db()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::BatteryAnalytics_Response battery_db(::anscer_msgs::srv::BatteryAnalytics_Response::_battery_db_type arg)
  {
    msg_.battery_db = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::BatteryAnalytics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::BatteryAnalytics_Response>()
{
  return anscer_msgs::srv::builder::Init_BatteryAnalytics_Response_battery_db();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__BATTERY_ANALYTICS__BUILDER_HPP_

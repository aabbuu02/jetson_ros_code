// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/MissionAnalytics.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__MISSION_ANALYTICS__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__MISSION_ANALYTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/mission_analytics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_MissionAnalytics_Request_end_date
{
public:
  explicit Init_MissionAnalytics_Request_end_date(::anscer_msgs::srv::MissionAnalytics_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::MissionAnalytics_Request end_date(::anscer_msgs::srv::MissionAnalytics_Request::_end_date_type arg)
  {
    msg_.end_date = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::MissionAnalytics_Request msg_;
};

class Init_MissionAnalytics_Request_start_date
{
public:
  Init_MissionAnalytics_Request_start_date()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionAnalytics_Request_end_date start_date(::anscer_msgs::srv::MissionAnalytics_Request::_start_date_type arg)
  {
    msg_.start_date = std::move(arg);
    return Init_MissionAnalytics_Request_end_date(msg_);
  }

private:
  ::anscer_msgs::srv::MissionAnalytics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::MissionAnalytics_Request>()
{
  return anscer_msgs::srv::builder::Init_MissionAnalytics_Request_start_date();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_MissionAnalytics_Response_mission_db
{
public:
  Init_MissionAnalytics_Response_mission_db()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::MissionAnalytics_Response mission_db(::anscer_msgs::srv::MissionAnalytics_Response::_mission_db_type arg)
  {
    msg_.mission_db = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::MissionAnalytics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::MissionAnalytics_Response>()
{
  return anscer_msgs::srv::builder::Init_MissionAnalytics_Response_mission_db();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__MISSION_ANALYTICS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/Distance.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__DISTANCE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_Distance_Request_total_reset
{
public:
  explicit Init_Distance_Request_total_reset(::anscer_msgs::srv::Distance_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::Distance_Request total_reset(::anscer_msgs::srv::Distance_Request::_total_reset_type arg)
  {
    msg_.total_reset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::Distance_Request msg_;
};

class Init_Distance_Request_mission_reset
{
public:
  Init_Distance_Request_mission_reset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distance_Request_total_reset mission_reset(::anscer_msgs::srv::Distance_Request::_mission_reset_type arg)
  {
    msg_.mission_reset = std::move(arg);
    return Init_Distance_Request_total_reset(msg_);
  }

private:
  ::anscer_msgs::srv::Distance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::Distance_Request>()
{
  return anscer_msgs::srv::builder::Init_Distance_Request_mission_reset();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_Distance_Response_total_distance
{
public:
  explicit Init_Distance_Response_total_distance(::anscer_msgs::srv::Distance_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::Distance_Response total_distance(::anscer_msgs::srv::Distance_Response::_total_distance_type arg)
  {
    msg_.total_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::Distance_Response msg_;
};

class Init_Distance_Response_mission_distance
{
public:
  Init_Distance_Response_mission_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distance_Response_total_distance mission_distance(::anscer_msgs::srv::Distance_Response::_mission_distance_type arg)
  {
    msg_.mission_distance = std::move(arg);
    return Init_Distance_Response_total_distance(msg_);
  }

private:
  ::anscer_msgs::srv::Distance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::Distance_Response>()
{
  return anscer_msgs::srv::builder::Init_Distance_Response_mission_distance();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__DISTANCE__BUILDER_HPP_

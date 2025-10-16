// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/CallMission.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/call_mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_CallMission_Request_loops
{
public:
  explicit Init_CallMission_Request_loops(::anscer_msgs::srv::CallMission_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::CallMission_Request loops(::anscer_msgs::srv::CallMission_Request::_loops_type arg)
  {
    msg_.loops = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::CallMission_Request msg_;
};

class Init_CallMission_Request_mission_name
{
public:
  explicit Init_CallMission_Request_mission_name(::anscer_msgs::srv::CallMission_Request & msg)
  : msg_(msg)
  {}
  Init_CallMission_Request_loops mission_name(::anscer_msgs::srv::CallMission_Request::_mission_name_type arg)
  {
    msg_.mission_name = std::move(arg);
    return Init_CallMission_Request_loops(msg_);
  }

private:
  ::anscer_msgs::srv::CallMission_Request msg_;
};

class Init_CallMission_Request_initate
{
public:
  Init_CallMission_Request_initate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CallMission_Request_mission_name initate(::anscer_msgs::srv::CallMission_Request::_initate_type arg)
  {
    msg_.initate = std::move(arg);
    return Init_CallMission_Request_mission_name(msg_);
  }

private:
  ::anscer_msgs::srv::CallMission_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::CallMission_Request>()
{
  return anscer_msgs::srv::builder::Init_CallMission_Request_initate();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_CallMission_Response_status
{
public:
  explicit Init_CallMission_Response_status(::anscer_msgs::srv::CallMission_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::CallMission_Response status(::anscer_msgs::srv::CallMission_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::CallMission_Response msg_;
};

class Init_CallMission_Response_initated
{
public:
  Init_CallMission_Response_initated()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CallMission_Response_status initated(::anscer_msgs::srv::CallMission_Response::_initated_type arg)
  {
    msg_.initated = std::move(arg);
    return Init_CallMission_Response_status(msg_);
  }

private:
  ::anscer_msgs::srv::CallMission_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::CallMission_Response>()
{
  return anscer_msgs::srv::builder::Init_CallMission_Response_initated();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qr_mission_scheduler:srv/GetGoal.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__BUILDER_HPP_
#define QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qr_mission_scheduler/srv/detail/get_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qr_mission_scheduler
{

namespace srv
{

namespace builder
{

class Init_GetGoal_Request_target_id
{
public:
  explicit Init_GetGoal_Request_target_id(::qr_mission_scheduler::srv::GetGoal_Request & msg)
  : msg_(msg)
  {}
  ::qr_mission_scheduler::srv::GetGoal_Request target_id(::qr_mission_scheduler::srv::GetGoal_Request::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::srv::GetGoal_Request msg_;
};

class Init_GetGoal_Request_source_id
{
public:
  explicit Init_GetGoal_Request_source_id(::qr_mission_scheduler::srv::GetGoal_Request & msg)
  : msg_(msg)
  {}
  Init_GetGoal_Request_target_id source_id(::qr_mission_scheduler::srv::GetGoal_Request::_source_id_type arg)
  {
    msg_.source_id = std::move(arg);
    return Init_GetGoal_Request_target_id(msg_);
  }

private:
  ::qr_mission_scheduler::srv::GetGoal_Request msg_;
};

class Init_GetGoal_Request_goal_type
{
public:
  Init_GetGoal_Request_goal_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGoal_Request_source_id goal_type(::qr_mission_scheduler::srv::GetGoal_Request::_goal_type_type arg)
  {
    msg_.goal_type = std::move(arg);
    return Init_GetGoal_Request_source_id(msg_);
  }

private:
  ::qr_mission_scheduler::srv::GetGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::srv::GetGoal_Request>()
{
  return qr_mission_scheduler::srv::builder::Init_GetGoal_Request_goal_type();
}

}  // namespace qr_mission_scheduler


namespace qr_mission_scheduler
{

namespace srv
{

namespace builder
{

class Init_GetGoal_Response_result
{
public:
  Init_GetGoal_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qr_mission_scheduler::srv::GetGoal_Response result(::qr_mission_scheduler::srv::GetGoal_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::srv::GetGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::srv::GetGoal_Response>()
{
  return qr_mission_scheduler::srv::builder::Init_GetGoal_Response_result();
}

}  // namespace qr_mission_scheduler

#endif  // QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__BUILDER_HPP_

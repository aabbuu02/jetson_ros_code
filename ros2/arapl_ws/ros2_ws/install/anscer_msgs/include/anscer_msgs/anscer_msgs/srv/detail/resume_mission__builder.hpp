// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/ResumeMission.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__RESUME_MISSION__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__RESUME_MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/resume_mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ResumeMission_Request_resume
{
public:
  Init_ResumeMission_Request_resume()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ResumeMission_Request resume(::anscer_msgs::srv::ResumeMission_Request::_resume_type arg)
  {
    msg_.resume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ResumeMission_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ResumeMission_Request>()
{
  return anscer_msgs::srv::builder::Init_ResumeMission_Request_resume();
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
auto build<::anscer_msgs::srv::ResumeMission_Response>()
{
  return ::anscer_msgs::srv::ResumeMission_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__RESUME_MISSION__BUILDER_HPP_

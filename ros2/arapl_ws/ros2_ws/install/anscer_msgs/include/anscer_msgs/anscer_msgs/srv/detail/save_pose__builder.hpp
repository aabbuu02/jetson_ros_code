// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/SavePose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAVE_POSE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAVE_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/save_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SavePose_Request_type
{
public:
  explicit Init_SavePose_Request_type(::anscer_msgs::srv::SavePose_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::SavePose_Request type(::anscer_msgs::srv::SavePose_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SavePose_Request msg_;
};

class Init_SavePose_Request_waypoint_id
{
public:
  explicit Init_SavePose_Request_waypoint_id(::anscer_msgs::srv::SavePose_Request & msg)
  : msg_(msg)
  {}
  Init_SavePose_Request_type waypoint_id(::anscer_msgs::srv::SavePose_Request::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_SavePose_Request_type(msg_);
  }

private:
  ::anscer_msgs::srv::SavePose_Request msg_;
};

class Init_SavePose_Request_waypoint_name
{
public:
  explicit Init_SavePose_Request_waypoint_name(::anscer_msgs::srv::SavePose_Request & msg)
  : msg_(msg)
  {}
  Init_SavePose_Request_waypoint_id waypoint_name(::anscer_msgs::srv::SavePose_Request::_waypoint_name_type arg)
  {
    msg_.waypoint_name = std::move(arg);
    return Init_SavePose_Request_waypoint_id(msg_);
  }

private:
  ::anscer_msgs::srv::SavePose_Request msg_;
};

class Init_SavePose_Request_clear_all
{
public:
  explicit Init_SavePose_Request_clear_all(::anscer_msgs::srv::SavePose_Request & msg)
  : msg_(msg)
  {}
  Init_SavePose_Request_waypoint_name clear_all(::anscer_msgs::srv::SavePose_Request::_clear_all_type arg)
  {
    msg_.clear_all = std::move(arg);
    return Init_SavePose_Request_waypoint_name(msg_);
  }

private:
  ::anscer_msgs::srv::SavePose_Request msg_;
};

class Init_SavePose_Request_save
{
public:
  Init_SavePose_Request_save()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SavePose_Request_clear_all save(::anscer_msgs::srv::SavePose_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return Init_SavePose_Request_clear_all(msg_);
  }

private:
  ::anscer_msgs::srv::SavePose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SavePose_Request>()
{
  return anscer_msgs::srv::builder::Init_SavePose_Request_save();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SavePose_Response_status
{
public:
  explicit Init_SavePose_Response_status(::anscer_msgs::srv::SavePose_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::SavePose_Response status(::anscer_msgs::srv::SavePose_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SavePose_Response msg_;
};

class Init_SavePose_Response_is_saved
{
public:
  Init_SavePose_Response_is_saved()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SavePose_Response_status is_saved(::anscer_msgs::srv::SavePose_Response::_is_saved_type arg)
  {
    msg_.is_saved = std::move(arg);
    return Init_SavePose_Response_status(msg_);
  }

private:
  ::anscer_msgs::srv::SavePose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SavePose_Response>()
{
  return anscer_msgs::srv::builder::Init_SavePose_Response_is_saved();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SAVE_POSE__BUILDER_HPP_

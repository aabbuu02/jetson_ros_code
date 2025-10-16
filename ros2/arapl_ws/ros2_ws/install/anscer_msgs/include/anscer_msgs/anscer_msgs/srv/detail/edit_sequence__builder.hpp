// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/EditSequence.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__EDIT_SEQUENCE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__EDIT_SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/edit_sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_EditSequence_Request_sequence_list
{
public:
  explicit Init_EditSequence_Request_sequence_list(::anscer_msgs::srv::EditSequence_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::EditSequence_Request sequence_list(::anscer_msgs::srv::EditSequence_Request::_sequence_list_type arg)
  {
    msg_.sequence_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::EditSequence_Request msg_;
};

class Init_EditSequence_Request_waypoint_id
{
public:
  explicit Init_EditSequence_Request_waypoint_id(::anscer_msgs::srv::EditSequence_Request & msg)
  : msg_(msg)
  {}
  Init_EditSequence_Request_sequence_list waypoint_id(::anscer_msgs::srv::EditSequence_Request::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_EditSequence_Request_sequence_list(msg_);
  }

private:
  ::anscer_msgs::srv::EditSequence_Request msg_;
};

class Init_EditSequence_Request_save
{
public:
  Init_EditSequence_Request_save()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EditSequence_Request_waypoint_id save(::anscer_msgs::srv::EditSequence_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return Init_EditSequence_Request_waypoint_id(msg_);
  }

private:
  ::anscer_msgs::srv::EditSequence_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::EditSequence_Request>()
{
  return anscer_msgs::srv::builder::Init_EditSequence_Request_save();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_EditSequence_Response_status
{
public:
  explicit Init_EditSequence_Response_status(::anscer_msgs::srv::EditSequence_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::EditSequence_Response status(::anscer_msgs::srv::EditSequence_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::EditSequence_Response msg_;
};

class Init_EditSequence_Response_is_saved
{
public:
  Init_EditSequence_Response_is_saved()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EditSequence_Response_status is_saved(::anscer_msgs::srv::EditSequence_Response::_is_saved_type arg)
  {
    msg_.is_saved = std::move(arg);
    return Init_EditSequence_Response_status(msg_);
  }

private:
  ::anscer_msgs::srv::EditSequence_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::EditSequence_Response>()
{
  return anscer_msgs::srv::builder::Init_EditSequence_Response_is_saved();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__EDIT_SEQUENCE__BUILDER_HPP_

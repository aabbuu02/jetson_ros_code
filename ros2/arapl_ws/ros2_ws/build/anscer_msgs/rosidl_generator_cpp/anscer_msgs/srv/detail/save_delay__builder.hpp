// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/SaveDelay.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAVE_DELAY__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAVE_DELAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/save_delay__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveDelay_Request_delay
{
public:
  explicit Init_SaveDelay_Request_delay(::anscer_msgs::srv::SaveDelay_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::SaveDelay_Request delay(::anscer_msgs::srv::SaveDelay_Request::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SaveDelay_Request msg_;
};

class Init_SaveDelay_Request_save
{
public:
  Init_SaveDelay_Request_save()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveDelay_Request_delay save(::anscer_msgs::srv::SaveDelay_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return Init_SaveDelay_Request_delay(msg_);
  }

private:
  ::anscer_msgs::srv::SaveDelay_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SaveDelay_Request>()
{
  return anscer_msgs::srv::builder::Init_SaveDelay_Request_save();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveDelay_Response_is_saved
{
public:
  explicit Init_SaveDelay_Response_is_saved(::anscer_msgs::srv::SaveDelay_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::SaveDelay_Response is_saved(::anscer_msgs::srv::SaveDelay_Response::_is_saved_type arg)
  {
    msg_.is_saved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SaveDelay_Response msg_;
};

class Init_SaveDelay_Response_status
{
public:
  Init_SaveDelay_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveDelay_Response_is_saved status(::anscer_msgs::srv::SaveDelay_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SaveDelay_Response_is_saved(msg_);
  }

private:
  ::anscer_msgs::srv::SaveDelay_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SaveDelay_Response>()
{
  return anscer_msgs::srv::builder::Init_SaveDelay_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SAVE_DELAY__BUILDER_HPP_

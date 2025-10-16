// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/SaveStation.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAVE_STATION__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAVE_STATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/save_station__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveStation_Request_station_name
{
public:
  explicit Init_SaveStation_Request_station_name(::anscer_msgs::srv::SaveStation_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::SaveStation_Request station_name(::anscer_msgs::srv::SaveStation_Request::_station_name_type arg)
  {
    msg_.station_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SaveStation_Request msg_;
};

class Init_SaveStation_Request_type
{
public:
  explicit Init_SaveStation_Request_type(::anscer_msgs::srv::SaveStation_Request & msg)
  : msg_(msg)
  {}
  Init_SaveStation_Request_station_name type(::anscer_msgs::srv::SaveStation_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SaveStation_Request_station_name(msg_);
  }

private:
  ::anscer_msgs::srv::SaveStation_Request msg_;
};

class Init_SaveStation_Request_save
{
public:
  Init_SaveStation_Request_save()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveStation_Request_type save(::anscer_msgs::srv::SaveStation_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return Init_SaveStation_Request_type(msg_);
  }

private:
  ::anscer_msgs::srv::SaveStation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SaveStation_Request>()
{
  return anscer_msgs::srv::builder::Init_SaveStation_Request_save();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveStation_Response_status
{
public:
  explicit Init_SaveStation_Response_status(::anscer_msgs::srv::SaveStation_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::SaveStation_Response status(::anscer_msgs::srv::SaveStation_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SaveStation_Response msg_;
};

class Init_SaveStation_Response_name_exist
{
public:
  explicit Init_SaveStation_Response_name_exist(::anscer_msgs::srv::SaveStation_Response & msg)
  : msg_(msg)
  {}
  Init_SaveStation_Response_status name_exist(::anscer_msgs::srv::SaveStation_Response::_name_exist_type arg)
  {
    msg_.name_exist = std::move(arg);
    return Init_SaveStation_Response_status(msg_);
  }

private:
  ::anscer_msgs::srv::SaveStation_Response msg_;
};

class Init_SaveStation_Response_is_saved
{
public:
  Init_SaveStation_Response_is_saved()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveStation_Response_name_exist is_saved(::anscer_msgs::srv::SaveStation_Response::_is_saved_type arg)
  {
    msg_.is_saved = std::move(arg);
    return Init_SaveStation_Response_name_exist(msg_);
  }

private:
  ::anscer_msgs::srv::SaveStation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SaveStation_Response>()
{
  return anscer_msgs::srv::builder::Init_SaveStation_Response_is_saved();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SAVE_STATION__BUILDER_HPP_

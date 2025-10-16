// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/GetMapName.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GET_MAP_NAME__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__GET_MAP_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/get_map_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::GetMapName_Request>()
{
  return ::anscer_msgs::srv::GetMapName_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMapName_Response_filename
{
public:
  Init_GetMapName_Response_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::GetMapName_Response filename(::anscer_msgs::srv::GetMapName_Response::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::GetMapName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::GetMapName_Response>()
{
  return anscer_msgs::srv::builder::Init_GetMapName_Response_filename();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__GET_MAP_NAME__BUILDER_HPP_

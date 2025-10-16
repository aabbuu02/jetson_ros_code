// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/ShelfReader.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SHELF_READER__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SHELF_READER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/shelf_reader__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ShelfReader_Request_dummy_req
{
public:
  Init_ShelfReader_Request_dummy_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ShelfReader_Request dummy_req(::anscer_msgs::srv::ShelfReader_Request::_dummy_req_type arg)
  {
    msg_.dummy_req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ShelfReader_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ShelfReader_Request>()
{
  return anscer_msgs::srv::builder::Init_ShelfReader_Request_dummy_req();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_ShelfReader_Response_shelf_response
{
public:
  Init_ShelfReader_Response_shelf_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::ShelfReader_Response shelf_response(::anscer_msgs::srv::ShelfReader_Response::_shelf_response_type arg)
  {
    msg_.shelf_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::ShelfReader_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::ShelfReader_Response>()
{
  return anscer_msgs::srv::builder::Init_ShelfReader_Response_shelf_response();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SHELF_READER__BUILDER_HPP_

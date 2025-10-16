// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Sequence.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SEQUENCE__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Sequence_seq_element
{
public:
  explicit Init_Sequence_seq_element(::anscer_msgs::msg::Sequence & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Sequence seq_element(::anscer_msgs::msg::Sequence::_seq_element_type arg)
  {
    msg_.seq_element = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Sequence msg_;
};

class Init_Sequence_name
{
public:
  explicit Init_Sequence_name(::anscer_msgs::msg::Sequence & msg)
  : msg_(msg)
  {}
  Init_Sequence_seq_element name(::anscer_msgs::msg::Sequence::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Sequence_seq_element(msg_);
  }

private:
  ::anscer_msgs::msg::Sequence msg_;
};

class Init_Sequence_id
{
public:
  Init_Sequence_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequence_name id(::anscer_msgs::msg::Sequence::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Sequence_name(msg_);
  }

private:
  ::anscer_msgs::msg::Sequence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Sequence>()
{
  return anscer_msgs::msg::builder::Init_Sequence_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__SEQUENCE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wms_data:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
#define WMS_DATA__MSG__DETAIL__FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wms_data/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wms_data
{

namespace msg
{

namespace builder
{

class Init_Feedback_fail_status
{
public:
  explicit Init_Feedback_fail_status(::wms_data::msg::Feedback & msg)
  : msg_(msg)
  {}
  ::wms_data::msg::Feedback fail_status(::wms_data::msg::Feedback::_fail_status_type arg)
  {
    msg_.fail_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wms_data::msg::Feedback msg_;
};

class Init_Feedback_status
{
public:
  explicit Init_Feedback_status(::wms_data::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_fail_status status(::wms_data::msg::Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Feedback_fail_status(msg_);
  }

private:
  ::wms_data::msg::Feedback msg_;
};

class Init_Feedback_action
{
public:
  explicit Init_Feedback_action(::wms_data::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_status action(::wms_data::msg::Feedback::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Feedback_status(msg_);
  }

private:
  ::wms_data::msg::Feedback msg_;
};

class Init_Feedback_acr_shelf
{
public:
  explicit Init_Feedback_acr_shelf(::wms_data::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_action acr_shelf(::wms_data::msg::Feedback::_acr_shelf_type arg)
  {
    msg_.acr_shelf = std::move(arg);
    return Init_Feedback_action(msg_);
  }

private:
  ::wms_data::msg::Feedback msg_;
};

class Init_Feedback_unique_id
{
public:
  Init_Feedback_unique_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Feedback_acr_shelf unique_id(::wms_data::msg::Feedback::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_Feedback_acr_shelf(msg_);
  }

private:
  ::wms_data::msg::Feedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wms_data::msg::Feedback>()
{
  return wms_data::msg::builder::Init_Feedback_unique_id();
}

}  // namespace wms_data

#endif  // WMS_DATA__MSG__DETAIL__FEEDBACK__BUILDER_HPP_

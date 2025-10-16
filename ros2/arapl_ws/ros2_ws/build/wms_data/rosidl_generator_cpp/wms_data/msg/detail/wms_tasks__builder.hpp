// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wms_data:msg/WMSTasks.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_TASKS__BUILDER_HPP_
#define WMS_DATA__MSG__DETAIL__WMS_TASKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wms_data/msg/detail/wms_tasks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wms_data
{

namespace msg
{

namespace builder
{

class Init_WMSTasks_tasks
{
public:
  Init_WMSTasks_tasks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wms_data::msg::WMSTasks tasks(::wms_data::msg::WMSTasks::_tasks_type arg)
  {
    msg_.tasks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wms_data::msg::WMSTasks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wms_data::msg::WMSTasks>()
{
  return wms_data::msg::builder::Init_WMSTasks_tasks();
}

}  // namespace wms_data

#endif  // WMS_DATA__MSG__DETAIL__WMS_TASKS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wms_data:msg/WMSData.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_DATA__BUILDER_HPP_
#define WMS_DATA__MSG__DETAIL__WMS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wms_data/msg/detail/wms_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wms_data
{

namespace msg
{

namespace builder
{

class Init_WMSData_serial_no
{
public:
  explicit Init_WMSData_serial_no(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  ::wms_data::msg::WMSData serial_no(::wms_data::msg::WMSData::_serial_no_type arg)
  {
    msg_.serial_no = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_date_data
{
public:
  explicit Init_WMSData_date_data(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_serial_no date_data(::wms_data::msg::WMSData::_date_data_type arg)
  {
    msg_.date_data = std::move(arg);
    return Init_WMSData_serial_no(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_year
{
public:
  explicit Init_WMSData_year(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_date_data year(::wms_data::msg::WMSData::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_WMSData_date_data(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_level
{
public:
  explicit Init_WMSData_level(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_year level(::wms_data::msg::WMSData::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_WMSData_year(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_core
{
public:
  explicit Init_WMSData_core(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_level core(::wms_data::msg::WMSData::_core_type arg)
  {
    msg_.core = std::move(arg);
    return Init_WMSData_level(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_whole_bin_no
{
public:
  explicit Init_WMSData_whole_bin_no(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_core whole_bin_no(::wms_data::msg::WMSData::_whole_bin_no_type arg)
  {
    msg_.whole_bin_no = std::move(arg);
    return Init_WMSData_core(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_acr_shelf
{
public:
  explicit Init_WMSData_acr_shelf(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_whole_bin_no acr_shelf(::wms_data::msg::WMSData::_acr_shelf_type arg)
  {
    msg_.acr_shelf = std::move(arg);
    return Init_WMSData_whole_bin_no(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_putaway_code
{
public:
  explicit Init_WMSData_putaway_code(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_acr_shelf putaway_code(::wms_data::msg::WMSData::_putaway_code_type arg)
  {
    msg_.putaway_code = std::move(arg);
    return Init_WMSData_acr_shelf(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_ean_code
{
public:
  explicit Init_WMSData_ean_code(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_putaway_code ean_code(::wms_data::msg::WMSData::_ean_code_type arg)
  {
    msg_.ean_code = std::move(arg);
    return Init_WMSData_putaway_code(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_status
{
public:
  explicit Init_WMSData_status(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_ean_code status(::wms_data::msg::WMSData::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_WMSData_ean_code(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_action
{
public:
  explicit Init_WMSData_action(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_status action(::wms_data::msg::WMSData::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_WMSData_status(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_bin
{
public:
  explicit Init_WMSData_bin(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_action bin(::wms_data::msg::WMSData::_bin_type arg)
  {
    msg_.bin = std::move(arg);
    return Init_WMSData_action(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_shelf
{
public:
  explicit Init_WMSData_shelf(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_bin shelf(::wms_data::msg::WMSData::_shelf_type arg)
  {
    msg_.shelf = std::move(arg);
    return Init_WMSData_bin(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_rack
{
public:
  explicit Init_WMSData_rack(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_shelf rack(::wms_data::msg::WMSData::_rack_type arg)
  {
    msg_.rack = std::move(arg);
    return Init_WMSData_shelf(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_priority
{
public:
  explicit Init_WMSData_priority(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_rack priority(::wms_data::msg::WMSData::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_WMSData_rack(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_date
{
public:
  explicit Init_WMSData_date(::wms_data::msg::WMSData & msg)
  : msg_(msg)
  {}
  Init_WMSData_priority date(::wms_data::msg::WMSData::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_WMSData_priority(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

class Init_WMSData_unique_id
{
public:
  Init_WMSData_unique_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WMSData_date unique_id(::wms_data::msg::WMSData::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_WMSData_date(msg_);
  }

private:
  ::wms_data::msg::WMSData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wms_data::msg::WMSData>()
{
  return wms_data::msg::builder::Init_WMSData_unique_id();
}

}  // namespace wms_data

#endif  // WMS_DATA__MSG__DETAIL__WMS_DATA__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wms_data:msg/WMSTasks.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_TASKS__TRAITS_HPP_
#define WMS_DATA__MSG__DETAIL__WMS_TASKS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wms_data/msg/detail/wms_tasks__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tasks'
#include "wms_data/msg/detail/wms_data__traits.hpp"

namespace wms_data
{

namespace msg
{

inline void to_flow_style_yaml(
  const WMSTasks & msg,
  std::ostream & out)
{
  out << "{";
  // member: tasks
  {
    if (msg.tasks.size() == 0) {
      out << "tasks: []";
    } else {
      out << "tasks: [";
      size_t pending_items = msg.tasks.size();
      for (auto item : msg.tasks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WMSTasks & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tasks.size() == 0) {
      out << "tasks: []\n";
    } else {
      out << "tasks:\n";
      for (auto item : msg.tasks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WMSTasks & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wms_data

namespace rosidl_generator_traits
{

[[deprecated("use wms_data::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wms_data::msg::WMSTasks & msg,
  std::ostream & out, size_t indentation = 0)
{
  wms_data::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wms_data::msg::to_yaml() instead")]]
inline std::string to_yaml(const wms_data::msg::WMSTasks & msg)
{
  return wms_data::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wms_data::msg::WMSTasks>()
{
  return "wms_data::msg::WMSTasks";
}

template<>
inline const char * name<wms_data::msg::WMSTasks>()
{
  return "wms_data/msg/WMSTasks";
}

template<>
struct has_fixed_size<wms_data::msg::WMSTasks>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wms_data::msg::WMSTasks>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wms_data::msg::WMSTasks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WMS_DATA__MSG__DETAIL__WMS_TASKS__TRAITS_HPP_

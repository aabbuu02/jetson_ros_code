// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wms_data:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
#define WMS_DATA__MSG__DETAIL__FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wms_data/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wms_data
{

namespace msg
{

inline void to_flow_style_yaml(
  const Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: unique_id
  {
    out << "unique_id: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id, out);
    out << ", ";
  }

  // member: acr_shelf
  {
    out << "acr_shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.acr_shelf, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: fail_status
  {
    out << "fail_status: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: unique_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unique_id: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id, out);
    out << "\n";
  }

  // member: acr_shelf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acr_shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.acr_shelf, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: fail_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_status: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Feedback & msg, bool use_flow_style = false)
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
  const wms_data::msg::Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  wms_data::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wms_data::msg::to_yaml() instead")]]
inline std::string to_yaml(const wms_data::msg::Feedback & msg)
{
  return wms_data::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wms_data::msg::Feedback>()
{
  return "wms_data::msg::Feedback";
}

template<>
inline const char * name<wms_data::msg::Feedback>()
{
  return "wms_data/msg/Feedback";
}

template<>
struct has_fixed_size<wms_data::msg::Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wms_data::msg::Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wms_data::msg::Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WMS_DATA__MSG__DETAIL__FEEDBACK__TRAITS_HPP_

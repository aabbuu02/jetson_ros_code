// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wms_data:msg/WMSData.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_DATA__TRAITS_HPP_
#define WMS_DATA__MSG__DETAIL__WMS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wms_data/msg/detail/wms_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wms_data
{

namespace msg
{

inline void to_flow_style_yaml(
  const WMSData & msg,
  std::ostream & out)
{
  out << "{";
  // member: unique_id
  {
    out << "unique_id: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id, out);
    out << ", ";
  }

  // member: date
  {
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: rack
  {
    out << "rack: ";
    rosidl_generator_traits::value_to_yaml(msg.rack, out);
    out << ", ";
  }

  // member: shelf
  {
    out << "shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.shelf, out);
    out << ", ";
  }

  // member: bin
  {
    out << "bin: ";
    rosidl_generator_traits::value_to_yaml(msg.bin, out);
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

  // member: ean_code
  {
    out << "ean_code: ";
    rosidl_generator_traits::value_to_yaml(msg.ean_code, out);
    out << ", ";
  }

  // member: putaway_code
  {
    out << "putaway_code: ";
    rosidl_generator_traits::value_to_yaml(msg.putaway_code, out);
    out << ", ";
  }

  // member: acr_shelf
  {
    out << "acr_shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.acr_shelf, out);
    out << ", ";
  }

  // member: whole_bin_no
  {
    out << "whole_bin_no: ";
    rosidl_generator_traits::value_to_yaml(msg.whole_bin_no, out);
    out << ", ";
  }

  // member: core
  {
    out << "core: ";
    rosidl_generator_traits::value_to_yaml(msg.core, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: year
  {
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << ", ";
  }

  // member: date_data
  {
    out << "date_data: ";
    rosidl_generator_traits::value_to_yaml(msg.date_data, out);
    out << ", ";
  }

  // member: serial_no
  {
    out << "serial_no: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_no, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WMSData & msg,
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

  // member: date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: rack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rack: ";
    rosidl_generator_traits::value_to_yaml(msg.rack, out);
    out << "\n";
  }

  // member: shelf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shelf: ";
    rosidl_generator_traits::value_to_yaml(msg.shelf, out);
    out << "\n";
  }

  // member: bin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bin: ";
    rosidl_generator_traits::value_to_yaml(msg.bin, out);
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

  // member: ean_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ean_code: ";
    rosidl_generator_traits::value_to_yaml(msg.ean_code, out);
    out << "\n";
  }

  // member: putaway_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "putaway_code: ";
    rosidl_generator_traits::value_to_yaml(msg.putaway_code, out);
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

  // member: whole_bin_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "whole_bin_no: ";
    rosidl_generator_traits::value_to_yaml(msg.whole_bin_no, out);
    out << "\n";
  }

  // member: core
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "core: ";
    rosidl_generator_traits::value_to_yaml(msg.core, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << "\n";
  }

  // member: date_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date_data: ";
    rosidl_generator_traits::value_to_yaml(msg.date_data, out);
    out << "\n";
  }

  // member: serial_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_no: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_no, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WMSData & msg, bool use_flow_style = false)
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
  const wms_data::msg::WMSData & msg,
  std::ostream & out, size_t indentation = 0)
{
  wms_data::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wms_data::msg::to_yaml() instead")]]
inline std::string to_yaml(const wms_data::msg::WMSData & msg)
{
  return wms_data::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wms_data::msg::WMSData>()
{
  return "wms_data::msg::WMSData";
}

template<>
inline const char * name<wms_data::msg::WMSData>()
{
  return "wms_data/msg/WMSData";
}

template<>
struct has_fixed_size<wms_data::msg::WMSData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wms_data::msg::WMSData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wms_data::msg::WMSData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WMS_DATA__MSG__DETAIL__WMS_DATA__TRAITS_HPP_

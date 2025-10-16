// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lift_action:msg/LiftAction.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__TRAITS_HPP_
#define LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lift_action/msg/detail/lift_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lift_action
{

namespace msg
{

inline void to_flow_style_yaml(
  const LiftAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: unique_id
  {
    out << "unique_id: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id, out);
    out << ", ";
  }

  // member: reached
  {
    out << "reached: ";
    rosidl_generator_traits::value_to_yaml(msg.reached, out);
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

  // member: whole_bin_no
  {
    out << "whole_bin_no: ";
    rosidl_generator_traits::value_to_yaml(msg.whole_bin_no, out);
    out << ", ";
  }

  // member: putaway_barcode
  {
    out << "putaway_barcode: ";
    rosidl_generator_traits::value_to_yaml(msg.putaway_barcode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LiftAction & msg,
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

  // member: reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached: ";
    rosidl_generator_traits::value_to_yaml(msg.reached, out);
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

  // member: whole_bin_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "whole_bin_no: ";
    rosidl_generator_traits::value_to_yaml(msg.whole_bin_no, out);
    out << "\n";
  }

  // member: putaway_barcode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "putaway_barcode: ";
    rosidl_generator_traits::value_to_yaml(msg.putaway_barcode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LiftAction & msg, bool use_flow_style = false)
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

}  // namespace lift_action

namespace rosidl_generator_traits
{

[[deprecated("use lift_action::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_action::msg::LiftAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_action::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_action::msg::to_yaml() instead")]]
inline std::string to_yaml(const lift_action::msg::LiftAction & msg)
{
  return lift_action::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lift_action::msg::LiftAction>()
{
  return "lift_action::msg::LiftAction";
}

template<>
inline const char * name<lift_action::msg::LiftAction>()
{
  return "lift_action/msg/LiftAction";
}

template<>
struct has_fixed_size<lift_action::msg::LiftAction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lift_action::msg::LiftAction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lift_action::msg::LiftAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__TRAITS_HPP_

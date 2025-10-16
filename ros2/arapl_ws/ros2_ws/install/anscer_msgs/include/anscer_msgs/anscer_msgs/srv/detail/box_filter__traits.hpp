// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/BoxFilter.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/box_filter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BoxFilter_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filter_enable
  {
    out << "filter_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_enable, out);
    out << ", ";
  }

  // member: restore_default
  {
    out << "restore_default: ";
    rosidl_generator_traits::value_to_yaml(msg.restore_default, out);
    out << ", ";
  }

  // member: min_safety_x
  {
    out << "min_safety_x: ";
    rosidl_generator_traits::value_to_yaml(msg.min_safety_x, out);
    out << ", ";
  }

  // member: max_safety_x
  {
    out << "max_safety_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_safety_x, out);
    out << ", ";
  }

  // member: min_safety_y
  {
    out << "min_safety_y: ";
    rosidl_generator_traits::value_to_yaml(msg.min_safety_y, out);
    out << ", ";
  }

  // member: max_safety_y
  {
    out << "max_safety_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_safety_y, out);
    out << ", ";
  }

  // member: min_warn_x
  {
    out << "min_warn_x: ";
    rosidl_generator_traits::value_to_yaml(msg.min_warn_x, out);
    out << ", ";
  }

  // member: max_warn_x
  {
    out << "max_warn_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_warn_x, out);
    out << ", ";
  }

  // member: min_warn_y
  {
    out << "min_warn_y: ";
    rosidl_generator_traits::value_to_yaml(msg.min_warn_y, out);
    out << ", ";
  }

  // member: max_warn_y
  {
    out << "max_warn_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_warn_y, out);
    out << ", ";
  }

  // member: debounce_time
  {
    out << "debounce_time: ";
    rosidl_generator_traits::value_to_yaml(msg.debounce_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoxFilter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filter_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_enable, out);
    out << "\n";
  }

  // member: restore_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restore_default: ";
    rosidl_generator_traits::value_to_yaml(msg.restore_default, out);
    out << "\n";
  }

  // member: min_safety_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_safety_x: ";
    rosidl_generator_traits::value_to_yaml(msg.min_safety_x, out);
    out << "\n";
  }

  // member: max_safety_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_safety_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_safety_x, out);
    out << "\n";
  }

  // member: min_safety_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_safety_y: ";
    rosidl_generator_traits::value_to_yaml(msg.min_safety_y, out);
    out << "\n";
  }

  // member: max_safety_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_safety_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_safety_y, out);
    out << "\n";
  }

  // member: min_warn_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_warn_x: ";
    rosidl_generator_traits::value_to_yaml(msg.min_warn_x, out);
    out << "\n";
  }

  // member: max_warn_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_warn_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_warn_x, out);
    out << "\n";
  }

  // member: min_warn_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_warn_y: ";
    rosidl_generator_traits::value_to_yaml(msg.min_warn_y, out);
    out << "\n";
  }

  // member: max_warn_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_warn_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_warn_y, out);
    out << "\n";
  }

  // member: debounce_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debounce_time: ";
    rosidl_generator_traits::value_to_yaml(msg.debounce_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoxFilter_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::srv::BoxFilter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::BoxFilter_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::BoxFilter_Request>()
{
  return "anscer_msgs::srv::BoxFilter_Request";
}

template<>
inline const char * name<anscer_msgs::srv::BoxFilter_Request>()
{
  return "anscer_msgs/srv/BoxFilter_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::BoxFilter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::BoxFilter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::BoxFilter_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BoxFilter_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoxFilter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoxFilter_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::srv::BoxFilter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::BoxFilter_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::BoxFilter_Response>()
{
  return "anscer_msgs::srv::BoxFilter_Response";
}

template<>
inline const char * name<anscer_msgs::srv::BoxFilter_Response>()
{
  return "anscer_msgs/srv/BoxFilter_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::BoxFilter_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::BoxFilter_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::BoxFilter_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::BoxFilter>()
{
  return "anscer_msgs::srv::BoxFilter";
}

template<>
inline const char * name<anscer_msgs::srv::BoxFilter>()
{
  return "anscer_msgs/srv/BoxFilter";
}

template<>
struct has_fixed_size<anscer_msgs::srv::BoxFilter>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::BoxFilter_Request>::value &&
    has_fixed_size<anscer_msgs::srv::BoxFilter_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::BoxFilter>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::BoxFilter_Request>::value &&
    has_bounded_size<anscer_msgs::srv::BoxFilter_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::BoxFilter>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::BoxFilter_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::BoxFilter_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__TRAITS_HPP_

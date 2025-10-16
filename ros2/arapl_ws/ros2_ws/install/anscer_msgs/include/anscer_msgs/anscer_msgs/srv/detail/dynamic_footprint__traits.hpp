// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/DynamicFootprint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__DYNAMIC_FOOTPRINT__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__DYNAMIC_FOOTPRINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/dynamic_footprint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DynamicFootprint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: update_footprint
  {
    out << "update_footprint: ";
    rosidl_generator_traits::value_to_yaml(msg.update_footprint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamicFootprint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: update_footprint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_footprint: ";
    rosidl_generator_traits::value_to_yaml(msg.update_footprint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamicFootprint_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::DynamicFootprint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::DynamicFootprint_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::DynamicFootprint_Request>()
{
  return "anscer_msgs::srv::DynamicFootprint_Request";
}

template<>
inline const char * name<anscer_msgs::srv::DynamicFootprint_Request>()
{
  return "anscer_msgs/srv/DynamicFootprint_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::DynamicFootprint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::DynamicFootprint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::DynamicFootprint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DynamicFootprint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamicFootprint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamicFootprint_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::DynamicFootprint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::DynamicFootprint_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::DynamicFootprint_Response>()
{
  return "anscer_msgs::srv::DynamicFootprint_Response";
}

template<>
inline const char * name<anscer_msgs::srv::DynamicFootprint_Response>()
{
  return "anscer_msgs/srv/DynamicFootprint_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::DynamicFootprint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::DynamicFootprint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::DynamicFootprint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::DynamicFootprint>()
{
  return "anscer_msgs::srv::DynamicFootprint";
}

template<>
inline const char * name<anscer_msgs::srv::DynamicFootprint>()
{
  return "anscer_msgs/srv/DynamicFootprint";
}

template<>
struct has_fixed_size<anscer_msgs::srv::DynamicFootprint>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::DynamicFootprint_Request>::value &&
    has_fixed_size<anscer_msgs::srv::DynamicFootprint_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::DynamicFootprint>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::DynamicFootprint_Request>::value &&
    has_bounded_size<anscer_msgs::srv::DynamicFootprint_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::DynamicFootprint>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::DynamicFootprint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::DynamicFootprint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__DYNAMIC_FOOTPRINT__TRAITS_HPP_

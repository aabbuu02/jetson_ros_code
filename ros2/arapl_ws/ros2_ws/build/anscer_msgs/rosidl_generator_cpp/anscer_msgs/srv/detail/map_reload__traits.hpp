// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/MapReload.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__MAP_RELOAD__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__MAP_RELOAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/map_reload__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MapReload_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filename
  {
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapReload_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapReload_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::MapReload_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::MapReload_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::MapReload_Request>()
{
  return "anscer_msgs::srv::MapReload_Request";
}

template<>
inline const char * name<anscer_msgs::srv::MapReload_Request>()
{
  return "anscer_msgs/srv/MapReload_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::MapReload_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::MapReload_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::MapReload_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MapReload_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_active
  {
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << ", ";
  }

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapReload_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << "\n";
  }

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapReload_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::MapReload_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::MapReload_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::MapReload_Response>()
{
  return "anscer_msgs::srv::MapReload_Response";
}

template<>
inline const char * name<anscer_msgs::srv::MapReload_Response>()
{
  return "anscer_msgs/srv/MapReload_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::MapReload_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::MapReload_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::MapReload_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::MapReload>()
{
  return "anscer_msgs::srv::MapReload";
}

template<>
inline const char * name<anscer_msgs::srv::MapReload>()
{
  return "anscer_msgs/srv/MapReload";
}

template<>
struct has_fixed_size<anscer_msgs::srv::MapReload>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::MapReload_Request>::value &&
    has_fixed_size<anscer_msgs::srv::MapReload_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::MapReload>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::MapReload_Request>::value &&
    has_bounded_size<anscer_msgs::srv::MapReload_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::MapReload>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::MapReload_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::MapReload_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__MAP_RELOAD__TRAITS_HPP_

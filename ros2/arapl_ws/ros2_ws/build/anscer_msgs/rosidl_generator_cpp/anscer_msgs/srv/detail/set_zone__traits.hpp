// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/SetZone.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SET_ZONE__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SET_ZONE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/set_zone__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'zone_points'
#include "anscer_msgs/msg/detail/zone_points__traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetZone_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: zone_points
  {
    if (msg.zone_points.size() == 0) {
      out << "zone_points: []";
    } else {
      out << "zone_points: [";
      size_t pending_items = msg.zone_points.size();
      for (auto item : msg.zone_points) {
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
  const SetZone_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: zone_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.zone_points.size() == 0) {
      out << "zone_points: []\n";
    } else {
      out << "zone_points:\n";
      for (auto item : msg.zone_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetZone_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::SetZone_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::SetZone_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::SetZone_Request>()
{
  return "anscer_msgs::srv::SetZone_Request";
}

template<>
inline const char * name<anscer_msgs::srv::SetZone_Request>()
{
  return "anscer_msgs/srv/SetZone_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::SetZone_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::SetZone_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::SetZone_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetZone_Response & msg,
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
  const SetZone_Response & msg,
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

inline std::string to_yaml(const SetZone_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::SetZone_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::SetZone_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::SetZone_Response>()
{
  return "anscer_msgs::srv::SetZone_Response";
}

template<>
inline const char * name<anscer_msgs::srv::SetZone_Response>()
{
  return "anscer_msgs/srv/SetZone_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::SetZone_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::SetZone_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::SetZone_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::SetZone>()
{
  return "anscer_msgs::srv::SetZone";
}

template<>
inline const char * name<anscer_msgs::srv::SetZone>()
{
  return "anscer_msgs/srv/SetZone";
}

template<>
struct has_fixed_size<anscer_msgs::srv::SetZone>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::SetZone_Request>::value &&
    has_fixed_size<anscer_msgs::srv::SetZone_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::SetZone>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::SetZone_Request>::value &&
    has_bounded_size<anscer_msgs::srv::SetZone_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::SetZone>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::SetZone_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::SetZone_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__SET_ZONE__TRAITS_HPP_

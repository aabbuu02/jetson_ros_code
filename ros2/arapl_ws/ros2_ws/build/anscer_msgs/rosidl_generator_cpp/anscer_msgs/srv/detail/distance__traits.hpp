// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/Distance.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__DISTANCE__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__DISTANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Distance_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_reset
  {
    out << "mission_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_reset, out);
    out << ", ";
  }

  // member: total_reset
  {
    out << "total_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.total_reset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Distance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_reset, out);
    out << "\n";
  }

  // member: total_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.total_reset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Distance_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::Distance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::Distance_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::Distance_Request>()
{
  return "anscer_msgs::srv::Distance_Request";
}

template<>
inline const char * name<anscer_msgs::srv::Distance_Request>()
{
  return "anscer_msgs/srv/Distance_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::Distance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::Distance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::Distance_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Distance_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_distance
  {
    out << "mission_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_distance, out);
    out << ", ";
  }

  // member: total_distance
  {
    out << "total_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Distance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_distance, out);
    out << "\n";
  }

  // member: total_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Distance_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::Distance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::Distance_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::Distance_Response>()
{
  return "anscer_msgs::srv::Distance_Response";
}

template<>
inline const char * name<anscer_msgs::srv::Distance_Response>()
{
  return "anscer_msgs/srv/Distance_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::Distance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::Distance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::Distance_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::Distance>()
{
  return "anscer_msgs::srv::Distance";
}

template<>
inline const char * name<anscer_msgs::srv::Distance>()
{
  return "anscer_msgs/srv/Distance";
}

template<>
struct has_fixed_size<anscer_msgs::srv::Distance>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::Distance_Request>::value &&
    has_fixed_size<anscer_msgs::srv::Distance_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::Distance>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::Distance_Request>::value &&
    has_bounded_size<anscer_msgs::srv::Distance_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::Distance>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::Distance_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::Distance_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__DISTANCE__TRAITS_HPP_

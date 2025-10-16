// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/CallMission.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/call_mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CallMission_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: initate
  {
    out << "initate: ";
    rosidl_generator_traits::value_to_yaml(msg.initate, out);
    out << ", ";
  }

  // member: mission_name
  {
    out << "mission_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_name, out);
    out << ", ";
  }

  // member: loops
  {
    out << "loops: ";
    rosidl_generator_traits::value_to_yaml(msg.loops, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CallMission_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initate: ";
    rosidl_generator_traits::value_to_yaml(msg.initate, out);
    out << "\n";
  }

  // member: mission_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_name, out);
    out << "\n";
  }

  // member: loops
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loops: ";
    rosidl_generator_traits::value_to_yaml(msg.loops, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CallMission_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::CallMission_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::CallMission_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::CallMission_Request>()
{
  return "anscer_msgs::srv::CallMission_Request";
}

template<>
inline const char * name<anscer_msgs::srv::CallMission_Request>()
{
  return "anscer_msgs/srv/CallMission_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::CallMission_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::CallMission_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::CallMission_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CallMission_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: initated
  {
    out << "initated: ";
    rosidl_generator_traits::value_to_yaml(msg.initated, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CallMission_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initated: ";
    rosidl_generator_traits::value_to_yaml(msg.initated, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CallMission_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::CallMission_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::CallMission_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::CallMission_Response>()
{
  return "anscer_msgs::srv::CallMission_Response";
}

template<>
inline const char * name<anscer_msgs::srv::CallMission_Response>()
{
  return "anscer_msgs/srv/CallMission_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::CallMission_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::CallMission_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::CallMission_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::CallMission>()
{
  return "anscer_msgs::srv::CallMission";
}

template<>
inline const char * name<anscer_msgs::srv::CallMission>()
{
  return "anscer_msgs/srv/CallMission";
}

template<>
struct has_fixed_size<anscer_msgs::srv::CallMission>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::CallMission_Request>::value &&
    has_fixed_size<anscer_msgs::srv::CallMission_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::CallMission>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::CallMission_Request>::value &&
    has_bounded_size<anscer_msgs::srv::CallMission_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::CallMission>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::CallMission_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::CallMission_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__TRAITS_HPP_

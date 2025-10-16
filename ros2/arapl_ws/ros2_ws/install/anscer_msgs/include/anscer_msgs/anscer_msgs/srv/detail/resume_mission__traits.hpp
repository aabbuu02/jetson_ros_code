// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/ResumeMission.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__RESUME_MISSION__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__RESUME_MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/resume_mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResumeMission_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: resume
  {
    out << "resume: ";
    rosidl_generator_traits::value_to_yaml(msg.resume, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResumeMission_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resume: ";
    rosidl_generator_traits::value_to_yaml(msg.resume, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResumeMission_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::ResumeMission_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::ResumeMission_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::ResumeMission_Request>()
{
  return "anscer_msgs::srv::ResumeMission_Request";
}

template<>
inline const char * name<anscer_msgs::srv::ResumeMission_Request>()
{
  return "anscer_msgs/srv/ResumeMission_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::ResumeMission_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::ResumeMission_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::ResumeMission_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResumeMission_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResumeMission_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResumeMission_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::ResumeMission_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::ResumeMission_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::ResumeMission_Response>()
{
  return "anscer_msgs::srv::ResumeMission_Response";
}

template<>
inline const char * name<anscer_msgs::srv::ResumeMission_Response>()
{
  return "anscer_msgs/srv/ResumeMission_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::ResumeMission_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::ResumeMission_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::ResumeMission_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::ResumeMission>()
{
  return "anscer_msgs::srv::ResumeMission";
}

template<>
inline const char * name<anscer_msgs::srv::ResumeMission>()
{
  return "anscer_msgs/srv/ResumeMission";
}

template<>
struct has_fixed_size<anscer_msgs::srv::ResumeMission>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::ResumeMission_Request>::value &&
    has_fixed_size<anscer_msgs::srv::ResumeMission_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::ResumeMission>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::ResumeMission_Request>::value &&
    has_bounded_size<anscer_msgs::srv::ResumeMission_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::ResumeMission>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::ResumeMission_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::ResumeMission_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__RESUME_MISSION__TRAITS_HPP_

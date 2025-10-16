// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/UserFeedback.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__USER_FEEDBACK__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__USER_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/user_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UserFeedback_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: user_feedback
  {
    out << "user_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.user_feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserFeedback_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: user_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.user_feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserFeedback_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::UserFeedback_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::UserFeedback_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::UserFeedback_Request>()
{
  return "anscer_msgs::srv::UserFeedback_Request";
}

template<>
inline const char * name<anscer_msgs::srv::UserFeedback_Request>()
{
  return "anscer_msgs/srv/UserFeedback_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::UserFeedback_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::UserFeedback_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::UserFeedback_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UserFeedback_Response & msg,
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
  const UserFeedback_Response & msg,
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

inline std::string to_yaml(const UserFeedback_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::UserFeedback_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::UserFeedback_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::UserFeedback_Response>()
{
  return "anscer_msgs::srv::UserFeedback_Response";
}

template<>
inline const char * name<anscer_msgs::srv::UserFeedback_Response>()
{
  return "anscer_msgs/srv/UserFeedback_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::UserFeedback_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::UserFeedback_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::UserFeedback_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::UserFeedback>()
{
  return "anscer_msgs::srv::UserFeedback";
}

template<>
inline const char * name<anscer_msgs::srv::UserFeedback>()
{
  return "anscer_msgs/srv/UserFeedback";
}

template<>
struct has_fixed_size<anscer_msgs::srv::UserFeedback>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::UserFeedback_Request>::value &&
    has_fixed_size<anscer_msgs::srv::UserFeedback_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::UserFeedback>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::UserFeedback_Request>::value &&
    has_bounded_size<anscer_msgs::srv::UserFeedback_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::UserFeedback>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::UserFeedback_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::UserFeedback_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__USER_FEEDBACK__TRAITS_HPP_

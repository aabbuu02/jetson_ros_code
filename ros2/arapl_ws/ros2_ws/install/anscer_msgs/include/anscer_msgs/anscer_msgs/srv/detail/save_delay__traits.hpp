// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/SaveDelay.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAVE_DELAY__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAVE_DELAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/save_delay__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'delay'
#include "anscer_msgs/msg/detail/delay__traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveDelay_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: save
  {
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
    out << ", ";
  }

  // member: delay
  {
    out << "delay: ";
    to_flow_style_yaml(msg.delay, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveDelay_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: save
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
    out << "\n";
  }

  // member: delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay:\n";
    to_block_style_yaml(msg.delay, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveDelay_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::SaveDelay_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::SaveDelay_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::SaveDelay_Request>()
{
  return "anscer_msgs::srv::SaveDelay_Request";
}

template<>
inline const char * name<anscer_msgs::srv::SaveDelay_Request>()
{
  return "anscer_msgs/srv/SaveDelay_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::SaveDelay_Request>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::msg::Delay>::value> {};

template<>
struct has_bounded_size<anscer_msgs::srv::SaveDelay_Request>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::msg::Delay>::value> {};

template<>
struct is_message<anscer_msgs::srv::SaveDelay_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveDelay_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: is_saved
  {
    out << "is_saved: ";
    rosidl_generator_traits::value_to_yaml(msg.is_saved, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveDelay_Response & msg,
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

  // member: is_saved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_saved: ";
    rosidl_generator_traits::value_to_yaml(msg.is_saved, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveDelay_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::SaveDelay_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::SaveDelay_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::SaveDelay_Response>()
{
  return "anscer_msgs::srv::SaveDelay_Response";
}

template<>
inline const char * name<anscer_msgs::srv::SaveDelay_Response>()
{
  return "anscer_msgs/srv/SaveDelay_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::SaveDelay_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::SaveDelay_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::SaveDelay_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::SaveDelay>()
{
  return "anscer_msgs::srv::SaveDelay";
}

template<>
inline const char * name<anscer_msgs::srv::SaveDelay>()
{
  return "anscer_msgs/srv/SaveDelay";
}

template<>
struct has_fixed_size<anscer_msgs::srv::SaveDelay>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::SaveDelay_Request>::value &&
    has_fixed_size<anscer_msgs::srv::SaveDelay_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::SaveDelay>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::SaveDelay_Request>::value &&
    has_bounded_size<anscer_msgs::srv::SaveDelay_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::SaveDelay>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::SaveDelay_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::SaveDelay_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__SAVE_DELAY__TRAITS_HPP_

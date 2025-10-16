// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/Buzzer.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BUZZER__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BUZZER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/buzzer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Buzzer_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: initiate
  {
    out << "initiate: ";
    rosidl_generator_traits::value_to_yaml(msg.initiate, out);
    out << ", ";
  }

  // member: delay
  {
    out << "delay: ";
    rosidl_generator_traits::value_to_yaml(msg.delay, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Buzzer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initiate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initiate: ";
    rosidl_generator_traits::value_to_yaml(msg.initiate, out);
    out << "\n";
  }

  // member: delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay: ";
    rosidl_generator_traits::value_to_yaml(msg.delay, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Buzzer_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::Buzzer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::Buzzer_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::Buzzer_Request>()
{
  return "anscer_msgs::srv::Buzzer_Request";
}

template<>
inline const char * name<anscer_msgs::srv::Buzzer_Request>()
{
  return "anscer_msgs/srv/Buzzer_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::Buzzer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::Buzzer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::Buzzer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Buzzer_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Buzzer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Buzzer_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::Buzzer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::Buzzer_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::Buzzer_Response>()
{
  return "anscer_msgs::srv::Buzzer_Response";
}

template<>
inline const char * name<anscer_msgs::srv::Buzzer_Response>()
{
  return "anscer_msgs/srv/Buzzer_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::Buzzer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::Buzzer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::Buzzer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::Buzzer>()
{
  return "anscer_msgs::srv::Buzzer";
}

template<>
inline const char * name<anscer_msgs::srv::Buzzer>()
{
  return "anscer_msgs/srv/Buzzer";
}

template<>
struct has_fixed_size<anscer_msgs::srv::Buzzer>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::Buzzer_Request>::value &&
    has_fixed_size<anscer_msgs::srv::Buzzer_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::Buzzer>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::Buzzer_Request>::value &&
    has_bounded_size<anscer_msgs::srv::Buzzer_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::Buzzer>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::Buzzer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::Buzzer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__BUZZER__TRAITS_HPP_

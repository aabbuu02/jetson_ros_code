// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qr_mission_scheduler:srv/GetGoal.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__TRAITS_HPP_
#define QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qr_mission_scheduler/srv/detail/get_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qr_mission_scheduler
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_type
  {
    out << "goal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_type, out);
    out << ", ";
  }

  // member: source_id
  {
    out << "source_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_id, out);
    out << ", ";
  }

  // member: target_id
  {
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_type, out);
    out << "\n";
  }

  // member: source_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_id, out);
    out << "\n";
  }

  // member: target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::srv::GetGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::srv::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::srv::GetGoal_Request & msg)
{
  return qr_mission_scheduler::srv::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::srv::GetGoal_Request>()
{
  return "qr_mission_scheduler::srv::GetGoal_Request";
}

template<>
inline const char * name<qr_mission_scheduler::srv::GetGoal_Request>()
{
  return "qr_mission_scheduler/srv/GetGoal_Request";
}

template<>
struct has_fixed_size<qr_mission_scheduler::srv::GetGoal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qr_mission_scheduler::srv::GetGoal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qr_mission_scheduler::srv::GetGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace qr_mission_scheduler
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGoal_Response & msg,
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
  const GetGoal_Response & msg,
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

inline std::string to_yaml(const GetGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::srv::GetGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::srv::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::srv::GetGoal_Response & msg)
{
  return qr_mission_scheduler::srv::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::srv::GetGoal_Response>()
{
  return "qr_mission_scheduler::srv::GetGoal_Response";
}

template<>
inline const char * name<qr_mission_scheduler::srv::GetGoal_Response>()
{
  return "qr_mission_scheduler/srv/GetGoal_Response";
}

template<>
struct has_fixed_size<qr_mission_scheduler::srv::GetGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qr_mission_scheduler::srv::GetGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qr_mission_scheduler::srv::GetGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<qr_mission_scheduler::srv::GetGoal>()
{
  return "qr_mission_scheduler::srv::GetGoal";
}

template<>
inline const char * name<qr_mission_scheduler::srv::GetGoal>()
{
  return "qr_mission_scheduler/srv/GetGoal";
}

template<>
struct has_fixed_size<qr_mission_scheduler::srv::GetGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<qr_mission_scheduler::srv::GetGoal_Request>::value &&
    has_fixed_size<qr_mission_scheduler::srv::GetGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<qr_mission_scheduler::srv::GetGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<qr_mission_scheduler::srv::GetGoal_Request>::value &&
    has_bounded_size<qr_mission_scheduler::srv::GetGoal_Response>::value
  >
{
};

template<>
struct is_service<qr_mission_scheduler::srv::GetGoal>
  : std::true_type
{
};

template<>
struct is_service_request<qr_mission_scheduler::srv::GetGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<qr_mission_scheduler::srv::GetGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__TRAITS_HPP_

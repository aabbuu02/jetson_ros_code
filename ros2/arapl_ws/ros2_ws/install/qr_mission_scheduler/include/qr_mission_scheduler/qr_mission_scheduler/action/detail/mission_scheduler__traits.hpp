// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qr_mission_scheduler:action/MissionScheduler.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__ACTION__DETAIL__MISSION_SCHEDULER__TRAITS_HPP_
#define QR_MISSION_SCHEDULER__ACTION__DETAIL__MISSION_SCHEDULER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qr_mission_scheduler/action/detail/mission_scheduler__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_type'
#include "qr_mission_scheduler/msg/detail/goal_msg__traits.hpp"

namespace qr_mission_scheduler
{

namespace action
{

inline void to_flow_style_yaml(
  const MissionScheduler_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_type
  {
    out << "goal_type: ";
    to_flow_style_yaml(msg.goal_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionScheduler_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_type:\n";
    to_block_style_yaml(msg.goal_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionScheduler_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::action::MissionScheduler_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::action::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::action::MissionScheduler_Goal & msg)
{
  return qr_mission_scheduler::action::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_Goal>()
{
  return "qr_mission_scheduler::action::MissionScheduler_Goal";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_Goal>()
{
  return "qr_mission_scheduler/action/MissionScheduler_Goal";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_Goal>
  : std::integral_constant<bool, has_fixed_size<qr_mission_scheduler::msg::GoalMsg>::value> {};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_Goal>
  : std::integral_constant<bool, has_bounded_size<qr_mission_scheduler::msg::GoalMsg>::value> {};

template<>
struct is_message<qr_mission_scheduler::action::MissionScheduler_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace qr_mission_scheduler
{

namespace action
{

inline void to_flow_style_yaml(
  const MissionScheduler_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionScheduler_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionScheduler_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::action::MissionScheduler_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::action::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::action::MissionScheduler_Result & msg)
{
  return qr_mission_scheduler::action::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_Result>()
{
  return "qr_mission_scheduler::action::MissionScheduler_Result";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_Result>()
{
  return "qr_mission_scheduler/action/MissionScheduler_Result";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qr_mission_scheduler::action::MissionScheduler_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace qr_mission_scheduler
{

namespace action
{

inline void to_flow_style_yaml(
  const MissionScheduler_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    if (msg.pose.size() == 0) {
      out << "pose: []";
    } else {
      out << "pose: [";
      size_t pending_items = msg.pose.size();
      for (auto item : msg.pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const MissionScheduler_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose.size() == 0) {
      out << "pose: []\n";
    } else {
      out << "pose:\n";
      for (auto item : msg.pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionScheduler_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::action::MissionScheduler_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::action::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::action::MissionScheduler_Feedback & msg)
{
  return qr_mission_scheduler::action::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_Feedback>()
{
  return "qr_mission_scheduler::action::MissionScheduler_Feedback";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_Feedback>()
{
  return "qr_mission_scheduler/action/MissionScheduler_Feedback";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qr_mission_scheduler::action::MissionScheduler_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "qr_mission_scheduler/action/detail/mission_scheduler__traits.hpp"

namespace qr_mission_scheduler
{

namespace action
{

inline void to_flow_style_yaml(
  const MissionScheduler_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionScheduler_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionScheduler_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::action::MissionScheduler_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::action::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::action::MissionScheduler_SendGoal_Request & msg)
{
  return qr_mission_scheduler::action::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_SendGoal_Request>()
{
  return "qr_mission_scheduler::action::MissionScheduler_SendGoal_Request";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_SendGoal_Request>()
{
  return "qr_mission_scheduler/action/MissionScheduler_SendGoal_Request";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<qr_mission_scheduler::action::MissionScheduler_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<qr_mission_scheduler::action::MissionScheduler_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<qr_mission_scheduler::action::MissionScheduler_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace qr_mission_scheduler
{

namespace action
{

inline void to_flow_style_yaml(
  const MissionScheduler_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionScheduler_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionScheduler_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::action::MissionScheduler_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::action::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::action::MissionScheduler_SendGoal_Response & msg)
{
  return qr_mission_scheduler::action::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_SendGoal_Response>()
{
  return "qr_mission_scheduler::action::MissionScheduler_SendGoal_Response";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_SendGoal_Response>()
{
  return "qr_mission_scheduler/action/MissionScheduler_SendGoal_Response";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<qr_mission_scheduler::action::MissionScheduler_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_SendGoal>()
{
  return "qr_mission_scheduler::action::MissionScheduler_SendGoal";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_SendGoal>()
{
  return "qr_mission_scheduler/action/MissionScheduler_SendGoal";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<qr_mission_scheduler::action::MissionScheduler_SendGoal_Request>::value &&
    has_fixed_size<qr_mission_scheduler::action::MissionScheduler_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<qr_mission_scheduler::action::MissionScheduler_SendGoal_Request>::value &&
    has_bounded_size<qr_mission_scheduler::action::MissionScheduler_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<qr_mission_scheduler::action::MissionScheduler_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<qr_mission_scheduler::action::MissionScheduler_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<qr_mission_scheduler::action::MissionScheduler_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace qr_mission_scheduler
{

namespace action
{

inline void to_flow_style_yaml(
  const MissionScheduler_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionScheduler_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionScheduler_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::action::MissionScheduler_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::action::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::action::MissionScheduler_GetResult_Request & msg)
{
  return qr_mission_scheduler::action::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_GetResult_Request>()
{
  return "qr_mission_scheduler::action::MissionScheduler_GetResult_Request";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_GetResult_Request>()
{
  return "qr_mission_scheduler/action/MissionScheduler_GetResult_Request";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<qr_mission_scheduler::action::MissionScheduler_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__traits.hpp"

namespace qr_mission_scheduler
{

namespace action
{

inline void to_flow_style_yaml(
  const MissionScheduler_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionScheduler_GetResult_Response & msg,
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

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionScheduler_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::action::MissionScheduler_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::action::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::action::MissionScheduler_GetResult_Response & msg)
{
  return qr_mission_scheduler::action::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_GetResult_Response>()
{
  return "qr_mission_scheduler::action::MissionScheduler_GetResult_Response";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_GetResult_Response>()
{
  return "qr_mission_scheduler/action/MissionScheduler_GetResult_Response";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<qr_mission_scheduler::action::MissionScheduler_Result>::value> {};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<qr_mission_scheduler::action::MissionScheduler_Result>::value> {};

template<>
struct is_message<qr_mission_scheduler::action::MissionScheduler_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_GetResult>()
{
  return "qr_mission_scheduler::action::MissionScheduler_GetResult";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_GetResult>()
{
  return "qr_mission_scheduler/action/MissionScheduler_GetResult";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<qr_mission_scheduler::action::MissionScheduler_GetResult_Request>::value &&
    has_fixed_size<qr_mission_scheduler::action::MissionScheduler_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<qr_mission_scheduler::action::MissionScheduler_GetResult_Request>::value &&
    has_bounded_size<qr_mission_scheduler::action::MissionScheduler_GetResult_Response>::value
  >
{
};

template<>
struct is_service<qr_mission_scheduler::action::MissionScheduler_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<qr_mission_scheduler::action::MissionScheduler_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<qr_mission_scheduler::action::MissionScheduler_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__traits.hpp"

namespace qr_mission_scheduler
{

namespace action
{

inline void to_flow_style_yaml(
  const MissionScheduler_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionScheduler_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionScheduler_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace qr_mission_scheduler

namespace rosidl_generator_traits
{

[[deprecated("use qr_mission_scheduler::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_mission_scheduler::action::MissionScheduler_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_mission_scheduler::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_mission_scheduler::action::to_yaml() instead")]]
inline std::string to_yaml(const qr_mission_scheduler::action::MissionScheduler_FeedbackMessage & msg)
{
  return qr_mission_scheduler::action::to_yaml(msg);
}

template<>
inline const char * data_type<qr_mission_scheduler::action::MissionScheduler_FeedbackMessage>()
{
  return "qr_mission_scheduler::action::MissionScheduler_FeedbackMessage";
}

template<>
inline const char * name<qr_mission_scheduler::action::MissionScheduler_FeedbackMessage>()
{
  return "qr_mission_scheduler/action/MissionScheduler_FeedbackMessage";
}

template<>
struct has_fixed_size<qr_mission_scheduler::action::MissionScheduler_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<qr_mission_scheduler::action::MissionScheduler_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<qr_mission_scheduler::action::MissionScheduler_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<qr_mission_scheduler::action::MissionScheduler_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<qr_mission_scheduler::action::MissionScheduler_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<qr_mission_scheduler::action::MissionScheduler>
  : std::true_type
{
};

template<>
struct is_action_goal<qr_mission_scheduler::action::MissionScheduler_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<qr_mission_scheduler::action::MissionScheduler_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<qr_mission_scheduler::action::MissionScheduler_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // QR_MISSION_SCHEDULER__ACTION__DETAIL__MISSION_SCHEDULER__TRAITS_HPP_

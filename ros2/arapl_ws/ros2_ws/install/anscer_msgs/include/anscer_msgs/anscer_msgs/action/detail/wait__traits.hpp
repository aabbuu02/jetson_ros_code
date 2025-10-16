// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:action/Wait.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__WAIT__TRAITS_HPP_
#define ANSCER_MSGS__ACTION__DETAIL__WAIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/action/detail/wait__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Wait_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: wait_time
  {
    out << "wait_time: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_time, out);
    out << ", ";
  }

  // member: wait_activate
  {
    out << "wait_activate: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_activate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Wait_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wait_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wait_time: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_time, out);
    out << "\n";
  }

  // member: wait_activate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wait_activate: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_activate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Wait_Goal & msg, bool use_flow_style = false)
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

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::action::Wait_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Wait_Goal & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Wait_Goal>()
{
  return "anscer_msgs::action::Wait_Goal";
}

template<>
inline const char * name<anscer_msgs::action::Wait_Goal>()
{
  return "anscer_msgs/action/Wait_Goal";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::action::Wait_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Wait_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_success
  {
    out << "is_success: ";
    rosidl_generator_traits::value_to_yaml(msg.is_success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Wait_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_success: ";
    rosidl_generator_traits::value_to_yaml(msg.is_success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Wait_Result & msg, bool use_flow_style = false)
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

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::action::Wait_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Wait_Result & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Wait_Result>()
{
  return "anscer_msgs::action::Wait_Result";
}

template<>
inline const char * name<anscer_msgs::action::Wait_Result>()
{
  return "anscer_msgs/action/Wait_Result";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::action::Wait_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Wait_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: wait_feedback
  {
    out << "wait_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_feedback, out);
    out << ", ";
  }

  // member: time_elapsed
  {
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Wait_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wait_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wait_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_feedback, out);
    out << "\n";
  }

  // member: time_elapsed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Wait_Feedback & msg, bool use_flow_style = false)
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

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::action::Wait_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Wait_Feedback & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Wait_Feedback>()
{
  return "anscer_msgs::action::Wait_Feedback";
}

template<>
inline const char * name<anscer_msgs::action::Wait_Feedback>()
{
  return "anscer_msgs/action/Wait_Feedback";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::action::Wait_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "anscer_msgs/action/detail/wait__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Wait_SendGoal_Request & msg,
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
  const Wait_SendGoal_Request & msg,
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

inline std::string to_yaml(const Wait_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::action::Wait_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Wait_SendGoal_Request & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Wait_SendGoal_Request>()
{
  return "anscer_msgs::action::Wait_SendGoal_Request";
}

template<>
inline const char * name<anscer_msgs::action::Wait_SendGoal_Request>()
{
  return "anscer_msgs/action/Wait_SendGoal_Request";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::action::Wait_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::action::Wait_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<anscer_msgs::action::Wait_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Wait_SendGoal_Response & msg,
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
  const Wait_SendGoal_Response & msg,
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

inline std::string to_yaml(const Wait_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::action::Wait_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Wait_SendGoal_Response & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Wait_SendGoal_Response>()
{
  return "anscer_msgs::action::Wait_SendGoal_Response";
}

template<>
inline const char * name<anscer_msgs::action::Wait_SendGoal_Response>()
{
  return "anscer_msgs/action/Wait_SendGoal_Response";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<anscer_msgs::action::Wait_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::action::Wait_SendGoal>()
{
  return "anscer_msgs::action::Wait_SendGoal";
}

template<>
inline const char * name<anscer_msgs::action::Wait_SendGoal>()
{
  return "anscer_msgs/action/Wait_SendGoal";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::action::Wait_SendGoal_Request>::value &&
    has_fixed_size<anscer_msgs::action::Wait_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::action::Wait_SendGoal_Request>::value &&
    has_bounded_size<anscer_msgs::action::Wait_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::action::Wait_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::action::Wait_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::action::Wait_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Wait_GetResult_Request & msg,
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
  const Wait_GetResult_Request & msg,
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

inline std::string to_yaml(const Wait_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::action::Wait_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Wait_GetResult_Request & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Wait_GetResult_Request>()
{
  return "anscer_msgs::action::Wait_GetResult_Request";
}

template<>
inline const char * name<anscer_msgs::action::Wait_GetResult_Request>()
{
  return "anscer_msgs/action/Wait_GetResult_Request";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<anscer_msgs::action::Wait_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "anscer_msgs/action/detail/wait__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Wait_GetResult_Response & msg,
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
  const Wait_GetResult_Response & msg,
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

inline std::string to_yaml(const Wait_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::action::Wait_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Wait_GetResult_Response & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Wait_GetResult_Response>()
{
  return "anscer_msgs::action::Wait_GetResult_Response";
}

template<>
inline const char * name<anscer_msgs::action::Wait_GetResult_Response>()
{
  return "anscer_msgs/action/Wait_GetResult_Response";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::action::Wait_Result>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::action::Wait_Result>::value> {};

template<>
struct is_message<anscer_msgs::action::Wait_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::action::Wait_GetResult>()
{
  return "anscer_msgs::action::Wait_GetResult";
}

template<>
inline const char * name<anscer_msgs::action::Wait_GetResult>()
{
  return "anscer_msgs/action/Wait_GetResult";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::action::Wait_GetResult_Request>::value &&
    has_fixed_size<anscer_msgs::action::Wait_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::action::Wait_GetResult_Request>::value &&
    has_bounded_size<anscer_msgs::action::Wait_GetResult_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::action::Wait_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::action::Wait_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::action::Wait_GetResult_Response>
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
// #include "anscer_msgs/action/detail/wait__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Wait_FeedbackMessage & msg,
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
  const Wait_FeedbackMessage & msg,
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

inline std::string to_yaml(const Wait_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::action::Wait_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Wait_FeedbackMessage & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Wait_FeedbackMessage>()
{
  return "anscer_msgs::action::Wait_FeedbackMessage";
}

template<>
inline const char * name<anscer_msgs::action::Wait_FeedbackMessage>()
{
  return "anscer_msgs/action/Wait_FeedbackMessage";
}

template<>
struct has_fixed_size<anscer_msgs::action::Wait_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::action::Wait_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Wait_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::action::Wait_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<anscer_msgs::action::Wait_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<anscer_msgs::action::Wait>
  : std::true_type
{
};

template<>
struct is_action_goal<anscer_msgs::action::Wait_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<anscer_msgs::action::Wait_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<anscer_msgs::action::Wait_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ANSCER_MSGS__ACTION__DETAIL__WAIT__TRAITS_HPP_

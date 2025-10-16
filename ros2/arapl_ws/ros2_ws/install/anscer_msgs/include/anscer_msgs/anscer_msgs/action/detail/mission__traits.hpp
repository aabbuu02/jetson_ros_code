// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:action/Mission.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__MISSION__TRAITS_HPP_
#define ANSCER_MSGS__ACTION__DETAIL__MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/action/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mission_list'
#include "anscer_msgs/msg/detail/task__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: loop_number
  {
    out << "loop_number: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_number, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: mission_list
  {
    if (msg.mission_list.size() == 0) {
      out << "mission_list: []";
    } else {
      out << "mission_list: [";
      size_t pending_items = msg.mission_list.size();
      for (auto item : msg.mission_list) {
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
  const Mission_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: loop_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_number: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_number, out);
    out << "\n";
  }

  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: mission_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mission_list.size() == 0) {
      out << "mission_list: []\n";
    } else {
      out << "mission_list:\n";
      for (auto item : msg.mission_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_Goal & msg, bool use_flow_style = false)
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
  const anscer_msgs::action::Mission_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Mission_Goal & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Mission_Goal>()
{
  return "anscer_msgs::action::Mission_Goal";
}

template<>
inline const char * name<anscer_msgs::action::Mission_Goal>()
{
  return "anscer_msgs/action/Mission_Goal";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::action::Mission_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_success
  {
    out << "is_success: ";
    rosidl_generator_traits::value_to_yaml(msg.is_success, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_Result & msg,
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

  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_Result & msg, bool use_flow_style = false)
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
  const anscer_msgs::action::Mission_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Mission_Result & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Mission_Result>()
{
  return "anscer_msgs::action::Mission_Result";
}

template<>
inline const char * name<anscer_msgs::action::Mission_Result>()
{
  return "anscer_msgs/action/Mission_Result";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::action::Mission_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'mission_feedback'
#include "anscer_msgs/msg/detail/feedback__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_feedback
  {
    out << "mission_feedback: ";
    to_flow_style_yaml(msg.mission_feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_feedback:\n";
    to_block_style_yaml(msg.mission_feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_Feedback & msg, bool use_flow_style = false)
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
  const anscer_msgs::action::Mission_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Mission_Feedback & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Mission_Feedback>()
{
  return "anscer_msgs::action::Mission_Feedback";
}

template<>
inline const char * name<anscer_msgs::action::Mission_Feedback>()
{
  return "anscer_msgs/action/Mission_Feedback";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_Feedback>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::msg::Feedback>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_Feedback>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::msg::Feedback>::value> {};

template<>
struct is_message<anscer_msgs::action::Mission_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "anscer_msgs/action/detail/mission__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_SendGoal_Request & msg,
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
  const Mission_SendGoal_Request & msg,
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

inline std::string to_yaml(const Mission_SendGoal_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::action::Mission_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Mission_SendGoal_Request & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Mission_SendGoal_Request>()
{
  return "anscer_msgs::action::Mission_SendGoal_Request";
}

template<>
inline const char * name<anscer_msgs::action::Mission_SendGoal_Request>()
{
  return "anscer_msgs/action/Mission_SendGoal_Request";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::action::Mission_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::action::Mission_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<anscer_msgs::action::Mission_SendGoal_Request>
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
  const Mission_SendGoal_Response & msg,
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
  const Mission_SendGoal_Response & msg,
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

inline std::string to_yaml(const Mission_SendGoal_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::action::Mission_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Mission_SendGoal_Response & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Mission_SendGoal_Response>()
{
  return "anscer_msgs::action::Mission_SendGoal_Response";
}

template<>
inline const char * name<anscer_msgs::action::Mission_SendGoal_Response>()
{
  return "anscer_msgs/action/Mission_SendGoal_Response";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<anscer_msgs::action::Mission_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::action::Mission_SendGoal>()
{
  return "anscer_msgs::action::Mission_SendGoal";
}

template<>
inline const char * name<anscer_msgs::action::Mission_SendGoal>()
{
  return "anscer_msgs/action/Mission_SendGoal";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::action::Mission_SendGoal_Request>::value &&
    has_fixed_size<anscer_msgs::action::Mission_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::action::Mission_SendGoal_Request>::value &&
    has_bounded_size<anscer_msgs::action::Mission_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::action::Mission_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::action::Mission_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::action::Mission_SendGoal_Response>
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
  const Mission_GetResult_Request & msg,
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
  const Mission_GetResult_Request & msg,
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

inline std::string to_yaml(const Mission_GetResult_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::action::Mission_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Mission_GetResult_Request & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Mission_GetResult_Request>()
{
  return "anscer_msgs::action::Mission_GetResult_Request";
}

template<>
inline const char * name<anscer_msgs::action::Mission_GetResult_Request>()
{
  return "anscer_msgs/action/Mission_GetResult_Request";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<anscer_msgs::action::Mission_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "anscer_msgs/action/detail/mission__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_GetResult_Response & msg,
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
  const Mission_GetResult_Response & msg,
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

inline std::string to_yaml(const Mission_GetResult_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::action::Mission_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Mission_GetResult_Response & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Mission_GetResult_Response>()
{
  return "anscer_msgs::action::Mission_GetResult_Response";
}

template<>
inline const char * name<anscer_msgs::action::Mission_GetResult_Response>()
{
  return "anscer_msgs/action/Mission_GetResult_Response";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::action::Mission_Result>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::action::Mission_Result>::value> {};

template<>
struct is_message<anscer_msgs::action::Mission_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::action::Mission_GetResult>()
{
  return "anscer_msgs::action::Mission_GetResult";
}

template<>
inline const char * name<anscer_msgs::action::Mission_GetResult>()
{
  return "anscer_msgs/action/Mission_GetResult";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::action::Mission_GetResult_Request>::value &&
    has_fixed_size<anscer_msgs::action::Mission_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::action::Mission_GetResult_Request>::value &&
    has_bounded_size<anscer_msgs::action::Mission_GetResult_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::action::Mission_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::action::Mission_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::action::Mission_GetResult_Response>
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
// #include "anscer_msgs/action/detail/mission__traits.hpp"

namespace anscer_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_FeedbackMessage & msg,
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
  const Mission_FeedbackMessage & msg,
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

inline std::string to_yaml(const Mission_FeedbackMessage & msg, bool use_flow_style = false)
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
  const anscer_msgs::action::Mission_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::action::Mission_FeedbackMessage & msg)
{
  return anscer_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::action::Mission_FeedbackMessage>()
{
  return "anscer_msgs::action::Mission_FeedbackMessage";
}

template<>
inline const char * name<anscer_msgs::action::Mission_FeedbackMessage>()
{
  return "anscer_msgs/action/Mission_FeedbackMessage";
}

template<>
struct has_fixed_size<anscer_msgs::action::Mission_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<anscer_msgs::action::Mission_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<anscer_msgs::action::Mission_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<anscer_msgs::action::Mission_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<anscer_msgs::action::Mission_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<anscer_msgs::action::Mission>
  : std::true_type
{
};

template<>
struct is_action_goal<anscer_msgs::action::Mission_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<anscer_msgs::action::Mission_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<anscer_msgs::action::Mission_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ANSCER_MSGS__ACTION__DETAIL__MISSION__TRAITS_HPP_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qr_mission_scheduler:action/MissionScheduler.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__ACTION__DETAIL__MISSION_SCHEDULER__STRUCT_H_
#define QR_MISSION_SCHEDULER__ACTION__DETAIL__MISSION_SCHEDULER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_type'
#include "qr_mission_scheduler/msg/detail/goal_msg__struct.h"

/// Struct defined in action/MissionScheduler in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__action__MissionScheduler_Goal
{
  qr_mission_scheduler__msg__GoalMsg goal_type;
} qr_mission_scheduler__action__MissionScheduler_Goal;

// Struct for a sequence of qr_mission_scheduler__action__MissionScheduler_Goal.
typedef struct qr_mission_scheduler__action__MissionScheduler_Goal__Sequence
{
  qr_mission_scheduler__action__MissionScheduler_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__action__MissionScheduler_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MissionScheduler in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__action__MissionScheduler_Result
{
  rosidl_runtime_c__String success;
} qr_mission_scheduler__action__MissionScheduler_Result;

// Struct for a sequence of qr_mission_scheduler__action__MissionScheduler_Result.
typedef struct qr_mission_scheduler__action__MissionScheduler_Result__Sequence
{
  qr_mission_scheduler__action__MissionScheduler_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__action__MissionScheduler_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/MissionScheduler in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__action__MissionScheduler_Feedback
{
  rosidl_runtime_c__double__Sequence pose;
} qr_mission_scheduler__action__MissionScheduler_Feedback;

// Struct for a sequence of qr_mission_scheduler__action__MissionScheduler_Feedback.
typedef struct qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence
{
  qr_mission_scheduler__action__MissionScheduler_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"

/// Struct defined in action/MissionScheduler in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__action__MissionScheduler_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  qr_mission_scheduler__action__MissionScheduler_Goal goal;
} qr_mission_scheduler__action__MissionScheduler_SendGoal_Request;

// Struct for a sequence of qr_mission_scheduler__action__MissionScheduler_SendGoal_Request.
typedef struct qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence
{
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MissionScheduler in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__action__MissionScheduler_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} qr_mission_scheduler__action__MissionScheduler_SendGoal_Response;

// Struct for a sequence of qr_mission_scheduler__action__MissionScheduler_SendGoal_Response.
typedef struct qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence
{
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MissionScheduler in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__action__MissionScheduler_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} qr_mission_scheduler__action__MissionScheduler_GetResult_Request;

// Struct for a sequence of qr_mission_scheduler__action__MissionScheduler_GetResult_Request.
typedef struct qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence
{
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"

/// Struct defined in action/MissionScheduler in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__action__MissionScheduler_GetResult_Response
{
  int8_t status;
  qr_mission_scheduler__action__MissionScheduler_Result result;
} qr_mission_scheduler__action__MissionScheduler_GetResult_Response;

// Struct for a sequence of qr_mission_scheduler__action__MissionScheduler_GetResult_Response.
typedef struct qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence
{
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"

/// Struct defined in action/MissionScheduler in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__action__MissionScheduler_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  qr_mission_scheduler__action__MissionScheduler_Feedback feedback;
} qr_mission_scheduler__action__MissionScheduler_FeedbackMessage;

// Struct for a sequence of qr_mission_scheduler__action__MissionScheduler_FeedbackMessage.
typedef struct qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence
{
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QR_MISSION_SCHEDULER__ACTION__DETAIL__MISSION_SCHEDULER__STRUCT_H_

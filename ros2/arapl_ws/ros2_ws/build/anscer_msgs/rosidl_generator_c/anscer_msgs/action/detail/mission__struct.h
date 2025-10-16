// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:action/Mission.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__MISSION__STRUCT_H_
#define ANSCER_MSGS__ACTION__DETAIL__MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_id'
#include "rosidl_runtime_c/string.h"
// Member 'mission_list'
#include "anscer_msgs/msg/detail/task__struct.h"

/// Struct defined in action/Mission in the package anscer_msgs.
typedef struct anscer_msgs__action__Mission_Goal
{
  int16_t loop_number;
  rosidl_runtime_c__String mission_id;
  anscer_msgs__msg__Task__Sequence mission_list;
} anscer_msgs__action__Mission_Goal;

// Struct for a sequence of anscer_msgs__action__Mission_Goal.
typedef struct anscer_msgs__action__Mission_Goal__Sequence
{
  anscer_msgs__action__Mission_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Mission_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'mission_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Mission in the package anscer_msgs.
typedef struct anscer_msgs__action__Mission_Result
{
  bool is_success;
  rosidl_runtime_c__String mission_id;
} anscer_msgs__action__Mission_Result;

// Struct for a sequence of anscer_msgs__action__Mission_Result.
typedef struct anscer_msgs__action__Mission_Result__Sequence
{
  anscer_msgs__action__Mission_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Mission_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'mission_feedback'
#include "anscer_msgs/msg/detail/feedback__struct.h"

/// Struct defined in action/Mission in the package anscer_msgs.
typedef struct anscer_msgs__action__Mission_Feedback
{
  anscer_msgs__msg__Feedback mission_feedback;
} anscer_msgs__action__Mission_Feedback;

// Struct for a sequence of anscer_msgs__action__Mission_Feedback.
typedef struct anscer_msgs__action__Mission_Feedback__Sequence
{
  anscer_msgs__action__Mission_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Mission_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "anscer_msgs/action/detail/mission__struct.h"

/// Struct defined in action/Mission in the package anscer_msgs.
typedef struct anscer_msgs__action__Mission_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  anscer_msgs__action__Mission_Goal goal;
} anscer_msgs__action__Mission_SendGoal_Request;

// Struct for a sequence of anscer_msgs__action__Mission_SendGoal_Request.
typedef struct anscer_msgs__action__Mission_SendGoal_Request__Sequence
{
  anscer_msgs__action__Mission_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Mission_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Mission in the package anscer_msgs.
typedef struct anscer_msgs__action__Mission_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} anscer_msgs__action__Mission_SendGoal_Response;

// Struct for a sequence of anscer_msgs__action__Mission_SendGoal_Response.
typedef struct anscer_msgs__action__Mission_SendGoal_Response__Sequence
{
  anscer_msgs__action__Mission_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Mission_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Mission in the package anscer_msgs.
typedef struct anscer_msgs__action__Mission_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} anscer_msgs__action__Mission_GetResult_Request;

// Struct for a sequence of anscer_msgs__action__Mission_GetResult_Request.
typedef struct anscer_msgs__action__Mission_GetResult_Request__Sequence
{
  anscer_msgs__action__Mission_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Mission_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "anscer_msgs/action/detail/mission__struct.h"

/// Struct defined in action/Mission in the package anscer_msgs.
typedef struct anscer_msgs__action__Mission_GetResult_Response
{
  int8_t status;
  anscer_msgs__action__Mission_Result result;
} anscer_msgs__action__Mission_GetResult_Response;

// Struct for a sequence of anscer_msgs__action__Mission_GetResult_Response.
typedef struct anscer_msgs__action__Mission_GetResult_Response__Sequence
{
  anscer_msgs__action__Mission_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Mission_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "anscer_msgs/action/detail/mission__struct.h"

/// Struct defined in action/Mission in the package anscer_msgs.
typedef struct anscer_msgs__action__Mission_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  anscer_msgs__action__Mission_Feedback feedback;
} anscer_msgs__action__Mission_FeedbackMessage;

// Struct for a sequence of anscer_msgs__action__Mission_FeedbackMessage.
typedef struct anscer_msgs__action__Mission_FeedbackMessage__Sequence
{
  anscer_msgs__action__Mission_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Mission_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__ACTION__DETAIL__MISSION__STRUCT_H_

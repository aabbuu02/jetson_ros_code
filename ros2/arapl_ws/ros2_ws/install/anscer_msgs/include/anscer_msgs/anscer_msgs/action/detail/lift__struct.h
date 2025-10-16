// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:action/Lift.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__LIFT__STRUCT_H_
#define ANSCER_MSGS__ACTION__DETAIL__LIFT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Lift in the package anscer_msgs.
typedef struct anscer_msgs__action__Lift_Goal
{
  int8_t system_activate;
} anscer_msgs__action__Lift_Goal;

// Struct for a sequence of anscer_msgs__action__Lift_Goal.
typedef struct anscer_msgs__action__Lift_Goal__Sequence
{
  anscer_msgs__action__Lift_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Lift_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Lift in the package anscer_msgs.
typedef struct anscer_msgs__action__Lift_Result
{
  bool is_success;
} anscer_msgs__action__Lift_Result;

// Struct for a sequence of anscer_msgs__action__Lift_Result.
typedef struct anscer_msgs__action__Lift_Result__Sequence
{
  anscer_msgs__action__Lift_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Lift_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'lifter_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Lift in the package anscer_msgs.
typedef struct anscer_msgs__action__Lift_Feedback
{
  int8_t lifter_feedback;
  rosidl_runtime_c__String lifter_status;
} anscer_msgs__action__Lift_Feedback;

// Struct for a sequence of anscer_msgs__action__Lift_Feedback.
typedef struct anscer_msgs__action__Lift_Feedback__Sequence
{
  anscer_msgs__action__Lift_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Lift_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "anscer_msgs/action/detail/lift__struct.h"

/// Struct defined in action/Lift in the package anscer_msgs.
typedef struct anscer_msgs__action__Lift_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  anscer_msgs__action__Lift_Goal goal;
} anscer_msgs__action__Lift_SendGoal_Request;

// Struct for a sequence of anscer_msgs__action__Lift_SendGoal_Request.
typedef struct anscer_msgs__action__Lift_SendGoal_Request__Sequence
{
  anscer_msgs__action__Lift_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Lift_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Lift in the package anscer_msgs.
typedef struct anscer_msgs__action__Lift_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} anscer_msgs__action__Lift_SendGoal_Response;

// Struct for a sequence of anscer_msgs__action__Lift_SendGoal_Response.
typedef struct anscer_msgs__action__Lift_SendGoal_Response__Sequence
{
  anscer_msgs__action__Lift_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Lift_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Lift in the package anscer_msgs.
typedef struct anscer_msgs__action__Lift_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} anscer_msgs__action__Lift_GetResult_Request;

// Struct for a sequence of anscer_msgs__action__Lift_GetResult_Request.
typedef struct anscer_msgs__action__Lift_GetResult_Request__Sequence
{
  anscer_msgs__action__Lift_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Lift_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "anscer_msgs/action/detail/lift__struct.h"

/// Struct defined in action/Lift in the package anscer_msgs.
typedef struct anscer_msgs__action__Lift_GetResult_Response
{
  int8_t status;
  anscer_msgs__action__Lift_Result result;
} anscer_msgs__action__Lift_GetResult_Response;

// Struct for a sequence of anscer_msgs__action__Lift_GetResult_Response.
typedef struct anscer_msgs__action__Lift_GetResult_Response__Sequence
{
  anscer_msgs__action__Lift_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Lift_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "anscer_msgs/action/detail/lift__struct.h"

/// Struct defined in action/Lift in the package anscer_msgs.
typedef struct anscer_msgs__action__Lift_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  anscer_msgs__action__Lift_Feedback feedback;
} anscer_msgs__action__Lift_FeedbackMessage;

// Struct for a sequence of anscer_msgs__action__Lift_FeedbackMessage.
typedef struct anscer_msgs__action__Lift_FeedbackMessage__Sequence
{
  anscer_msgs__action__Lift_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__Lift_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__ACTION__DETAIL__LIFT__STRUCT_H_

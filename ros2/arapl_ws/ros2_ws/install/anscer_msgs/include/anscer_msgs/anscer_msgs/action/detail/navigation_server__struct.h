// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:action/NavigationServer.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__NAVIGATION_SERVER__STRUCT_H_
#define ANSCER_MSGS__ACTION__DETAIL__NAVIGATION_SERVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source_location'
// Member 'source_process'
// Member 'destination_location'
// Member 'destination_process'
// Member 'default_location'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigationServer in the package anscer_msgs.
typedef struct anscer_msgs__action__NavigationServer_Goal
{
  rosidl_runtime_c__String source_location;
  rosidl_runtime_c__String source_process;
  rosidl_runtime_c__String destination_location;
  rosidl_runtime_c__String destination_process;
  rosidl_runtime_c__String default_location;
} anscer_msgs__action__NavigationServer_Goal;

// Struct for a sequence of anscer_msgs__action__NavigationServer_Goal.
typedef struct anscer_msgs__action__NavigationServer_Goal__Sequence
{
  anscer_msgs__action__NavigationServer_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__NavigationServer_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigationServer in the package anscer_msgs.
typedef struct anscer_msgs__action__NavigationServer_Result
{
  bool goal_succeeded;
  rosidl_runtime_c__String status;
} anscer_msgs__action__NavigationServer_Result;

// Struct for a sequence of anscer_msgs__action__NavigationServer_Result.
typedef struct anscer_msgs__action__NavigationServer_Result__Sequence
{
  anscer_msgs__action__NavigationServer_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__NavigationServer_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'mission_status'
#include "anscer_msgs/msg/detail/mission_status__struct.h"
// Member 'status'
// Member 'warning_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigationServer in the package anscer_msgs.
typedef struct anscer_msgs__action__NavigationServer_Feedback
{
  int16_t completed;
  anscer_msgs__msg__MissionStatus mission_status;
  rosidl_runtime_c__String status;
  bool warning;
  rosidl_runtime_c__String warning_msg;
} anscer_msgs__action__NavigationServer_Feedback;

// Struct for a sequence of anscer_msgs__action__NavigationServer_Feedback.
typedef struct anscer_msgs__action__NavigationServer_Feedback__Sequence
{
  anscer_msgs__action__NavigationServer_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__NavigationServer_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "anscer_msgs/action/detail/navigation_server__struct.h"

/// Struct defined in action/NavigationServer in the package anscer_msgs.
typedef struct anscer_msgs__action__NavigationServer_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  anscer_msgs__action__NavigationServer_Goal goal;
} anscer_msgs__action__NavigationServer_SendGoal_Request;

// Struct for a sequence of anscer_msgs__action__NavigationServer_SendGoal_Request.
typedef struct anscer_msgs__action__NavigationServer_SendGoal_Request__Sequence
{
  anscer_msgs__action__NavigationServer_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__NavigationServer_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigationServer in the package anscer_msgs.
typedef struct anscer_msgs__action__NavigationServer_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} anscer_msgs__action__NavigationServer_SendGoal_Response;

// Struct for a sequence of anscer_msgs__action__NavigationServer_SendGoal_Response.
typedef struct anscer_msgs__action__NavigationServer_SendGoal_Response__Sequence
{
  anscer_msgs__action__NavigationServer_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__NavigationServer_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigationServer in the package anscer_msgs.
typedef struct anscer_msgs__action__NavigationServer_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} anscer_msgs__action__NavigationServer_GetResult_Request;

// Struct for a sequence of anscer_msgs__action__NavigationServer_GetResult_Request.
typedef struct anscer_msgs__action__NavigationServer_GetResult_Request__Sequence
{
  anscer_msgs__action__NavigationServer_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__NavigationServer_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "anscer_msgs/action/detail/navigation_server__struct.h"

/// Struct defined in action/NavigationServer in the package anscer_msgs.
typedef struct anscer_msgs__action__NavigationServer_GetResult_Response
{
  int8_t status;
  anscer_msgs__action__NavigationServer_Result result;
} anscer_msgs__action__NavigationServer_GetResult_Response;

// Struct for a sequence of anscer_msgs__action__NavigationServer_GetResult_Response.
typedef struct anscer_msgs__action__NavigationServer_GetResult_Response__Sequence
{
  anscer_msgs__action__NavigationServer_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__NavigationServer_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "anscer_msgs/action/detail/navigation_server__struct.h"

/// Struct defined in action/NavigationServer in the package anscer_msgs.
typedef struct anscer_msgs__action__NavigationServer_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  anscer_msgs__action__NavigationServer_Feedback feedback;
} anscer_msgs__action__NavigationServer_FeedbackMessage;

// Struct for a sequence of anscer_msgs__action__NavigationServer_FeedbackMessage.
typedef struct anscer_msgs__action__NavigationServer_FeedbackMessage__Sequence
{
  anscer_msgs__action__NavigationServer_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__action__NavigationServer_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__ACTION__DETAIL__NAVIGATION_SERVER__STRUCT_H_

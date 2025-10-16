// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  anscer_msgs__msg__Feedback__IDLE = 0l
};

/// Constant 'ACTIVE'.
enum
{
  anscer_msgs__msg__Feedback__ACTIVE = 1l
};

/// Constant 'SUCCESS'.
enum
{
  anscer_msgs__msg__Feedback__SUCCESS = 2l
};

/// Constant 'ABORTED'.
enum
{
  anscer_msgs__msg__Feedback__ABORTED = 3l
};

/// Constant 'PAUSED'.
enum
{
  anscer_msgs__msg__Feedback__PAUSED = 4l
};

// Include directives for member types
// Member 'index'
// Member 'mission_id'
#include "rosidl_runtime_c/string.h"
// Member 'charge_info'
#include "anscer_msgs/msg/detail/charge_info__struct.h"

/// Struct defined in msg/Feedback in the package anscer_msgs.
/**
  * mission status
 */
typedef struct anscer_msgs__msg__Feedback
{
  rosidl_runtime_c__String index;
  rosidl_runtime_c__String mission_id;
  int16_t number;
  int16_t status;
  anscer_msgs__msg__ChargeInfo charge_info;
  float completion_percentage;
  int32_t time_elapsed;
  int32_t priority_level;
} anscer_msgs__msg__Feedback;

// Struct for a sequence of anscer_msgs__msg__Feedback.
typedef struct anscer_msgs__msg__Feedback__Sequence
{
  anscer_msgs__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_

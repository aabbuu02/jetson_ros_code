// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TASK__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'index'
#include "rosidl_runtime_c/string.h"
// Member 'acr_info'
#include "anscer_msgs/msg/detail/acr_control__struct.h"
// Member 'charge_info'
#include "anscer_msgs/msg/detail/charge_info__struct.h"

/// Struct defined in msg/Task in the package anscer_msgs.
typedef struct anscer_msgs__msg__Task
{
  rosidl_runtime_c__String index;
  int16_t waypoint_index;
  int16_t number;
  bool activate;
  anscer_msgs__msg__ACRControl acr_info;
  anscer_msgs__msg__ChargeInfo charge_info;
} anscer_msgs__msg__Task;

// Struct for a sequence of anscer_msgs__msg__Task.
typedef struct anscer_msgs__msg__Task__Sequence
{
  anscer_msgs__msg__Task * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Task__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__TASK__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Sequence.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SEQUENCE__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'seq_element'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Sequence in the package anscer_msgs.
typedef struct anscer_msgs__msg__Sequence
{
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__int16__Sequence seq_element;
} anscer_msgs__msg__Sequence;

// Struct for a sequence of anscer_msgs__msg__Sequence.
typedef struct anscer_msgs__msg__Sequence__Sequence
{
  anscer_msgs__msg__Sequence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Sequence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__SEQUENCE__STRUCT_H_

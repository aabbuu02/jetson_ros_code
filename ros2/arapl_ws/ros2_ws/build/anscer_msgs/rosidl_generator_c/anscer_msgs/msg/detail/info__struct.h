// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INFO__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'keyvalues'
#include "anscer_msgs/msg/detail/key_values__struct.h"

/// Struct defined in msg/Info in the package anscer_msgs.
typedef struct anscer_msgs__msg__Info
{
  std_msgs__msg__Header header;
  anscer_msgs__msg__KeyValues keyvalues;
} anscer_msgs__msg__Info;

// Struct for a sequence of anscer_msgs__msg__Info.
typedef struct anscer_msgs__msg__Info__Sequence
{
  anscer_msgs__msg__Info * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Info__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__INFO__STRUCT_H_

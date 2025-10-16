// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:msg/Property.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__PROPERTY__STRUCT_H_
#define GRAPH_MSGS__MSG__DETAIL__PROPERTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Property in the package graph_msgs.
typedef struct graph_msgs__msg__Property
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} graph_msgs__msg__Property;

// Struct for a sequence of graph_msgs__msg__Property.
typedef struct graph_msgs__msg__Property__Sequence
{
  graph_msgs__msg__Property * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__msg__Property__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__MSG__DETAIL__PROPERTY__STRUCT_H_

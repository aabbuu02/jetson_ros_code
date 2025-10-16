// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wms_data:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define WMS_DATA__MSG__DETAIL__FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'unique_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Feedback in the package wms_data.
typedef struct wms_data__msg__Feedback
{
  rosidl_runtime_c__String unique_id;
  int16_t acr_shelf;
  int16_t action;
  bool status;
  bool fail_status;
} wms_data__msg__Feedback;

// Struct for a sequence of wms_data__msg__Feedback.
typedef struct wms_data__msg__Feedback__Sequence
{
  wms_data__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wms_data__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WMS_DATA__MSG__DETAIL__FEEDBACK__STRUCT_H_

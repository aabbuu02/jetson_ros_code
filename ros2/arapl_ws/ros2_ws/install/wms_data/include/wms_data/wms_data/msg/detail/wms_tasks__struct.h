// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wms_data:msg/WMSTasks.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_TASKS__STRUCT_H_
#define WMS_DATA__MSG__DETAIL__WMS_TASKS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tasks'
#include "wms_data/msg/detail/wms_data__struct.h"

/// Struct defined in msg/WMSTasks in the package wms_data.
typedef struct wms_data__msg__WMSTasks
{
  wms_data__msg__WMSData__Sequence tasks;
} wms_data__msg__WMSTasks;

// Struct for a sequence of wms_data__msg__WMSTasks.
typedef struct wms_data__msg__WMSTasks__Sequence
{
  wms_data__msg__WMSTasks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wms_data__msg__WMSTasks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WMS_DATA__MSG__DETAIL__WMS_TASKS__STRUCT_H_

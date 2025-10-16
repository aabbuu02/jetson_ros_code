// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wms_data:msg/WMSData.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_DATA__STRUCT_H_
#define WMS_DATA__MSG__DETAIL__WMS_DATA__STRUCT_H_

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
// Member 'date'
// Member 'ean_code'
// Member 'putaway_code'
// Member 'whole_bin_no'
// Member 'core'
// Member 'level'
// Member 'year'
// Member 'date_data'
// Member 'serial_no'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WMSData in the package wms_data.
typedef struct wms_data__msg__WMSData
{
  rosidl_runtime_c__String unique_id;
  rosidl_runtime_c__String date;
  int16_t priority;
  int16_t rack;
  int16_t shelf;
  int16_t bin;
  bool action;
  bool status;
  rosidl_runtime_c__String ean_code;
  rosidl_runtime_c__String putaway_code;
  int16_t acr_shelf;
  rosidl_runtime_c__String whole_bin_no;
  rosidl_runtime_c__String core;
  rosidl_runtime_c__String level;
  rosidl_runtime_c__String year;
  rosidl_runtime_c__String date_data;
  rosidl_runtime_c__String serial_no;
} wms_data__msg__WMSData;

// Struct for a sequence of wms_data__msg__WMSData.
typedef struct wms_data__msg__WMSData__Sequence
{
  wms_data__msg__WMSData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wms_data__msg__WMSData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WMS_DATA__MSG__DETAIL__WMS_DATA__STRUCT_H_

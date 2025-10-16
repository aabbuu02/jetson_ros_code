// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/BoxFilter.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/BoxFilter in the package anscer_msgs.
typedef struct anscer_msgs__srv__BoxFilter_Request
{
  bool filter_enable;
  bool restore_default;
  double min_safety_x;
  double max_safety_x;
  double min_safety_y;
  double max_safety_y;
  double min_warn_x;
  double max_warn_x;
  double min_warn_y;
  double max_warn_y;
  int64_t debounce_time;
} anscer_msgs__srv__BoxFilter_Request;

// Struct for a sequence of anscer_msgs__srv__BoxFilter_Request.
typedef struct anscer_msgs__srv__BoxFilter_Request__Sequence
{
  anscer_msgs__srv__BoxFilter_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__BoxFilter_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BoxFilter in the package anscer_msgs.
typedef struct anscer_msgs__srv__BoxFilter_Response
{
  int64_t state;
} anscer_msgs__srv__BoxFilter_Response;

// Struct for a sequence of anscer_msgs__srv__BoxFilter_Response.
typedef struct anscer_msgs__srv__BoxFilter_Response__Sequence
{
  anscer_msgs__srv__BoxFilter_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__BoxFilter_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__STRUCT_H_

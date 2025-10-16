// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/GetMapList.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GET_MAP_LIST__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__GET_MAP_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetMapList in the package anscer_msgs.
typedef struct anscer_msgs__srv__GetMapList_Request
{
  uint8_t structure_needs_at_least_one_member;
} anscer_msgs__srv__GetMapList_Request;

// Struct for a sequence of anscer_msgs__srv__GetMapList_Request.
typedef struct anscer_msgs__srv__GetMapList_Request__Sequence
{
  anscer_msgs__srv__GetMapList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__GetMapList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'map_list'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetMapList in the package anscer_msgs.
typedef struct anscer_msgs__srv__GetMapList_Response
{
  rosidl_runtime_c__String__Sequence map_list;
} anscer_msgs__srv__GetMapList_Response;

// Struct for a sequence of anscer_msgs__srv__GetMapList_Response.
typedef struct anscer_msgs__srv__GetMapList_Response__Sequence
{
  anscer_msgs__srv__GetMapList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__GetMapList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__GET_MAP_LIST__STRUCT_H_

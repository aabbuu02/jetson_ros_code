// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/Dock.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__DOCK__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__DOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Dock in the package anscer_msgs.
typedef struct anscer_msgs__srv__Dock_Request
{
  bool dock_call;
} anscer_msgs__srv__Dock_Request;

// Struct for a sequence of anscer_msgs__srv__Dock_Request.
typedef struct anscer_msgs__srv__Dock_Request__Sequence
{
  anscer_msgs__srv__Dock_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__Dock_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Dock in the package anscer_msgs.
typedef struct anscer_msgs__srv__Dock_Response
{
  bool result;
} anscer_msgs__srv__Dock_Response;

// Struct for a sequence of anscer_msgs__srv__Dock_Response.
typedef struct anscer_msgs__srv__Dock_Response__Sequence
{
  anscer_msgs__srv__Dock_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__Dock_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__DOCK__STRUCT_H_

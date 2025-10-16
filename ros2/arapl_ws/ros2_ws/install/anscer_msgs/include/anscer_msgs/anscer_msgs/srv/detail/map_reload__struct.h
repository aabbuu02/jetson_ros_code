// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/MapReload.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__MAP_RELOAD__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__MAP_RELOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MapReload in the package anscer_msgs.
typedef struct anscer_msgs__srv__MapReload_Request
{
  rosidl_runtime_c__String filename;
} anscer_msgs__srv__MapReload_Request;

// Struct for a sequence of anscer_msgs__srv__MapReload_Request.
typedef struct anscer_msgs__srv__MapReload_Request__Sequence
{
  anscer_msgs__srv__MapReload_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__MapReload_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'map_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MapReload in the package anscer_msgs.
typedef struct anscer_msgs__srv__MapReload_Response
{
  bool is_active;
  rosidl_runtime_c__String map_name;
} anscer_msgs__srv__MapReload_Response;

// Struct for a sequence of anscer_msgs__srv__MapReload_Response.
typedef struct anscer_msgs__srv__MapReload_Response__Sequence
{
  anscer_msgs__srv__MapReload_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__MapReload_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__MAP_RELOAD__STRUCT_H_

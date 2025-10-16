// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/DeleteMap.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__DELETE_MAP__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__DELETE_MAP__STRUCT_H_

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

/// Struct defined in srv/DeleteMap in the package anscer_msgs.
typedef struct anscer_msgs__srv__DeleteMap_Request
{
  rosidl_runtime_c__String filename;
} anscer_msgs__srv__DeleteMap_Request;

// Struct for a sequence of anscer_msgs__srv__DeleteMap_Request.
typedef struct anscer_msgs__srv__DeleteMap_Request__Sequence
{
  anscer_msgs__srv__DeleteMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__DeleteMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'map_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DeleteMap in the package anscer_msgs.
typedef struct anscer_msgs__srv__DeleteMap_Response
{
  rosidl_runtime_c__String map_name;
  bool is_deleted;
} anscer_msgs__srv__DeleteMap_Response;

// Struct for a sequence of anscer_msgs__srv__DeleteMap_Response.
typedef struct anscer_msgs__srv__DeleteMap_Response__Sequence
{
  anscer_msgs__srv__DeleteMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__DeleteMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__DELETE_MAP__STRUCT_H_

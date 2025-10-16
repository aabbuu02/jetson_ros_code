// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/SaveStation.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAVE_STATION__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__SAVE_STATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'station_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveStation in the package anscer_msgs.
typedef struct anscer_msgs__srv__SaveStation_Request
{
  bool save;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String station_name;
} anscer_msgs__srv__SaveStation_Request;

// Struct for a sequence of anscer_msgs__srv__SaveStation_Request.
typedef struct anscer_msgs__srv__SaveStation_Request__Sequence
{
  anscer_msgs__srv__SaveStation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__SaveStation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'name_exist'
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveStation in the package anscer_msgs.
typedef struct anscer_msgs__srv__SaveStation_Response
{
  bool is_saved;
  rosidl_runtime_c__String name_exist;
  rosidl_runtime_c__String status;
} anscer_msgs__srv__SaveStation_Response;

// Struct for a sequence of anscer_msgs__srv__SaveStation_Response.
typedef struct anscer_msgs__srv__SaveStation_Response__Sequence
{
  anscer_msgs__srv__SaveStation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__SaveStation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__SAVE_STATION__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/MapCrop.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__MAP_CROP__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__MAP_CROP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'original_map_name'
// Member 'cropped_map_index'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MapCrop in the package anscer_msgs.
typedef struct anscer_msgs__srv__MapCrop_Request
{
  rosidl_runtime_c__String original_map_name;
  rosidl_runtime_c__String cropped_map_index;
} anscer_msgs__srv__MapCrop_Request;

// Struct for a sequence of anscer_msgs__srv__MapCrop_Request.
typedef struct anscer_msgs__srv__MapCrop_Request__Sequence
{
  anscer_msgs__srv__MapCrop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__MapCrop_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MapCrop in the package anscer_msgs.
typedef struct anscer_msgs__srv__MapCrop_Response
{
  bool result;
} anscer_msgs__srv__MapCrop_Response;

// Struct for a sequence of anscer_msgs__srv__MapCrop_Response.
typedef struct anscer_msgs__srv__MapCrop_Response__Sequence
{
  anscer_msgs__srv__MapCrop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__MapCrop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__MAP_CROP__STRUCT_H_

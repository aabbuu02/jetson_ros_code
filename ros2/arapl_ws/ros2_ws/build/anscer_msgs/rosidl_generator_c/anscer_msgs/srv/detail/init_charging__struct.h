// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/InitCharging.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__INIT_CHARGING__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__INIT_CHARGING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InitCharging in the package anscer_msgs.
typedef struct anscer_msgs__srv__InitCharging_Request
{
  bool dock;
} anscer_msgs__srv__InitCharging_Request;

// Struct for a sequence of anscer_msgs__srv__InitCharging_Request.
typedef struct anscer_msgs__srv__InitCharging_Request__Sequence
{
  anscer_msgs__srv__InitCharging_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__InitCharging_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InitCharging in the package anscer_msgs.
typedef struct anscer_msgs__srv__InitCharging_Response
{
  bool result;
} anscer_msgs__srv__InitCharging_Response;

// Struct for a sequence of anscer_msgs__srv__InitCharging_Response.
typedef struct anscer_msgs__srv__InitCharging_Response__Sequence
{
  anscer_msgs__srv__InitCharging_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__InitCharging_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__INIT_CHARGING__STRUCT_H_

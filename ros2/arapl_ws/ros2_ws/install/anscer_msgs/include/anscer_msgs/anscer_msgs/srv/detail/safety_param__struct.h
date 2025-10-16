// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/SafetyParam.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAFETY_PARAM__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__SAFETY_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SafetyParam in the package anscer_msgs.
typedef struct anscer_msgs__srv__SafetyParam_Request
{
  float min_x;
  float min_y;
  float min_z;
  float max_x;
  float max_y;
  float max_z;
} anscer_msgs__srv__SafetyParam_Request;

// Struct for a sequence of anscer_msgs__srv__SafetyParam_Request.
typedef struct anscer_msgs__srv__SafetyParam_Request__Sequence
{
  anscer_msgs__srv__SafetyParam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__SafetyParam_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SafetyParam in the package anscer_msgs.
typedef struct anscer_msgs__srv__SafetyParam_Response
{
  bool status;
} anscer_msgs__srv__SafetyParam_Response;

// Struct for a sequence of anscer_msgs__srv__SafetyParam_Response.
typedef struct anscer_msgs__srv__SafetyParam_Response__Sequence
{
  anscer_msgs__srv__SafetyParam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__SafetyParam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__SAFETY_PARAM__STRUCT_H_

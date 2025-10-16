// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/Buzzer.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BUZZER__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__BUZZER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Buzzer in the package anscer_msgs.
typedef struct anscer_msgs__srv__Buzzer_Request
{
  bool initiate;
  int16_t delay;
  int16_t count;
} anscer_msgs__srv__Buzzer_Request;

// Struct for a sequence of anscer_msgs__srv__Buzzer_Request.
typedef struct anscer_msgs__srv__Buzzer_Request__Sequence
{
  anscer_msgs__srv__Buzzer_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__Buzzer_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Buzzer in the package anscer_msgs.
typedef struct anscer_msgs__srv__Buzzer_Response
{
  bool result;
} anscer_msgs__srv__Buzzer_Response;

// Struct for a sequence of anscer_msgs__srv__Buzzer_Response.
typedef struct anscer_msgs__srv__Buzzer_Response__Sequence
{
  anscer_msgs__srv__Buzzer_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__Buzzer_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__BUZZER__STRUCT_H_

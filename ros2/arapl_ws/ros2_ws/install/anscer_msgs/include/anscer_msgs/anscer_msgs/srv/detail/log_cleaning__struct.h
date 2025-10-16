// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/LogCleaning.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__LOG_CLEANING__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__LOG_CLEANING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'USE_TIME_AND_SIZE'.
enum
{
  anscer_msgs__srv__LogCleaning_Request__USE_TIME_AND_SIZE = 0
};

/// Constant 'BASED_ON_TIME'.
enum
{
  anscer_msgs__srv__LogCleaning_Request__BASED_ON_TIME = 1
};

/// Constant 'BASED_ON_SIZE'.
enum
{
  anscer_msgs__srv__LogCleaning_Request__BASED_ON_SIZE = 2
};

/// Struct defined in srv/LogCleaning in the package anscer_msgs.
typedef struct anscer_msgs__srv__LogCleaning_Request
{
  float cleaning_hour;
  float cleaning_size;
  uint8_t mode;
} anscer_msgs__srv__LogCleaning_Request;

// Struct for a sequence of anscer_msgs__srv__LogCleaning_Request.
typedef struct anscer_msgs__srv__LogCleaning_Request__Sequence
{
  anscer_msgs__srv__LogCleaning_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__LogCleaning_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LogCleaning in the package anscer_msgs.
typedef struct anscer_msgs__srv__LogCleaning_Response
{
  rosidl_runtime_c__String message;
} anscer_msgs__srv__LogCleaning_Response;

// Struct for a sequence of anscer_msgs__srv__LogCleaning_Response.
typedef struct anscer_msgs__srv__LogCleaning_Response__Sequence
{
  anscer_msgs__srv__LogCleaning_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__LogCleaning_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__LOG_CLEANING__STRUCT_H_

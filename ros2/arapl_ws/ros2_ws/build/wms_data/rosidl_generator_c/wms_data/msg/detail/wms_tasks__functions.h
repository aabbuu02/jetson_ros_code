// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wms_data:msg/WMSTasks.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_TASKS__FUNCTIONS_H_
#define WMS_DATA__MSG__DETAIL__WMS_TASKS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wms_data/msg/rosidl_generator_c__visibility_control.h"

#include "wms_data/msg/detail/wms_tasks__struct.h"

/// Initialize msg/WMSTasks message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wms_data__msg__WMSTasks
 * )) before or use
 * wms_data__msg__WMSTasks__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSTasks__init(wms_data__msg__WMSTasks * msg);

/// Finalize msg/WMSTasks message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
void
wms_data__msg__WMSTasks__fini(wms_data__msg__WMSTasks * msg);

/// Create msg/WMSTasks message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wms_data__msg__WMSTasks__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
wms_data__msg__WMSTasks *
wms_data__msg__WMSTasks__create();

/// Destroy msg/WMSTasks message.
/**
 * It calls
 * wms_data__msg__WMSTasks__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
void
wms_data__msg__WMSTasks__destroy(wms_data__msg__WMSTasks * msg);

/// Check for msg/WMSTasks message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSTasks__are_equal(const wms_data__msg__WMSTasks * lhs, const wms_data__msg__WMSTasks * rhs);

/// Copy a msg/WMSTasks message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSTasks__copy(
  const wms_data__msg__WMSTasks * input,
  wms_data__msg__WMSTasks * output);

/// Initialize array of msg/WMSTasks messages.
/**
 * It allocates the memory for the number of elements and calls
 * wms_data__msg__WMSTasks__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSTasks__Sequence__init(wms_data__msg__WMSTasks__Sequence * array, size_t size);

/// Finalize array of msg/WMSTasks messages.
/**
 * It calls
 * wms_data__msg__WMSTasks__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
void
wms_data__msg__WMSTasks__Sequence__fini(wms_data__msg__WMSTasks__Sequence * array);

/// Create array of msg/WMSTasks messages.
/**
 * It allocates the memory for the array and calls
 * wms_data__msg__WMSTasks__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
wms_data__msg__WMSTasks__Sequence *
wms_data__msg__WMSTasks__Sequence__create(size_t size);

/// Destroy array of msg/WMSTasks messages.
/**
 * It calls
 * wms_data__msg__WMSTasks__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
void
wms_data__msg__WMSTasks__Sequence__destroy(wms_data__msg__WMSTasks__Sequence * array);

/// Check for msg/WMSTasks message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSTasks__Sequence__are_equal(const wms_data__msg__WMSTasks__Sequence * lhs, const wms_data__msg__WMSTasks__Sequence * rhs);

/// Copy an array of msg/WMSTasks messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSTasks__Sequence__copy(
  const wms_data__msg__WMSTasks__Sequence * input,
  wms_data__msg__WMSTasks__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WMS_DATA__MSG__DETAIL__WMS_TASKS__FUNCTIONS_H_

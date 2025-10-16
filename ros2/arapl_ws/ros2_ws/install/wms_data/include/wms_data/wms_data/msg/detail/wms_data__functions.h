// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wms_data:msg/WMSData.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_DATA__FUNCTIONS_H_
#define WMS_DATA__MSG__DETAIL__WMS_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wms_data/msg/rosidl_generator_c__visibility_control.h"

#include "wms_data/msg/detail/wms_data__struct.h"

/// Initialize msg/WMSData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wms_data__msg__WMSData
 * )) before or use
 * wms_data__msg__WMSData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSData__init(wms_data__msg__WMSData * msg);

/// Finalize msg/WMSData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
void
wms_data__msg__WMSData__fini(wms_data__msg__WMSData * msg);

/// Create msg/WMSData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wms_data__msg__WMSData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
wms_data__msg__WMSData *
wms_data__msg__WMSData__create();

/// Destroy msg/WMSData message.
/**
 * It calls
 * wms_data__msg__WMSData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
void
wms_data__msg__WMSData__destroy(wms_data__msg__WMSData * msg);

/// Check for msg/WMSData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSData__are_equal(const wms_data__msg__WMSData * lhs, const wms_data__msg__WMSData * rhs);

/// Copy a msg/WMSData message.
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
wms_data__msg__WMSData__copy(
  const wms_data__msg__WMSData * input,
  wms_data__msg__WMSData * output);

/// Initialize array of msg/WMSData messages.
/**
 * It allocates the memory for the number of elements and calls
 * wms_data__msg__WMSData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSData__Sequence__init(wms_data__msg__WMSData__Sequence * array, size_t size);

/// Finalize array of msg/WMSData messages.
/**
 * It calls
 * wms_data__msg__WMSData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
void
wms_data__msg__WMSData__Sequence__fini(wms_data__msg__WMSData__Sequence * array);

/// Create array of msg/WMSData messages.
/**
 * It allocates the memory for the array and calls
 * wms_data__msg__WMSData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
wms_data__msg__WMSData__Sequence *
wms_data__msg__WMSData__Sequence__create(size_t size);

/// Destroy array of msg/WMSData messages.
/**
 * It calls
 * wms_data__msg__WMSData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
void
wms_data__msg__WMSData__Sequence__destroy(wms_data__msg__WMSData__Sequence * array);

/// Check for msg/WMSData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wms_data
bool
wms_data__msg__WMSData__Sequence__are_equal(const wms_data__msg__WMSData__Sequence * lhs, const wms_data__msg__WMSData__Sequence * rhs);

/// Copy an array of msg/WMSData messages.
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
wms_data__msg__WMSData__Sequence__copy(
  const wms_data__msg__WMSData__Sequence * input,
  wms_data__msg__WMSData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WMS_DATA__MSG__DETAIL__WMS_DATA__FUNCTIONS_H_

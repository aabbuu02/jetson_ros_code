// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lift_action:msg/HomingStatus.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__FUNCTIONS_H_
#define LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lift_action/msg/rosidl_generator_c__visibility_control.h"

#include "lift_action/msg/detail/homing_status__struct.h"

/// Initialize msg/HomingStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lift_action__msg__HomingStatus
 * )) before or use
 * lift_action__msg__HomingStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
bool
lift_action__msg__HomingStatus__init(lift_action__msg__HomingStatus * msg);

/// Finalize msg/HomingStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
void
lift_action__msg__HomingStatus__fini(lift_action__msg__HomingStatus * msg);

/// Create msg/HomingStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lift_action__msg__HomingStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
lift_action__msg__HomingStatus *
lift_action__msg__HomingStatus__create();

/// Destroy msg/HomingStatus message.
/**
 * It calls
 * lift_action__msg__HomingStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
void
lift_action__msg__HomingStatus__destroy(lift_action__msg__HomingStatus * msg);

/// Check for msg/HomingStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
bool
lift_action__msg__HomingStatus__are_equal(const lift_action__msg__HomingStatus * lhs, const lift_action__msg__HomingStatus * rhs);

/// Copy a msg/HomingStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_lift_action
bool
lift_action__msg__HomingStatus__copy(
  const lift_action__msg__HomingStatus * input,
  lift_action__msg__HomingStatus * output);

/// Initialize array of msg/HomingStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * lift_action__msg__HomingStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
bool
lift_action__msg__HomingStatus__Sequence__init(lift_action__msg__HomingStatus__Sequence * array, size_t size);

/// Finalize array of msg/HomingStatus messages.
/**
 * It calls
 * lift_action__msg__HomingStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
void
lift_action__msg__HomingStatus__Sequence__fini(lift_action__msg__HomingStatus__Sequence * array);

/// Create array of msg/HomingStatus messages.
/**
 * It allocates the memory for the array and calls
 * lift_action__msg__HomingStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
lift_action__msg__HomingStatus__Sequence *
lift_action__msg__HomingStatus__Sequence__create(size_t size);

/// Destroy array of msg/HomingStatus messages.
/**
 * It calls
 * lift_action__msg__HomingStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
void
lift_action__msg__HomingStatus__Sequence__destroy(lift_action__msg__HomingStatus__Sequence * array);

/// Check for msg/HomingStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lift_action
bool
lift_action__msg__HomingStatus__Sequence__are_equal(const lift_action__msg__HomingStatus__Sequence * lhs, const lift_action__msg__HomingStatus__Sequence * rhs);

/// Copy an array of msg/HomingStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_lift_action
bool
lift_action__msg__HomingStatus__Sequence__copy(
  const lift_action__msg__HomingStatus__Sequence * input,
  lift_action__msg__HomingStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__FUNCTIONS_H_

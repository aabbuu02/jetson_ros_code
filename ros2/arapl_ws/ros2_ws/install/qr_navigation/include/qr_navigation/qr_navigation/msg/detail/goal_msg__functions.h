// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__FUNCTIONS_H_
#define QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "qr_navigation/msg/rosidl_generator_c__visibility_control.h"

#include "qr_navigation/msg/detail/goal_msg__struct.h"

/// Initialize msg/GoalMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * qr_navigation__msg__GoalMsg
 * )) before or use
 * qr_navigation__msg__GoalMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
bool
qr_navigation__msg__GoalMsg__init(qr_navigation__msg__GoalMsg * msg);

/// Finalize msg/GoalMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
void
qr_navigation__msg__GoalMsg__fini(qr_navigation__msg__GoalMsg * msg);

/// Create msg/GoalMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * qr_navigation__msg__GoalMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
qr_navigation__msg__GoalMsg *
qr_navigation__msg__GoalMsg__create();

/// Destroy msg/GoalMsg message.
/**
 * It calls
 * qr_navigation__msg__GoalMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
void
qr_navigation__msg__GoalMsg__destroy(qr_navigation__msg__GoalMsg * msg);

/// Check for msg/GoalMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
bool
qr_navigation__msg__GoalMsg__are_equal(const qr_navigation__msg__GoalMsg * lhs, const qr_navigation__msg__GoalMsg * rhs);

/// Copy a msg/GoalMsg message.
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
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
bool
qr_navigation__msg__GoalMsg__copy(
  const qr_navigation__msg__GoalMsg * input,
  qr_navigation__msg__GoalMsg * output);

/// Initialize array of msg/GoalMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * qr_navigation__msg__GoalMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
bool
qr_navigation__msg__GoalMsg__Sequence__init(qr_navigation__msg__GoalMsg__Sequence * array, size_t size);

/// Finalize array of msg/GoalMsg messages.
/**
 * It calls
 * qr_navigation__msg__GoalMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
void
qr_navigation__msg__GoalMsg__Sequence__fini(qr_navigation__msg__GoalMsg__Sequence * array);

/// Create array of msg/GoalMsg messages.
/**
 * It allocates the memory for the array and calls
 * qr_navigation__msg__GoalMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
qr_navigation__msg__GoalMsg__Sequence *
qr_navigation__msg__GoalMsg__Sequence__create(size_t size);

/// Destroy array of msg/GoalMsg messages.
/**
 * It calls
 * qr_navigation__msg__GoalMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
void
qr_navigation__msg__GoalMsg__Sequence__destroy(qr_navigation__msg__GoalMsg__Sequence * array);

/// Check for msg/GoalMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
bool
qr_navigation__msg__GoalMsg__Sequence__are_equal(const qr_navigation__msg__GoalMsg__Sequence * lhs, const qr_navigation__msg__GoalMsg__Sequence * rhs);

/// Copy an array of msg/GoalMsg messages.
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
ROSIDL_GENERATOR_C_PUBLIC_qr_navigation
bool
qr_navigation__msg__GoalMsg__Sequence__copy(
  const qr_navigation__msg__GoalMsg__Sequence * input,
  qr_navigation__msg__GoalMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__FUNCTIONS_H_

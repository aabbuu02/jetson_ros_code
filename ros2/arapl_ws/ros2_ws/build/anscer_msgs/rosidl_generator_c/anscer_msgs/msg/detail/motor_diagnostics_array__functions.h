// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from anscer_msgs:msg/MotorDiagnosticsArray.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS_ARRAY__FUNCTIONS_H_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "anscer_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "anscer_msgs/msg/detail/motor_diagnostics_array__struct.h"

/// Initialize msg/MotorDiagnosticsArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__msg__MotorDiagnosticsArray
 * )) before or use
 * anscer_msgs__msg__MotorDiagnosticsArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__msg__MotorDiagnosticsArray__init(anscer_msgs__msg__MotorDiagnosticsArray * msg);

/// Finalize msg/MotorDiagnosticsArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__msg__MotorDiagnosticsArray__fini(anscer_msgs__msg__MotorDiagnosticsArray * msg);

/// Create msg/MotorDiagnosticsArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__msg__MotorDiagnosticsArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__msg__MotorDiagnosticsArray *
anscer_msgs__msg__MotorDiagnosticsArray__create();

/// Destroy msg/MotorDiagnosticsArray message.
/**
 * It calls
 * anscer_msgs__msg__MotorDiagnosticsArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__msg__MotorDiagnosticsArray__destroy(anscer_msgs__msg__MotorDiagnosticsArray * msg);

/// Check for msg/MotorDiagnosticsArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__msg__MotorDiagnosticsArray__are_equal(const anscer_msgs__msg__MotorDiagnosticsArray * lhs, const anscer_msgs__msg__MotorDiagnosticsArray * rhs);

/// Copy a msg/MotorDiagnosticsArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__msg__MotorDiagnosticsArray__copy(
  const anscer_msgs__msg__MotorDiagnosticsArray * input,
  anscer_msgs__msg__MotorDiagnosticsArray * output);

/// Initialize array of msg/MotorDiagnosticsArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__msg__MotorDiagnosticsArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__msg__MotorDiagnosticsArray__Sequence__init(anscer_msgs__msg__MotorDiagnosticsArray__Sequence * array, size_t size);

/// Finalize array of msg/MotorDiagnosticsArray messages.
/**
 * It calls
 * anscer_msgs__msg__MotorDiagnosticsArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__msg__MotorDiagnosticsArray__Sequence__fini(anscer_msgs__msg__MotorDiagnosticsArray__Sequence * array);

/// Create array of msg/MotorDiagnosticsArray messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__msg__MotorDiagnosticsArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__msg__MotorDiagnosticsArray__Sequence *
anscer_msgs__msg__MotorDiagnosticsArray__Sequence__create(size_t size);

/// Destroy array of msg/MotorDiagnosticsArray messages.
/**
 * It calls
 * anscer_msgs__msg__MotorDiagnosticsArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__msg__MotorDiagnosticsArray__Sequence__destroy(anscer_msgs__msg__MotorDiagnosticsArray__Sequence * array);

/// Check for msg/MotorDiagnosticsArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__msg__MotorDiagnosticsArray__Sequence__are_equal(const anscer_msgs__msg__MotorDiagnosticsArray__Sequence * lhs, const anscer_msgs__msg__MotorDiagnosticsArray__Sequence * rhs);

/// Copy an array of msg/MotorDiagnosticsArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__msg__MotorDiagnosticsArray__Sequence__copy(
  const anscer_msgs__msg__MotorDiagnosticsArray__Sequence * input,
  anscer_msgs__msg__MotorDiagnosticsArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS_ARRAY__FUNCTIONS_H_

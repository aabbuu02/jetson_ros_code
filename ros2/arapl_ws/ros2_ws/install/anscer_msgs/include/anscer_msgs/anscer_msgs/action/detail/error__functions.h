// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from anscer_msgs:action/Error.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__ERROR__FUNCTIONS_H_
#define ANSCER_MSGS__ACTION__DETAIL__ERROR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "anscer_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "anscer_msgs/action/detail/error__struct.h"

/// Initialize action/Error message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__action__Error_Goal
 * )) before or use
 * anscer_msgs__action__Error_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Goal__init(anscer_msgs__action__Error_Goal * msg);

/// Finalize action/Error message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Goal__fini(anscer_msgs__action__Error_Goal * msg);

/// Create action/Error message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__action__Error_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_Goal *
anscer_msgs__action__Error_Goal__create();

/// Destroy action/Error message.
/**
 * It calls
 * anscer_msgs__action__Error_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Goal__destroy(anscer_msgs__action__Error_Goal * msg);

/// Check for action/Error message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Goal__are_equal(const anscer_msgs__action__Error_Goal * lhs, const anscer_msgs__action__Error_Goal * rhs);

/// Copy a action/Error message.
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
anscer_msgs__action__Error_Goal__copy(
  const anscer_msgs__action__Error_Goal * input,
  anscer_msgs__action__Error_Goal * output);

/// Initialize array of action/Error messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__action__Error_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Goal__Sequence__init(anscer_msgs__action__Error_Goal__Sequence * array, size_t size);

/// Finalize array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Goal__Sequence__fini(anscer_msgs__action__Error_Goal__Sequence * array);

/// Create array of action/Error messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__action__Error_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_Goal__Sequence *
anscer_msgs__action__Error_Goal__Sequence__create(size_t size);

/// Destroy array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Goal__Sequence__destroy(anscer_msgs__action__Error_Goal__Sequence * array);

/// Check for action/Error message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Goal__Sequence__are_equal(const anscer_msgs__action__Error_Goal__Sequence * lhs, const anscer_msgs__action__Error_Goal__Sequence * rhs);

/// Copy an array of action/Error messages.
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
anscer_msgs__action__Error_Goal__Sequence__copy(
  const anscer_msgs__action__Error_Goal__Sequence * input,
  anscer_msgs__action__Error_Goal__Sequence * output);

/// Initialize action/Error message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__action__Error_Result
 * )) before or use
 * anscer_msgs__action__Error_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Result__init(anscer_msgs__action__Error_Result * msg);

/// Finalize action/Error message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Result__fini(anscer_msgs__action__Error_Result * msg);

/// Create action/Error message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__action__Error_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_Result *
anscer_msgs__action__Error_Result__create();

/// Destroy action/Error message.
/**
 * It calls
 * anscer_msgs__action__Error_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Result__destroy(anscer_msgs__action__Error_Result * msg);

/// Check for action/Error message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Result__are_equal(const anscer_msgs__action__Error_Result * lhs, const anscer_msgs__action__Error_Result * rhs);

/// Copy a action/Error message.
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
anscer_msgs__action__Error_Result__copy(
  const anscer_msgs__action__Error_Result * input,
  anscer_msgs__action__Error_Result * output);

/// Initialize array of action/Error messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__action__Error_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Result__Sequence__init(anscer_msgs__action__Error_Result__Sequence * array, size_t size);

/// Finalize array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Result__Sequence__fini(anscer_msgs__action__Error_Result__Sequence * array);

/// Create array of action/Error messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__action__Error_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_Result__Sequence *
anscer_msgs__action__Error_Result__Sequence__create(size_t size);

/// Destroy array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Result__Sequence__destroy(anscer_msgs__action__Error_Result__Sequence * array);

/// Check for action/Error message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Result__Sequence__are_equal(const anscer_msgs__action__Error_Result__Sequence * lhs, const anscer_msgs__action__Error_Result__Sequence * rhs);

/// Copy an array of action/Error messages.
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
anscer_msgs__action__Error_Result__Sequence__copy(
  const anscer_msgs__action__Error_Result__Sequence * input,
  anscer_msgs__action__Error_Result__Sequence * output);

/// Initialize action/Error message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__action__Error_Feedback
 * )) before or use
 * anscer_msgs__action__Error_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Feedback__init(anscer_msgs__action__Error_Feedback * msg);

/// Finalize action/Error message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Feedback__fini(anscer_msgs__action__Error_Feedback * msg);

/// Create action/Error message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__action__Error_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_Feedback *
anscer_msgs__action__Error_Feedback__create();

/// Destroy action/Error message.
/**
 * It calls
 * anscer_msgs__action__Error_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Feedback__destroy(anscer_msgs__action__Error_Feedback * msg);

/// Check for action/Error message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Feedback__are_equal(const anscer_msgs__action__Error_Feedback * lhs, const anscer_msgs__action__Error_Feedback * rhs);

/// Copy a action/Error message.
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
anscer_msgs__action__Error_Feedback__copy(
  const anscer_msgs__action__Error_Feedback * input,
  anscer_msgs__action__Error_Feedback * output);

/// Initialize array of action/Error messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__action__Error_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Feedback__Sequence__init(anscer_msgs__action__Error_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Feedback__Sequence__fini(anscer_msgs__action__Error_Feedback__Sequence * array);

/// Create array of action/Error messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__action__Error_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_Feedback__Sequence *
anscer_msgs__action__Error_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_Feedback__Sequence__destroy(anscer_msgs__action__Error_Feedback__Sequence * array);

/// Check for action/Error message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_Feedback__Sequence__are_equal(const anscer_msgs__action__Error_Feedback__Sequence * lhs, const anscer_msgs__action__Error_Feedback__Sequence * rhs);

/// Copy an array of action/Error messages.
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
anscer_msgs__action__Error_Feedback__Sequence__copy(
  const anscer_msgs__action__Error_Feedback__Sequence * input,
  anscer_msgs__action__Error_Feedback__Sequence * output);

/// Initialize action/Error message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__action__Error_SendGoal_Request
 * )) before or use
 * anscer_msgs__action__Error_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_SendGoal_Request__init(anscer_msgs__action__Error_SendGoal_Request * msg);

/// Finalize action/Error message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_SendGoal_Request__fini(anscer_msgs__action__Error_SendGoal_Request * msg);

/// Create action/Error message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__action__Error_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_SendGoal_Request *
anscer_msgs__action__Error_SendGoal_Request__create();

/// Destroy action/Error message.
/**
 * It calls
 * anscer_msgs__action__Error_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_SendGoal_Request__destroy(anscer_msgs__action__Error_SendGoal_Request * msg);

/// Check for action/Error message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_SendGoal_Request__are_equal(const anscer_msgs__action__Error_SendGoal_Request * lhs, const anscer_msgs__action__Error_SendGoal_Request * rhs);

/// Copy a action/Error message.
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
anscer_msgs__action__Error_SendGoal_Request__copy(
  const anscer_msgs__action__Error_SendGoal_Request * input,
  anscer_msgs__action__Error_SendGoal_Request * output);

/// Initialize array of action/Error messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__action__Error_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_SendGoal_Request__Sequence__init(anscer_msgs__action__Error_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_SendGoal_Request__Sequence__fini(anscer_msgs__action__Error_SendGoal_Request__Sequence * array);

/// Create array of action/Error messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__action__Error_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_SendGoal_Request__Sequence *
anscer_msgs__action__Error_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_SendGoal_Request__Sequence__destroy(anscer_msgs__action__Error_SendGoal_Request__Sequence * array);

/// Check for action/Error message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_SendGoal_Request__Sequence__are_equal(const anscer_msgs__action__Error_SendGoal_Request__Sequence * lhs, const anscer_msgs__action__Error_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Error messages.
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
anscer_msgs__action__Error_SendGoal_Request__Sequence__copy(
  const anscer_msgs__action__Error_SendGoal_Request__Sequence * input,
  anscer_msgs__action__Error_SendGoal_Request__Sequence * output);

/// Initialize action/Error message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__action__Error_SendGoal_Response
 * )) before or use
 * anscer_msgs__action__Error_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_SendGoal_Response__init(anscer_msgs__action__Error_SendGoal_Response * msg);

/// Finalize action/Error message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_SendGoal_Response__fini(anscer_msgs__action__Error_SendGoal_Response * msg);

/// Create action/Error message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__action__Error_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_SendGoal_Response *
anscer_msgs__action__Error_SendGoal_Response__create();

/// Destroy action/Error message.
/**
 * It calls
 * anscer_msgs__action__Error_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_SendGoal_Response__destroy(anscer_msgs__action__Error_SendGoal_Response * msg);

/// Check for action/Error message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_SendGoal_Response__are_equal(const anscer_msgs__action__Error_SendGoal_Response * lhs, const anscer_msgs__action__Error_SendGoal_Response * rhs);

/// Copy a action/Error message.
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
anscer_msgs__action__Error_SendGoal_Response__copy(
  const anscer_msgs__action__Error_SendGoal_Response * input,
  anscer_msgs__action__Error_SendGoal_Response * output);

/// Initialize array of action/Error messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__action__Error_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_SendGoal_Response__Sequence__init(anscer_msgs__action__Error_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_SendGoal_Response__Sequence__fini(anscer_msgs__action__Error_SendGoal_Response__Sequence * array);

/// Create array of action/Error messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__action__Error_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_SendGoal_Response__Sequence *
anscer_msgs__action__Error_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_SendGoal_Response__Sequence__destroy(anscer_msgs__action__Error_SendGoal_Response__Sequence * array);

/// Check for action/Error message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_SendGoal_Response__Sequence__are_equal(const anscer_msgs__action__Error_SendGoal_Response__Sequence * lhs, const anscer_msgs__action__Error_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Error messages.
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
anscer_msgs__action__Error_SendGoal_Response__Sequence__copy(
  const anscer_msgs__action__Error_SendGoal_Response__Sequence * input,
  anscer_msgs__action__Error_SendGoal_Response__Sequence * output);

/// Initialize action/Error message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__action__Error_GetResult_Request
 * )) before or use
 * anscer_msgs__action__Error_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_GetResult_Request__init(anscer_msgs__action__Error_GetResult_Request * msg);

/// Finalize action/Error message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_GetResult_Request__fini(anscer_msgs__action__Error_GetResult_Request * msg);

/// Create action/Error message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__action__Error_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_GetResult_Request *
anscer_msgs__action__Error_GetResult_Request__create();

/// Destroy action/Error message.
/**
 * It calls
 * anscer_msgs__action__Error_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_GetResult_Request__destroy(anscer_msgs__action__Error_GetResult_Request * msg);

/// Check for action/Error message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_GetResult_Request__are_equal(const anscer_msgs__action__Error_GetResult_Request * lhs, const anscer_msgs__action__Error_GetResult_Request * rhs);

/// Copy a action/Error message.
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
anscer_msgs__action__Error_GetResult_Request__copy(
  const anscer_msgs__action__Error_GetResult_Request * input,
  anscer_msgs__action__Error_GetResult_Request * output);

/// Initialize array of action/Error messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__action__Error_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_GetResult_Request__Sequence__init(anscer_msgs__action__Error_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_GetResult_Request__Sequence__fini(anscer_msgs__action__Error_GetResult_Request__Sequence * array);

/// Create array of action/Error messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__action__Error_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_GetResult_Request__Sequence *
anscer_msgs__action__Error_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_GetResult_Request__Sequence__destroy(anscer_msgs__action__Error_GetResult_Request__Sequence * array);

/// Check for action/Error message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_GetResult_Request__Sequence__are_equal(const anscer_msgs__action__Error_GetResult_Request__Sequence * lhs, const anscer_msgs__action__Error_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Error messages.
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
anscer_msgs__action__Error_GetResult_Request__Sequence__copy(
  const anscer_msgs__action__Error_GetResult_Request__Sequence * input,
  anscer_msgs__action__Error_GetResult_Request__Sequence * output);

/// Initialize action/Error message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__action__Error_GetResult_Response
 * )) before or use
 * anscer_msgs__action__Error_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_GetResult_Response__init(anscer_msgs__action__Error_GetResult_Response * msg);

/// Finalize action/Error message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_GetResult_Response__fini(anscer_msgs__action__Error_GetResult_Response * msg);

/// Create action/Error message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__action__Error_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_GetResult_Response *
anscer_msgs__action__Error_GetResult_Response__create();

/// Destroy action/Error message.
/**
 * It calls
 * anscer_msgs__action__Error_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_GetResult_Response__destroy(anscer_msgs__action__Error_GetResult_Response * msg);

/// Check for action/Error message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_GetResult_Response__are_equal(const anscer_msgs__action__Error_GetResult_Response * lhs, const anscer_msgs__action__Error_GetResult_Response * rhs);

/// Copy a action/Error message.
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
anscer_msgs__action__Error_GetResult_Response__copy(
  const anscer_msgs__action__Error_GetResult_Response * input,
  anscer_msgs__action__Error_GetResult_Response * output);

/// Initialize array of action/Error messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__action__Error_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_GetResult_Response__Sequence__init(anscer_msgs__action__Error_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_GetResult_Response__Sequence__fini(anscer_msgs__action__Error_GetResult_Response__Sequence * array);

/// Create array of action/Error messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__action__Error_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_GetResult_Response__Sequence *
anscer_msgs__action__Error_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_GetResult_Response__Sequence__destroy(anscer_msgs__action__Error_GetResult_Response__Sequence * array);

/// Check for action/Error message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_GetResult_Response__Sequence__are_equal(const anscer_msgs__action__Error_GetResult_Response__Sequence * lhs, const anscer_msgs__action__Error_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Error messages.
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
anscer_msgs__action__Error_GetResult_Response__Sequence__copy(
  const anscer_msgs__action__Error_GetResult_Response__Sequence * input,
  anscer_msgs__action__Error_GetResult_Response__Sequence * output);

/// Initialize action/Error message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__action__Error_FeedbackMessage
 * )) before or use
 * anscer_msgs__action__Error_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_FeedbackMessage__init(anscer_msgs__action__Error_FeedbackMessage * msg);

/// Finalize action/Error message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_FeedbackMessage__fini(anscer_msgs__action__Error_FeedbackMessage * msg);

/// Create action/Error message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__action__Error_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_FeedbackMessage *
anscer_msgs__action__Error_FeedbackMessage__create();

/// Destroy action/Error message.
/**
 * It calls
 * anscer_msgs__action__Error_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_FeedbackMessage__destroy(anscer_msgs__action__Error_FeedbackMessage * msg);

/// Check for action/Error message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_FeedbackMessage__are_equal(const anscer_msgs__action__Error_FeedbackMessage * lhs, const anscer_msgs__action__Error_FeedbackMessage * rhs);

/// Copy a action/Error message.
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
anscer_msgs__action__Error_FeedbackMessage__copy(
  const anscer_msgs__action__Error_FeedbackMessage * input,
  anscer_msgs__action__Error_FeedbackMessage * output);

/// Initialize array of action/Error messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__action__Error_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_FeedbackMessage__Sequence__init(anscer_msgs__action__Error_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_FeedbackMessage__Sequence__fini(anscer_msgs__action__Error_FeedbackMessage__Sequence * array);

/// Create array of action/Error messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__action__Error_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__action__Error_FeedbackMessage__Sequence *
anscer_msgs__action__Error_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Error messages.
/**
 * It calls
 * anscer_msgs__action__Error_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__action__Error_FeedbackMessage__Sequence__destroy(anscer_msgs__action__Error_FeedbackMessage__Sequence * array);

/// Check for action/Error message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__action__Error_FeedbackMessage__Sequence__are_equal(const anscer_msgs__action__Error_FeedbackMessage__Sequence * lhs, const anscer_msgs__action__Error_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Error messages.
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
anscer_msgs__action__Error_FeedbackMessage__Sequence__copy(
  const anscer_msgs__action__Error_FeedbackMessage__Sequence * input,
  anscer_msgs__action__Error_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__ACTION__DETAIL__ERROR__FUNCTIONS_H_

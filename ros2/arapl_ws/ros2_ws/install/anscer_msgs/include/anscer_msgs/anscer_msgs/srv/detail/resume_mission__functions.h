// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from anscer_msgs:srv/ResumeMission.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__RESUME_MISSION__FUNCTIONS_H_
#define ANSCER_MSGS__SRV__DETAIL__RESUME_MISSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "anscer_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "anscer_msgs/srv/detail/resume_mission__struct.h"

/// Initialize srv/ResumeMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__srv__ResumeMission_Request
 * )) before or use
 * anscer_msgs__srv__ResumeMission_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__srv__ResumeMission_Request__init(anscer_msgs__srv__ResumeMission_Request * msg);

/// Finalize srv/ResumeMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__srv__ResumeMission_Request__fini(anscer_msgs__srv__ResumeMission_Request * msg);

/// Create srv/ResumeMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__srv__ResumeMission_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__srv__ResumeMission_Request *
anscer_msgs__srv__ResumeMission_Request__create();

/// Destroy srv/ResumeMission message.
/**
 * It calls
 * anscer_msgs__srv__ResumeMission_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__srv__ResumeMission_Request__destroy(anscer_msgs__srv__ResumeMission_Request * msg);

/// Check for srv/ResumeMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__srv__ResumeMission_Request__are_equal(const anscer_msgs__srv__ResumeMission_Request * lhs, const anscer_msgs__srv__ResumeMission_Request * rhs);

/// Copy a srv/ResumeMission message.
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
anscer_msgs__srv__ResumeMission_Request__copy(
  const anscer_msgs__srv__ResumeMission_Request * input,
  anscer_msgs__srv__ResumeMission_Request * output);

/// Initialize array of srv/ResumeMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__srv__ResumeMission_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__srv__ResumeMission_Request__Sequence__init(anscer_msgs__srv__ResumeMission_Request__Sequence * array, size_t size);

/// Finalize array of srv/ResumeMission messages.
/**
 * It calls
 * anscer_msgs__srv__ResumeMission_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__srv__ResumeMission_Request__Sequence__fini(anscer_msgs__srv__ResumeMission_Request__Sequence * array);

/// Create array of srv/ResumeMission messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__srv__ResumeMission_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__srv__ResumeMission_Request__Sequence *
anscer_msgs__srv__ResumeMission_Request__Sequence__create(size_t size);

/// Destroy array of srv/ResumeMission messages.
/**
 * It calls
 * anscer_msgs__srv__ResumeMission_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__srv__ResumeMission_Request__Sequence__destroy(anscer_msgs__srv__ResumeMission_Request__Sequence * array);

/// Check for srv/ResumeMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__srv__ResumeMission_Request__Sequence__are_equal(const anscer_msgs__srv__ResumeMission_Request__Sequence * lhs, const anscer_msgs__srv__ResumeMission_Request__Sequence * rhs);

/// Copy an array of srv/ResumeMission messages.
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
anscer_msgs__srv__ResumeMission_Request__Sequence__copy(
  const anscer_msgs__srv__ResumeMission_Request__Sequence * input,
  anscer_msgs__srv__ResumeMission_Request__Sequence * output);

/// Initialize srv/ResumeMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anscer_msgs__srv__ResumeMission_Response
 * )) before or use
 * anscer_msgs__srv__ResumeMission_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__srv__ResumeMission_Response__init(anscer_msgs__srv__ResumeMission_Response * msg);

/// Finalize srv/ResumeMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__srv__ResumeMission_Response__fini(anscer_msgs__srv__ResumeMission_Response * msg);

/// Create srv/ResumeMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anscer_msgs__srv__ResumeMission_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__srv__ResumeMission_Response *
anscer_msgs__srv__ResumeMission_Response__create();

/// Destroy srv/ResumeMission message.
/**
 * It calls
 * anscer_msgs__srv__ResumeMission_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__srv__ResumeMission_Response__destroy(anscer_msgs__srv__ResumeMission_Response * msg);

/// Check for srv/ResumeMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__srv__ResumeMission_Response__are_equal(const anscer_msgs__srv__ResumeMission_Response * lhs, const anscer_msgs__srv__ResumeMission_Response * rhs);

/// Copy a srv/ResumeMission message.
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
anscer_msgs__srv__ResumeMission_Response__copy(
  const anscer_msgs__srv__ResumeMission_Response * input,
  anscer_msgs__srv__ResumeMission_Response * output);

/// Initialize array of srv/ResumeMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * anscer_msgs__srv__ResumeMission_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__srv__ResumeMission_Response__Sequence__init(anscer_msgs__srv__ResumeMission_Response__Sequence * array, size_t size);

/// Finalize array of srv/ResumeMission messages.
/**
 * It calls
 * anscer_msgs__srv__ResumeMission_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__srv__ResumeMission_Response__Sequence__fini(anscer_msgs__srv__ResumeMission_Response__Sequence * array);

/// Create array of srv/ResumeMission messages.
/**
 * It allocates the memory for the array and calls
 * anscer_msgs__srv__ResumeMission_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
anscer_msgs__srv__ResumeMission_Response__Sequence *
anscer_msgs__srv__ResumeMission_Response__Sequence__create(size_t size);

/// Destroy array of srv/ResumeMission messages.
/**
 * It calls
 * anscer_msgs__srv__ResumeMission_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
void
anscer_msgs__srv__ResumeMission_Response__Sequence__destroy(anscer_msgs__srv__ResumeMission_Response__Sequence * array);

/// Check for srv/ResumeMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_anscer_msgs
bool
anscer_msgs__srv__ResumeMission_Response__Sequence__are_equal(const anscer_msgs__srv__ResumeMission_Response__Sequence * lhs, const anscer_msgs__srv__ResumeMission_Response__Sequence * rhs);

/// Copy an array of srv/ResumeMission messages.
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
anscer_msgs__srv__ResumeMission_Response__Sequence__copy(
  const anscer_msgs__srv__ResumeMission_Response__Sequence * input,
  anscer_msgs__srv__ResumeMission_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__RESUME_MISSION__FUNCTIONS_H_

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:srv/EditSequence.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/srv/detail/edit_sequence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `waypoint_id`
// Member `sequence_list`
#include "rosidl_runtime_c/string_functions.h"

bool
anscer_msgs__srv__EditSequence_Request__init(anscer_msgs__srv__EditSequence_Request * msg)
{
  if (!msg) {
    return false;
  }
  // save
  // waypoint_id
  if (!rosidl_runtime_c__String__init(&msg->waypoint_id)) {
    anscer_msgs__srv__EditSequence_Request__fini(msg);
    return false;
  }
  // sequence_list
  if (!rosidl_runtime_c__String__init(&msg->sequence_list)) {
    anscer_msgs__srv__EditSequence_Request__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__srv__EditSequence_Request__fini(anscer_msgs__srv__EditSequence_Request * msg)
{
  if (!msg) {
    return;
  }
  // save
  // waypoint_id
  rosidl_runtime_c__String__fini(&msg->waypoint_id);
  // sequence_list
  rosidl_runtime_c__String__fini(&msg->sequence_list);
}

bool
anscer_msgs__srv__EditSequence_Request__are_equal(const anscer_msgs__srv__EditSequence_Request * lhs, const anscer_msgs__srv__EditSequence_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // save
  if (lhs->save != rhs->save) {
    return false;
  }
  // waypoint_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waypoint_id), &(rhs->waypoint_id)))
  {
    return false;
  }
  // sequence_list
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sequence_list), &(rhs->sequence_list)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__srv__EditSequence_Request__copy(
  const anscer_msgs__srv__EditSequence_Request * input,
  anscer_msgs__srv__EditSequence_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // save
  output->save = input->save;
  // waypoint_id
  if (!rosidl_runtime_c__String__copy(
      &(input->waypoint_id), &(output->waypoint_id)))
  {
    return false;
  }
  // sequence_list
  if (!rosidl_runtime_c__String__copy(
      &(input->sequence_list), &(output->sequence_list)))
  {
    return false;
  }
  return true;
}

anscer_msgs__srv__EditSequence_Request *
anscer_msgs__srv__EditSequence_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditSequence_Request * msg = (anscer_msgs__srv__EditSequence_Request *)allocator.allocate(sizeof(anscer_msgs__srv__EditSequence_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__srv__EditSequence_Request));
  bool success = anscer_msgs__srv__EditSequence_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__srv__EditSequence_Request__destroy(anscer_msgs__srv__EditSequence_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__srv__EditSequence_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__srv__EditSequence_Request__Sequence__init(anscer_msgs__srv__EditSequence_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditSequence_Request * data = NULL;

  if (size) {
    data = (anscer_msgs__srv__EditSequence_Request *)allocator.zero_allocate(size, sizeof(anscer_msgs__srv__EditSequence_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__srv__EditSequence_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__srv__EditSequence_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
anscer_msgs__srv__EditSequence_Request__Sequence__fini(anscer_msgs__srv__EditSequence_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      anscer_msgs__srv__EditSequence_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

anscer_msgs__srv__EditSequence_Request__Sequence *
anscer_msgs__srv__EditSequence_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditSequence_Request__Sequence * array = (anscer_msgs__srv__EditSequence_Request__Sequence *)allocator.allocate(sizeof(anscer_msgs__srv__EditSequence_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__srv__EditSequence_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__srv__EditSequence_Request__Sequence__destroy(anscer_msgs__srv__EditSequence_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__srv__EditSequence_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__srv__EditSequence_Request__Sequence__are_equal(const anscer_msgs__srv__EditSequence_Request__Sequence * lhs, const anscer_msgs__srv__EditSequence_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__srv__EditSequence_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__srv__EditSequence_Request__Sequence__copy(
  const anscer_msgs__srv__EditSequence_Request__Sequence * input,
  anscer_msgs__srv__EditSequence_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__srv__EditSequence_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__srv__EditSequence_Request * data =
      (anscer_msgs__srv__EditSequence_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__srv__EditSequence_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__srv__EditSequence_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__srv__EditSequence_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
anscer_msgs__srv__EditSequence_Response__init(anscer_msgs__srv__EditSequence_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_saved
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    anscer_msgs__srv__EditSequence_Response__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__srv__EditSequence_Response__fini(anscer_msgs__srv__EditSequence_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_saved
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
anscer_msgs__srv__EditSequence_Response__are_equal(const anscer_msgs__srv__EditSequence_Response * lhs, const anscer_msgs__srv__EditSequence_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_saved
  if (lhs->is_saved != rhs->is_saved) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__srv__EditSequence_Response__copy(
  const anscer_msgs__srv__EditSequence_Response * input,
  anscer_msgs__srv__EditSequence_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_saved
  output->is_saved = input->is_saved;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

anscer_msgs__srv__EditSequence_Response *
anscer_msgs__srv__EditSequence_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditSequence_Response * msg = (anscer_msgs__srv__EditSequence_Response *)allocator.allocate(sizeof(anscer_msgs__srv__EditSequence_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__srv__EditSequence_Response));
  bool success = anscer_msgs__srv__EditSequence_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__srv__EditSequence_Response__destroy(anscer_msgs__srv__EditSequence_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__srv__EditSequence_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__srv__EditSequence_Response__Sequence__init(anscer_msgs__srv__EditSequence_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditSequence_Response * data = NULL;

  if (size) {
    data = (anscer_msgs__srv__EditSequence_Response *)allocator.zero_allocate(size, sizeof(anscer_msgs__srv__EditSequence_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__srv__EditSequence_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__srv__EditSequence_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
anscer_msgs__srv__EditSequence_Response__Sequence__fini(anscer_msgs__srv__EditSequence_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      anscer_msgs__srv__EditSequence_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

anscer_msgs__srv__EditSequence_Response__Sequence *
anscer_msgs__srv__EditSequence_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditSequence_Response__Sequence * array = (anscer_msgs__srv__EditSequence_Response__Sequence *)allocator.allocate(sizeof(anscer_msgs__srv__EditSequence_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__srv__EditSequence_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__srv__EditSequence_Response__Sequence__destroy(anscer_msgs__srv__EditSequence_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__srv__EditSequence_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__srv__EditSequence_Response__Sequence__are_equal(const anscer_msgs__srv__EditSequence_Response__Sequence * lhs, const anscer_msgs__srv__EditSequence_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__srv__EditSequence_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__srv__EditSequence_Response__Sequence__copy(
  const anscer_msgs__srv__EditSequence_Response__Sequence * input,
  anscer_msgs__srv__EditSequence_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__srv__EditSequence_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__srv__EditSequence_Response * data =
      (anscer_msgs__srv__EditSequence_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__srv__EditSequence_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__srv__EditSequence_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__srv__EditSequence_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

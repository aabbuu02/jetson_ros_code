// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `index`
// Member `mission_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `charge_info`
#include "anscer_msgs/msg/detail/charge_info__functions.h"

bool
anscer_msgs__msg__Feedback__init(anscer_msgs__msg__Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // index
  if (!rosidl_runtime_c__String__init(&msg->index)) {
    anscer_msgs__msg__Feedback__fini(msg);
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    anscer_msgs__msg__Feedback__fini(msg);
    return false;
  }
  // number
  // status
  // charge_info
  if (!anscer_msgs__msg__ChargeInfo__init(&msg->charge_info)) {
    anscer_msgs__msg__Feedback__fini(msg);
    return false;
  }
  // completion_percentage
  // time_elapsed
  // priority_level
  return true;
}

void
anscer_msgs__msg__Feedback__fini(anscer_msgs__msg__Feedback * msg)
{
  if (!msg) {
    return;
  }
  // index
  rosidl_runtime_c__String__fini(&msg->index);
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // number
  // status
  // charge_info
  anscer_msgs__msg__ChargeInfo__fini(&msg->charge_info);
  // completion_percentage
  // time_elapsed
  // priority_level
}

bool
anscer_msgs__msg__Feedback__are_equal(const anscer_msgs__msg__Feedback * lhs, const anscer_msgs__msg__Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->index), &(rhs->index)))
  {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // charge_info
  if (!anscer_msgs__msg__ChargeInfo__are_equal(
      &(lhs->charge_info), &(rhs->charge_info)))
  {
    return false;
  }
  // completion_percentage
  if (lhs->completion_percentage != rhs->completion_percentage) {
    return false;
  }
  // time_elapsed
  if (lhs->time_elapsed != rhs->time_elapsed) {
    return false;
  }
  // priority_level
  if (lhs->priority_level != rhs->priority_level) {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__Feedback__copy(
  const anscer_msgs__msg__Feedback * input,
  anscer_msgs__msg__Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  if (!rosidl_runtime_c__String__copy(
      &(input->index), &(output->index)))
  {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // number
  output->number = input->number;
  // status
  output->status = input->status;
  // charge_info
  if (!anscer_msgs__msg__ChargeInfo__copy(
      &(input->charge_info), &(output->charge_info)))
  {
    return false;
  }
  // completion_percentage
  output->completion_percentage = input->completion_percentage;
  // time_elapsed
  output->time_elapsed = input->time_elapsed;
  // priority_level
  output->priority_level = input->priority_level;
  return true;
}

anscer_msgs__msg__Feedback *
anscer_msgs__msg__Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__Feedback * msg = (anscer_msgs__msg__Feedback *)allocator.allocate(sizeof(anscer_msgs__msg__Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__Feedback));
  bool success = anscer_msgs__msg__Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__Feedback__destroy(anscer_msgs__msg__Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__Feedback__Sequence__init(anscer_msgs__msg__Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__Feedback * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__Feedback *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__Feedback__fini(&data[i - 1]);
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
anscer_msgs__msg__Feedback__Sequence__fini(anscer_msgs__msg__Feedback__Sequence * array)
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
      anscer_msgs__msg__Feedback__fini(&array->data[i]);
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

anscer_msgs__msg__Feedback__Sequence *
anscer_msgs__msg__Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__Feedback__Sequence * array = (anscer_msgs__msg__Feedback__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__Feedback__Sequence__destroy(anscer_msgs__msg__Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__Feedback__Sequence__are_equal(const anscer_msgs__msg__Feedback__Sequence * lhs, const anscer_msgs__msg__Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__Feedback__Sequence__copy(
  const anscer_msgs__msg__Feedback__Sequence * input,
  anscer_msgs__msg__Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__Feedback * data =
      (anscer_msgs__msg__Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

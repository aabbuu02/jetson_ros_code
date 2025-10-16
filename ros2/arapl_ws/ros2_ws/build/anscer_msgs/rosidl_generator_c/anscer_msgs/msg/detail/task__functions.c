// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/Task.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `index`
#include "rosidl_runtime_c/string_functions.h"
// Member `acr_info`
#include "anscer_msgs/msg/detail/acr_control__functions.h"
// Member `charge_info`
#include "anscer_msgs/msg/detail/charge_info__functions.h"

bool
anscer_msgs__msg__Task__init(anscer_msgs__msg__Task * msg)
{
  if (!msg) {
    return false;
  }
  // index
  if (!rosidl_runtime_c__String__init(&msg->index)) {
    anscer_msgs__msg__Task__fini(msg);
    return false;
  }
  // waypoint_index
  // number
  // activate
  // acr_info
  if (!anscer_msgs__msg__ACRControl__init(&msg->acr_info)) {
    anscer_msgs__msg__Task__fini(msg);
    return false;
  }
  // charge_info
  if (!anscer_msgs__msg__ChargeInfo__init(&msg->charge_info)) {
    anscer_msgs__msg__Task__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__msg__Task__fini(anscer_msgs__msg__Task * msg)
{
  if (!msg) {
    return;
  }
  // index
  rosidl_runtime_c__String__fini(&msg->index);
  // waypoint_index
  // number
  // activate
  // acr_info
  anscer_msgs__msg__ACRControl__fini(&msg->acr_info);
  // charge_info
  anscer_msgs__msg__ChargeInfo__fini(&msg->charge_info);
}

bool
anscer_msgs__msg__Task__are_equal(const anscer_msgs__msg__Task * lhs, const anscer_msgs__msg__Task * rhs)
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
  // waypoint_index
  if (lhs->waypoint_index != rhs->waypoint_index) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  // activate
  if (lhs->activate != rhs->activate) {
    return false;
  }
  // acr_info
  if (!anscer_msgs__msg__ACRControl__are_equal(
      &(lhs->acr_info), &(rhs->acr_info)))
  {
    return false;
  }
  // charge_info
  if (!anscer_msgs__msg__ChargeInfo__are_equal(
      &(lhs->charge_info), &(rhs->charge_info)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__Task__copy(
  const anscer_msgs__msg__Task * input,
  anscer_msgs__msg__Task * output)
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
  // waypoint_index
  output->waypoint_index = input->waypoint_index;
  // number
  output->number = input->number;
  // activate
  output->activate = input->activate;
  // acr_info
  if (!anscer_msgs__msg__ACRControl__copy(
      &(input->acr_info), &(output->acr_info)))
  {
    return false;
  }
  // charge_info
  if (!anscer_msgs__msg__ChargeInfo__copy(
      &(input->charge_info), &(output->charge_info)))
  {
    return false;
  }
  return true;
}

anscer_msgs__msg__Task *
anscer_msgs__msg__Task__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__Task * msg = (anscer_msgs__msg__Task *)allocator.allocate(sizeof(anscer_msgs__msg__Task), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__Task));
  bool success = anscer_msgs__msg__Task__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__Task__destroy(anscer_msgs__msg__Task * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__Task__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__Task__Sequence__init(anscer_msgs__msg__Task__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__Task * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__Task *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__Task), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__Task__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__Task__fini(&data[i - 1]);
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
anscer_msgs__msg__Task__Sequence__fini(anscer_msgs__msg__Task__Sequence * array)
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
      anscer_msgs__msg__Task__fini(&array->data[i]);
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

anscer_msgs__msg__Task__Sequence *
anscer_msgs__msg__Task__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__Task__Sequence * array = (anscer_msgs__msg__Task__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__Task__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__Task__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__Task__Sequence__destroy(anscer_msgs__msg__Task__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__Task__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__Task__Sequence__are_equal(const anscer_msgs__msg__Task__Sequence * lhs, const anscer_msgs__msg__Task__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__Task__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__Task__Sequence__copy(
  const anscer_msgs__msg__Task__Sequence * input,
  anscer_msgs__msg__Task__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__Task);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__Task * data =
      (anscer_msgs__msg__Task *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__Task__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__Task__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__Task__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

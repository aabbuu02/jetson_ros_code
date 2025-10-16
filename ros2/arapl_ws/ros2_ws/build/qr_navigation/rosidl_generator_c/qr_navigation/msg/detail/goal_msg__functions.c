// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice
#include "qr_navigation/msg/detail/goal_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
// Member `operation`
#include "rosidl_runtime_c/string_functions.h"
// Member `start`
// Member `goal`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
qr_navigation__msg__GoalMsg__init(qr_navigation__msg__GoalMsg * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__String__init(&msg->pose)) {
    qr_navigation__msg__GoalMsg__fini(msg);
    return false;
  }
  // start
  if (!rosidl_runtime_c__double__Sequence__init(&msg->start, 0)) {
    qr_navigation__msg__GoalMsg__fini(msg);
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__init(&msg->goal, 0)) {
    qr_navigation__msg__GoalMsg__fini(msg);
    return false;
  }
  // operation
  if (!rosidl_runtime_c__String__init(&msg->operation)) {
    qr_navigation__msg__GoalMsg__fini(msg);
    return false;
  }
  return true;
}

void
qr_navigation__msg__GoalMsg__fini(qr_navigation__msg__GoalMsg * msg)
{
  if (!msg) {
    return;
  }
  // pose
  rosidl_runtime_c__String__fini(&msg->pose);
  // start
  rosidl_runtime_c__double__Sequence__fini(&msg->start);
  // goal
  rosidl_runtime_c__double__Sequence__fini(&msg->goal);
  // operation
  rosidl_runtime_c__String__fini(&msg->operation);
}

bool
qr_navigation__msg__GoalMsg__are_equal(const qr_navigation__msg__GoalMsg * lhs, const qr_navigation__msg__GoalMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // start
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // operation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operation), &(rhs->operation)))
  {
    return false;
  }
  return true;
}

bool
qr_navigation__msg__GoalMsg__copy(
  const qr_navigation__msg__GoalMsg * input,
  qr_navigation__msg__GoalMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__String__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // start
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // operation
  if (!rosidl_runtime_c__String__copy(
      &(input->operation), &(output->operation)))
  {
    return false;
  }
  return true;
}

qr_navigation__msg__GoalMsg *
qr_navigation__msg__GoalMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_navigation__msg__GoalMsg * msg = (qr_navigation__msg__GoalMsg *)allocator.allocate(sizeof(qr_navigation__msg__GoalMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qr_navigation__msg__GoalMsg));
  bool success = qr_navigation__msg__GoalMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qr_navigation__msg__GoalMsg__destroy(qr_navigation__msg__GoalMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qr_navigation__msg__GoalMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qr_navigation__msg__GoalMsg__Sequence__init(qr_navigation__msg__GoalMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_navigation__msg__GoalMsg * data = NULL;

  if (size) {
    data = (qr_navigation__msg__GoalMsg *)allocator.zero_allocate(size, sizeof(qr_navigation__msg__GoalMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qr_navigation__msg__GoalMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qr_navigation__msg__GoalMsg__fini(&data[i - 1]);
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
qr_navigation__msg__GoalMsg__Sequence__fini(qr_navigation__msg__GoalMsg__Sequence * array)
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
      qr_navigation__msg__GoalMsg__fini(&array->data[i]);
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

qr_navigation__msg__GoalMsg__Sequence *
qr_navigation__msg__GoalMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_navigation__msg__GoalMsg__Sequence * array = (qr_navigation__msg__GoalMsg__Sequence *)allocator.allocate(sizeof(qr_navigation__msg__GoalMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qr_navigation__msg__GoalMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qr_navigation__msg__GoalMsg__Sequence__destroy(qr_navigation__msg__GoalMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qr_navigation__msg__GoalMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qr_navigation__msg__GoalMsg__Sequence__are_equal(const qr_navigation__msg__GoalMsg__Sequence * lhs, const qr_navigation__msg__GoalMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qr_navigation__msg__GoalMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qr_navigation__msg__GoalMsg__Sequence__copy(
  const qr_navigation__msg__GoalMsg__Sequence * input,
  qr_navigation__msg__GoalMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qr_navigation__msg__GoalMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qr_navigation__msg__GoalMsg * data =
      (qr_navigation__msg__GoalMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qr_navigation__msg__GoalMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qr_navigation__msg__GoalMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qr_navigation__msg__GoalMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

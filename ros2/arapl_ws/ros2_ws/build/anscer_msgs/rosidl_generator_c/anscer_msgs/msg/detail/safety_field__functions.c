// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/SafetyField.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/safety_field__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
anscer_msgs__msg__SafetyField__init(anscer_msgs__msg__SafetyField * msg)
{
  if (!msg) {
    return false;
  }
  // field_id
  // is_front
  // is_rear
  return true;
}

void
anscer_msgs__msg__SafetyField__fini(anscer_msgs__msg__SafetyField * msg)
{
  if (!msg) {
    return;
  }
  // field_id
  // is_front
  // is_rear
}

bool
anscer_msgs__msg__SafetyField__are_equal(const anscer_msgs__msg__SafetyField * lhs, const anscer_msgs__msg__SafetyField * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // field_id
  if (lhs->field_id != rhs->field_id) {
    return false;
  }
  // is_front
  if (lhs->is_front != rhs->is_front) {
    return false;
  }
  // is_rear
  if (lhs->is_rear != rhs->is_rear) {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__SafetyField__copy(
  const anscer_msgs__msg__SafetyField * input,
  anscer_msgs__msg__SafetyField * output)
{
  if (!input || !output) {
    return false;
  }
  // field_id
  output->field_id = input->field_id;
  // is_front
  output->is_front = input->is_front;
  // is_rear
  output->is_rear = input->is_rear;
  return true;
}

anscer_msgs__msg__SafetyField *
anscer_msgs__msg__SafetyField__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__SafetyField * msg = (anscer_msgs__msg__SafetyField *)allocator.allocate(sizeof(anscer_msgs__msg__SafetyField), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__SafetyField));
  bool success = anscer_msgs__msg__SafetyField__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__SafetyField__destroy(anscer_msgs__msg__SafetyField * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__SafetyField__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__SafetyField__Sequence__init(anscer_msgs__msg__SafetyField__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__SafetyField * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__SafetyField *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__SafetyField), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__SafetyField__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__SafetyField__fini(&data[i - 1]);
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
anscer_msgs__msg__SafetyField__Sequence__fini(anscer_msgs__msg__SafetyField__Sequence * array)
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
      anscer_msgs__msg__SafetyField__fini(&array->data[i]);
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

anscer_msgs__msg__SafetyField__Sequence *
anscer_msgs__msg__SafetyField__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__SafetyField__Sequence * array = (anscer_msgs__msg__SafetyField__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__SafetyField__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__SafetyField__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__SafetyField__Sequence__destroy(anscer_msgs__msg__SafetyField__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__SafetyField__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__SafetyField__Sequence__are_equal(const anscer_msgs__msg__SafetyField__Sequence * lhs, const anscer_msgs__msg__SafetyField__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__SafetyField__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__SafetyField__Sequence__copy(
  const anscer_msgs__msg__SafetyField__Sequence * input,
  anscer_msgs__msg__SafetyField__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__SafetyField);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__SafetyField * data =
      (anscer_msgs__msg__SafetyField *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__SafetyField__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__SafetyField__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__SafetyField__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

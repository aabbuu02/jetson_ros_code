// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/MotorDiagnostics.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/motor_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `fault_flags`
#include "anscer_msgs/msg/detail/motor_fault_flags__functions.h"
// Member `status_flags`
#include "anscer_msgs/msg/detail/motor_status_flags__functions.h"

bool
anscer_msgs__msg__MotorDiagnostics__init(anscer_msgs__msg__MotorDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    anscer_msgs__msg__MotorDiagnostics__fini(msg);
    return false;
  }
  // fault_flags
  if (!anscer_msgs__msg__MotorFaultFlags__init(&msg->fault_flags)) {
    anscer_msgs__msg__MotorDiagnostics__fini(msg);
    return false;
  }
  // status_flags
  if (!anscer_msgs__msg__MotorStatusFlags__init(&msg->status_flags)) {
    anscer_msgs__msg__MotorDiagnostics__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__msg__MotorDiagnostics__fini(anscer_msgs__msg__MotorDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // fault_flags
  anscer_msgs__msg__MotorFaultFlags__fini(&msg->fault_flags);
  // status_flags
  anscer_msgs__msg__MotorStatusFlags__fini(&msg->status_flags);
}

bool
anscer_msgs__msg__MotorDiagnostics__are_equal(const anscer_msgs__msg__MotorDiagnostics * lhs, const anscer_msgs__msg__MotorDiagnostics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // fault_flags
  if (!anscer_msgs__msg__MotorFaultFlags__are_equal(
      &(lhs->fault_flags), &(rhs->fault_flags)))
  {
    return false;
  }
  // status_flags
  if (!anscer_msgs__msg__MotorStatusFlags__are_equal(
      &(lhs->status_flags), &(rhs->status_flags)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__MotorDiagnostics__copy(
  const anscer_msgs__msg__MotorDiagnostics * input,
  anscer_msgs__msg__MotorDiagnostics * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // fault_flags
  if (!anscer_msgs__msg__MotorFaultFlags__copy(
      &(input->fault_flags), &(output->fault_flags)))
  {
    return false;
  }
  // status_flags
  if (!anscer_msgs__msg__MotorStatusFlags__copy(
      &(input->status_flags), &(output->status_flags)))
  {
    return false;
  }
  return true;
}

anscer_msgs__msg__MotorDiagnostics *
anscer_msgs__msg__MotorDiagnostics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__MotorDiagnostics * msg = (anscer_msgs__msg__MotorDiagnostics *)allocator.allocate(sizeof(anscer_msgs__msg__MotorDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__MotorDiagnostics));
  bool success = anscer_msgs__msg__MotorDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__MotorDiagnostics__destroy(anscer_msgs__msg__MotorDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__MotorDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__MotorDiagnostics__Sequence__init(anscer_msgs__msg__MotorDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__MotorDiagnostics * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__MotorDiagnostics *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__MotorDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__MotorDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__MotorDiagnostics__fini(&data[i - 1]);
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
anscer_msgs__msg__MotorDiagnostics__Sequence__fini(anscer_msgs__msg__MotorDiagnostics__Sequence * array)
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
      anscer_msgs__msg__MotorDiagnostics__fini(&array->data[i]);
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

anscer_msgs__msg__MotorDiagnostics__Sequence *
anscer_msgs__msg__MotorDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__MotorDiagnostics__Sequence * array = (anscer_msgs__msg__MotorDiagnostics__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__MotorDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__MotorDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__MotorDiagnostics__Sequence__destroy(anscer_msgs__msg__MotorDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__MotorDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__MotorDiagnostics__Sequence__are_equal(const anscer_msgs__msg__MotorDiagnostics__Sequence * lhs, const anscer_msgs__msg__MotorDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__MotorDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__MotorDiagnostics__Sequence__copy(
  const anscer_msgs__msg__MotorDiagnostics__Sequence * input,
  anscer_msgs__msg__MotorDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__MotorDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__MotorDiagnostics * data =
      (anscer_msgs__msg__MotorDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__MotorDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__MotorDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__MotorDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

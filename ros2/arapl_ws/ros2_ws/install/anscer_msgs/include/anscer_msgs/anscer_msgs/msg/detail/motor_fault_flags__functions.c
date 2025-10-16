// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/MotorFaultFlags.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/motor_fault_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
anscer_msgs__msg__MotorFaultFlags__init(anscer_msgs__msg__MotorFaultFlags * msg)
{
  if (!msg) {
    return false;
  }
  // overheat
  // overvoltage
  // undervoltage
  // short_circuit
  // emergency_stop
  // motor_setup_fault
  // mosfet_failure
  // default_configuration
  return true;
}

void
anscer_msgs__msg__MotorFaultFlags__fini(anscer_msgs__msg__MotorFaultFlags * msg)
{
  if (!msg) {
    return;
  }
  // overheat
  // overvoltage
  // undervoltage
  // short_circuit
  // emergency_stop
  // motor_setup_fault
  // mosfet_failure
  // default_configuration
}

bool
anscer_msgs__msg__MotorFaultFlags__are_equal(const anscer_msgs__msg__MotorFaultFlags * lhs, const anscer_msgs__msg__MotorFaultFlags * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // overheat
  if (lhs->overheat != rhs->overheat) {
    return false;
  }
  // overvoltage
  if (lhs->overvoltage != rhs->overvoltage) {
    return false;
  }
  // undervoltage
  if (lhs->undervoltage != rhs->undervoltage) {
    return false;
  }
  // short_circuit
  if (lhs->short_circuit != rhs->short_circuit) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // motor_setup_fault
  if (lhs->motor_setup_fault != rhs->motor_setup_fault) {
    return false;
  }
  // mosfet_failure
  if (lhs->mosfet_failure != rhs->mosfet_failure) {
    return false;
  }
  // default_configuration
  if (lhs->default_configuration != rhs->default_configuration) {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__MotorFaultFlags__copy(
  const anscer_msgs__msg__MotorFaultFlags * input,
  anscer_msgs__msg__MotorFaultFlags * output)
{
  if (!input || !output) {
    return false;
  }
  // overheat
  output->overheat = input->overheat;
  // overvoltage
  output->overvoltage = input->overvoltage;
  // undervoltage
  output->undervoltage = input->undervoltage;
  // short_circuit
  output->short_circuit = input->short_circuit;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // motor_setup_fault
  output->motor_setup_fault = input->motor_setup_fault;
  // mosfet_failure
  output->mosfet_failure = input->mosfet_failure;
  // default_configuration
  output->default_configuration = input->default_configuration;
  return true;
}

anscer_msgs__msg__MotorFaultFlags *
anscer_msgs__msg__MotorFaultFlags__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__MotorFaultFlags * msg = (anscer_msgs__msg__MotorFaultFlags *)allocator.allocate(sizeof(anscer_msgs__msg__MotorFaultFlags), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__MotorFaultFlags));
  bool success = anscer_msgs__msg__MotorFaultFlags__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__MotorFaultFlags__destroy(anscer_msgs__msg__MotorFaultFlags * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__MotorFaultFlags__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__MotorFaultFlags__Sequence__init(anscer_msgs__msg__MotorFaultFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__MotorFaultFlags * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__MotorFaultFlags *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__MotorFaultFlags), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__MotorFaultFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__MotorFaultFlags__fini(&data[i - 1]);
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
anscer_msgs__msg__MotorFaultFlags__Sequence__fini(anscer_msgs__msg__MotorFaultFlags__Sequence * array)
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
      anscer_msgs__msg__MotorFaultFlags__fini(&array->data[i]);
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

anscer_msgs__msg__MotorFaultFlags__Sequence *
anscer_msgs__msg__MotorFaultFlags__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__MotorFaultFlags__Sequence * array = (anscer_msgs__msg__MotorFaultFlags__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__MotorFaultFlags__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__MotorFaultFlags__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__MotorFaultFlags__Sequence__destroy(anscer_msgs__msg__MotorFaultFlags__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__MotorFaultFlags__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__MotorFaultFlags__Sequence__are_equal(const anscer_msgs__msg__MotorFaultFlags__Sequence * lhs, const anscer_msgs__msg__MotorFaultFlags__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__MotorFaultFlags__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__MotorFaultFlags__Sequence__copy(
  const anscer_msgs__msg__MotorFaultFlags__Sequence * input,
  anscer_msgs__msg__MotorFaultFlags__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__MotorFaultFlags);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__MotorFaultFlags * data =
      (anscer_msgs__msg__MotorFaultFlags *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__MotorFaultFlags__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__MotorFaultFlags__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__MotorFaultFlags__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:srv/ProhibitionZones.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/srv/detail/prohibition_zones__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `prohibition_zones`
#include "anscer_msgs/msg/detail/individual_prohibition__functions.h"

bool
anscer_msgs__srv__ProhibitionZones_Request__init(anscer_msgs__srv__ProhibitionZones_Request * msg)
{
  if (!msg) {
    return false;
  }
  // prohibition_zones
  if (!anscer_msgs__msg__IndividualProhibition__Sequence__init(&msg->prohibition_zones, 0)) {
    anscer_msgs__srv__ProhibitionZones_Request__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__srv__ProhibitionZones_Request__fini(anscer_msgs__srv__ProhibitionZones_Request * msg)
{
  if (!msg) {
    return;
  }
  // prohibition_zones
  anscer_msgs__msg__IndividualProhibition__Sequence__fini(&msg->prohibition_zones);
}

bool
anscer_msgs__srv__ProhibitionZones_Request__are_equal(const anscer_msgs__srv__ProhibitionZones_Request * lhs, const anscer_msgs__srv__ProhibitionZones_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prohibition_zones
  if (!anscer_msgs__msg__IndividualProhibition__Sequence__are_equal(
      &(lhs->prohibition_zones), &(rhs->prohibition_zones)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__srv__ProhibitionZones_Request__copy(
  const anscer_msgs__srv__ProhibitionZones_Request * input,
  anscer_msgs__srv__ProhibitionZones_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // prohibition_zones
  if (!anscer_msgs__msg__IndividualProhibition__Sequence__copy(
      &(input->prohibition_zones), &(output->prohibition_zones)))
  {
    return false;
  }
  return true;
}

anscer_msgs__srv__ProhibitionZones_Request *
anscer_msgs__srv__ProhibitionZones_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__ProhibitionZones_Request * msg = (anscer_msgs__srv__ProhibitionZones_Request *)allocator.allocate(sizeof(anscer_msgs__srv__ProhibitionZones_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__srv__ProhibitionZones_Request));
  bool success = anscer_msgs__srv__ProhibitionZones_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__srv__ProhibitionZones_Request__destroy(anscer_msgs__srv__ProhibitionZones_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__srv__ProhibitionZones_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__srv__ProhibitionZones_Request__Sequence__init(anscer_msgs__srv__ProhibitionZones_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__ProhibitionZones_Request * data = NULL;

  if (size) {
    data = (anscer_msgs__srv__ProhibitionZones_Request *)allocator.zero_allocate(size, sizeof(anscer_msgs__srv__ProhibitionZones_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__srv__ProhibitionZones_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__srv__ProhibitionZones_Request__fini(&data[i - 1]);
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
anscer_msgs__srv__ProhibitionZones_Request__Sequence__fini(anscer_msgs__srv__ProhibitionZones_Request__Sequence * array)
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
      anscer_msgs__srv__ProhibitionZones_Request__fini(&array->data[i]);
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

anscer_msgs__srv__ProhibitionZones_Request__Sequence *
anscer_msgs__srv__ProhibitionZones_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__ProhibitionZones_Request__Sequence * array = (anscer_msgs__srv__ProhibitionZones_Request__Sequence *)allocator.allocate(sizeof(anscer_msgs__srv__ProhibitionZones_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__srv__ProhibitionZones_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__srv__ProhibitionZones_Request__Sequence__destroy(anscer_msgs__srv__ProhibitionZones_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__srv__ProhibitionZones_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__srv__ProhibitionZones_Request__Sequence__are_equal(const anscer_msgs__srv__ProhibitionZones_Request__Sequence * lhs, const anscer_msgs__srv__ProhibitionZones_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__srv__ProhibitionZones_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__srv__ProhibitionZones_Request__Sequence__copy(
  const anscer_msgs__srv__ProhibitionZones_Request__Sequence * input,
  anscer_msgs__srv__ProhibitionZones_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__srv__ProhibitionZones_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__srv__ProhibitionZones_Request * data =
      (anscer_msgs__srv__ProhibitionZones_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__srv__ProhibitionZones_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__srv__ProhibitionZones_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__srv__ProhibitionZones_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
anscer_msgs__srv__ProhibitionZones_Response__init(anscer_msgs__srv__ProhibitionZones_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
anscer_msgs__srv__ProhibitionZones_Response__fini(anscer_msgs__srv__ProhibitionZones_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
anscer_msgs__srv__ProhibitionZones_Response__are_equal(const anscer_msgs__srv__ProhibitionZones_Response * lhs, const anscer_msgs__srv__ProhibitionZones_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
anscer_msgs__srv__ProhibitionZones_Response__copy(
  const anscer_msgs__srv__ProhibitionZones_Response * input,
  anscer_msgs__srv__ProhibitionZones_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

anscer_msgs__srv__ProhibitionZones_Response *
anscer_msgs__srv__ProhibitionZones_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__ProhibitionZones_Response * msg = (anscer_msgs__srv__ProhibitionZones_Response *)allocator.allocate(sizeof(anscer_msgs__srv__ProhibitionZones_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__srv__ProhibitionZones_Response));
  bool success = anscer_msgs__srv__ProhibitionZones_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__srv__ProhibitionZones_Response__destroy(anscer_msgs__srv__ProhibitionZones_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__srv__ProhibitionZones_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__srv__ProhibitionZones_Response__Sequence__init(anscer_msgs__srv__ProhibitionZones_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__ProhibitionZones_Response * data = NULL;

  if (size) {
    data = (anscer_msgs__srv__ProhibitionZones_Response *)allocator.zero_allocate(size, sizeof(anscer_msgs__srv__ProhibitionZones_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__srv__ProhibitionZones_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__srv__ProhibitionZones_Response__fini(&data[i - 1]);
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
anscer_msgs__srv__ProhibitionZones_Response__Sequence__fini(anscer_msgs__srv__ProhibitionZones_Response__Sequence * array)
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
      anscer_msgs__srv__ProhibitionZones_Response__fini(&array->data[i]);
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

anscer_msgs__srv__ProhibitionZones_Response__Sequence *
anscer_msgs__srv__ProhibitionZones_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__ProhibitionZones_Response__Sequence * array = (anscer_msgs__srv__ProhibitionZones_Response__Sequence *)allocator.allocate(sizeof(anscer_msgs__srv__ProhibitionZones_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__srv__ProhibitionZones_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__srv__ProhibitionZones_Response__Sequence__destroy(anscer_msgs__srv__ProhibitionZones_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__srv__ProhibitionZones_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__srv__ProhibitionZones_Response__Sequence__are_equal(const anscer_msgs__srv__ProhibitionZones_Response__Sequence * lhs, const anscer_msgs__srv__ProhibitionZones_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__srv__ProhibitionZones_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__srv__ProhibitionZones_Response__Sequence__copy(
  const anscer_msgs__srv__ProhibitionZones_Response__Sequence * input,
  anscer_msgs__srv__ProhibitionZones_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__srv__ProhibitionZones_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__srv__ProhibitionZones_Response * data =
      (anscer_msgs__srv__ProhibitionZones_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__srv__ProhibitionZones_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__srv__ProhibitionZones_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__srv__ProhibitionZones_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

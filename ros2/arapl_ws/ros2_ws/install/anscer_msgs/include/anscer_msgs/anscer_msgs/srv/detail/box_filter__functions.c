// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:srv/BoxFilter.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/srv/detail/box_filter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
anscer_msgs__srv__BoxFilter_Request__init(anscer_msgs__srv__BoxFilter_Request * msg)
{
  if (!msg) {
    return false;
  }
  // filter_enable
  // restore_default
  // min_safety_x
  // max_safety_x
  // min_safety_y
  // max_safety_y
  // min_warn_x
  // max_warn_x
  // min_warn_y
  // max_warn_y
  // debounce_time
  return true;
}

void
anscer_msgs__srv__BoxFilter_Request__fini(anscer_msgs__srv__BoxFilter_Request * msg)
{
  if (!msg) {
    return;
  }
  // filter_enable
  // restore_default
  // min_safety_x
  // max_safety_x
  // min_safety_y
  // max_safety_y
  // min_warn_x
  // max_warn_x
  // min_warn_y
  // max_warn_y
  // debounce_time
}

bool
anscer_msgs__srv__BoxFilter_Request__are_equal(const anscer_msgs__srv__BoxFilter_Request * lhs, const anscer_msgs__srv__BoxFilter_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // filter_enable
  if (lhs->filter_enable != rhs->filter_enable) {
    return false;
  }
  // restore_default
  if (lhs->restore_default != rhs->restore_default) {
    return false;
  }
  // min_safety_x
  if (lhs->min_safety_x != rhs->min_safety_x) {
    return false;
  }
  // max_safety_x
  if (lhs->max_safety_x != rhs->max_safety_x) {
    return false;
  }
  // min_safety_y
  if (lhs->min_safety_y != rhs->min_safety_y) {
    return false;
  }
  // max_safety_y
  if (lhs->max_safety_y != rhs->max_safety_y) {
    return false;
  }
  // min_warn_x
  if (lhs->min_warn_x != rhs->min_warn_x) {
    return false;
  }
  // max_warn_x
  if (lhs->max_warn_x != rhs->max_warn_x) {
    return false;
  }
  // min_warn_y
  if (lhs->min_warn_y != rhs->min_warn_y) {
    return false;
  }
  // max_warn_y
  if (lhs->max_warn_y != rhs->max_warn_y) {
    return false;
  }
  // debounce_time
  if (lhs->debounce_time != rhs->debounce_time) {
    return false;
  }
  return true;
}

bool
anscer_msgs__srv__BoxFilter_Request__copy(
  const anscer_msgs__srv__BoxFilter_Request * input,
  anscer_msgs__srv__BoxFilter_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // filter_enable
  output->filter_enable = input->filter_enable;
  // restore_default
  output->restore_default = input->restore_default;
  // min_safety_x
  output->min_safety_x = input->min_safety_x;
  // max_safety_x
  output->max_safety_x = input->max_safety_x;
  // min_safety_y
  output->min_safety_y = input->min_safety_y;
  // max_safety_y
  output->max_safety_y = input->max_safety_y;
  // min_warn_x
  output->min_warn_x = input->min_warn_x;
  // max_warn_x
  output->max_warn_x = input->max_warn_x;
  // min_warn_y
  output->min_warn_y = input->min_warn_y;
  // max_warn_y
  output->max_warn_y = input->max_warn_y;
  // debounce_time
  output->debounce_time = input->debounce_time;
  return true;
}

anscer_msgs__srv__BoxFilter_Request *
anscer_msgs__srv__BoxFilter_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__BoxFilter_Request * msg = (anscer_msgs__srv__BoxFilter_Request *)allocator.allocate(sizeof(anscer_msgs__srv__BoxFilter_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__srv__BoxFilter_Request));
  bool success = anscer_msgs__srv__BoxFilter_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__srv__BoxFilter_Request__destroy(anscer_msgs__srv__BoxFilter_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__srv__BoxFilter_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__srv__BoxFilter_Request__Sequence__init(anscer_msgs__srv__BoxFilter_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__BoxFilter_Request * data = NULL;

  if (size) {
    data = (anscer_msgs__srv__BoxFilter_Request *)allocator.zero_allocate(size, sizeof(anscer_msgs__srv__BoxFilter_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__srv__BoxFilter_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__srv__BoxFilter_Request__fini(&data[i - 1]);
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
anscer_msgs__srv__BoxFilter_Request__Sequence__fini(anscer_msgs__srv__BoxFilter_Request__Sequence * array)
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
      anscer_msgs__srv__BoxFilter_Request__fini(&array->data[i]);
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

anscer_msgs__srv__BoxFilter_Request__Sequence *
anscer_msgs__srv__BoxFilter_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__BoxFilter_Request__Sequence * array = (anscer_msgs__srv__BoxFilter_Request__Sequence *)allocator.allocate(sizeof(anscer_msgs__srv__BoxFilter_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__srv__BoxFilter_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__srv__BoxFilter_Request__Sequence__destroy(anscer_msgs__srv__BoxFilter_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__srv__BoxFilter_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__srv__BoxFilter_Request__Sequence__are_equal(const anscer_msgs__srv__BoxFilter_Request__Sequence * lhs, const anscer_msgs__srv__BoxFilter_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__srv__BoxFilter_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__srv__BoxFilter_Request__Sequence__copy(
  const anscer_msgs__srv__BoxFilter_Request__Sequence * input,
  anscer_msgs__srv__BoxFilter_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__srv__BoxFilter_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__srv__BoxFilter_Request * data =
      (anscer_msgs__srv__BoxFilter_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__srv__BoxFilter_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__srv__BoxFilter_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__srv__BoxFilter_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
anscer_msgs__srv__BoxFilter_Response__init(anscer_msgs__srv__BoxFilter_Response * msg)
{
  if (!msg) {
    return false;
  }
  // state
  return true;
}

void
anscer_msgs__srv__BoxFilter_Response__fini(anscer_msgs__srv__BoxFilter_Response * msg)
{
  if (!msg) {
    return;
  }
  // state
}

bool
anscer_msgs__srv__BoxFilter_Response__are_equal(const anscer_msgs__srv__BoxFilter_Response * lhs, const anscer_msgs__srv__BoxFilter_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
anscer_msgs__srv__BoxFilter_Response__copy(
  const anscer_msgs__srv__BoxFilter_Response * input,
  anscer_msgs__srv__BoxFilter_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

anscer_msgs__srv__BoxFilter_Response *
anscer_msgs__srv__BoxFilter_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__BoxFilter_Response * msg = (anscer_msgs__srv__BoxFilter_Response *)allocator.allocate(sizeof(anscer_msgs__srv__BoxFilter_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__srv__BoxFilter_Response));
  bool success = anscer_msgs__srv__BoxFilter_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__srv__BoxFilter_Response__destroy(anscer_msgs__srv__BoxFilter_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__srv__BoxFilter_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__srv__BoxFilter_Response__Sequence__init(anscer_msgs__srv__BoxFilter_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__BoxFilter_Response * data = NULL;

  if (size) {
    data = (anscer_msgs__srv__BoxFilter_Response *)allocator.zero_allocate(size, sizeof(anscer_msgs__srv__BoxFilter_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__srv__BoxFilter_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__srv__BoxFilter_Response__fini(&data[i - 1]);
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
anscer_msgs__srv__BoxFilter_Response__Sequence__fini(anscer_msgs__srv__BoxFilter_Response__Sequence * array)
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
      anscer_msgs__srv__BoxFilter_Response__fini(&array->data[i]);
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

anscer_msgs__srv__BoxFilter_Response__Sequence *
anscer_msgs__srv__BoxFilter_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__BoxFilter_Response__Sequence * array = (anscer_msgs__srv__BoxFilter_Response__Sequence *)allocator.allocate(sizeof(anscer_msgs__srv__BoxFilter_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__srv__BoxFilter_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__srv__BoxFilter_Response__Sequence__destroy(anscer_msgs__srv__BoxFilter_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__srv__BoxFilter_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__srv__BoxFilter_Response__Sequence__are_equal(const anscer_msgs__srv__BoxFilter_Response__Sequence * lhs, const anscer_msgs__srv__BoxFilter_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__srv__BoxFilter_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__srv__BoxFilter_Response__Sequence__copy(
  const anscer_msgs__srv__BoxFilter_Response__Sequence * input,
  anscer_msgs__srv__BoxFilter_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__srv__BoxFilter_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__srv__BoxFilter_Response * data =
      (anscer_msgs__srv__BoxFilter_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__srv__BoxFilter_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__srv__BoxFilter_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__srv__BoxFilter_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

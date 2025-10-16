// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_creator_msgs:srv/GetGraphCreatorState.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/srv/detail/get_graph_creator_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
graph_creator_msgs__srv__GetGraphCreatorState_Request__init(graph_creator_msgs__srv__GetGraphCreatorState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
graph_creator_msgs__srv__GetGraphCreatorState_Request__fini(graph_creator_msgs__srv__GetGraphCreatorState_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
graph_creator_msgs__srv__GetGraphCreatorState_Request__are_equal(const graph_creator_msgs__srv__GetGraphCreatorState_Request * lhs, const graph_creator_msgs__srv__GetGraphCreatorState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
graph_creator_msgs__srv__GetGraphCreatorState_Request__copy(
  const graph_creator_msgs__srv__GetGraphCreatorState_Request * input,
  graph_creator_msgs__srv__GetGraphCreatorState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

graph_creator_msgs__srv__GetGraphCreatorState_Request *
graph_creator_msgs__srv__GetGraphCreatorState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__srv__GetGraphCreatorState_Request * msg = (graph_creator_msgs__srv__GetGraphCreatorState_Request *)allocator.allocate(sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Request));
  bool success = graph_creator_msgs__srv__GetGraphCreatorState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_creator_msgs__srv__GetGraphCreatorState_Request__destroy(graph_creator_msgs__srv__GetGraphCreatorState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_creator_msgs__srv__GetGraphCreatorState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence__init(graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__srv__GetGraphCreatorState_Request * data = NULL;

  if (size) {
    data = (graph_creator_msgs__srv__GetGraphCreatorState_Request *)allocator.zero_allocate(size, sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_creator_msgs__srv__GetGraphCreatorState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_creator_msgs__srv__GetGraphCreatorState_Request__fini(&data[i - 1]);
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
graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence__fini(graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence * array)
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
      graph_creator_msgs__srv__GetGraphCreatorState_Request__fini(&array->data[i]);
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

graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence *
graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence * array = (graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence *)allocator.allocate(sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence__destroy(graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence__are_equal(const graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence * lhs, const graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_creator_msgs__srv__GetGraphCreatorState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence__copy(
  const graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence * input,
  graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_creator_msgs__srv__GetGraphCreatorState_Request * data =
      (graph_creator_msgs__srv__GetGraphCreatorState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_creator_msgs__srv__GetGraphCreatorState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_creator_msgs__srv__GetGraphCreatorState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_creator_msgs__srv__GetGraphCreatorState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
#include "graph_creator_msgs/msg/detail/graph_creator_state__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
graph_creator_msgs__srv__GetGraphCreatorState_Response__init(graph_creator_msgs__srv__GetGraphCreatorState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!graph_creator_msgs__msg__GraphCreatorState__init(&msg->state)) {
    graph_creator_msgs__srv__GetGraphCreatorState_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    graph_creator_msgs__srv__GetGraphCreatorState_Response__fini(msg);
    return false;
  }
  return true;
}

void
graph_creator_msgs__srv__GetGraphCreatorState_Response__fini(graph_creator_msgs__srv__GetGraphCreatorState_Response * msg)
{
  if (!msg) {
    return;
  }
  // state
  graph_creator_msgs__msg__GraphCreatorState__fini(&msg->state);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
graph_creator_msgs__srv__GetGraphCreatorState_Response__are_equal(const graph_creator_msgs__srv__GetGraphCreatorState_Response * lhs, const graph_creator_msgs__srv__GetGraphCreatorState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!graph_creator_msgs__msg__GraphCreatorState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
graph_creator_msgs__srv__GetGraphCreatorState_Response__copy(
  const graph_creator_msgs__srv__GetGraphCreatorState_Response * input,
  graph_creator_msgs__srv__GetGraphCreatorState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!graph_creator_msgs__msg__GraphCreatorState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

graph_creator_msgs__srv__GetGraphCreatorState_Response *
graph_creator_msgs__srv__GetGraphCreatorState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__srv__GetGraphCreatorState_Response * msg = (graph_creator_msgs__srv__GetGraphCreatorState_Response *)allocator.allocate(sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Response));
  bool success = graph_creator_msgs__srv__GetGraphCreatorState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_creator_msgs__srv__GetGraphCreatorState_Response__destroy(graph_creator_msgs__srv__GetGraphCreatorState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_creator_msgs__srv__GetGraphCreatorState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence__init(graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__srv__GetGraphCreatorState_Response * data = NULL;

  if (size) {
    data = (graph_creator_msgs__srv__GetGraphCreatorState_Response *)allocator.zero_allocate(size, sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_creator_msgs__srv__GetGraphCreatorState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_creator_msgs__srv__GetGraphCreatorState_Response__fini(&data[i - 1]);
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
graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence__fini(graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence * array)
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
      graph_creator_msgs__srv__GetGraphCreatorState_Response__fini(&array->data[i]);
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

graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence *
graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence * array = (graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence *)allocator.allocate(sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence__destroy(graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence__are_equal(const graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence * lhs, const graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_creator_msgs__srv__GetGraphCreatorState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence__copy(
  const graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence * input,
  graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_creator_msgs__srv__GetGraphCreatorState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_creator_msgs__srv__GetGraphCreatorState_Response * data =
      (graph_creator_msgs__srv__GetGraphCreatorState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_creator_msgs__srv__GetGraphCreatorState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_creator_msgs__srv__GetGraphCreatorState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_creator_msgs__srv__GetGraphCreatorState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

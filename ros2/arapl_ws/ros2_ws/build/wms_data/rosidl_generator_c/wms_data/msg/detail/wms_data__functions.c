// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wms_data:msg/WMSData.idl
// generated code does not contain a copyright notice
#include "wms_data/msg/detail/wms_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `unique_id`
// Member `date`
// Member `ean_code`
// Member `putaway_code`
// Member `whole_bin_no`
// Member `core`
// Member `level`
// Member `year`
// Member `date_data`
// Member `serial_no`
#include "rosidl_runtime_c/string_functions.h"

bool
wms_data__msg__WMSData__init(wms_data__msg__WMSData * msg)
{
  if (!msg) {
    return false;
  }
  // unique_id
  if (!rosidl_runtime_c__String__init(&msg->unique_id)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__init(&msg->date)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  // priority
  // rack
  // shelf
  // bin
  // action
  // status
  // ean_code
  if (!rosidl_runtime_c__String__init(&msg->ean_code)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  // putaway_code
  if (!rosidl_runtime_c__String__init(&msg->putaway_code)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  // acr_shelf
  // whole_bin_no
  if (!rosidl_runtime_c__String__init(&msg->whole_bin_no)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  // core
  if (!rosidl_runtime_c__String__init(&msg->core)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__init(&msg->level)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  // year
  if (!rosidl_runtime_c__String__init(&msg->year)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  // date_data
  if (!rosidl_runtime_c__String__init(&msg->date_data)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  // serial_no
  if (!rosidl_runtime_c__String__init(&msg->serial_no)) {
    wms_data__msg__WMSData__fini(msg);
    return false;
  }
  return true;
}

void
wms_data__msg__WMSData__fini(wms_data__msg__WMSData * msg)
{
  if (!msg) {
    return;
  }
  // unique_id
  rosidl_runtime_c__String__fini(&msg->unique_id);
  // date
  rosidl_runtime_c__String__fini(&msg->date);
  // priority
  // rack
  // shelf
  // bin
  // action
  // status
  // ean_code
  rosidl_runtime_c__String__fini(&msg->ean_code);
  // putaway_code
  rosidl_runtime_c__String__fini(&msg->putaway_code);
  // acr_shelf
  // whole_bin_no
  rosidl_runtime_c__String__fini(&msg->whole_bin_no);
  // core
  rosidl_runtime_c__String__fini(&msg->core);
  // level
  rosidl_runtime_c__String__fini(&msg->level);
  // year
  rosidl_runtime_c__String__fini(&msg->year);
  // date_data
  rosidl_runtime_c__String__fini(&msg->date_data);
  // serial_no
  rosidl_runtime_c__String__fini(&msg->serial_no);
}

bool
wms_data__msg__WMSData__are_equal(const wms_data__msg__WMSData * lhs, const wms_data__msg__WMSData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unique_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->unique_id), &(rhs->unique_id)))
  {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->date), &(rhs->date)))
  {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // rack
  if (lhs->rack != rhs->rack) {
    return false;
  }
  // shelf
  if (lhs->shelf != rhs->shelf) {
    return false;
  }
  // bin
  if (lhs->bin != rhs->bin) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // ean_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ean_code), &(rhs->ean_code)))
  {
    return false;
  }
  // putaway_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->putaway_code), &(rhs->putaway_code)))
  {
    return false;
  }
  // acr_shelf
  if (lhs->acr_shelf != rhs->acr_shelf) {
    return false;
  }
  // whole_bin_no
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->whole_bin_no), &(rhs->whole_bin_no)))
  {
    return false;
  }
  // core
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->core), &(rhs->core)))
  {
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->level), &(rhs->level)))
  {
    return false;
  }
  // year
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->year), &(rhs->year)))
  {
    return false;
  }
  // date_data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->date_data), &(rhs->date_data)))
  {
    return false;
  }
  // serial_no
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_no), &(rhs->serial_no)))
  {
    return false;
  }
  return true;
}

bool
wms_data__msg__WMSData__copy(
  const wms_data__msg__WMSData * input,
  wms_data__msg__WMSData * output)
{
  if (!input || !output) {
    return false;
  }
  // unique_id
  if (!rosidl_runtime_c__String__copy(
      &(input->unique_id), &(output->unique_id)))
  {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__copy(
      &(input->date), &(output->date)))
  {
    return false;
  }
  // priority
  output->priority = input->priority;
  // rack
  output->rack = input->rack;
  // shelf
  output->shelf = input->shelf;
  // bin
  output->bin = input->bin;
  // action
  output->action = input->action;
  // status
  output->status = input->status;
  // ean_code
  if (!rosidl_runtime_c__String__copy(
      &(input->ean_code), &(output->ean_code)))
  {
    return false;
  }
  // putaway_code
  if (!rosidl_runtime_c__String__copy(
      &(input->putaway_code), &(output->putaway_code)))
  {
    return false;
  }
  // acr_shelf
  output->acr_shelf = input->acr_shelf;
  // whole_bin_no
  if (!rosidl_runtime_c__String__copy(
      &(input->whole_bin_no), &(output->whole_bin_no)))
  {
    return false;
  }
  // core
  if (!rosidl_runtime_c__String__copy(
      &(input->core), &(output->core)))
  {
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__copy(
      &(input->level), &(output->level)))
  {
    return false;
  }
  // year
  if (!rosidl_runtime_c__String__copy(
      &(input->year), &(output->year)))
  {
    return false;
  }
  // date_data
  if (!rosidl_runtime_c__String__copy(
      &(input->date_data), &(output->date_data)))
  {
    return false;
  }
  // serial_no
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_no), &(output->serial_no)))
  {
    return false;
  }
  return true;
}

wms_data__msg__WMSData *
wms_data__msg__WMSData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wms_data__msg__WMSData * msg = (wms_data__msg__WMSData *)allocator.allocate(sizeof(wms_data__msg__WMSData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wms_data__msg__WMSData));
  bool success = wms_data__msg__WMSData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wms_data__msg__WMSData__destroy(wms_data__msg__WMSData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wms_data__msg__WMSData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wms_data__msg__WMSData__Sequence__init(wms_data__msg__WMSData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wms_data__msg__WMSData * data = NULL;

  if (size) {
    data = (wms_data__msg__WMSData *)allocator.zero_allocate(size, sizeof(wms_data__msg__WMSData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wms_data__msg__WMSData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wms_data__msg__WMSData__fini(&data[i - 1]);
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
wms_data__msg__WMSData__Sequence__fini(wms_data__msg__WMSData__Sequence * array)
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
      wms_data__msg__WMSData__fini(&array->data[i]);
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

wms_data__msg__WMSData__Sequence *
wms_data__msg__WMSData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wms_data__msg__WMSData__Sequence * array = (wms_data__msg__WMSData__Sequence *)allocator.allocate(sizeof(wms_data__msg__WMSData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wms_data__msg__WMSData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wms_data__msg__WMSData__Sequence__destroy(wms_data__msg__WMSData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wms_data__msg__WMSData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wms_data__msg__WMSData__Sequence__are_equal(const wms_data__msg__WMSData__Sequence * lhs, const wms_data__msg__WMSData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wms_data__msg__WMSData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wms_data__msg__WMSData__Sequence__copy(
  const wms_data__msg__WMSData__Sequence * input,
  wms_data__msg__WMSData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wms_data__msg__WMSData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wms_data__msg__WMSData * data =
      (wms_data__msg__WMSData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wms_data__msg__WMSData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wms_data__msg__WMSData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wms_data__msg__WMSData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

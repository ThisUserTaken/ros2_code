// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neo_msgs2:msg/SafetyState.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/safety_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
neo_msgs2__msg__SafetyState__init(neo_msgs2__msg__SafetyState * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // current_safety_field
  // triggered_cutoff_paths
  return true;
}

void
neo_msgs2__msg__SafetyState__fini(neo_msgs2__msg__SafetyState * msg)
{
  if (!msg) {
    return;
  }
  // time
  // current_safety_field
  // triggered_cutoff_paths
}

bool
neo_msgs2__msg__SafetyState__are_equal(const neo_msgs2__msg__SafetyState * lhs, const neo_msgs2__msg__SafetyState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // current_safety_field
  if (lhs->current_safety_field != rhs->current_safety_field) {
    return false;
  }
  // triggered_cutoff_paths
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->triggered_cutoff_paths[i] != rhs->triggered_cutoff_paths[i]) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__SafetyState__copy(
  const neo_msgs2__msg__SafetyState * input,
  neo_msgs2__msg__SafetyState * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // current_safety_field
  output->current_safety_field = input->current_safety_field;
  // triggered_cutoff_paths
  for (size_t i = 0; i < 7; ++i) {
    output->triggered_cutoff_paths[i] = input->triggered_cutoff_paths[i];
  }
  return true;
}

neo_msgs2__msg__SafetyState *
neo_msgs2__msg__SafetyState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__SafetyState * msg = (neo_msgs2__msg__SafetyState *)allocator.allocate(sizeof(neo_msgs2__msg__SafetyState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neo_msgs2__msg__SafetyState));
  bool success = neo_msgs2__msg__SafetyState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neo_msgs2__msg__SafetyState__destroy(neo_msgs2__msg__SafetyState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neo_msgs2__msg__SafetyState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neo_msgs2__msg__SafetyState__Sequence__init(neo_msgs2__msg__SafetyState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__SafetyState * data = NULL;

  if (size) {
    data = (neo_msgs2__msg__SafetyState *)allocator.zero_allocate(size, sizeof(neo_msgs2__msg__SafetyState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neo_msgs2__msg__SafetyState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neo_msgs2__msg__SafetyState__fini(&data[i - 1]);
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
neo_msgs2__msg__SafetyState__Sequence__fini(neo_msgs2__msg__SafetyState__Sequence * array)
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
      neo_msgs2__msg__SafetyState__fini(&array->data[i]);
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

neo_msgs2__msg__SafetyState__Sequence *
neo_msgs2__msg__SafetyState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__SafetyState__Sequence * array = (neo_msgs2__msg__SafetyState__Sequence *)allocator.allocate(sizeof(neo_msgs2__msg__SafetyState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neo_msgs2__msg__SafetyState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neo_msgs2__msg__SafetyState__Sequence__destroy(neo_msgs2__msg__SafetyState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neo_msgs2__msg__SafetyState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neo_msgs2__msg__SafetyState__Sequence__are_equal(const neo_msgs2__msg__SafetyState__Sequence * lhs, const neo_msgs2__msg__SafetyState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neo_msgs2__msg__SafetyState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__SafetyState__Sequence__copy(
  const neo_msgs2__msg__SafetyState__Sequence * input,
  neo_msgs2__msg__SafetyState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neo_msgs2__msg__SafetyState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neo_msgs2__msg__SafetyState * data =
      (neo_msgs2__msg__SafetyState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neo_msgs2__msg__SafetyState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neo_msgs2__msg__SafetyState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neo_msgs2__msg__SafetyState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

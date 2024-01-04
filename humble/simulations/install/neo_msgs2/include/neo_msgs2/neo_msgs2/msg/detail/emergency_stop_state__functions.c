// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neo_msgs2:msg/EmergencyStopState.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/emergency_stop_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
neo_msgs2__msg__EmergencyStopState__init(neo_msgs2__msg__EmergencyStopState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neo_msgs2__msg__EmergencyStopState__fini(msg);
    return false;
  }
  // emergency_button_stop
  // scanner_stop
  // software_stop
  // emergency_state
  return true;
}

void
neo_msgs2__msg__EmergencyStopState__fini(neo_msgs2__msg__EmergencyStopState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // emergency_button_stop
  // scanner_stop
  // software_stop
  // emergency_state
}

bool
neo_msgs2__msg__EmergencyStopState__are_equal(const neo_msgs2__msg__EmergencyStopState * lhs, const neo_msgs2__msg__EmergencyStopState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // emergency_button_stop
  if (lhs->emergency_button_stop != rhs->emergency_button_stop) {
    return false;
  }
  // scanner_stop
  if (lhs->scanner_stop != rhs->scanner_stop) {
    return false;
  }
  // software_stop
  if (lhs->software_stop != rhs->software_stop) {
    return false;
  }
  // emergency_state
  if (lhs->emergency_state != rhs->emergency_state) {
    return false;
  }
  return true;
}

bool
neo_msgs2__msg__EmergencyStopState__copy(
  const neo_msgs2__msg__EmergencyStopState * input,
  neo_msgs2__msg__EmergencyStopState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // emergency_button_stop
  output->emergency_button_stop = input->emergency_button_stop;
  // scanner_stop
  output->scanner_stop = input->scanner_stop;
  // software_stop
  output->software_stop = input->software_stop;
  // emergency_state
  output->emergency_state = input->emergency_state;
  return true;
}

neo_msgs2__msg__EmergencyStopState *
neo_msgs2__msg__EmergencyStopState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__EmergencyStopState * msg = (neo_msgs2__msg__EmergencyStopState *)allocator.allocate(sizeof(neo_msgs2__msg__EmergencyStopState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neo_msgs2__msg__EmergencyStopState));
  bool success = neo_msgs2__msg__EmergencyStopState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neo_msgs2__msg__EmergencyStopState__destroy(neo_msgs2__msg__EmergencyStopState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neo_msgs2__msg__EmergencyStopState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neo_msgs2__msg__EmergencyStopState__Sequence__init(neo_msgs2__msg__EmergencyStopState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__EmergencyStopState * data = NULL;

  if (size) {
    data = (neo_msgs2__msg__EmergencyStopState *)allocator.zero_allocate(size, sizeof(neo_msgs2__msg__EmergencyStopState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neo_msgs2__msg__EmergencyStopState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neo_msgs2__msg__EmergencyStopState__fini(&data[i - 1]);
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
neo_msgs2__msg__EmergencyStopState__Sequence__fini(neo_msgs2__msg__EmergencyStopState__Sequence * array)
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
      neo_msgs2__msg__EmergencyStopState__fini(&array->data[i]);
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

neo_msgs2__msg__EmergencyStopState__Sequence *
neo_msgs2__msg__EmergencyStopState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__EmergencyStopState__Sequence * array = (neo_msgs2__msg__EmergencyStopState__Sequence *)allocator.allocate(sizeof(neo_msgs2__msg__EmergencyStopState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neo_msgs2__msg__EmergencyStopState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neo_msgs2__msg__EmergencyStopState__Sequence__destroy(neo_msgs2__msg__EmergencyStopState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neo_msgs2__msg__EmergencyStopState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neo_msgs2__msg__EmergencyStopState__Sequence__are_equal(const neo_msgs2__msg__EmergencyStopState__Sequence * lhs, const neo_msgs2__msg__EmergencyStopState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neo_msgs2__msg__EmergencyStopState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__EmergencyStopState__Sequence__copy(
  const neo_msgs2__msg__EmergencyStopState__Sequence * input,
  neo_msgs2__msg__EmergencyStopState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neo_msgs2__msg__EmergencyStopState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neo_msgs2__msg__EmergencyStopState * data =
      (neo_msgs2__msg__EmergencyStopState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neo_msgs2__msg__EmergencyStopState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neo_msgs2__msg__EmergencyStopState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neo_msgs2__msg__EmergencyStopState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neo_msgs2:msg/IOBoard.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/io_board__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
neo_msgs2__msg__IOBoard__init(neo_msgs2__msg__IOBoard * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neo_msgs2__msg__IOBoard__fini(msg);
    return false;
  }
  // digital_inputs
  // digital_outputs
  // analog_inputs
  return true;
}

void
neo_msgs2__msg__IOBoard__fini(neo_msgs2__msg__IOBoard * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // digital_inputs
  // digital_outputs
  // analog_inputs
}

bool
neo_msgs2__msg__IOBoard__are_equal(const neo_msgs2__msg__IOBoard * lhs, const neo_msgs2__msg__IOBoard * rhs)
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
  // digital_inputs
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->digital_inputs[i] != rhs->digital_inputs[i]) {
      return false;
    }
  }
  // digital_outputs
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->digital_outputs[i] != rhs->digital_outputs[i]) {
      return false;
    }
  }
  // analog_inputs
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->analog_inputs[i] != rhs->analog_inputs[i]) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__IOBoard__copy(
  const neo_msgs2__msg__IOBoard * input,
  neo_msgs2__msg__IOBoard * output)
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
  // digital_inputs
  for (size_t i = 0; i < 16; ++i) {
    output->digital_inputs[i] = input->digital_inputs[i];
  }
  // digital_outputs
  for (size_t i = 0; i < 16; ++i) {
    output->digital_outputs[i] = input->digital_outputs[i];
  }
  // analog_inputs
  for (size_t i = 0; i < 8; ++i) {
    output->analog_inputs[i] = input->analog_inputs[i];
  }
  return true;
}

neo_msgs2__msg__IOBoard *
neo_msgs2__msg__IOBoard__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__IOBoard * msg = (neo_msgs2__msg__IOBoard *)allocator.allocate(sizeof(neo_msgs2__msg__IOBoard), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neo_msgs2__msg__IOBoard));
  bool success = neo_msgs2__msg__IOBoard__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neo_msgs2__msg__IOBoard__destroy(neo_msgs2__msg__IOBoard * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neo_msgs2__msg__IOBoard__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neo_msgs2__msg__IOBoard__Sequence__init(neo_msgs2__msg__IOBoard__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__IOBoard * data = NULL;

  if (size) {
    data = (neo_msgs2__msg__IOBoard *)allocator.zero_allocate(size, sizeof(neo_msgs2__msg__IOBoard), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neo_msgs2__msg__IOBoard__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neo_msgs2__msg__IOBoard__fini(&data[i - 1]);
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
neo_msgs2__msg__IOBoard__Sequence__fini(neo_msgs2__msg__IOBoard__Sequence * array)
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
      neo_msgs2__msg__IOBoard__fini(&array->data[i]);
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

neo_msgs2__msg__IOBoard__Sequence *
neo_msgs2__msg__IOBoard__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__IOBoard__Sequence * array = (neo_msgs2__msg__IOBoard__Sequence *)allocator.allocate(sizeof(neo_msgs2__msg__IOBoard__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neo_msgs2__msg__IOBoard__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neo_msgs2__msg__IOBoard__Sequence__destroy(neo_msgs2__msg__IOBoard__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neo_msgs2__msg__IOBoard__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neo_msgs2__msg__IOBoard__Sequence__are_equal(const neo_msgs2__msg__IOBoard__Sequence * lhs, const neo_msgs2__msg__IOBoard__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neo_msgs2__msg__IOBoard__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__IOBoard__Sequence__copy(
  const neo_msgs2__msg__IOBoard__Sequence * input,
  neo_msgs2__msg__IOBoard__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neo_msgs2__msg__IOBoard);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neo_msgs2__msg__IOBoard * data =
      (neo_msgs2__msg__IOBoard *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neo_msgs2__msg__IOBoard__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neo_msgs2__msg__IOBoard__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neo_msgs2__msg__IOBoard__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

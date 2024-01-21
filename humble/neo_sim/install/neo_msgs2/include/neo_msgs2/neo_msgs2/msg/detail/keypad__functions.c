// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neo_msgs2:msg/Keypad.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/keypad__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
neo_msgs2__msg__Keypad__init(neo_msgs2__msg__Keypad * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neo_msgs2__msg__Keypad__fini(msg);
    return false;
  }
  // button
  return true;
}

void
neo_msgs2__msg__Keypad__fini(neo_msgs2__msg__Keypad * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // button
}

bool
neo_msgs2__msg__Keypad__are_equal(const neo_msgs2__msg__Keypad * lhs, const neo_msgs2__msg__Keypad * rhs)
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
  // button
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->button[i] != rhs->button[i]) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__Keypad__copy(
  const neo_msgs2__msg__Keypad * input,
  neo_msgs2__msg__Keypad * output)
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
  // button
  for (size_t i = 0; i < 5; ++i) {
    output->button[i] = input->button[i];
  }
  return true;
}

neo_msgs2__msg__Keypad *
neo_msgs2__msg__Keypad__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__Keypad * msg = (neo_msgs2__msg__Keypad *)allocator.allocate(sizeof(neo_msgs2__msg__Keypad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neo_msgs2__msg__Keypad));
  bool success = neo_msgs2__msg__Keypad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neo_msgs2__msg__Keypad__destroy(neo_msgs2__msg__Keypad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neo_msgs2__msg__Keypad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neo_msgs2__msg__Keypad__Sequence__init(neo_msgs2__msg__Keypad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__Keypad * data = NULL;

  if (size) {
    data = (neo_msgs2__msg__Keypad *)allocator.zero_allocate(size, sizeof(neo_msgs2__msg__Keypad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neo_msgs2__msg__Keypad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neo_msgs2__msg__Keypad__fini(&data[i - 1]);
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
neo_msgs2__msg__Keypad__Sequence__fini(neo_msgs2__msg__Keypad__Sequence * array)
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
      neo_msgs2__msg__Keypad__fini(&array->data[i]);
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

neo_msgs2__msg__Keypad__Sequence *
neo_msgs2__msg__Keypad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__Keypad__Sequence * array = (neo_msgs2__msg__Keypad__Sequence *)allocator.allocate(sizeof(neo_msgs2__msg__Keypad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neo_msgs2__msg__Keypad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neo_msgs2__msg__Keypad__Sequence__destroy(neo_msgs2__msg__Keypad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neo_msgs2__msg__Keypad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neo_msgs2__msg__Keypad__Sequence__are_equal(const neo_msgs2__msg__Keypad__Sequence * lhs, const neo_msgs2__msg__Keypad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neo_msgs2__msg__Keypad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__Keypad__Sequence__copy(
  const neo_msgs2__msg__Keypad__Sequence * input,
  neo_msgs2__msg__Keypad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neo_msgs2__msg__Keypad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neo_msgs2__msg__Keypad * data =
      (neo_msgs2__msg__Keypad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neo_msgs2__msg__Keypad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neo_msgs2__msg__Keypad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neo_msgs2__msg__Keypad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

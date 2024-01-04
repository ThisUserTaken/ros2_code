// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neo_msgs2:msg/LCDOutput.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/lcd_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `msg_line`
#include "rosidl_runtime_c/string_functions.h"

bool
neo_msgs2__msg__LCDOutput__init(neo_msgs2__msg__LCDOutput * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neo_msgs2__msg__LCDOutput__fini(msg);
    return false;
  }
  // msg_line
  if (!rosidl_runtime_c__String__init(&msg->msg_line)) {
    neo_msgs2__msg__LCDOutput__fini(msg);
    return false;
  }
  return true;
}

void
neo_msgs2__msg__LCDOutput__fini(neo_msgs2__msg__LCDOutput * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // msg_line
  rosidl_runtime_c__String__fini(&msg->msg_line);
}

bool
neo_msgs2__msg__LCDOutput__are_equal(const neo_msgs2__msg__LCDOutput * lhs, const neo_msgs2__msg__LCDOutput * rhs)
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
  // msg_line
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg_line), &(rhs->msg_line)))
  {
    return false;
  }
  return true;
}

bool
neo_msgs2__msg__LCDOutput__copy(
  const neo_msgs2__msg__LCDOutput * input,
  neo_msgs2__msg__LCDOutput * output)
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
  // msg_line
  if (!rosidl_runtime_c__String__copy(
      &(input->msg_line), &(output->msg_line)))
  {
    return false;
  }
  return true;
}

neo_msgs2__msg__LCDOutput *
neo_msgs2__msg__LCDOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__LCDOutput * msg = (neo_msgs2__msg__LCDOutput *)allocator.allocate(sizeof(neo_msgs2__msg__LCDOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neo_msgs2__msg__LCDOutput));
  bool success = neo_msgs2__msg__LCDOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neo_msgs2__msg__LCDOutput__destroy(neo_msgs2__msg__LCDOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neo_msgs2__msg__LCDOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neo_msgs2__msg__LCDOutput__Sequence__init(neo_msgs2__msg__LCDOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__LCDOutput * data = NULL;

  if (size) {
    data = (neo_msgs2__msg__LCDOutput *)allocator.zero_allocate(size, sizeof(neo_msgs2__msg__LCDOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neo_msgs2__msg__LCDOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neo_msgs2__msg__LCDOutput__fini(&data[i - 1]);
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
neo_msgs2__msg__LCDOutput__Sequence__fini(neo_msgs2__msg__LCDOutput__Sequence * array)
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
      neo_msgs2__msg__LCDOutput__fini(&array->data[i]);
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

neo_msgs2__msg__LCDOutput__Sequence *
neo_msgs2__msg__LCDOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__LCDOutput__Sequence * array = (neo_msgs2__msg__LCDOutput__Sequence *)allocator.allocate(sizeof(neo_msgs2__msg__LCDOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neo_msgs2__msg__LCDOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neo_msgs2__msg__LCDOutput__Sequence__destroy(neo_msgs2__msg__LCDOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neo_msgs2__msg__LCDOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neo_msgs2__msg__LCDOutput__Sequence__are_equal(const neo_msgs2__msg__LCDOutput__Sequence * lhs, const neo_msgs2__msg__LCDOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neo_msgs2__msg__LCDOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__LCDOutput__Sequence__copy(
  const neo_msgs2__msg__LCDOutput__Sequence * input,
  neo_msgs2__msg__LCDOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neo_msgs2__msg__LCDOutput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neo_msgs2__msg__LCDOutput * data =
      (neo_msgs2__msg__LCDOutput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neo_msgs2__msg__LCDOutput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neo_msgs2__msg__LCDOutput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neo_msgs2__msg__LCDOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

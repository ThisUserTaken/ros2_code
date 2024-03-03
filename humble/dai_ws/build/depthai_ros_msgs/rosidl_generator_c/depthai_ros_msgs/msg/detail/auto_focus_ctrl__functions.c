// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/msg/detail/auto_focus_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
depthai_ros_msgs__msg__AutoFocusCtrl__init(depthai_ros_msgs__msg__AutoFocusCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // auto_focus_mode
  // trigger_auto_focus
  return true;
}

void
depthai_ros_msgs__msg__AutoFocusCtrl__fini(depthai_ros_msgs__msg__AutoFocusCtrl * msg)
{
  if (!msg) {
    return;
  }
  // auto_focus_mode
  // trigger_auto_focus
}

bool
depthai_ros_msgs__msg__AutoFocusCtrl__are_equal(const depthai_ros_msgs__msg__AutoFocusCtrl * lhs, const depthai_ros_msgs__msg__AutoFocusCtrl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // auto_focus_mode
  if (lhs->auto_focus_mode != rhs->auto_focus_mode) {
    return false;
  }
  // trigger_auto_focus
  if (lhs->trigger_auto_focus != rhs->trigger_auto_focus) {
    return false;
  }
  return true;
}

bool
depthai_ros_msgs__msg__AutoFocusCtrl__copy(
  const depthai_ros_msgs__msg__AutoFocusCtrl * input,
  depthai_ros_msgs__msg__AutoFocusCtrl * output)
{
  if (!input || !output) {
    return false;
  }
  // auto_focus_mode
  output->auto_focus_mode = input->auto_focus_mode;
  // trigger_auto_focus
  output->trigger_auto_focus = input->trigger_auto_focus;
  return true;
}

depthai_ros_msgs__msg__AutoFocusCtrl *
depthai_ros_msgs__msg__AutoFocusCtrl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__AutoFocusCtrl * msg = (depthai_ros_msgs__msg__AutoFocusCtrl *)allocator.allocate(sizeof(depthai_ros_msgs__msg__AutoFocusCtrl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__msg__AutoFocusCtrl));
  bool success = depthai_ros_msgs__msg__AutoFocusCtrl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__msg__AutoFocusCtrl__destroy(depthai_ros_msgs__msg__AutoFocusCtrl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    depthai_ros_msgs__msg__AutoFocusCtrl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__init(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__AutoFocusCtrl * data = NULL;

  if (size) {
    data = (depthai_ros_msgs__msg__AutoFocusCtrl *)allocator.zero_allocate(size, sizeof(depthai_ros_msgs__msg__AutoFocusCtrl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__msg__AutoFocusCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__msg__AutoFocusCtrl__fini(&data[i - 1]);
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
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__fini(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array)
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
      depthai_ros_msgs__msg__AutoFocusCtrl__fini(&array->data[i]);
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

depthai_ros_msgs__msg__AutoFocusCtrl__Sequence *
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array = (depthai_ros_msgs__msg__AutoFocusCtrl__Sequence *)allocator.allocate(sizeof(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__destroy(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__are_equal(const depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * lhs, const depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!depthai_ros_msgs__msg__AutoFocusCtrl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__copy(
  const depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * input,
  depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(depthai_ros_msgs__msg__AutoFocusCtrl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    depthai_ros_msgs__msg__AutoFocusCtrl * data =
      (depthai_ros_msgs__msg__AutoFocusCtrl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!depthai_ros_msgs__msg__AutoFocusCtrl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          depthai_ros_msgs__msg__AutoFocusCtrl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!depthai_ros_msgs__msg__AutoFocusCtrl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

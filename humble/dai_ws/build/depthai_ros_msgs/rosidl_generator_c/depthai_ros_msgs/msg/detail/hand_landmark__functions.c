// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from depthai_ros_msgs:msg/HandLandmark.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/msg/detail/hand_landmark__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `landmark`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
depthai_ros_msgs__msg__HandLandmark__init(depthai_ros_msgs__msg__HandLandmark * msg)
{
  if (!msg) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    depthai_ros_msgs__msg__HandLandmark__fini(msg);
    return false;
  }
  // lm_score
  // landmark
  if (!geometry_msgs__msg__Pose2D__Sequence__init(&msg->landmark, 0)) {
    depthai_ros_msgs__msg__HandLandmark__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    depthai_ros_msgs__msg__HandLandmark__fini(msg);
    return false;
  }
  // is_spatial
  return true;
}

void
depthai_ros_msgs__msg__HandLandmark__fini(depthai_ros_msgs__msg__HandLandmark * msg)
{
  if (!msg) {
    return;
  }
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // lm_score
  // landmark
  geometry_msgs__msg__Pose2D__Sequence__fini(&msg->landmark);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // is_spatial
}

bool
depthai_ros_msgs__msg__HandLandmark__are_equal(const depthai_ros_msgs__msg__HandLandmark * lhs, const depthai_ros_msgs__msg__HandLandmark * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // lm_score
  if (lhs->lm_score != rhs->lm_score) {
    return false;
  }
  // landmark
  if (!geometry_msgs__msg__Pose2D__Sequence__are_equal(
      &(lhs->landmark), &(rhs->landmark)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // is_spatial
  if (lhs->is_spatial != rhs->is_spatial) {
    return false;
  }
  return true;
}

bool
depthai_ros_msgs__msg__HandLandmark__copy(
  const depthai_ros_msgs__msg__HandLandmark * input,
  depthai_ros_msgs__msg__HandLandmark * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // lm_score
  output->lm_score = input->lm_score;
  // landmark
  if (!geometry_msgs__msg__Pose2D__Sequence__copy(
      &(input->landmark), &(output->landmark)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // is_spatial
  output->is_spatial = input->is_spatial;
  return true;
}

depthai_ros_msgs__msg__HandLandmark *
depthai_ros_msgs__msg__HandLandmark__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__HandLandmark * msg = (depthai_ros_msgs__msg__HandLandmark *)allocator.allocate(sizeof(depthai_ros_msgs__msg__HandLandmark), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__msg__HandLandmark));
  bool success = depthai_ros_msgs__msg__HandLandmark__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__msg__HandLandmark__destroy(depthai_ros_msgs__msg__HandLandmark * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    depthai_ros_msgs__msg__HandLandmark__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
depthai_ros_msgs__msg__HandLandmark__Sequence__init(depthai_ros_msgs__msg__HandLandmark__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__HandLandmark * data = NULL;

  if (size) {
    data = (depthai_ros_msgs__msg__HandLandmark *)allocator.zero_allocate(size, sizeof(depthai_ros_msgs__msg__HandLandmark), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__msg__HandLandmark__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__msg__HandLandmark__fini(&data[i - 1]);
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
depthai_ros_msgs__msg__HandLandmark__Sequence__fini(depthai_ros_msgs__msg__HandLandmark__Sequence * array)
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
      depthai_ros_msgs__msg__HandLandmark__fini(&array->data[i]);
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

depthai_ros_msgs__msg__HandLandmark__Sequence *
depthai_ros_msgs__msg__HandLandmark__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__HandLandmark__Sequence * array = (depthai_ros_msgs__msg__HandLandmark__Sequence *)allocator.allocate(sizeof(depthai_ros_msgs__msg__HandLandmark__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__msg__HandLandmark__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__msg__HandLandmark__Sequence__destroy(depthai_ros_msgs__msg__HandLandmark__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    depthai_ros_msgs__msg__HandLandmark__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
depthai_ros_msgs__msg__HandLandmark__Sequence__are_equal(const depthai_ros_msgs__msg__HandLandmark__Sequence * lhs, const depthai_ros_msgs__msg__HandLandmark__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!depthai_ros_msgs__msg__HandLandmark__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
depthai_ros_msgs__msg__HandLandmark__Sequence__copy(
  const depthai_ros_msgs__msg__HandLandmark__Sequence * input,
  depthai_ros_msgs__msg__HandLandmark__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(depthai_ros_msgs__msg__HandLandmark);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    depthai_ros_msgs__msg__HandLandmark * data =
      (depthai_ros_msgs__msg__HandLandmark *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!depthai_ros_msgs__msg__HandLandmark__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          depthai_ros_msgs__msg__HandLandmark__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!depthai_ros_msgs__msg__HandLandmark__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

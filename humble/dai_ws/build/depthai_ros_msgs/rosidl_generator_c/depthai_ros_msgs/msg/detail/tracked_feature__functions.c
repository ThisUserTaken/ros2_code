// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from depthai_ros_msgs:msg/TrackedFeature.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/msg/detail/tracked_feature__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
depthai_ros_msgs__msg__TrackedFeature__init(depthai_ros_msgs__msg__TrackedFeature * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    depthai_ros_msgs__msg__TrackedFeature__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    depthai_ros_msgs__msg__TrackedFeature__fini(msg);
    return false;
  }
  // id
  // age
  // harris_score
  // tracking_error
  return true;
}

void
depthai_ros_msgs__msg__TrackedFeature__fini(depthai_ros_msgs__msg__TrackedFeature * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // id
  // age
  // harris_score
  // tracking_error
}

bool
depthai_ros_msgs__msg__TrackedFeature__are_equal(const depthai_ros_msgs__msg__TrackedFeature * lhs, const depthai_ros_msgs__msg__TrackedFeature * rhs)
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
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // harris_score
  if (lhs->harris_score != rhs->harris_score) {
    return false;
  }
  // tracking_error
  if (lhs->tracking_error != rhs->tracking_error) {
    return false;
  }
  return true;
}

bool
depthai_ros_msgs__msg__TrackedFeature__copy(
  const depthai_ros_msgs__msg__TrackedFeature * input,
  depthai_ros_msgs__msg__TrackedFeature * output)
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
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // age
  output->age = input->age;
  // harris_score
  output->harris_score = input->harris_score;
  // tracking_error
  output->tracking_error = input->tracking_error;
  return true;
}

depthai_ros_msgs__msg__TrackedFeature *
depthai_ros_msgs__msg__TrackedFeature__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__TrackedFeature * msg = (depthai_ros_msgs__msg__TrackedFeature *)allocator.allocate(sizeof(depthai_ros_msgs__msg__TrackedFeature), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__msg__TrackedFeature));
  bool success = depthai_ros_msgs__msg__TrackedFeature__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__msg__TrackedFeature__destroy(depthai_ros_msgs__msg__TrackedFeature * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    depthai_ros_msgs__msg__TrackedFeature__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
depthai_ros_msgs__msg__TrackedFeature__Sequence__init(depthai_ros_msgs__msg__TrackedFeature__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__TrackedFeature * data = NULL;

  if (size) {
    data = (depthai_ros_msgs__msg__TrackedFeature *)allocator.zero_allocate(size, sizeof(depthai_ros_msgs__msg__TrackedFeature), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__msg__TrackedFeature__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__msg__TrackedFeature__fini(&data[i - 1]);
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
depthai_ros_msgs__msg__TrackedFeature__Sequence__fini(depthai_ros_msgs__msg__TrackedFeature__Sequence * array)
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
      depthai_ros_msgs__msg__TrackedFeature__fini(&array->data[i]);
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

depthai_ros_msgs__msg__TrackedFeature__Sequence *
depthai_ros_msgs__msg__TrackedFeature__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__TrackedFeature__Sequence * array = (depthai_ros_msgs__msg__TrackedFeature__Sequence *)allocator.allocate(sizeof(depthai_ros_msgs__msg__TrackedFeature__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__msg__TrackedFeature__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__msg__TrackedFeature__Sequence__destroy(depthai_ros_msgs__msg__TrackedFeature__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    depthai_ros_msgs__msg__TrackedFeature__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
depthai_ros_msgs__msg__TrackedFeature__Sequence__are_equal(const depthai_ros_msgs__msg__TrackedFeature__Sequence * lhs, const depthai_ros_msgs__msg__TrackedFeature__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!depthai_ros_msgs__msg__TrackedFeature__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
depthai_ros_msgs__msg__TrackedFeature__Sequence__copy(
  const depthai_ros_msgs__msg__TrackedFeature__Sequence * input,
  depthai_ros_msgs__msg__TrackedFeature__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(depthai_ros_msgs__msg__TrackedFeature);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    depthai_ros_msgs__msg__TrackedFeature * data =
      (depthai_ros_msgs__msg__TrackedFeature *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!depthai_ros_msgs__msg__TrackedFeature__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          depthai_ros_msgs__msg__TrackedFeature__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!depthai_ros_msgs__msg__TrackedFeature__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

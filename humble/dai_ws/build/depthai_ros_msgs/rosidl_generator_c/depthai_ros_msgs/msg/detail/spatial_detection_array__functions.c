// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from depthai_ros_msgs:msg/SpatialDetectionArray.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/msg/detail/spatial_detection_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detections`
#include "depthai_ros_msgs/msg/detail/spatial_detection__functions.h"

bool
depthai_ros_msgs__msg__SpatialDetectionArray__init(depthai_ros_msgs__msg__SpatialDetectionArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    depthai_ros_msgs__msg__SpatialDetectionArray__fini(msg);
    return false;
  }
  // detections
  if (!depthai_ros_msgs__msg__SpatialDetection__Sequence__init(&msg->detections, 0)) {
    depthai_ros_msgs__msg__SpatialDetectionArray__fini(msg);
    return false;
  }
  return true;
}

void
depthai_ros_msgs__msg__SpatialDetectionArray__fini(depthai_ros_msgs__msg__SpatialDetectionArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detections
  depthai_ros_msgs__msg__SpatialDetection__Sequence__fini(&msg->detections);
}

bool
depthai_ros_msgs__msg__SpatialDetectionArray__are_equal(const depthai_ros_msgs__msg__SpatialDetectionArray * lhs, const depthai_ros_msgs__msg__SpatialDetectionArray * rhs)
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
  // detections
  if (!depthai_ros_msgs__msg__SpatialDetection__Sequence__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
depthai_ros_msgs__msg__SpatialDetectionArray__copy(
  const depthai_ros_msgs__msg__SpatialDetectionArray * input,
  depthai_ros_msgs__msg__SpatialDetectionArray * output)
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
  // detections
  if (!depthai_ros_msgs__msg__SpatialDetection__Sequence__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

depthai_ros_msgs__msg__SpatialDetectionArray *
depthai_ros_msgs__msg__SpatialDetectionArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__SpatialDetectionArray * msg = (depthai_ros_msgs__msg__SpatialDetectionArray *)allocator.allocate(sizeof(depthai_ros_msgs__msg__SpatialDetectionArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__msg__SpatialDetectionArray));
  bool success = depthai_ros_msgs__msg__SpatialDetectionArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__msg__SpatialDetectionArray__destroy(depthai_ros_msgs__msg__SpatialDetectionArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    depthai_ros_msgs__msg__SpatialDetectionArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__init(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__SpatialDetectionArray * data = NULL;

  if (size) {
    data = (depthai_ros_msgs__msg__SpatialDetectionArray *)allocator.zero_allocate(size, sizeof(depthai_ros_msgs__msg__SpatialDetectionArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__msg__SpatialDetectionArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__msg__SpatialDetectionArray__fini(&data[i - 1]);
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
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__fini(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array)
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
      depthai_ros_msgs__msg__SpatialDetectionArray__fini(&array->data[i]);
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

depthai_ros_msgs__msg__SpatialDetectionArray__Sequence *
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array = (depthai_ros_msgs__msg__SpatialDetectionArray__Sequence *)allocator.allocate(sizeof(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__destroy(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__are_equal(const depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * lhs, const depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!depthai_ros_msgs__msg__SpatialDetectionArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__copy(
  const depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * input,
  depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(depthai_ros_msgs__msg__SpatialDetectionArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    depthai_ros_msgs__msg__SpatialDetectionArray * data =
      (depthai_ros_msgs__msg__SpatialDetectionArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!depthai_ros_msgs__msg__SpatialDetectionArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          depthai_ros_msgs__msg__SpatialDetectionArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!depthai_ros_msgs__msg__SpatialDetectionArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_gz_interfaces:msg/ParamVec.idl
// generated code does not contain a copyright notice
#include "ros_gz_interfaces/msg/detail/param_vec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `params`
#include "rcl_interfaces/msg/detail/parameter__functions.h"

bool
ros_gz_interfaces__msg__ParamVec__init(ros_gz_interfaces__msg__ParamVec * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_gz_interfaces__msg__ParamVec__fini(msg);
    return false;
  }
  // params
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->params, 0)) {
    ros_gz_interfaces__msg__ParamVec__fini(msg);
    return false;
  }
  return true;
}

void
ros_gz_interfaces__msg__ParamVec__fini(ros_gz_interfaces__msg__ParamVec * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // params
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->params);
}

bool
ros_gz_interfaces__msg__ParamVec__are_equal(const ros_gz_interfaces__msg__ParamVec * lhs, const ros_gz_interfaces__msg__ParamVec * rhs)
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
  // params
  if (!rcl_interfaces__msg__Parameter__Sequence__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  return true;
}

bool
ros_gz_interfaces__msg__ParamVec__copy(
  const ros_gz_interfaces__msg__ParamVec * input,
  ros_gz_interfaces__msg__ParamVec * output)
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
  // params
  if (!rcl_interfaces__msg__Parameter__Sequence__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  return true;
}

ros_gz_interfaces__msg__ParamVec *
ros_gz_interfaces__msg__ParamVec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_gz_interfaces__msg__ParamVec * msg = (ros_gz_interfaces__msg__ParamVec *)allocator.allocate(sizeof(ros_gz_interfaces__msg__ParamVec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_gz_interfaces__msg__ParamVec));
  bool success = ros_gz_interfaces__msg__ParamVec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_gz_interfaces__msg__ParamVec__destroy(ros_gz_interfaces__msg__ParamVec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_gz_interfaces__msg__ParamVec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_gz_interfaces__msg__ParamVec__Sequence__init(ros_gz_interfaces__msg__ParamVec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_gz_interfaces__msg__ParamVec * data = NULL;

  if (size) {
    data = (ros_gz_interfaces__msg__ParamVec *)allocator.zero_allocate(size, sizeof(ros_gz_interfaces__msg__ParamVec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_gz_interfaces__msg__ParamVec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_gz_interfaces__msg__ParamVec__fini(&data[i - 1]);
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
ros_gz_interfaces__msg__ParamVec__Sequence__fini(ros_gz_interfaces__msg__ParamVec__Sequence * array)
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
      ros_gz_interfaces__msg__ParamVec__fini(&array->data[i]);
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

ros_gz_interfaces__msg__ParamVec__Sequence *
ros_gz_interfaces__msg__ParamVec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_gz_interfaces__msg__ParamVec__Sequence * array = (ros_gz_interfaces__msg__ParamVec__Sequence *)allocator.allocate(sizeof(ros_gz_interfaces__msg__ParamVec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_gz_interfaces__msg__ParamVec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_gz_interfaces__msg__ParamVec__Sequence__destroy(ros_gz_interfaces__msg__ParamVec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_gz_interfaces__msg__ParamVec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_gz_interfaces__msg__ParamVec__Sequence__are_equal(const ros_gz_interfaces__msg__ParamVec__Sequence * lhs, const ros_gz_interfaces__msg__ParamVec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_gz_interfaces__msg__ParamVec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_gz_interfaces__msg__ParamVec__Sequence__copy(
  const ros_gz_interfaces__msg__ParamVec__Sequence * input,
  ros_gz_interfaces__msg__ParamVec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_gz_interfaces__msg__ParamVec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_gz_interfaces__msg__ParamVec * data =
      (ros_gz_interfaces__msg__ParamVec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_gz_interfaces__msg__ParamVec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_gz_interfaces__msg__ParamVec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_gz_interfaces__msg__ParamVec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

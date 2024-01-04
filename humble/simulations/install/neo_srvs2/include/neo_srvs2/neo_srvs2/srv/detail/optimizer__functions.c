// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neo_srvs2:srv/Optimizer.idl
// generated code does not contain a copyright notice
#include "neo_srvs2/srv/detail/optimizer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `current_pose`
// Member `carrot_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `current_vel`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
neo_srvs2__srv__Optimizer_Request__init(neo_srvs2__srv__Optimizer_Request * msg)
{
  if (!msg) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->current_pose)) {
    neo_srvs2__srv__Optimizer_Request__fini(msg);
    return false;
  }
  // current_vel
  if (!geometry_msgs__msg__Twist__init(&msg->current_vel)) {
    neo_srvs2__srv__Optimizer_Request__fini(msg);
    return false;
  }
  // carrot_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->carrot_pose)) {
    neo_srvs2__srv__Optimizer_Request__fini(msg);
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__init(&msg->goal_pose)) {
    neo_srvs2__srv__Optimizer_Request__fini(msg);
    return false;
  }
  // switch_opt
  // control_interval
  return true;
}

void
neo_srvs2__srv__Optimizer_Request__fini(neo_srvs2__srv__Optimizer_Request * msg)
{
  if (!msg) {
    return;
  }
  // current_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->current_pose);
  // current_vel
  geometry_msgs__msg__Twist__fini(&msg->current_vel);
  // carrot_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->carrot_pose);
  // goal_pose
  geometry_msgs__msg__Pose__fini(&msg->goal_pose);
  // switch_opt
  // control_interval
}

bool
neo_srvs2__srv__Optimizer_Request__are_equal(const neo_srvs2__srv__Optimizer_Request * lhs, const neo_srvs2__srv__Optimizer_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->current_pose), &(rhs->current_pose)))
  {
    return false;
  }
  // current_vel
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->current_vel), &(rhs->current_vel)))
  {
    return false;
  }
  // carrot_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->carrot_pose), &(rhs->carrot_pose)))
  {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->goal_pose), &(rhs->goal_pose)))
  {
    return false;
  }
  // switch_opt
  if (lhs->switch_opt != rhs->switch_opt) {
    return false;
  }
  // control_interval
  if (lhs->control_interval != rhs->control_interval) {
    return false;
  }
  return true;
}

bool
neo_srvs2__srv__Optimizer_Request__copy(
  const neo_srvs2__srv__Optimizer_Request * input,
  neo_srvs2__srv__Optimizer_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->current_pose), &(output->current_pose)))
  {
    return false;
  }
  // current_vel
  if (!geometry_msgs__msg__Twist__copy(
      &(input->current_vel), &(output->current_vel)))
  {
    return false;
  }
  // carrot_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->carrot_pose), &(output->carrot_pose)))
  {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->goal_pose), &(output->goal_pose)))
  {
    return false;
  }
  // switch_opt
  output->switch_opt = input->switch_opt;
  // control_interval
  output->control_interval = input->control_interval;
  return true;
}

neo_srvs2__srv__Optimizer_Request *
neo_srvs2__srv__Optimizer_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_srvs2__srv__Optimizer_Request * msg = (neo_srvs2__srv__Optimizer_Request *)allocator.allocate(sizeof(neo_srvs2__srv__Optimizer_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neo_srvs2__srv__Optimizer_Request));
  bool success = neo_srvs2__srv__Optimizer_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neo_srvs2__srv__Optimizer_Request__destroy(neo_srvs2__srv__Optimizer_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neo_srvs2__srv__Optimizer_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neo_srvs2__srv__Optimizer_Request__Sequence__init(neo_srvs2__srv__Optimizer_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_srvs2__srv__Optimizer_Request * data = NULL;

  if (size) {
    data = (neo_srvs2__srv__Optimizer_Request *)allocator.zero_allocate(size, sizeof(neo_srvs2__srv__Optimizer_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neo_srvs2__srv__Optimizer_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neo_srvs2__srv__Optimizer_Request__fini(&data[i - 1]);
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
neo_srvs2__srv__Optimizer_Request__Sequence__fini(neo_srvs2__srv__Optimizer_Request__Sequence * array)
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
      neo_srvs2__srv__Optimizer_Request__fini(&array->data[i]);
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

neo_srvs2__srv__Optimizer_Request__Sequence *
neo_srvs2__srv__Optimizer_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_srvs2__srv__Optimizer_Request__Sequence * array = (neo_srvs2__srv__Optimizer_Request__Sequence *)allocator.allocate(sizeof(neo_srvs2__srv__Optimizer_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neo_srvs2__srv__Optimizer_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neo_srvs2__srv__Optimizer_Request__Sequence__destroy(neo_srvs2__srv__Optimizer_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neo_srvs2__srv__Optimizer_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neo_srvs2__srv__Optimizer_Request__Sequence__are_equal(const neo_srvs2__srv__Optimizer_Request__Sequence * lhs, const neo_srvs2__srv__Optimizer_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neo_srvs2__srv__Optimizer_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neo_srvs2__srv__Optimizer_Request__Sequence__copy(
  const neo_srvs2__srv__Optimizer_Request__Sequence * input,
  neo_srvs2__srv__Optimizer_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neo_srvs2__srv__Optimizer_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neo_srvs2__srv__Optimizer_Request * data =
      (neo_srvs2__srv__Optimizer_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neo_srvs2__srv__Optimizer_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neo_srvs2__srv__Optimizer_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neo_srvs2__srv__Optimizer_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `output_vel`
#include "geometry_msgs/msg/detail/twist_stamped__functions.h"

bool
neo_srvs2__srv__Optimizer_Response__init(neo_srvs2__srv__Optimizer_Response * msg)
{
  if (!msg) {
    return false;
  }
  // output_vel
  if (!geometry_msgs__msg__TwistStamped__init(&msg->output_vel)) {
    neo_srvs2__srv__Optimizer_Response__fini(msg);
    return false;
  }
  return true;
}

void
neo_srvs2__srv__Optimizer_Response__fini(neo_srvs2__srv__Optimizer_Response * msg)
{
  if (!msg) {
    return;
  }
  // output_vel
  geometry_msgs__msg__TwistStamped__fini(&msg->output_vel);
}

bool
neo_srvs2__srv__Optimizer_Response__are_equal(const neo_srvs2__srv__Optimizer_Response * lhs, const neo_srvs2__srv__Optimizer_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output_vel
  if (!geometry_msgs__msg__TwistStamped__are_equal(
      &(lhs->output_vel), &(rhs->output_vel)))
  {
    return false;
  }
  return true;
}

bool
neo_srvs2__srv__Optimizer_Response__copy(
  const neo_srvs2__srv__Optimizer_Response * input,
  neo_srvs2__srv__Optimizer_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // output_vel
  if (!geometry_msgs__msg__TwistStamped__copy(
      &(input->output_vel), &(output->output_vel)))
  {
    return false;
  }
  return true;
}

neo_srvs2__srv__Optimizer_Response *
neo_srvs2__srv__Optimizer_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_srvs2__srv__Optimizer_Response * msg = (neo_srvs2__srv__Optimizer_Response *)allocator.allocate(sizeof(neo_srvs2__srv__Optimizer_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neo_srvs2__srv__Optimizer_Response));
  bool success = neo_srvs2__srv__Optimizer_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neo_srvs2__srv__Optimizer_Response__destroy(neo_srvs2__srv__Optimizer_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neo_srvs2__srv__Optimizer_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neo_srvs2__srv__Optimizer_Response__Sequence__init(neo_srvs2__srv__Optimizer_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_srvs2__srv__Optimizer_Response * data = NULL;

  if (size) {
    data = (neo_srvs2__srv__Optimizer_Response *)allocator.zero_allocate(size, sizeof(neo_srvs2__srv__Optimizer_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neo_srvs2__srv__Optimizer_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neo_srvs2__srv__Optimizer_Response__fini(&data[i - 1]);
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
neo_srvs2__srv__Optimizer_Response__Sequence__fini(neo_srvs2__srv__Optimizer_Response__Sequence * array)
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
      neo_srvs2__srv__Optimizer_Response__fini(&array->data[i]);
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

neo_srvs2__srv__Optimizer_Response__Sequence *
neo_srvs2__srv__Optimizer_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_srvs2__srv__Optimizer_Response__Sequence * array = (neo_srvs2__srv__Optimizer_Response__Sequence *)allocator.allocate(sizeof(neo_srvs2__srv__Optimizer_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neo_srvs2__srv__Optimizer_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neo_srvs2__srv__Optimizer_Response__Sequence__destroy(neo_srvs2__srv__Optimizer_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neo_srvs2__srv__Optimizer_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neo_srvs2__srv__Optimizer_Response__Sequence__are_equal(const neo_srvs2__srv__Optimizer_Response__Sequence * lhs, const neo_srvs2__srv__Optimizer_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neo_srvs2__srv__Optimizer_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neo_srvs2__srv__Optimizer_Response__Sequence__copy(
  const neo_srvs2__srv__Optimizer_Response__Sequence * input,
  neo_srvs2__srv__Optimizer_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neo_srvs2__srv__Optimizer_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neo_srvs2__srv__Optimizer_Response * data =
      (neo_srvs2__srv__Optimizer_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neo_srvs2__srv__Optimizer_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neo_srvs2__srv__Optimizer_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neo_srvs2__srv__Optimizer_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

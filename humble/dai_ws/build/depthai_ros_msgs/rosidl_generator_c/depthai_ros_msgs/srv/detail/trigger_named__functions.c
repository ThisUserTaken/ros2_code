// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from depthai_ros_msgs:srv/TriggerNamed.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/srv/detail/trigger_named__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
depthai_ros_msgs__srv__TriggerNamed_Request__init(depthai_ros_msgs__srv__TriggerNamed_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    depthai_ros_msgs__srv__TriggerNamed_Request__fini(msg);
    return false;
  }
  return true;
}

void
depthai_ros_msgs__srv__TriggerNamed_Request__fini(depthai_ros_msgs__srv__TriggerNamed_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
depthai_ros_msgs__srv__TriggerNamed_Request__are_equal(const depthai_ros_msgs__srv__TriggerNamed_Request * lhs, const depthai_ros_msgs__srv__TriggerNamed_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
depthai_ros_msgs__srv__TriggerNamed_Request__copy(
  const depthai_ros_msgs__srv__TriggerNamed_Request * input,
  depthai_ros_msgs__srv__TriggerNamed_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

depthai_ros_msgs__srv__TriggerNamed_Request *
depthai_ros_msgs__srv__TriggerNamed_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__srv__TriggerNamed_Request * msg = (depthai_ros_msgs__srv__TriggerNamed_Request *)allocator.allocate(sizeof(depthai_ros_msgs__srv__TriggerNamed_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__srv__TriggerNamed_Request));
  bool success = depthai_ros_msgs__srv__TriggerNamed_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__srv__TriggerNamed_Request__destroy(depthai_ros_msgs__srv__TriggerNamed_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    depthai_ros_msgs__srv__TriggerNamed_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
depthai_ros_msgs__srv__TriggerNamed_Request__Sequence__init(depthai_ros_msgs__srv__TriggerNamed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__srv__TriggerNamed_Request * data = NULL;

  if (size) {
    data = (depthai_ros_msgs__srv__TriggerNamed_Request *)allocator.zero_allocate(size, sizeof(depthai_ros_msgs__srv__TriggerNamed_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__srv__TriggerNamed_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__srv__TriggerNamed_Request__fini(&data[i - 1]);
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
depthai_ros_msgs__srv__TriggerNamed_Request__Sequence__fini(depthai_ros_msgs__srv__TriggerNamed_Request__Sequence * array)
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
      depthai_ros_msgs__srv__TriggerNamed_Request__fini(&array->data[i]);
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

depthai_ros_msgs__srv__TriggerNamed_Request__Sequence *
depthai_ros_msgs__srv__TriggerNamed_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__srv__TriggerNamed_Request__Sequence * array = (depthai_ros_msgs__srv__TriggerNamed_Request__Sequence *)allocator.allocate(sizeof(depthai_ros_msgs__srv__TriggerNamed_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__srv__TriggerNamed_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__srv__TriggerNamed_Request__Sequence__destroy(depthai_ros_msgs__srv__TriggerNamed_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    depthai_ros_msgs__srv__TriggerNamed_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
depthai_ros_msgs__srv__TriggerNamed_Request__Sequence__are_equal(const depthai_ros_msgs__srv__TriggerNamed_Request__Sequence * lhs, const depthai_ros_msgs__srv__TriggerNamed_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!depthai_ros_msgs__srv__TriggerNamed_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
depthai_ros_msgs__srv__TriggerNamed_Request__Sequence__copy(
  const depthai_ros_msgs__srv__TriggerNamed_Request__Sequence * input,
  depthai_ros_msgs__srv__TriggerNamed_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(depthai_ros_msgs__srv__TriggerNamed_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    depthai_ros_msgs__srv__TriggerNamed_Request * data =
      (depthai_ros_msgs__srv__TriggerNamed_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!depthai_ros_msgs__srv__TriggerNamed_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          depthai_ros_msgs__srv__TriggerNamed_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!depthai_ros_msgs__srv__TriggerNamed_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
depthai_ros_msgs__srv__TriggerNamed_Response__init(depthai_ros_msgs__srv__TriggerNamed_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    depthai_ros_msgs__srv__TriggerNamed_Response__fini(msg);
    return false;
  }
  return true;
}

void
depthai_ros_msgs__srv__TriggerNamed_Response__fini(depthai_ros_msgs__srv__TriggerNamed_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
depthai_ros_msgs__srv__TriggerNamed_Response__are_equal(const depthai_ros_msgs__srv__TriggerNamed_Response * lhs, const depthai_ros_msgs__srv__TriggerNamed_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
depthai_ros_msgs__srv__TriggerNamed_Response__copy(
  const depthai_ros_msgs__srv__TriggerNamed_Response * input,
  depthai_ros_msgs__srv__TriggerNamed_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

depthai_ros_msgs__srv__TriggerNamed_Response *
depthai_ros_msgs__srv__TriggerNamed_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__srv__TriggerNamed_Response * msg = (depthai_ros_msgs__srv__TriggerNamed_Response *)allocator.allocate(sizeof(depthai_ros_msgs__srv__TriggerNamed_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__srv__TriggerNamed_Response));
  bool success = depthai_ros_msgs__srv__TriggerNamed_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__srv__TriggerNamed_Response__destroy(depthai_ros_msgs__srv__TriggerNamed_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    depthai_ros_msgs__srv__TriggerNamed_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
depthai_ros_msgs__srv__TriggerNamed_Response__Sequence__init(depthai_ros_msgs__srv__TriggerNamed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__srv__TriggerNamed_Response * data = NULL;

  if (size) {
    data = (depthai_ros_msgs__srv__TriggerNamed_Response *)allocator.zero_allocate(size, sizeof(depthai_ros_msgs__srv__TriggerNamed_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__srv__TriggerNamed_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__srv__TriggerNamed_Response__fini(&data[i - 1]);
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
depthai_ros_msgs__srv__TriggerNamed_Response__Sequence__fini(depthai_ros_msgs__srv__TriggerNamed_Response__Sequence * array)
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
      depthai_ros_msgs__srv__TriggerNamed_Response__fini(&array->data[i]);
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

depthai_ros_msgs__srv__TriggerNamed_Response__Sequence *
depthai_ros_msgs__srv__TriggerNamed_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  depthai_ros_msgs__srv__TriggerNamed_Response__Sequence * array = (depthai_ros_msgs__srv__TriggerNamed_Response__Sequence *)allocator.allocate(sizeof(depthai_ros_msgs__srv__TriggerNamed_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__srv__TriggerNamed_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__srv__TriggerNamed_Response__Sequence__destroy(depthai_ros_msgs__srv__TriggerNamed_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    depthai_ros_msgs__srv__TriggerNamed_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
depthai_ros_msgs__srv__TriggerNamed_Response__Sequence__are_equal(const depthai_ros_msgs__srv__TriggerNamed_Response__Sequence * lhs, const depthai_ros_msgs__srv__TriggerNamed_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!depthai_ros_msgs__srv__TriggerNamed_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
depthai_ros_msgs__srv__TriggerNamed_Response__Sequence__copy(
  const depthai_ros_msgs__srv__TriggerNamed_Response__Sequence * input,
  depthai_ros_msgs__srv__TriggerNamed_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(depthai_ros_msgs__srv__TriggerNamed_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    depthai_ros_msgs__srv__TriggerNamed_Response * data =
      (depthai_ros_msgs__srv__TriggerNamed_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!depthai_ros_msgs__srv__TriggerNamed_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          depthai_ros_msgs__srv__TriggerNamed_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!depthai_ros_msgs__srv__TriggerNamed_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

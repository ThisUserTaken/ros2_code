// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from t3_action_msg:action/Move.idl
// generated code does not contain a copyright notice
#include "t3_action_msg/action/detail/move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
t3_action_msg__action__Move_Goal__init(t3_action_msg__action__Move_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // secs
  return true;
}

void
t3_action_msg__action__Move_Goal__fini(t3_action_msg__action__Move_Goal * msg)
{
  if (!msg) {
    return;
  }
  // secs
}

bool
t3_action_msg__action__Move_Goal__are_equal(const t3_action_msg__action__Move_Goal * lhs, const t3_action_msg__action__Move_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // secs
  if (lhs->secs != rhs->secs) {
    return false;
  }
  return true;
}

bool
t3_action_msg__action__Move_Goal__copy(
  const t3_action_msg__action__Move_Goal * input,
  t3_action_msg__action__Move_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // secs
  output->secs = input->secs;
  return true;
}

t3_action_msg__action__Move_Goal *
t3_action_msg__action__Move_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_Goal * msg = (t3_action_msg__action__Move_Goal *)allocator.allocate(sizeof(t3_action_msg__action__Move_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(t3_action_msg__action__Move_Goal));
  bool success = t3_action_msg__action__Move_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
t3_action_msg__action__Move_Goal__destroy(t3_action_msg__action__Move_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    t3_action_msg__action__Move_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
t3_action_msg__action__Move_Goal__Sequence__init(t3_action_msg__action__Move_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_Goal * data = NULL;

  if (size) {
    data = (t3_action_msg__action__Move_Goal *)allocator.zero_allocate(size, sizeof(t3_action_msg__action__Move_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = t3_action_msg__action__Move_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        t3_action_msg__action__Move_Goal__fini(&data[i - 1]);
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
t3_action_msg__action__Move_Goal__Sequence__fini(t3_action_msg__action__Move_Goal__Sequence * array)
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
      t3_action_msg__action__Move_Goal__fini(&array->data[i]);
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

t3_action_msg__action__Move_Goal__Sequence *
t3_action_msg__action__Move_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_Goal__Sequence * array = (t3_action_msg__action__Move_Goal__Sequence *)allocator.allocate(sizeof(t3_action_msg__action__Move_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = t3_action_msg__action__Move_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
t3_action_msg__action__Move_Goal__Sequence__destroy(t3_action_msg__action__Move_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    t3_action_msg__action__Move_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
t3_action_msg__action__Move_Goal__Sequence__are_equal(const t3_action_msg__action__Move_Goal__Sequence * lhs, const t3_action_msg__action__Move_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!t3_action_msg__action__Move_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
t3_action_msg__action__Move_Goal__Sequence__copy(
  const t3_action_msg__action__Move_Goal__Sequence * input,
  t3_action_msg__action__Move_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(t3_action_msg__action__Move_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    t3_action_msg__action__Move_Goal * data =
      (t3_action_msg__action__Move_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!t3_action_msg__action__Move_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          t3_action_msg__action__Move_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!t3_action_msg__action__Move_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
t3_action_msg__action__Move_Result__init(t3_action_msg__action__Move_Result * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    t3_action_msg__action__Move_Result__fini(msg);
    return false;
  }
  return true;
}

void
t3_action_msg__action__Move_Result__fini(t3_action_msg__action__Move_Result * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
t3_action_msg__action__Move_Result__are_equal(const t3_action_msg__action__Move_Result * lhs, const t3_action_msg__action__Move_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
t3_action_msg__action__Move_Result__copy(
  const t3_action_msg__action__Move_Result * input,
  t3_action_msg__action__Move_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

t3_action_msg__action__Move_Result *
t3_action_msg__action__Move_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_Result * msg = (t3_action_msg__action__Move_Result *)allocator.allocate(sizeof(t3_action_msg__action__Move_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(t3_action_msg__action__Move_Result));
  bool success = t3_action_msg__action__Move_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
t3_action_msg__action__Move_Result__destroy(t3_action_msg__action__Move_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    t3_action_msg__action__Move_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
t3_action_msg__action__Move_Result__Sequence__init(t3_action_msg__action__Move_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_Result * data = NULL;

  if (size) {
    data = (t3_action_msg__action__Move_Result *)allocator.zero_allocate(size, sizeof(t3_action_msg__action__Move_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = t3_action_msg__action__Move_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        t3_action_msg__action__Move_Result__fini(&data[i - 1]);
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
t3_action_msg__action__Move_Result__Sequence__fini(t3_action_msg__action__Move_Result__Sequence * array)
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
      t3_action_msg__action__Move_Result__fini(&array->data[i]);
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

t3_action_msg__action__Move_Result__Sequence *
t3_action_msg__action__Move_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_Result__Sequence * array = (t3_action_msg__action__Move_Result__Sequence *)allocator.allocate(sizeof(t3_action_msg__action__Move_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = t3_action_msg__action__Move_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
t3_action_msg__action__Move_Result__Sequence__destroy(t3_action_msg__action__Move_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    t3_action_msg__action__Move_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
t3_action_msg__action__Move_Result__Sequence__are_equal(const t3_action_msg__action__Move_Result__Sequence * lhs, const t3_action_msg__action__Move_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!t3_action_msg__action__Move_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
t3_action_msg__action__Move_Result__Sequence__copy(
  const t3_action_msg__action__Move_Result__Sequence * input,
  t3_action_msg__action__Move_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(t3_action_msg__action__Move_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    t3_action_msg__action__Move_Result * data =
      (t3_action_msg__action__Move_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!t3_action_msg__action__Move_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          t3_action_msg__action__Move_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!t3_action_msg__action__Move_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
t3_action_msg__action__Move_Feedback__init(t3_action_msg__action__Move_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    t3_action_msg__action__Move_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
t3_action_msg__action__Move_Feedback__fini(t3_action_msg__action__Move_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
t3_action_msg__action__Move_Feedback__are_equal(const t3_action_msg__action__Move_Feedback * lhs, const t3_action_msg__action__Move_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
t3_action_msg__action__Move_Feedback__copy(
  const t3_action_msg__action__Move_Feedback * input,
  t3_action_msg__action__Move_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

t3_action_msg__action__Move_Feedback *
t3_action_msg__action__Move_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_Feedback * msg = (t3_action_msg__action__Move_Feedback *)allocator.allocate(sizeof(t3_action_msg__action__Move_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(t3_action_msg__action__Move_Feedback));
  bool success = t3_action_msg__action__Move_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
t3_action_msg__action__Move_Feedback__destroy(t3_action_msg__action__Move_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    t3_action_msg__action__Move_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
t3_action_msg__action__Move_Feedback__Sequence__init(t3_action_msg__action__Move_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_Feedback * data = NULL;

  if (size) {
    data = (t3_action_msg__action__Move_Feedback *)allocator.zero_allocate(size, sizeof(t3_action_msg__action__Move_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = t3_action_msg__action__Move_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        t3_action_msg__action__Move_Feedback__fini(&data[i - 1]);
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
t3_action_msg__action__Move_Feedback__Sequence__fini(t3_action_msg__action__Move_Feedback__Sequence * array)
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
      t3_action_msg__action__Move_Feedback__fini(&array->data[i]);
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

t3_action_msg__action__Move_Feedback__Sequence *
t3_action_msg__action__Move_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_Feedback__Sequence * array = (t3_action_msg__action__Move_Feedback__Sequence *)allocator.allocate(sizeof(t3_action_msg__action__Move_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = t3_action_msg__action__Move_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
t3_action_msg__action__Move_Feedback__Sequence__destroy(t3_action_msg__action__Move_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    t3_action_msg__action__Move_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
t3_action_msg__action__Move_Feedback__Sequence__are_equal(const t3_action_msg__action__Move_Feedback__Sequence * lhs, const t3_action_msg__action__Move_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!t3_action_msg__action__Move_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
t3_action_msg__action__Move_Feedback__Sequence__copy(
  const t3_action_msg__action__Move_Feedback__Sequence * input,
  t3_action_msg__action__Move_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(t3_action_msg__action__Move_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    t3_action_msg__action__Move_Feedback * data =
      (t3_action_msg__action__Move_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!t3_action_msg__action__Move_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          t3_action_msg__action__Move_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!t3_action_msg__action__Move_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "t3_action_msg/action/detail/move__functions.h"

bool
t3_action_msg__action__Move_SendGoal_Request__init(t3_action_msg__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    t3_action_msg__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!t3_action_msg__action__Move_Goal__init(&msg->goal)) {
    t3_action_msg__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
t3_action_msg__action__Move_SendGoal_Request__fini(t3_action_msg__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  t3_action_msg__action__Move_Goal__fini(&msg->goal);
}

bool
t3_action_msg__action__Move_SendGoal_Request__are_equal(const t3_action_msg__action__Move_SendGoal_Request * lhs, const t3_action_msg__action__Move_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!t3_action_msg__action__Move_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
t3_action_msg__action__Move_SendGoal_Request__copy(
  const t3_action_msg__action__Move_SendGoal_Request * input,
  t3_action_msg__action__Move_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!t3_action_msg__action__Move_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

t3_action_msg__action__Move_SendGoal_Request *
t3_action_msg__action__Move_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_SendGoal_Request * msg = (t3_action_msg__action__Move_SendGoal_Request *)allocator.allocate(sizeof(t3_action_msg__action__Move_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(t3_action_msg__action__Move_SendGoal_Request));
  bool success = t3_action_msg__action__Move_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
t3_action_msg__action__Move_SendGoal_Request__destroy(t3_action_msg__action__Move_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    t3_action_msg__action__Move_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
t3_action_msg__action__Move_SendGoal_Request__Sequence__init(t3_action_msg__action__Move_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_SendGoal_Request * data = NULL;

  if (size) {
    data = (t3_action_msg__action__Move_SendGoal_Request *)allocator.zero_allocate(size, sizeof(t3_action_msg__action__Move_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = t3_action_msg__action__Move_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        t3_action_msg__action__Move_SendGoal_Request__fini(&data[i - 1]);
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
t3_action_msg__action__Move_SendGoal_Request__Sequence__fini(t3_action_msg__action__Move_SendGoal_Request__Sequence * array)
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
      t3_action_msg__action__Move_SendGoal_Request__fini(&array->data[i]);
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

t3_action_msg__action__Move_SendGoal_Request__Sequence *
t3_action_msg__action__Move_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_SendGoal_Request__Sequence * array = (t3_action_msg__action__Move_SendGoal_Request__Sequence *)allocator.allocate(sizeof(t3_action_msg__action__Move_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = t3_action_msg__action__Move_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
t3_action_msg__action__Move_SendGoal_Request__Sequence__destroy(t3_action_msg__action__Move_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    t3_action_msg__action__Move_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
t3_action_msg__action__Move_SendGoal_Request__Sequence__are_equal(const t3_action_msg__action__Move_SendGoal_Request__Sequence * lhs, const t3_action_msg__action__Move_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!t3_action_msg__action__Move_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
t3_action_msg__action__Move_SendGoal_Request__Sequence__copy(
  const t3_action_msg__action__Move_SendGoal_Request__Sequence * input,
  t3_action_msg__action__Move_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(t3_action_msg__action__Move_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    t3_action_msg__action__Move_SendGoal_Request * data =
      (t3_action_msg__action__Move_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!t3_action_msg__action__Move_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          t3_action_msg__action__Move_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!t3_action_msg__action__Move_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
t3_action_msg__action__Move_SendGoal_Response__init(t3_action_msg__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    t3_action_msg__action__Move_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
t3_action_msg__action__Move_SendGoal_Response__fini(t3_action_msg__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
t3_action_msg__action__Move_SendGoal_Response__are_equal(const t3_action_msg__action__Move_SendGoal_Response * lhs, const t3_action_msg__action__Move_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
t3_action_msg__action__Move_SendGoal_Response__copy(
  const t3_action_msg__action__Move_SendGoal_Response * input,
  t3_action_msg__action__Move_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

t3_action_msg__action__Move_SendGoal_Response *
t3_action_msg__action__Move_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_SendGoal_Response * msg = (t3_action_msg__action__Move_SendGoal_Response *)allocator.allocate(sizeof(t3_action_msg__action__Move_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(t3_action_msg__action__Move_SendGoal_Response));
  bool success = t3_action_msg__action__Move_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
t3_action_msg__action__Move_SendGoal_Response__destroy(t3_action_msg__action__Move_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    t3_action_msg__action__Move_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
t3_action_msg__action__Move_SendGoal_Response__Sequence__init(t3_action_msg__action__Move_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_SendGoal_Response * data = NULL;

  if (size) {
    data = (t3_action_msg__action__Move_SendGoal_Response *)allocator.zero_allocate(size, sizeof(t3_action_msg__action__Move_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = t3_action_msg__action__Move_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        t3_action_msg__action__Move_SendGoal_Response__fini(&data[i - 1]);
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
t3_action_msg__action__Move_SendGoal_Response__Sequence__fini(t3_action_msg__action__Move_SendGoal_Response__Sequence * array)
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
      t3_action_msg__action__Move_SendGoal_Response__fini(&array->data[i]);
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

t3_action_msg__action__Move_SendGoal_Response__Sequence *
t3_action_msg__action__Move_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_SendGoal_Response__Sequence * array = (t3_action_msg__action__Move_SendGoal_Response__Sequence *)allocator.allocate(sizeof(t3_action_msg__action__Move_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = t3_action_msg__action__Move_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
t3_action_msg__action__Move_SendGoal_Response__Sequence__destroy(t3_action_msg__action__Move_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    t3_action_msg__action__Move_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
t3_action_msg__action__Move_SendGoal_Response__Sequence__are_equal(const t3_action_msg__action__Move_SendGoal_Response__Sequence * lhs, const t3_action_msg__action__Move_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!t3_action_msg__action__Move_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
t3_action_msg__action__Move_SendGoal_Response__Sequence__copy(
  const t3_action_msg__action__Move_SendGoal_Response__Sequence * input,
  t3_action_msg__action__Move_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(t3_action_msg__action__Move_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    t3_action_msg__action__Move_SendGoal_Response * data =
      (t3_action_msg__action__Move_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!t3_action_msg__action__Move_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          t3_action_msg__action__Move_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!t3_action_msg__action__Move_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
t3_action_msg__action__Move_GetResult_Request__init(t3_action_msg__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    t3_action_msg__action__Move_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
t3_action_msg__action__Move_GetResult_Request__fini(t3_action_msg__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
t3_action_msg__action__Move_GetResult_Request__are_equal(const t3_action_msg__action__Move_GetResult_Request * lhs, const t3_action_msg__action__Move_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
t3_action_msg__action__Move_GetResult_Request__copy(
  const t3_action_msg__action__Move_GetResult_Request * input,
  t3_action_msg__action__Move_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

t3_action_msg__action__Move_GetResult_Request *
t3_action_msg__action__Move_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_GetResult_Request * msg = (t3_action_msg__action__Move_GetResult_Request *)allocator.allocate(sizeof(t3_action_msg__action__Move_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(t3_action_msg__action__Move_GetResult_Request));
  bool success = t3_action_msg__action__Move_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
t3_action_msg__action__Move_GetResult_Request__destroy(t3_action_msg__action__Move_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    t3_action_msg__action__Move_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
t3_action_msg__action__Move_GetResult_Request__Sequence__init(t3_action_msg__action__Move_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_GetResult_Request * data = NULL;

  if (size) {
    data = (t3_action_msg__action__Move_GetResult_Request *)allocator.zero_allocate(size, sizeof(t3_action_msg__action__Move_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = t3_action_msg__action__Move_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        t3_action_msg__action__Move_GetResult_Request__fini(&data[i - 1]);
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
t3_action_msg__action__Move_GetResult_Request__Sequence__fini(t3_action_msg__action__Move_GetResult_Request__Sequence * array)
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
      t3_action_msg__action__Move_GetResult_Request__fini(&array->data[i]);
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

t3_action_msg__action__Move_GetResult_Request__Sequence *
t3_action_msg__action__Move_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_GetResult_Request__Sequence * array = (t3_action_msg__action__Move_GetResult_Request__Sequence *)allocator.allocate(sizeof(t3_action_msg__action__Move_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = t3_action_msg__action__Move_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
t3_action_msg__action__Move_GetResult_Request__Sequence__destroy(t3_action_msg__action__Move_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    t3_action_msg__action__Move_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
t3_action_msg__action__Move_GetResult_Request__Sequence__are_equal(const t3_action_msg__action__Move_GetResult_Request__Sequence * lhs, const t3_action_msg__action__Move_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!t3_action_msg__action__Move_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
t3_action_msg__action__Move_GetResult_Request__Sequence__copy(
  const t3_action_msg__action__Move_GetResult_Request__Sequence * input,
  t3_action_msg__action__Move_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(t3_action_msg__action__Move_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    t3_action_msg__action__Move_GetResult_Request * data =
      (t3_action_msg__action__Move_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!t3_action_msg__action__Move_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          t3_action_msg__action__Move_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!t3_action_msg__action__Move_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "t3_action_msg/action/detail/move__functions.h"

bool
t3_action_msg__action__Move_GetResult_Response__init(t3_action_msg__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!t3_action_msg__action__Move_Result__init(&msg->result)) {
    t3_action_msg__action__Move_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
t3_action_msg__action__Move_GetResult_Response__fini(t3_action_msg__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  t3_action_msg__action__Move_Result__fini(&msg->result);
}

bool
t3_action_msg__action__Move_GetResult_Response__are_equal(const t3_action_msg__action__Move_GetResult_Response * lhs, const t3_action_msg__action__Move_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!t3_action_msg__action__Move_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
t3_action_msg__action__Move_GetResult_Response__copy(
  const t3_action_msg__action__Move_GetResult_Response * input,
  t3_action_msg__action__Move_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!t3_action_msg__action__Move_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

t3_action_msg__action__Move_GetResult_Response *
t3_action_msg__action__Move_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_GetResult_Response * msg = (t3_action_msg__action__Move_GetResult_Response *)allocator.allocate(sizeof(t3_action_msg__action__Move_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(t3_action_msg__action__Move_GetResult_Response));
  bool success = t3_action_msg__action__Move_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
t3_action_msg__action__Move_GetResult_Response__destroy(t3_action_msg__action__Move_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    t3_action_msg__action__Move_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
t3_action_msg__action__Move_GetResult_Response__Sequence__init(t3_action_msg__action__Move_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_GetResult_Response * data = NULL;

  if (size) {
    data = (t3_action_msg__action__Move_GetResult_Response *)allocator.zero_allocate(size, sizeof(t3_action_msg__action__Move_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = t3_action_msg__action__Move_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        t3_action_msg__action__Move_GetResult_Response__fini(&data[i - 1]);
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
t3_action_msg__action__Move_GetResult_Response__Sequence__fini(t3_action_msg__action__Move_GetResult_Response__Sequence * array)
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
      t3_action_msg__action__Move_GetResult_Response__fini(&array->data[i]);
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

t3_action_msg__action__Move_GetResult_Response__Sequence *
t3_action_msg__action__Move_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_GetResult_Response__Sequence * array = (t3_action_msg__action__Move_GetResult_Response__Sequence *)allocator.allocate(sizeof(t3_action_msg__action__Move_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = t3_action_msg__action__Move_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
t3_action_msg__action__Move_GetResult_Response__Sequence__destroy(t3_action_msg__action__Move_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    t3_action_msg__action__Move_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
t3_action_msg__action__Move_GetResult_Response__Sequence__are_equal(const t3_action_msg__action__Move_GetResult_Response__Sequence * lhs, const t3_action_msg__action__Move_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!t3_action_msg__action__Move_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
t3_action_msg__action__Move_GetResult_Response__Sequence__copy(
  const t3_action_msg__action__Move_GetResult_Response__Sequence * input,
  t3_action_msg__action__Move_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(t3_action_msg__action__Move_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    t3_action_msg__action__Move_GetResult_Response * data =
      (t3_action_msg__action__Move_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!t3_action_msg__action__Move_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          t3_action_msg__action__Move_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!t3_action_msg__action__Move_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "t3_action_msg/action/detail/move__functions.h"

bool
t3_action_msg__action__Move_FeedbackMessage__init(t3_action_msg__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    t3_action_msg__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!t3_action_msg__action__Move_Feedback__init(&msg->feedback)) {
    t3_action_msg__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
t3_action_msg__action__Move_FeedbackMessage__fini(t3_action_msg__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  t3_action_msg__action__Move_Feedback__fini(&msg->feedback);
}

bool
t3_action_msg__action__Move_FeedbackMessage__are_equal(const t3_action_msg__action__Move_FeedbackMessage * lhs, const t3_action_msg__action__Move_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!t3_action_msg__action__Move_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
t3_action_msg__action__Move_FeedbackMessage__copy(
  const t3_action_msg__action__Move_FeedbackMessage * input,
  t3_action_msg__action__Move_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!t3_action_msg__action__Move_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

t3_action_msg__action__Move_FeedbackMessage *
t3_action_msg__action__Move_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_FeedbackMessage * msg = (t3_action_msg__action__Move_FeedbackMessage *)allocator.allocate(sizeof(t3_action_msg__action__Move_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(t3_action_msg__action__Move_FeedbackMessage));
  bool success = t3_action_msg__action__Move_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
t3_action_msg__action__Move_FeedbackMessage__destroy(t3_action_msg__action__Move_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    t3_action_msg__action__Move_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
t3_action_msg__action__Move_FeedbackMessage__Sequence__init(t3_action_msg__action__Move_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_FeedbackMessage * data = NULL;

  if (size) {
    data = (t3_action_msg__action__Move_FeedbackMessage *)allocator.zero_allocate(size, sizeof(t3_action_msg__action__Move_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = t3_action_msg__action__Move_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        t3_action_msg__action__Move_FeedbackMessage__fini(&data[i - 1]);
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
t3_action_msg__action__Move_FeedbackMessage__Sequence__fini(t3_action_msg__action__Move_FeedbackMessage__Sequence * array)
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
      t3_action_msg__action__Move_FeedbackMessage__fini(&array->data[i]);
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

t3_action_msg__action__Move_FeedbackMessage__Sequence *
t3_action_msg__action__Move_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  t3_action_msg__action__Move_FeedbackMessage__Sequence * array = (t3_action_msg__action__Move_FeedbackMessage__Sequence *)allocator.allocate(sizeof(t3_action_msg__action__Move_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = t3_action_msg__action__Move_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
t3_action_msg__action__Move_FeedbackMessage__Sequence__destroy(t3_action_msg__action__Move_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    t3_action_msg__action__Move_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
t3_action_msg__action__Move_FeedbackMessage__Sequence__are_equal(const t3_action_msg__action__Move_FeedbackMessage__Sequence * lhs, const t3_action_msg__action__Move_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!t3_action_msg__action__Move_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
t3_action_msg__action__Move_FeedbackMessage__Sequence__copy(
  const t3_action_msg__action__Move_FeedbackMessage__Sequence * input,
  t3_action_msg__action__Move_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(t3_action_msg__action__Move_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    t3_action_msg__action__Move_FeedbackMessage * data =
      (t3_action_msg__action__Move_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!t3_action_msg__action__Move_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          t3_action_msg__action__Move_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!t3_action_msg__action__Move_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

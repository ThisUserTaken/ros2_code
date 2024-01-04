// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neo_msgs2:msg/RelayBoardV3.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/relay_board_v3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `firmware_version`
#include "rosidl_runtime_c/string_functions.h"

bool
neo_msgs2__msg__RelayBoardV3__init(neo_msgs2__msg__RelayBoardV3 * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    neo_msgs2__msg__RelayBoardV3__fini(msg);
    return false;
  }
  // uptime
  // ambient_temperature
  // relay_states
  // digital_input_states
  // keypad_button_states
  // key_switch_off_state
  // release_structure_state
  return true;
}

void
neo_msgs2__msg__RelayBoardV3__fini(neo_msgs2__msg__RelayBoardV3 * msg)
{
  if (!msg) {
    return;
  }
  // time
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
  // uptime
  // ambient_temperature
  // relay_states
  // digital_input_states
  // keypad_button_states
  // key_switch_off_state
  // release_structure_state
}

bool
neo_msgs2__msg__RelayBoardV3__are_equal(const neo_msgs2__msg__RelayBoardV3 * lhs, const neo_msgs2__msg__RelayBoardV3 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_version), &(rhs->firmware_version)))
  {
    return false;
  }
  // uptime
  if (lhs->uptime != rhs->uptime) {
    return false;
  }
  // ambient_temperature
  if (lhs->ambient_temperature != rhs->ambient_temperature) {
    return false;
  }
  // relay_states
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->relay_states[i] != rhs->relay_states[i]) {
      return false;
    }
  }
  // digital_input_states
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->digital_input_states[i] != rhs->digital_input_states[i]) {
      return false;
    }
  }
  // keypad_button_states
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->keypad_button_states[i] != rhs->keypad_button_states[i]) {
      return false;
    }
  }
  // key_switch_off_state
  if (lhs->key_switch_off_state != rhs->key_switch_off_state) {
    return false;
  }
  // release_structure_state
  if (lhs->release_structure_state != rhs->release_structure_state) {
    return false;
  }
  return true;
}

bool
neo_msgs2__msg__RelayBoardV3__copy(
  const neo_msgs2__msg__RelayBoardV3 * input,
  neo_msgs2__msg__RelayBoardV3 * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_version), &(output->firmware_version)))
  {
    return false;
  }
  // uptime
  output->uptime = input->uptime;
  // ambient_temperature
  output->ambient_temperature = input->ambient_temperature;
  // relay_states
  for (size_t i = 0; i < 4; ++i) {
    output->relay_states[i] = input->relay_states[i];
  }
  // digital_input_states
  for (size_t i = 0; i < 4; ++i) {
    output->digital_input_states[i] = input->digital_input_states[i];
  }
  // keypad_button_states
  for (size_t i = 0; i < 4; ++i) {
    output->keypad_button_states[i] = input->keypad_button_states[i];
  }
  // key_switch_off_state
  output->key_switch_off_state = input->key_switch_off_state;
  // release_structure_state
  output->release_structure_state = input->release_structure_state;
  return true;
}

neo_msgs2__msg__RelayBoardV3 *
neo_msgs2__msg__RelayBoardV3__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__RelayBoardV3 * msg = (neo_msgs2__msg__RelayBoardV3 *)allocator.allocate(sizeof(neo_msgs2__msg__RelayBoardV3), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neo_msgs2__msg__RelayBoardV3));
  bool success = neo_msgs2__msg__RelayBoardV3__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neo_msgs2__msg__RelayBoardV3__destroy(neo_msgs2__msg__RelayBoardV3 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neo_msgs2__msg__RelayBoardV3__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neo_msgs2__msg__RelayBoardV3__Sequence__init(neo_msgs2__msg__RelayBoardV3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__RelayBoardV3 * data = NULL;

  if (size) {
    data = (neo_msgs2__msg__RelayBoardV3 *)allocator.zero_allocate(size, sizeof(neo_msgs2__msg__RelayBoardV3), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neo_msgs2__msg__RelayBoardV3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neo_msgs2__msg__RelayBoardV3__fini(&data[i - 1]);
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
neo_msgs2__msg__RelayBoardV3__Sequence__fini(neo_msgs2__msg__RelayBoardV3__Sequence * array)
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
      neo_msgs2__msg__RelayBoardV3__fini(&array->data[i]);
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

neo_msgs2__msg__RelayBoardV3__Sequence *
neo_msgs2__msg__RelayBoardV3__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__RelayBoardV3__Sequence * array = (neo_msgs2__msg__RelayBoardV3__Sequence *)allocator.allocate(sizeof(neo_msgs2__msg__RelayBoardV3__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neo_msgs2__msg__RelayBoardV3__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neo_msgs2__msg__RelayBoardV3__Sequence__destroy(neo_msgs2__msg__RelayBoardV3__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neo_msgs2__msg__RelayBoardV3__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neo_msgs2__msg__RelayBoardV3__Sequence__are_equal(const neo_msgs2__msg__RelayBoardV3__Sequence * lhs, const neo_msgs2__msg__RelayBoardV3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neo_msgs2__msg__RelayBoardV3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__RelayBoardV3__Sequence__copy(
  const neo_msgs2__msg__RelayBoardV3__Sequence * input,
  neo_msgs2__msg__RelayBoardV3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neo_msgs2__msg__RelayBoardV3);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neo_msgs2__msg__RelayBoardV3 * data =
      (neo_msgs2__msg__RelayBoardV3 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neo_msgs2__msg__RelayBoardV3__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neo_msgs2__msg__RelayBoardV3__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neo_msgs2__msg__RelayBoardV3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

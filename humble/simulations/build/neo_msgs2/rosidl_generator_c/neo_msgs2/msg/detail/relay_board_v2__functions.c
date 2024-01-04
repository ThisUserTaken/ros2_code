// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neo_msgs2:msg/RelayBoardV2.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/relay_board_v2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
neo_msgs2__msg__RelayBoardV2__init(neo_msgs2__msg__RelayBoardV2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neo_msgs2__msg__RelayBoardV2__fini(msg);
    return false;
  }
  // relayboardv2_state
  // communication_state
  // charging_state
  // temperature
  // battery_voltage
  // charging_current
  // relay_states
  // keypad
  // shutdown
  return true;
}

void
neo_msgs2__msg__RelayBoardV2__fini(neo_msgs2__msg__RelayBoardV2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // relayboardv2_state
  // communication_state
  // charging_state
  // temperature
  // battery_voltage
  // charging_current
  // relay_states
  // keypad
  // shutdown
}

bool
neo_msgs2__msg__RelayBoardV2__are_equal(const neo_msgs2__msg__RelayBoardV2 * lhs, const neo_msgs2__msg__RelayBoardV2 * rhs)
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
  // relayboardv2_state
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->relayboardv2_state[i] != rhs->relayboardv2_state[i]) {
      return false;
    }
  }
  // communication_state
  if (lhs->communication_state != rhs->communication_state) {
    return false;
  }
  // charging_state
  if (lhs->charging_state != rhs->charging_state) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // charging_current
  if (lhs->charging_current != rhs->charging_current) {
    return false;
  }
  // relay_states
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->relay_states[i] != rhs->relay_states[i]) {
      return false;
    }
  }
  // keypad
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->keypad[i] != rhs->keypad[i]) {
      return false;
    }
  }
  // shutdown
  if (lhs->shutdown != rhs->shutdown) {
    return false;
  }
  return true;
}

bool
neo_msgs2__msg__RelayBoardV2__copy(
  const neo_msgs2__msg__RelayBoardV2 * input,
  neo_msgs2__msg__RelayBoardV2 * output)
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
  // relayboardv2_state
  for (size_t i = 0; i < 16; ++i) {
    output->relayboardv2_state[i] = input->relayboardv2_state[i];
  }
  // communication_state
  output->communication_state = input->communication_state;
  // charging_state
  output->charging_state = input->charging_state;
  // temperature
  output->temperature = input->temperature;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // charging_current
  output->charging_current = input->charging_current;
  // relay_states
  for (size_t i = 0; i < 4; ++i) {
    output->relay_states[i] = input->relay_states[i];
  }
  // keypad
  for (size_t i = 0; i < 8; ++i) {
    output->keypad[i] = input->keypad[i];
  }
  // shutdown
  output->shutdown = input->shutdown;
  return true;
}

neo_msgs2__msg__RelayBoardV2 *
neo_msgs2__msg__RelayBoardV2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__RelayBoardV2 * msg = (neo_msgs2__msg__RelayBoardV2 *)allocator.allocate(sizeof(neo_msgs2__msg__RelayBoardV2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neo_msgs2__msg__RelayBoardV2));
  bool success = neo_msgs2__msg__RelayBoardV2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neo_msgs2__msg__RelayBoardV2__destroy(neo_msgs2__msg__RelayBoardV2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neo_msgs2__msg__RelayBoardV2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neo_msgs2__msg__RelayBoardV2__Sequence__init(neo_msgs2__msg__RelayBoardV2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__RelayBoardV2 * data = NULL;

  if (size) {
    data = (neo_msgs2__msg__RelayBoardV2 *)allocator.zero_allocate(size, sizeof(neo_msgs2__msg__RelayBoardV2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neo_msgs2__msg__RelayBoardV2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neo_msgs2__msg__RelayBoardV2__fini(&data[i - 1]);
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
neo_msgs2__msg__RelayBoardV2__Sequence__fini(neo_msgs2__msg__RelayBoardV2__Sequence * array)
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
      neo_msgs2__msg__RelayBoardV2__fini(&array->data[i]);
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

neo_msgs2__msg__RelayBoardV2__Sequence *
neo_msgs2__msg__RelayBoardV2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neo_msgs2__msg__RelayBoardV2__Sequence * array = (neo_msgs2__msg__RelayBoardV2__Sequence *)allocator.allocate(sizeof(neo_msgs2__msg__RelayBoardV2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neo_msgs2__msg__RelayBoardV2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neo_msgs2__msg__RelayBoardV2__Sequence__destroy(neo_msgs2__msg__RelayBoardV2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neo_msgs2__msg__RelayBoardV2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neo_msgs2__msg__RelayBoardV2__Sequence__are_equal(const neo_msgs2__msg__RelayBoardV2__Sequence * lhs, const neo_msgs2__msg__RelayBoardV2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neo_msgs2__msg__RelayBoardV2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neo_msgs2__msg__RelayBoardV2__Sequence__copy(
  const neo_msgs2__msg__RelayBoardV2__Sequence * input,
  neo_msgs2__msg__RelayBoardV2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neo_msgs2__msg__RelayBoardV2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neo_msgs2__msg__RelayBoardV2 * data =
      (neo_msgs2__msg__RelayBoardV2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neo_msgs2__msg__RelayBoardV2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neo_msgs2__msg__RelayBoardV2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neo_msgs2__msg__RelayBoardV2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

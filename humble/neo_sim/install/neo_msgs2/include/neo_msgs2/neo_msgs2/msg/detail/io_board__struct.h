// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/IOBoard.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__IO_BOARD__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__IO_BOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/IOBoard in the package neo_msgs2.
/**
  * This message holds all data available from Neobotix IOBoard
 */
typedef struct neo_msgs2__msg__IOBoard
{
  std_msgs__msg__Header header;
  /// state for all digital inputs
  bool digital_inputs[16];
  /// state for all digital outputs
  bool digital_outputs[16];
  /// analog input values
  int16_t analog_inputs[8];
} neo_msgs2__msg__IOBoard;

// Struct for a sequence of neo_msgs2__msg__IOBoard.
typedef struct neo_msgs2__msg__IOBoard__Sequence
{
  neo_msgs2__msg__IOBoard * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__IOBoard__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__IO_BOARD__STRUCT_H_

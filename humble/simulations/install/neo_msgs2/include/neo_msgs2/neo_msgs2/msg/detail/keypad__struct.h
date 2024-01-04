// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/Keypad.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__KEYPAD__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__KEYPAD__STRUCT_H_

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

/// Struct defined in msg/Keypad in the package neo_msgs2.
typedef struct neo_msgs2__msg__Keypad
{
  std_msgs__msg__Header header;
  /// 5 button keypad
  bool button[5];
} neo_msgs2__msg__Keypad;

// Struct for a sequence of neo_msgs2__msg__Keypad.
typedef struct neo_msgs2__msg__Keypad__Sequence
{
  neo_msgs2__msg__Keypad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__Keypad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__KEYPAD__STRUCT_H_

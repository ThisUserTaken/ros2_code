// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/LCDOutput.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__STRUCT_H_

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
// Member 'msg_line'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LCDOutput in the package neo_msgs2.
typedef struct neo_msgs2__msg__LCDOutput
{
  std_msgs__msg__Header header;
  /// in mode 1 msg_lines size is limited to 20 chars
  /// in mode 2 msg_lines size is limited to 60 chars
  rosidl_runtime_c__String msg_line;
} neo_msgs2__msg__LCDOutput;

// Struct for a sequence of neo_msgs2__msg__LCDOutput.
typedef struct neo_msgs2__msg__LCDOutput__Sequence
{
  neo_msgs2__msg__LCDOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__LCDOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__STRUCT_H_

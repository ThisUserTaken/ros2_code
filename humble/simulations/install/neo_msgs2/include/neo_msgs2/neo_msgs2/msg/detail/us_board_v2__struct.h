// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/USBoardV2.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__US_BOARD_V2__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__US_BOARD_V2__STRUCT_H_

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

/// Struct defined in msg/USBoardV2 in the package neo_msgs2.
/**
  * This message holds all data available from Neobotix USBoard
 */
typedef struct neo_msgs2__msg__USBoardV2
{
  std_msgs__msg__Header header;
  /// sensor measurement
  float sensor[16];
  /// analogue input
  int16_t analog[4];
  /// active
  bool active[16];
} neo_msgs2__msg__USBoardV2;

// Struct for a sequence of neo_msgs2__msg__USBoardV2.
typedef struct neo_msgs2__msg__USBoardV2__Sequence
{
  neo_msgs2__msg__USBoardV2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__USBoardV2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__US_BOARD_V2__STRUCT_H_

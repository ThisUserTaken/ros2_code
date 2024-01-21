// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/RelayBoardV3.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'firmware_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RelayBoardV3 in the package neo_msgs2.
typedef struct neo_msgs2__msg__RelayBoardV3
{
  /// POSIX timestamp
  double time;
  /// firmware version
  rosidl_runtime_c__String firmware_version;
  /// time since last module restart / reconfig
  double uptime;
  /// Ambient temperature inside the platform in.
  float ambient_temperature;
  /// state for each relay on RelayBoardV3; True = Active; False = Inactive
  bool relay_states[4];
  /// state for each digital inputs on RelayBoardV3; True = Active; False = Inactive
  bool digital_input_states[4];
  /// state for each keyboard buttons on RelayBoardV3; True = Active; False = Inactive
  bool keypad_button_states[4];
  /// state of the key
  bool key_switch_off_state;
  /// state of the entire robot
  bool release_structure_state;
} neo_msgs2__msg__RelayBoardV3;

// Struct for a sequence of neo_msgs2__msg__RelayBoardV3.
typedef struct neo_msgs2__msg__RelayBoardV3__Sequence
{
  neo_msgs2__msg__RelayBoardV3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__RelayBoardV3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__STRUCT_H_

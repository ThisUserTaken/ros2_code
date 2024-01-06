// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/SafetyState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SafetyState in the package neo_msgs2.
typedef struct neo_msgs2__msg__SafetyState
{
  /// POSIX timestamp
  double time;
  /// fieldset ID
  uint8_t current_safety_field;
  /// 0 to 7
  bool triggered_cutoff_paths[7];
} neo_msgs2__msg__SafetyState;

// Struct for a sequence of neo_msgs2__msg__SafetyState.
typedef struct neo_msgs2__msg__SafetyState__Sequence
{
  neo_msgs2__msg__SafetyState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__SafetyState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__STRUCT_H_

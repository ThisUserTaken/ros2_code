// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/KinematicsState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/KinematicsState in the package neo_msgs2.
typedef struct neo_msgs2__msg__KinematicsState
{
  /// POSIX timestamp
  double time;
  /// check if we are sending velocity commands
  bool is_vel_cmd;
  /// check if we are moving
  bool is_moving;
} neo_msgs2__msg__KinematicsState;

// Struct for a sequence of neo_msgs2__msg__KinematicsState.
typedef struct neo_msgs2__msg__KinematicsState__Sequence
{
  neo_msgs2__msg__KinematicsState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__KinematicsState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/EmergencyStopState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EMFREE'.
/**
  * Possible EMStop States
  * system operatign normal
 */
enum
{
  neo_msgs2__msg__EmergencyStopState__EMFREE = 0
};

/// Constant 'EMSTOP'.
/**
  * emergency stop is active (Button pressed; obstacle in safety field of scanner)
 */
enum
{
  neo_msgs2__msg__EmergencyStopState__EMSTOP = 1
};

/// Constant 'EMCONFIRMED'.
/**
  * emergency stop was confirmed system is reinitializing and going back to normal
 */
enum
{
  neo_msgs2__msg__EmergencyStopState__EMCONFIRMED = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/EmergencyStopState in the package neo_msgs2.
/**
  * This message holds the emergency stop (EMStop) status of the robot. It detects wether an EMStop is caused by the safety laserscanner or the emergency stop buttons. Moreover, it gives signalizes wether the EMStop was confirmed (after Button press stop) and the system is free again.
 */
typedef struct neo_msgs2__msg__EmergencyStopState
{
  std_msgs__msg__Header header;
  /// true = emergency stop signal is issued by button pressed
  bool emergency_button_stop;
  /// true = emergency stop signal is issued by scanner
  bool scanner_stop;
  /// true = emergency stop signal issued by some ROS-node
  bool software_stop;
  /// state (including confimation by key-switch), values see above
  int16_t emergency_state;
} neo_msgs2__msg__EmergencyStopState;

// Struct for a sequence of neo_msgs2__msg__EmergencyStopState.
typedef struct neo_msgs2__msg__EmergencyStopState__Sequence
{
  neo_msgs2__msg__EmergencyStopState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__EmergencyStopState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__STRUCT_H_

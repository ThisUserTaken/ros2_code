// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from depthai_ros_msgs:msg/ImuWithMagneticField.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__STRUCT_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__STRUCT_H_

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
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.h"
// Member 'field'
#include "sensor_msgs/msg/detail/magnetic_field__struct.h"

/// Struct defined in msg/ImuWithMagneticField in the package depthai_ros_msgs.
typedef struct depthai_ros_msgs__msg__ImuWithMagneticField
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Imu imu;
  sensor_msgs__msg__MagneticField field;
} depthai_ros_msgs__msg__ImuWithMagneticField;

// Struct for a sequence of depthai_ros_msgs__msg__ImuWithMagneticField.
typedef struct depthai_ros_msgs__msg__ImuWithMagneticField__Sequence
{
  depthai_ros_msgs__msg__ImuWithMagneticField * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__msg__ImuWithMagneticField__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__STRUCT_H_

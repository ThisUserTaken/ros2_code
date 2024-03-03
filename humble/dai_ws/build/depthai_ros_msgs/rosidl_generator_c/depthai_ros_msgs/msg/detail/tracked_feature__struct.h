// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from depthai_ros_msgs:msg/TrackedFeature.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__STRUCT_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__STRUCT_H_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/TrackedFeature in the package depthai_ros_msgs.
typedef struct depthai_ros_msgs__msg__TrackedFeature
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point position;
  uint32_t id;
  uint32_t age;
  float harris_score;
  float tracking_error;
} depthai_ros_msgs__msg__TrackedFeature;

// Struct for a sequence of depthai_ros_msgs__msg__TrackedFeature.
typedef struct depthai_ros_msgs__msg__TrackedFeature__Sequence
{
  depthai_ros_msgs__msg__TrackedFeature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__msg__TrackedFeature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__STRUCT_H_

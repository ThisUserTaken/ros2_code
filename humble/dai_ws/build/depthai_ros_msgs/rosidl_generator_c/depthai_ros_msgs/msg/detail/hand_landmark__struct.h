// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from depthai_ros_msgs:msg/HandLandmark.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__STRUCT_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'landmark'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/HandLandmark in the package depthai_ros_msgs.
typedef struct depthai_ros_msgs__msg__HandLandmark
{
  /// Center of the
  rosidl_runtime_c__String label;
  /// Landmarks score.
  float lm_score;
  geometry_msgs__msg__Pose2D__Sequence landmark;
  geometry_msgs__msg__Point position;
  bool is_spatial;
} depthai_ros_msgs__msg__HandLandmark;

// Struct for a sequence of depthai_ros_msgs__msg__HandLandmark.
typedef struct depthai_ros_msgs__msg__HandLandmark__Sequence
{
  depthai_ros_msgs__msg__HandLandmark * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__msg__HandLandmark__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__STRUCT_H_

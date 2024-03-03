// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from depthai_ros_msgs:msg/TrackedFeatures.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURES__STRUCT_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURES__STRUCT_H_

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
// Member 'features'
#include "depthai_ros_msgs/msg/detail/tracked_feature__struct.h"

/// Struct defined in msg/TrackedFeatures in the package depthai_ros_msgs.
typedef struct depthai_ros_msgs__msg__TrackedFeatures
{
  std_msgs__msg__Header header;
  depthai_ros_msgs__msg__TrackedFeature__Sequence features;
} depthai_ros_msgs__msg__TrackedFeatures;

// Struct for a sequence of depthai_ros_msgs__msg__TrackedFeatures.
typedef struct depthai_ros_msgs__msg__TrackedFeatures__Sequence
{
  depthai_ros_msgs__msg__TrackedFeatures * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__msg__TrackedFeatures__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURES__STRUCT_H_

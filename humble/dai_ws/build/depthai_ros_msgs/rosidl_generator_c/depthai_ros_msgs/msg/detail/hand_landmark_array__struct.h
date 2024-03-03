// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from depthai_ros_msgs:msg/HandLandmarkArray.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__STRUCT_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__STRUCT_H_

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
// Member 'landmarks'
#include "depthai_ros_msgs/msg/detail/hand_landmark__struct.h"

/// Struct defined in msg/HandLandmarkArray in the package depthai_ros_msgs.
/**
  * A list of hand landmark detections
 */
typedef struct depthai_ros_msgs__msg__HandLandmarkArray
{
  std_msgs__msg__Header header;
  /// A list of the detected proposals. A multi-proposal detector might generate along with the 3D depth information
  ///   this list with many candidate detections generated from a single input.
  depthai_ros_msgs__msg__HandLandmark__Sequence landmarks;
} depthai_ros_msgs__msg__HandLandmarkArray;

// Struct for a sequence of depthai_ros_msgs__msg__HandLandmarkArray.
typedef struct depthai_ros_msgs__msg__HandLandmarkArray__Sequence
{
  depthai_ros_msgs__msg__HandLandmarkArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__msg__HandLandmarkArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__STRUCT_H_

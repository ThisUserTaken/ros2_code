// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__STRUCT_H_
#define DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'top_left'
// Member 'bottom_right'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in srv/NormalizedImageCrop in the package depthai_ros_msgs.
typedef struct depthai_ros_msgs__srv__NormalizedImageCrop_Request
{
  geometry_msgs__msg__Pose2D top_left;
  geometry_msgs__msg__Pose2D bottom_right;
} depthai_ros_msgs__srv__NormalizedImageCrop_Request;

// Struct for a sequence of depthai_ros_msgs__srv__NormalizedImageCrop_Request.
typedef struct depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/NormalizedImageCrop in the package depthai_ros_msgs.
typedef struct depthai_ros_msgs__srv__NormalizedImageCrop_Response
{
  int64_t status;
} depthai_ros_msgs__srv__NormalizedImageCrop_Response;

// Struct for a sequence of depthai_ros_msgs__srv__NormalizedImageCrop_Response.
typedef struct depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__STRUCT_H_

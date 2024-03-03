// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__STRUCT_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AF_MODE_AUTO'.
enum
{
  depthai_ros_msgs__msg__AutoFocusCtrl__AF_MODE_AUTO = 0
};

/// Constant 'AF_MODE_MACRO'.
enum
{
  depthai_ros_msgs__msg__AutoFocusCtrl__AF_MODE_MACRO = 1
};

/// Constant 'AF_MODE_CONTINUOUS_VIDEO'.
enum
{
  depthai_ros_msgs__msg__AutoFocusCtrl__AF_MODE_CONTINUOUS_VIDEO = 2
};

/// Constant 'AF_MODE_CONTINUOUS_PICTURE'.
enum
{
  depthai_ros_msgs__msg__AutoFocusCtrl__AF_MODE_CONTINUOUS_PICTURE = 3
};

/// Constant 'AF_MODE_EDOF'.
enum
{
  depthai_ros_msgs__msg__AutoFocusCtrl__AF_MODE_EDOF = 4
};

/// Struct defined in msg/AutoFocusCtrl in the package depthai_ros_msgs.
typedef struct depthai_ros_msgs__msg__AutoFocusCtrl
{
  uint8_t auto_focus_mode;
  bool trigger_auto_focus;
} depthai_ros_msgs__msg__AutoFocusCtrl;

// Struct for a sequence of depthai_ros_msgs__msg__AutoFocusCtrl.
typedef struct depthai_ros_msgs__msg__AutoFocusCtrl__Sequence
{
  depthai_ros_msgs__msg__AutoFocusCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__msg__AutoFocusCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from depthai_ros_msgs:msg/HandLandmark.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__FUNCTIONS_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "depthai_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "depthai_ros_msgs/msg/detail/hand_landmark__struct.h"

/// Initialize msg/HandLandmark message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * depthai_ros_msgs__msg__HandLandmark
 * )) before or use
 * depthai_ros_msgs__msg__HandLandmark__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__HandLandmark__init(depthai_ros_msgs__msg__HandLandmark * msg);

/// Finalize msg/HandLandmark message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__HandLandmark__fini(depthai_ros_msgs__msg__HandLandmark * msg);

/// Create msg/HandLandmark message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * depthai_ros_msgs__msg__HandLandmark__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__msg__HandLandmark *
depthai_ros_msgs__msg__HandLandmark__create();

/// Destroy msg/HandLandmark message.
/**
 * It calls
 * depthai_ros_msgs__msg__HandLandmark__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__HandLandmark__destroy(depthai_ros_msgs__msg__HandLandmark * msg);

/// Check for msg/HandLandmark message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__HandLandmark__are_equal(const depthai_ros_msgs__msg__HandLandmark * lhs, const depthai_ros_msgs__msg__HandLandmark * rhs);

/// Copy a msg/HandLandmark message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__HandLandmark__copy(
  const depthai_ros_msgs__msg__HandLandmark * input,
  depthai_ros_msgs__msg__HandLandmark * output);

/// Initialize array of msg/HandLandmark messages.
/**
 * It allocates the memory for the number of elements and calls
 * depthai_ros_msgs__msg__HandLandmark__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__HandLandmark__Sequence__init(depthai_ros_msgs__msg__HandLandmark__Sequence * array, size_t size);

/// Finalize array of msg/HandLandmark messages.
/**
 * It calls
 * depthai_ros_msgs__msg__HandLandmark__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__HandLandmark__Sequence__fini(depthai_ros_msgs__msg__HandLandmark__Sequence * array);

/// Create array of msg/HandLandmark messages.
/**
 * It allocates the memory for the array and calls
 * depthai_ros_msgs__msg__HandLandmark__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__msg__HandLandmark__Sequence *
depthai_ros_msgs__msg__HandLandmark__Sequence__create(size_t size);

/// Destroy array of msg/HandLandmark messages.
/**
 * It calls
 * depthai_ros_msgs__msg__HandLandmark__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__HandLandmark__Sequence__destroy(depthai_ros_msgs__msg__HandLandmark__Sequence * array);

/// Check for msg/HandLandmark message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__HandLandmark__Sequence__are_equal(const depthai_ros_msgs__msg__HandLandmark__Sequence * lhs, const depthai_ros_msgs__msg__HandLandmark__Sequence * rhs);

/// Copy an array of msg/HandLandmark messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__HandLandmark__Sequence__copy(
  const depthai_ros_msgs__msg__HandLandmark__Sequence * input,
  depthai_ros_msgs__msg__HandLandmark__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__FUNCTIONS_H_

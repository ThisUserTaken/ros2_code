// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from depthai_ros_msgs:msg/TrackedFeature.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__FUNCTIONS_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "depthai_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "depthai_ros_msgs/msg/detail/tracked_feature__struct.h"

/// Initialize msg/TrackedFeature message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * depthai_ros_msgs__msg__TrackedFeature
 * )) before or use
 * depthai_ros_msgs__msg__TrackedFeature__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__TrackedFeature__init(depthai_ros_msgs__msg__TrackedFeature * msg);

/// Finalize msg/TrackedFeature message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__TrackedFeature__fini(depthai_ros_msgs__msg__TrackedFeature * msg);

/// Create msg/TrackedFeature message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * depthai_ros_msgs__msg__TrackedFeature__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__msg__TrackedFeature *
depthai_ros_msgs__msg__TrackedFeature__create();

/// Destroy msg/TrackedFeature message.
/**
 * It calls
 * depthai_ros_msgs__msg__TrackedFeature__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__TrackedFeature__destroy(depthai_ros_msgs__msg__TrackedFeature * msg);

/// Check for msg/TrackedFeature message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__TrackedFeature__are_equal(const depthai_ros_msgs__msg__TrackedFeature * lhs, const depthai_ros_msgs__msg__TrackedFeature * rhs);

/// Copy a msg/TrackedFeature message.
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
depthai_ros_msgs__msg__TrackedFeature__copy(
  const depthai_ros_msgs__msg__TrackedFeature * input,
  depthai_ros_msgs__msg__TrackedFeature * output);

/// Initialize array of msg/TrackedFeature messages.
/**
 * It allocates the memory for the number of elements and calls
 * depthai_ros_msgs__msg__TrackedFeature__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__TrackedFeature__Sequence__init(depthai_ros_msgs__msg__TrackedFeature__Sequence * array, size_t size);

/// Finalize array of msg/TrackedFeature messages.
/**
 * It calls
 * depthai_ros_msgs__msg__TrackedFeature__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__TrackedFeature__Sequence__fini(depthai_ros_msgs__msg__TrackedFeature__Sequence * array);

/// Create array of msg/TrackedFeature messages.
/**
 * It allocates the memory for the array and calls
 * depthai_ros_msgs__msg__TrackedFeature__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__msg__TrackedFeature__Sequence *
depthai_ros_msgs__msg__TrackedFeature__Sequence__create(size_t size);

/// Destroy array of msg/TrackedFeature messages.
/**
 * It calls
 * depthai_ros_msgs__msg__TrackedFeature__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__TrackedFeature__Sequence__destroy(depthai_ros_msgs__msg__TrackedFeature__Sequence * array);

/// Check for msg/TrackedFeature message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__TrackedFeature__Sequence__are_equal(const depthai_ros_msgs__msg__TrackedFeature__Sequence * lhs, const depthai_ros_msgs__msg__TrackedFeature__Sequence * rhs);

/// Copy an array of msg/TrackedFeature messages.
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
depthai_ros_msgs__msg__TrackedFeature__Sequence__copy(
  const depthai_ros_msgs__msg__TrackedFeature__Sequence * input,
  depthai_ros_msgs__msg__TrackedFeature__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__FUNCTIONS_H_

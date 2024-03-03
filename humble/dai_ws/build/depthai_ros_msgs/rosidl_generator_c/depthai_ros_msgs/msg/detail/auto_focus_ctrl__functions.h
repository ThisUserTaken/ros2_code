// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__FUNCTIONS_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "depthai_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "depthai_ros_msgs/msg/detail/auto_focus_ctrl__struct.h"

/// Initialize msg/AutoFocusCtrl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * depthai_ros_msgs__msg__AutoFocusCtrl
 * )) before or use
 * depthai_ros_msgs__msg__AutoFocusCtrl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__AutoFocusCtrl__init(depthai_ros_msgs__msg__AutoFocusCtrl * msg);

/// Finalize msg/AutoFocusCtrl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__AutoFocusCtrl__fini(depthai_ros_msgs__msg__AutoFocusCtrl * msg);

/// Create msg/AutoFocusCtrl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * depthai_ros_msgs__msg__AutoFocusCtrl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__msg__AutoFocusCtrl *
depthai_ros_msgs__msg__AutoFocusCtrl__create();

/// Destroy msg/AutoFocusCtrl message.
/**
 * It calls
 * depthai_ros_msgs__msg__AutoFocusCtrl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__AutoFocusCtrl__destroy(depthai_ros_msgs__msg__AutoFocusCtrl * msg);

/// Check for msg/AutoFocusCtrl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__AutoFocusCtrl__are_equal(const depthai_ros_msgs__msg__AutoFocusCtrl * lhs, const depthai_ros_msgs__msg__AutoFocusCtrl * rhs);

/// Copy a msg/AutoFocusCtrl message.
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
depthai_ros_msgs__msg__AutoFocusCtrl__copy(
  const depthai_ros_msgs__msg__AutoFocusCtrl * input,
  depthai_ros_msgs__msg__AutoFocusCtrl * output);

/// Initialize array of msg/AutoFocusCtrl messages.
/**
 * It allocates the memory for the number of elements and calls
 * depthai_ros_msgs__msg__AutoFocusCtrl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__init(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array, size_t size);

/// Finalize array of msg/AutoFocusCtrl messages.
/**
 * It calls
 * depthai_ros_msgs__msg__AutoFocusCtrl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__fini(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array);

/// Create array of msg/AutoFocusCtrl messages.
/**
 * It allocates the memory for the array and calls
 * depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence *
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__create(size_t size);

/// Destroy array of msg/AutoFocusCtrl messages.
/**
 * It calls
 * depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__destroy(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array);

/// Check for msg/AutoFocusCtrl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__are_equal(const depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * lhs, const depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * rhs);

/// Copy an array of msg/AutoFocusCtrl messages.
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
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__copy(
  const depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * input,
  depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__FUNCTIONS_H_

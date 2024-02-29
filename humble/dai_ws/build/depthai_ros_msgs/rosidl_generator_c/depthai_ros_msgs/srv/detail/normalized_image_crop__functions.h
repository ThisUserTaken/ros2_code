// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__FUNCTIONS_H_
#define DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "depthai_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.h"

/// Initialize srv/NormalizedImageCrop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * depthai_ros_msgs__srv__NormalizedImageCrop_Request
 * )) before or use
 * depthai_ros_msgs__srv__NormalizedImageCrop_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__srv__NormalizedImageCrop_Request__init(depthai_ros_msgs__srv__NormalizedImageCrop_Request * msg);

/// Finalize srv/NormalizedImageCrop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini(depthai_ros_msgs__srv__NormalizedImageCrop_Request * msg);

/// Create srv/NormalizedImageCrop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__srv__NormalizedImageCrop_Request *
depthai_ros_msgs__srv__NormalizedImageCrop_Request__create();

/// Destroy srv/NormalizedImageCrop message.
/**
 * It calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__srv__NormalizedImageCrop_Request__destroy(depthai_ros_msgs__srv__NormalizedImageCrop_Request * msg);

/// Check for srv/NormalizedImageCrop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__srv__NormalizedImageCrop_Request__are_equal(const depthai_ros_msgs__srv__NormalizedImageCrop_Request * lhs, const depthai_ros_msgs__srv__NormalizedImageCrop_Request * rhs);

/// Copy a srv/NormalizedImageCrop message.
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
depthai_ros_msgs__srv__NormalizedImageCrop_Request__copy(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request * input,
  depthai_ros_msgs__srv__NormalizedImageCrop_Request * output);

/// Initialize array of srv/NormalizedImageCrop messages.
/**
 * It allocates the memory for the number of elements and calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__init(depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * array, size_t size);

/// Finalize array of srv/NormalizedImageCrop messages.
/**
 * It calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__fini(depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * array);

/// Create array of srv/NormalizedImageCrop messages.
/**
 * It allocates the memory for the array and calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence *
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__create(size_t size);

/// Destroy array of srv/NormalizedImageCrop messages.
/**
 * It calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__destroy(depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * array);

/// Check for srv/NormalizedImageCrop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__are_equal(const depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * lhs, const depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * rhs);

/// Copy an array of srv/NormalizedImageCrop messages.
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
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__copy(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * input,
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * output);

/// Initialize srv/NormalizedImageCrop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * depthai_ros_msgs__srv__NormalizedImageCrop_Response
 * )) before or use
 * depthai_ros_msgs__srv__NormalizedImageCrop_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__srv__NormalizedImageCrop_Response__init(depthai_ros_msgs__srv__NormalizedImageCrop_Response * msg);

/// Finalize srv/NormalizedImageCrop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__srv__NormalizedImageCrop_Response__fini(depthai_ros_msgs__srv__NormalizedImageCrop_Response * msg);

/// Create srv/NormalizedImageCrop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__srv__NormalizedImageCrop_Response *
depthai_ros_msgs__srv__NormalizedImageCrop_Response__create();

/// Destroy srv/NormalizedImageCrop message.
/**
 * It calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__srv__NormalizedImageCrop_Response__destroy(depthai_ros_msgs__srv__NormalizedImageCrop_Response * msg);

/// Check for srv/NormalizedImageCrop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__srv__NormalizedImageCrop_Response__are_equal(const depthai_ros_msgs__srv__NormalizedImageCrop_Response * lhs, const depthai_ros_msgs__srv__NormalizedImageCrop_Response * rhs);

/// Copy a srv/NormalizedImageCrop message.
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
depthai_ros_msgs__srv__NormalizedImageCrop_Response__copy(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response * input,
  depthai_ros_msgs__srv__NormalizedImageCrop_Response * output);

/// Initialize array of srv/NormalizedImageCrop messages.
/**
 * It allocates the memory for the number of elements and calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__init(depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * array, size_t size);

/// Finalize array of srv/NormalizedImageCrop messages.
/**
 * It calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__fini(depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * array);

/// Create array of srv/NormalizedImageCrop messages.
/**
 * It allocates the memory for the array and calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence *
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__create(size_t size);

/// Destroy array of srv/NormalizedImageCrop messages.
/**
 * It calls
 * depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__destroy(depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * array);

/// Check for srv/NormalizedImageCrop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__are_equal(const depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * lhs, const depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * rhs);

/// Copy an array of srv/NormalizedImageCrop messages.
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
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__copy(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * input,
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__FUNCTIONS_H_

// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from neo_msgs2:msg/LCDOutput.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__FUNCTIONS_H_
#define NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "neo_msgs2/msg/rosidl_generator_c__visibility_control.h"

#include "neo_msgs2/msg/detail/lcd_output__struct.h"

/// Initialize msg/LCDOutput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * neo_msgs2__msg__LCDOutput
 * )) before or use
 * neo_msgs2__msg__LCDOutput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__LCDOutput__init(neo_msgs2__msg__LCDOutput * msg);

/// Finalize msg/LCDOutput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
void
neo_msgs2__msg__LCDOutput__fini(neo_msgs2__msg__LCDOutput * msg);

/// Create msg/LCDOutput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * neo_msgs2__msg__LCDOutput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
neo_msgs2__msg__LCDOutput *
neo_msgs2__msg__LCDOutput__create();

/// Destroy msg/LCDOutput message.
/**
 * It calls
 * neo_msgs2__msg__LCDOutput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
void
neo_msgs2__msg__LCDOutput__destroy(neo_msgs2__msg__LCDOutput * msg);

/// Check for msg/LCDOutput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__LCDOutput__are_equal(const neo_msgs2__msg__LCDOutput * lhs, const neo_msgs2__msg__LCDOutput * rhs);

/// Copy a msg/LCDOutput message.
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
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__LCDOutput__copy(
  const neo_msgs2__msg__LCDOutput * input,
  neo_msgs2__msg__LCDOutput * output);

/// Initialize array of msg/LCDOutput messages.
/**
 * It allocates the memory for the number of elements and calls
 * neo_msgs2__msg__LCDOutput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__LCDOutput__Sequence__init(neo_msgs2__msg__LCDOutput__Sequence * array, size_t size);

/// Finalize array of msg/LCDOutput messages.
/**
 * It calls
 * neo_msgs2__msg__LCDOutput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
void
neo_msgs2__msg__LCDOutput__Sequence__fini(neo_msgs2__msg__LCDOutput__Sequence * array);

/// Create array of msg/LCDOutput messages.
/**
 * It allocates the memory for the array and calls
 * neo_msgs2__msg__LCDOutput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
neo_msgs2__msg__LCDOutput__Sequence *
neo_msgs2__msg__LCDOutput__Sequence__create(size_t size);

/// Destroy array of msg/LCDOutput messages.
/**
 * It calls
 * neo_msgs2__msg__LCDOutput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
void
neo_msgs2__msg__LCDOutput__Sequence__destroy(neo_msgs2__msg__LCDOutput__Sequence * array);

/// Check for msg/LCDOutput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__LCDOutput__Sequence__are_equal(const neo_msgs2__msg__LCDOutput__Sequence * lhs, const neo_msgs2__msg__LCDOutput__Sequence * rhs);

/// Copy an array of msg/LCDOutput messages.
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
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__LCDOutput__Sequence__copy(
  const neo_msgs2__msg__LCDOutput__Sequence * input,
  neo_msgs2__msg__LCDOutput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__FUNCTIONS_H_

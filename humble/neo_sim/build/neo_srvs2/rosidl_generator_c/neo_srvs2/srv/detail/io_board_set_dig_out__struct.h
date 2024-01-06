// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_srvs2:srv/IOBoardSetDigOut.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__IO_BOARD_SET_DIG_OUT__STRUCT_H_
#define NEO_SRVS2__SRV__DETAIL__IO_BOARD_SET_DIG_OUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IOBoardSetDigOut in the package neo_srvs2.
typedef struct neo_srvs2__srv__IOBoardSetDigOut_Request
{
  int16_t id;
  bool state;
} neo_srvs2__srv__IOBoardSetDigOut_Request;

// Struct for a sequence of neo_srvs2__srv__IOBoardSetDigOut_Request.
typedef struct neo_srvs2__srv__IOBoardSetDigOut_Request__Sequence
{
  neo_srvs2__srv__IOBoardSetDigOut_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__IOBoardSetDigOut_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/IOBoardSetDigOut in the package neo_srvs2.
typedef struct neo_srvs2__srv__IOBoardSetDigOut_Response
{
  bool success;
} neo_srvs2__srv__IOBoardSetDigOut_Response;

// Struct for a sequence of neo_srvs2__srv__IOBoardSetDigOut_Response.
typedef struct neo_srvs2__srv__IOBoardSetDigOut_Response__Sequence
{
  neo_srvs2__srv__IOBoardSetDigOut_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__IOBoardSetDigOut_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_SRVS2__SRV__DETAIL__IO_BOARD_SET_DIG_OUT__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_srvs2:srv/USBoardToggleSensor.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__US_BOARD_TOGGLE_SENSOR__STRUCT_H_
#define NEO_SRVS2__SRV__DETAIL__US_BOARD_TOGGLE_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/USBoardToggleSensor in the package neo_srvs2.
typedef struct neo_srvs2__srv__USBoardToggleSensor_Request
{
  bool state[16];
} neo_srvs2__srv__USBoardToggleSensor_Request;

// Struct for a sequence of neo_srvs2__srv__USBoardToggleSensor_Request.
typedef struct neo_srvs2__srv__USBoardToggleSensor_Request__Sequence
{
  neo_srvs2__srv__USBoardToggleSensor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__USBoardToggleSensor_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/USBoardToggleSensor in the package neo_srvs2.
typedef struct neo_srvs2__srv__USBoardToggleSensor_Response
{
  bool success;
} neo_srvs2__srv__USBoardToggleSensor_Response;

// Struct for a sequence of neo_srvs2__srv__USBoardToggleSensor_Response.
typedef struct neo_srvs2__srv__USBoardToggleSensor_Response__Sequence
{
  neo_srvs2__srv__USBoardToggleSensor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__USBoardToggleSensor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_SRVS2__SRV__DETAIL__US_BOARD_TOGGLE_SENSOR__STRUCT_H_

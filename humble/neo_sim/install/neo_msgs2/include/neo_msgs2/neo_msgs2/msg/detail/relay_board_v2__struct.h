// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/RelayBoardV2.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CS_NOT_ESTABLISHED'.
/**
  * Possible Communication States
  * configuration process has not been started
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CS_NOT_ESTABLISHED = 0
};

/// Constant 'CS_CONFIGURATION_FAILED'.
/**
  * configuration process failed
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CS_CONFIGURATION_FAILED = 1
};

/// Constant 'CS_OK'.
/**
  * communication is OK
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CS_OK = 2
};

/// Constant 'CS_LOST'.
/**
  * comminication was lost
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CS_LOST = 3
};

/// Constant 'CS_ERROR'.
/**
  * comminication has errors
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CS_ERROR = 4
};

/// Constant 'CHS_NOTCHARGING'.
/**
  * Possible Charging States
  * no charging in progress; can be started with service /RelayBoardV2/StartCharging
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CHS_NOTCHARGING = 0
};

/// Constant 'CHS_START_CHARGING'.
/**
  * RelayBoardV2 is starting charging process
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CHS_START_CHARGING = 1
};

/// Constant 'CHS_CHARGING'.
/**
  * charging in progress; can be stopped with service /RelayBoardV2/StopCharging
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CHS_CHARGING = 2
};

/// Constant 'CHS_NO_CHARGER'.
/**
  * charging has been started but no charger was connected; this aborts charging
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CHS_NO_CHARGER = 3
};

/// Constant 'CHS_BRAKES_OPEN'.
/**
  * brakes have been opened while charging; this aborts charging
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CHS_BRAKES_OPEN = 4
};

/// Constant 'CHS_EMSTOP'.
/**
  * EMSTOP has been issued while charging; this aborts charging
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CHS_EMSTOP = 5
};

/// Constant 'CHS_ABORT'.
/**
  * charging abort by host system
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CHS_ABORT = 6
};

/// Constant 'CHS_FINISHED'.
/**
  * charging finished
 */
enum
{
  neo_msgs2__msg__RelayBoardV2__CHS_FINISHED = 7
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RelayBoardV2 in the package neo_msgs2.
/**
  * This message holds specific data available from Neobotix RelayBoardV2
 */
typedef struct neo_msgs2__msg__RelayBoardV2
{
  std_msgs__msg__Header header;
  /// Shows state for all possible errors
  /// relayboardv2_state[0] if true no errors; if false check other fields
  /// relayboardv2_state[1] if true charging relay error; check robot hardware
  /// relayboardv2_state[2] if true release brakes button failed; check robot hardware
  /// relayboardv2_state[3] if true motor error; check robot hardware
  /// relayboardv2_state[4] if true safety relay error; check robot hardware
  /// relayboardv2_state[5] if true Leistungsrelais error; check robot hardware
  /// relayboardv2_state[6] if true EMStop system error; check robot hardware
  /// relayboardv2_state[7] reserved
  /// relayboardv2_state[8] reserved
  /// relayboardv2_state[9] reserved
  /// relayboardv2_state[10] reserved
  /// relayboardv2_state[11] reserved
  /// relayboardv2_state[12] reserved
  /// relayboardv2_state[13] reserved
  /// relayboardv2_state[14] reserved
  /// relayboardv2_state[15] reserved
  bool relayboardv2_state[16];
  /// values see above
  int16_t communication_state;
  /// values see above
  int16_t charging_state;
  /// temperature on relayboardv2
  int16_t temperature;
  /// battery voltage
  float battery_voltage;
  /// charging current if not charging = 0
  float charging_current;
  /// state for each relay on RelayBoardV2; True = Active; False = Inactive
  /// relay_states is our charging relay
  /// other are free to use
  bool relay_states[4];
  /// state for each key on keypad; True = Pressed
  /// keypad[0] info button
  /// keypad[1] home button
  /// keypad[2] start button
  /// keypad[3] stop button
  /// keypad[4] release brakes button
  /// keypad[5] on demand digital input
  /// keypad[6] on demand digital input
  /// keypad[7] on demand digital input
  bool keypad[8];
  /// if true host system is asked to shut down
  bool shutdown;
} neo_msgs2__msg__RelayBoardV2;

// Struct for a sequence of neo_msgs2__msg__RelayBoardV2.
typedef struct neo_msgs2__msg__RelayBoardV2__Sequence
{
  neo_msgs2__msg__RelayBoardV2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__RelayBoardV2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__STRUCT_H_

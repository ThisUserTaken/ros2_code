// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/RelayBoardV3.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/relay_board_v3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_RelayBoardV3_release_structure_state
{
public:
  explicit Init_RelayBoardV3_release_structure_state(::neo_msgs2::msg::RelayBoardV3 & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::RelayBoardV3 release_structure_state(::neo_msgs2::msg::RelayBoardV3::_release_structure_state_type arg)
  {
    msg_.release_structure_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV3 msg_;
};

class Init_RelayBoardV3_key_switch_off_state
{
public:
  explicit Init_RelayBoardV3_key_switch_off_state(::neo_msgs2::msg::RelayBoardV3 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV3_release_structure_state key_switch_off_state(::neo_msgs2::msg::RelayBoardV3::_key_switch_off_state_type arg)
  {
    msg_.key_switch_off_state = std::move(arg);
    return Init_RelayBoardV3_release_structure_state(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV3 msg_;
};

class Init_RelayBoardV3_keypad_button_states
{
public:
  explicit Init_RelayBoardV3_keypad_button_states(::neo_msgs2::msg::RelayBoardV3 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV3_key_switch_off_state keypad_button_states(::neo_msgs2::msg::RelayBoardV3::_keypad_button_states_type arg)
  {
    msg_.keypad_button_states = std::move(arg);
    return Init_RelayBoardV3_key_switch_off_state(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV3 msg_;
};

class Init_RelayBoardV3_digital_input_states
{
public:
  explicit Init_RelayBoardV3_digital_input_states(::neo_msgs2::msg::RelayBoardV3 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV3_keypad_button_states digital_input_states(::neo_msgs2::msg::RelayBoardV3::_digital_input_states_type arg)
  {
    msg_.digital_input_states = std::move(arg);
    return Init_RelayBoardV3_keypad_button_states(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV3 msg_;
};

class Init_RelayBoardV3_relay_states
{
public:
  explicit Init_RelayBoardV3_relay_states(::neo_msgs2::msg::RelayBoardV3 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV3_digital_input_states relay_states(::neo_msgs2::msg::RelayBoardV3::_relay_states_type arg)
  {
    msg_.relay_states = std::move(arg);
    return Init_RelayBoardV3_digital_input_states(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV3 msg_;
};

class Init_RelayBoardV3_ambient_temperature
{
public:
  explicit Init_RelayBoardV3_ambient_temperature(::neo_msgs2::msg::RelayBoardV3 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV3_relay_states ambient_temperature(::neo_msgs2::msg::RelayBoardV3::_ambient_temperature_type arg)
  {
    msg_.ambient_temperature = std::move(arg);
    return Init_RelayBoardV3_relay_states(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV3 msg_;
};

class Init_RelayBoardV3_uptime
{
public:
  explicit Init_RelayBoardV3_uptime(::neo_msgs2::msg::RelayBoardV3 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV3_ambient_temperature uptime(::neo_msgs2::msg::RelayBoardV3::_uptime_type arg)
  {
    msg_.uptime = std::move(arg);
    return Init_RelayBoardV3_ambient_temperature(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV3 msg_;
};

class Init_RelayBoardV3_firmware_version
{
public:
  explicit Init_RelayBoardV3_firmware_version(::neo_msgs2::msg::RelayBoardV3 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV3_uptime firmware_version(::neo_msgs2::msg::RelayBoardV3::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_RelayBoardV3_uptime(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV3 msg_;
};

class Init_RelayBoardV3_time
{
public:
  Init_RelayBoardV3_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelayBoardV3_firmware_version time(::neo_msgs2::msg::RelayBoardV3::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_RelayBoardV3_firmware_version(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::RelayBoardV3>()
{
  return neo_msgs2::msg::builder::Init_RelayBoardV3_time();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__BUILDER_HPP_

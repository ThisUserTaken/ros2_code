// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/RelayBoardV2.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/relay_board_v2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_RelayBoardV2_shutdown
{
public:
  explicit Init_RelayBoardV2_shutdown(::neo_msgs2::msg::RelayBoardV2 & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::RelayBoardV2 shutdown(::neo_msgs2::msg::RelayBoardV2::_shutdown_type arg)
  {
    msg_.shutdown = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

class Init_RelayBoardV2_keypad
{
public:
  explicit Init_RelayBoardV2_keypad(::neo_msgs2::msg::RelayBoardV2 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV2_shutdown keypad(::neo_msgs2::msg::RelayBoardV2::_keypad_type arg)
  {
    msg_.keypad = std::move(arg);
    return Init_RelayBoardV2_shutdown(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

class Init_RelayBoardV2_relay_states
{
public:
  explicit Init_RelayBoardV2_relay_states(::neo_msgs2::msg::RelayBoardV2 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV2_keypad relay_states(::neo_msgs2::msg::RelayBoardV2::_relay_states_type arg)
  {
    msg_.relay_states = std::move(arg);
    return Init_RelayBoardV2_keypad(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

class Init_RelayBoardV2_charging_current
{
public:
  explicit Init_RelayBoardV2_charging_current(::neo_msgs2::msg::RelayBoardV2 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV2_relay_states charging_current(::neo_msgs2::msg::RelayBoardV2::_charging_current_type arg)
  {
    msg_.charging_current = std::move(arg);
    return Init_RelayBoardV2_relay_states(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

class Init_RelayBoardV2_battery_voltage
{
public:
  explicit Init_RelayBoardV2_battery_voltage(::neo_msgs2::msg::RelayBoardV2 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV2_charging_current battery_voltage(::neo_msgs2::msg::RelayBoardV2::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_RelayBoardV2_charging_current(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

class Init_RelayBoardV2_temperature
{
public:
  explicit Init_RelayBoardV2_temperature(::neo_msgs2::msg::RelayBoardV2 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV2_battery_voltage temperature(::neo_msgs2::msg::RelayBoardV2::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_RelayBoardV2_battery_voltage(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

class Init_RelayBoardV2_charging_state
{
public:
  explicit Init_RelayBoardV2_charging_state(::neo_msgs2::msg::RelayBoardV2 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV2_temperature charging_state(::neo_msgs2::msg::RelayBoardV2::_charging_state_type arg)
  {
    msg_.charging_state = std::move(arg);
    return Init_RelayBoardV2_temperature(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

class Init_RelayBoardV2_communication_state
{
public:
  explicit Init_RelayBoardV2_communication_state(::neo_msgs2::msg::RelayBoardV2 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV2_charging_state communication_state(::neo_msgs2::msg::RelayBoardV2::_communication_state_type arg)
  {
    msg_.communication_state = std::move(arg);
    return Init_RelayBoardV2_charging_state(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

class Init_RelayBoardV2_relayboardv2_state
{
public:
  explicit Init_RelayBoardV2_relayboardv2_state(::neo_msgs2::msg::RelayBoardV2 & msg)
  : msg_(msg)
  {}
  Init_RelayBoardV2_communication_state relayboardv2_state(::neo_msgs2::msg::RelayBoardV2::_relayboardv2_state_type arg)
  {
    msg_.relayboardv2_state = std::move(arg);
    return Init_RelayBoardV2_communication_state(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

class Init_RelayBoardV2_header
{
public:
  Init_RelayBoardV2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelayBoardV2_relayboardv2_state header(::neo_msgs2::msg::RelayBoardV2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RelayBoardV2_relayboardv2_state(msg_);
  }

private:
  ::neo_msgs2::msg::RelayBoardV2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::RelayBoardV2>()
{
  return neo_msgs2::msg::builder::Init_RelayBoardV2_header();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/EmergencyStopState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/emergency_stop_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_EmergencyStopState_emergency_state
{
public:
  explicit Init_EmergencyStopState_emergency_state(::neo_msgs2::msg::EmergencyStopState & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::EmergencyStopState emergency_state(::neo_msgs2::msg::EmergencyStopState::_emergency_state_type arg)
  {
    msg_.emergency_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::EmergencyStopState msg_;
};

class Init_EmergencyStopState_software_stop
{
public:
  explicit Init_EmergencyStopState_software_stop(::neo_msgs2::msg::EmergencyStopState & msg)
  : msg_(msg)
  {}
  Init_EmergencyStopState_emergency_state software_stop(::neo_msgs2::msg::EmergencyStopState::_software_stop_type arg)
  {
    msg_.software_stop = std::move(arg);
    return Init_EmergencyStopState_emergency_state(msg_);
  }

private:
  ::neo_msgs2::msg::EmergencyStopState msg_;
};

class Init_EmergencyStopState_scanner_stop
{
public:
  explicit Init_EmergencyStopState_scanner_stop(::neo_msgs2::msg::EmergencyStopState & msg)
  : msg_(msg)
  {}
  Init_EmergencyStopState_software_stop scanner_stop(::neo_msgs2::msg::EmergencyStopState::_scanner_stop_type arg)
  {
    msg_.scanner_stop = std::move(arg);
    return Init_EmergencyStopState_software_stop(msg_);
  }

private:
  ::neo_msgs2::msg::EmergencyStopState msg_;
};

class Init_EmergencyStopState_emergency_button_stop
{
public:
  explicit Init_EmergencyStopState_emergency_button_stop(::neo_msgs2::msg::EmergencyStopState & msg)
  : msg_(msg)
  {}
  Init_EmergencyStopState_scanner_stop emergency_button_stop(::neo_msgs2::msg::EmergencyStopState::_emergency_button_stop_type arg)
  {
    msg_.emergency_button_stop = std::move(arg);
    return Init_EmergencyStopState_scanner_stop(msg_);
  }

private:
  ::neo_msgs2::msg::EmergencyStopState msg_;
};

class Init_EmergencyStopState_header
{
public:
  Init_EmergencyStopState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyStopState_emergency_button_stop header(::neo_msgs2::msg::EmergencyStopState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EmergencyStopState_emergency_button_stop(msg_);
  }

private:
  ::neo_msgs2::msg::EmergencyStopState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::EmergencyStopState>()
{
  return neo_msgs2::msg::builder::Init_EmergencyStopState_header();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__BUILDER_HPP_

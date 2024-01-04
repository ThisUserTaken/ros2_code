// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/SafetyState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/safety_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_SafetyState_triggered_cutoff_paths
{
public:
  explicit Init_SafetyState_triggered_cutoff_paths(::neo_msgs2::msg::SafetyState & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::SafetyState triggered_cutoff_paths(::neo_msgs2::msg::SafetyState::_triggered_cutoff_paths_type arg)
  {
    msg_.triggered_cutoff_paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::SafetyState msg_;
};

class Init_SafetyState_current_safety_field
{
public:
  explicit Init_SafetyState_current_safety_field(::neo_msgs2::msg::SafetyState & msg)
  : msg_(msg)
  {}
  Init_SafetyState_triggered_cutoff_paths current_safety_field(::neo_msgs2::msg::SafetyState::_current_safety_field_type arg)
  {
    msg_.current_safety_field = std::move(arg);
    return Init_SafetyState_triggered_cutoff_paths(msg_);
  }

private:
  ::neo_msgs2::msg::SafetyState msg_;
};

class Init_SafetyState_time
{
public:
  Init_SafetyState_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyState_current_safety_field time(::neo_msgs2::msg::SafetyState::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_SafetyState_current_safety_field(msg_);
  }

private:
  ::neo_msgs2::msg::SafetyState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::SafetyState>()
{
  return neo_msgs2::msg::builder::Init_SafetyState_time();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/Keypad.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__KEYPAD__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__KEYPAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/keypad__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_Keypad_button
{
public:
  explicit Init_Keypad_button(::neo_msgs2::msg::Keypad & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::Keypad button(::neo_msgs2::msg::Keypad::_button_type arg)
  {
    msg_.button = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::Keypad msg_;
};

class Init_Keypad_header
{
public:
  Init_Keypad_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Keypad_button header(::neo_msgs2::msg::Keypad::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Keypad_button(msg_);
  }

private:
  ::neo_msgs2::msg::Keypad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::Keypad>()
{
  return neo_msgs2::msg::builder::Init_Keypad_header();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__KEYPAD__BUILDER_HPP_

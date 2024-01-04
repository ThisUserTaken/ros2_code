// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/LCDOutput.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/lcd_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_LCDOutput_msg_line
{
public:
  explicit Init_LCDOutput_msg_line(::neo_msgs2::msg::LCDOutput & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::LCDOutput msg_line(::neo_msgs2::msg::LCDOutput::_msg_line_type arg)
  {
    msg_.msg_line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::LCDOutput msg_;
};

class Init_LCDOutput_header
{
public:
  Init_LCDOutput_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LCDOutput_msg_line header(::neo_msgs2::msg::LCDOutput::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LCDOutput_msg_line(msg_);
  }

private:
  ::neo_msgs2::msg::LCDOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::LCDOutput>()
{
  return neo_msgs2::msg::builder::Init_LCDOutput_header();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__BUILDER_HPP_

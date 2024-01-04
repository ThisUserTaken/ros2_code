// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/IOBoard.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__IO_BOARD__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__IO_BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/io_board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_IOBoard_analog_inputs
{
public:
  explicit Init_IOBoard_analog_inputs(::neo_msgs2::msg::IOBoard & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::IOBoard analog_inputs(::neo_msgs2::msg::IOBoard::_analog_inputs_type arg)
  {
    msg_.analog_inputs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::IOBoard msg_;
};

class Init_IOBoard_digital_outputs
{
public:
  explicit Init_IOBoard_digital_outputs(::neo_msgs2::msg::IOBoard & msg)
  : msg_(msg)
  {}
  Init_IOBoard_analog_inputs digital_outputs(::neo_msgs2::msg::IOBoard::_digital_outputs_type arg)
  {
    msg_.digital_outputs = std::move(arg);
    return Init_IOBoard_analog_inputs(msg_);
  }

private:
  ::neo_msgs2::msg::IOBoard msg_;
};

class Init_IOBoard_digital_inputs
{
public:
  explicit Init_IOBoard_digital_inputs(::neo_msgs2::msg::IOBoard & msg)
  : msg_(msg)
  {}
  Init_IOBoard_digital_outputs digital_inputs(::neo_msgs2::msg::IOBoard::_digital_inputs_type arg)
  {
    msg_.digital_inputs = std::move(arg);
    return Init_IOBoard_digital_outputs(msg_);
  }

private:
  ::neo_msgs2::msg::IOBoard msg_;
};

class Init_IOBoard_header
{
public:
  Init_IOBoard_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IOBoard_digital_inputs header(::neo_msgs2::msg::IOBoard::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IOBoard_digital_inputs(msg_);
  }

private:
  ::neo_msgs2::msg::IOBoard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::IOBoard>()
{
  return neo_msgs2::msg::builder::Init_IOBoard_header();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__IO_BOARD__BUILDER_HPP_

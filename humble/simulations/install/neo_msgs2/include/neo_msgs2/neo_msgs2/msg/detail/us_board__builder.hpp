// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/USBoard.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__US_BOARD__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__US_BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/us_board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_USBoard_analog
{
public:
  explicit Init_USBoard_analog(::neo_msgs2::msg::USBoard & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::USBoard analog(::neo_msgs2::msg::USBoard::_analog_type arg)
  {
    msg_.analog = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::USBoard msg_;
};

class Init_USBoard_sensor
{
public:
  explicit Init_USBoard_sensor(::neo_msgs2::msg::USBoard & msg)
  : msg_(msg)
  {}
  Init_USBoard_analog sensor(::neo_msgs2::msg::USBoard::_sensor_type arg)
  {
    msg_.sensor = std::move(arg);
    return Init_USBoard_analog(msg_);
  }

private:
  ::neo_msgs2::msg::USBoard msg_;
};

class Init_USBoard_header
{
public:
  Init_USBoard_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_USBoard_sensor header(::neo_msgs2::msg::USBoard::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_USBoard_sensor(msg_);
  }

private:
  ::neo_msgs2::msg::USBoard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::USBoard>()
{
  return neo_msgs2::msg::builder::Init_USBoard_header();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__US_BOARD__BUILDER_HPP_

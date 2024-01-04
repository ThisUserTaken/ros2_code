// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/USBoardV2.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__US_BOARD_V2__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__US_BOARD_V2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/us_board_v2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_USBoardV2_active
{
public:
  explicit Init_USBoardV2_active(::neo_msgs2::msg::USBoardV2 & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::USBoardV2 active(::neo_msgs2::msg::USBoardV2::_active_type arg)
  {
    msg_.active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::USBoardV2 msg_;
};

class Init_USBoardV2_analog
{
public:
  explicit Init_USBoardV2_analog(::neo_msgs2::msg::USBoardV2 & msg)
  : msg_(msg)
  {}
  Init_USBoardV2_active analog(::neo_msgs2::msg::USBoardV2::_analog_type arg)
  {
    msg_.analog = std::move(arg);
    return Init_USBoardV2_active(msg_);
  }

private:
  ::neo_msgs2::msg::USBoardV2 msg_;
};

class Init_USBoardV2_sensor
{
public:
  explicit Init_USBoardV2_sensor(::neo_msgs2::msg::USBoardV2 & msg)
  : msg_(msg)
  {}
  Init_USBoardV2_analog sensor(::neo_msgs2::msg::USBoardV2::_sensor_type arg)
  {
    msg_.sensor = std::move(arg);
    return Init_USBoardV2_analog(msg_);
  }

private:
  ::neo_msgs2::msg::USBoardV2 msg_;
};

class Init_USBoardV2_header
{
public:
  Init_USBoardV2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_USBoardV2_sensor header(::neo_msgs2::msg::USBoardV2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_USBoardV2_sensor(msg_);
  }

private:
  ::neo_msgs2::msg::USBoardV2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::USBoardV2>()
{
  return neo_msgs2::msg::builder::Init_USBoardV2_header();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__US_BOARD_V2__BUILDER_HPP_

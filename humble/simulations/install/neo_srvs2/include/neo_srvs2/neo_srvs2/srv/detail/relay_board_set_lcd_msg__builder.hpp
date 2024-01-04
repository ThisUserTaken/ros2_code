// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_srvs2:srv/RelayBoardSetLCDMsg.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_LCD_MSG__BUILDER_HPP_
#define NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_LCD_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_srvs2/srv/detail/relay_board_set_lcd_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_RelayBoardSetLCDMsg_Request_message
{
public:
  Init_RelayBoardSetLCDMsg_Request_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::RelayBoardSetLCDMsg_Request message(::neo_srvs2::srv::RelayBoardSetLCDMsg_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::RelayBoardSetLCDMsg_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::RelayBoardSetLCDMsg_Request>()
{
  return neo_srvs2::srv::builder::Init_RelayBoardSetLCDMsg_Request_message();
}

}  // namespace neo_srvs2


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_RelayBoardSetLCDMsg_Response_success
{
public:
  Init_RelayBoardSetLCDMsg_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::RelayBoardSetLCDMsg_Response success(::neo_srvs2::srv::RelayBoardSetLCDMsg_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::RelayBoardSetLCDMsg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::RelayBoardSetLCDMsg_Response>()
{
  return neo_srvs2::srv::builder::Init_RelayBoardSetLCDMsg_Response_success();
}

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_LCD_MSG__BUILDER_HPP_

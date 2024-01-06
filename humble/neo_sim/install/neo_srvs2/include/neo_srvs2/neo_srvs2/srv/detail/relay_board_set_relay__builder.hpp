// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_srvs2:srv/RelayBoardSetRelay.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_RELAY__BUILDER_HPP_
#define NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_RELAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_srvs2/srv/detail/relay_board_set_relay__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_RelayBoardSetRelay_Request_state
{
public:
  explicit Init_RelayBoardSetRelay_Request_state(::neo_srvs2::srv::RelayBoardSetRelay_Request & msg)
  : msg_(msg)
  {}
  ::neo_srvs2::srv::RelayBoardSetRelay_Request state(::neo_srvs2::srv::RelayBoardSetRelay_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::RelayBoardSetRelay_Request msg_;
};

class Init_RelayBoardSetRelay_Request_id
{
public:
  Init_RelayBoardSetRelay_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelayBoardSetRelay_Request_state id(::neo_srvs2::srv::RelayBoardSetRelay_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RelayBoardSetRelay_Request_state(msg_);
  }

private:
  ::neo_srvs2::srv::RelayBoardSetRelay_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::RelayBoardSetRelay_Request>()
{
  return neo_srvs2::srv::builder::Init_RelayBoardSetRelay_Request_id();
}

}  // namespace neo_srvs2


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_RelayBoardSetRelay_Response_success
{
public:
  Init_RelayBoardSetRelay_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::RelayBoardSetRelay_Response success(::neo_srvs2::srv::RelayBoardSetRelay_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::RelayBoardSetRelay_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::RelayBoardSetRelay_Response>()
{
  return neo_srvs2::srv::builder::Init_RelayBoardSetRelay_Response_success();
}

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_RELAY__BUILDER_HPP_

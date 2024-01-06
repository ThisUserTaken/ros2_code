// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_srvs2:srv/RelayBoardSetEMStop.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_EM_STOP__BUILDER_HPP_
#define NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_EM_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_srvs2/srv/detail/relay_board_set_em_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_srvs2
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::RelayBoardSetEMStop_Request>()
{
  return ::neo_srvs2::srv::RelayBoardSetEMStop_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace neo_srvs2


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_RelayBoardSetEMStop_Response_success
{
public:
  Init_RelayBoardSetEMStop_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::RelayBoardSetEMStop_Response success(::neo_srvs2::srv::RelayBoardSetEMStop_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::RelayBoardSetEMStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::RelayBoardSetEMStop_Response>()
{
  return neo_srvs2::srv::builder::Init_RelayBoardSetEMStop_Response_success();
}

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_EM_STOP__BUILDER_HPP_

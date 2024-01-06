// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_srvs2:srv/ResetOmniWheels.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__RESET_OMNI_WHEELS__BUILDER_HPP_
#define NEO_SRVS2__SRV__DETAIL__RESET_OMNI_WHEELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_srvs2/srv/detail/reset_omni_wheels__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_ResetOmniWheels_Request_steer_angles_rad
{
public:
  Init_ResetOmniWheels_Request_steer_angles_rad()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::ResetOmniWheels_Request steer_angles_rad(::neo_srvs2::srv::ResetOmniWheels_Request::_steer_angles_rad_type arg)
  {
    msg_.steer_angles_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::ResetOmniWheels_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::ResetOmniWheels_Request>()
{
  return neo_srvs2::srv::builder::Init_ResetOmniWheels_Request_steer_angles_rad();
}

}  // namespace neo_srvs2


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_ResetOmniWheels_Response_success
{
public:
  Init_ResetOmniWheels_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::ResetOmniWheels_Response success(::neo_srvs2::srv::ResetOmniWheels_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::ResetOmniWheels_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::ResetOmniWheels_Response>()
{
  return neo_srvs2::srv::builder::Init_ResetOmniWheels_Response_success();
}

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__RESET_OMNI_WHEELS__BUILDER_HPP_

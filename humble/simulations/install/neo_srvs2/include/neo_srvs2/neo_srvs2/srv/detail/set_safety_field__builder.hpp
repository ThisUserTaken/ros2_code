// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_srvs2:srv/SetSafetyField.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__SET_SAFETY_FIELD__BUILDER_HPP_
#define NEO_SRVS2__SRV__DETAIL__SET_SAFETY_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_srvs2/srv/detail/set_safety_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_SetSafetyField_Request_field_id
{
public:
  Init_SetSafetyField_Request_field_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::SetSafetyField_Request field_id(::neo_srvs2::srv::SetSafetyField_Request::_field_id_type arg)
  {
    msg_.field_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::SetSafetyField_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::SetSafetyField_Request>()
{
  return neo_srvs2::srv::builder::Init_SetSafetyField_Request_field_id();
}

}  // namespace neo_srvs2


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_SetSafetyField_Response_success
{
public:
  Init_SetSafetyField_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::SetSafetyField_Response success(::neo_srvs2::srv::SetSafetyField_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::SetSafetyField_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::SetSafetyField_Response>()
{
  return neo_srvs2::srv::builder::Init_SetSafetyField_Response_success();
}

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__SET_SAFETY_FIELD__BUILDER_HPP_

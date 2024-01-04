// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_srvs2:srv/USBoardToggleSensor.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__US_BOARD_TOGGLE_SENSOR__BUILDER_HPP_
#define NEO_SRVS2__SRV__DETAIL__US_BOARD_TOGGLE_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_srvs2/srv/detail/us_board_toggle_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_USBoardToggleSensor_Request_state
{
public:
  Init_USBoardToggleSensor_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::USBoardToggleSensor_Request state(::neo_srvs2::srv::USBoardToggleSensor_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::USBoardToggleSensor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::USBoardToggleSensor_Request>()
{
  return neo_srvs2::srv::builder::Init_USBoardToggleSensor_Request_state();
}

}  // namespace neo_srvs2


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_USBoardToggleSensor_Response_success
{
public:
  Init_USBoardToggleSensor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::USBoardToggleSensor_Response success(::neo_srvs2::srv::USBoardToggleSensor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::USBoardToggleSensor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::USBoardToggleSensor_Response>()
{
  return neo_srvs2::srv::builder::Init_USBoardToggleSensor_Response_success();
}

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__US_BOARD_TOGGLE_SENSOR__BUILDER_HPP_

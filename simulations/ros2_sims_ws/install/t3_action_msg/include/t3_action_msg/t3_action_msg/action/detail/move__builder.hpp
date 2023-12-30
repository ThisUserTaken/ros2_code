// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from t3_action_msg:action/Move.idl
// generated code does not contain a copyright notice

#ifndef T3_ACTION_MSG__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define T3_ACTION_MSG__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "t3_action_msg/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace t3_action_msg
{

namespace action
{

namespace builder
{

class Init_Move_Goal_secs
{
public:
  Init_Move_Goal_secs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::t3_action_msg::action::Move_Goal secs(::t3_action_msg::action::Move_Goal::_secs_type arg)
  {
    msg_.secs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::t3_action_msg::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::t3_action_msg::action::Move_Goal>()
{
  return t3_action_msg::action::builder::Init_Move_Goal_secs();
}

}  // namespace t3_action_msg


namespace t3_action_msg
{

namespace action
{

namespace builder
{

class Init_Move_Result_status
{
public:
  Init_Move_Result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::t3_action_msg::action::Move_Result status(::t3_action_msg::action::Move_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::t3_action_msg::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::t3_action_msg::action::Move_Result>()
{
  return t3_action_msg::action::builder::Init_Move_Result_status();
}

}  // namespace t3_action_msg


namespace t3_action_msg
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_feedback
{
public:
  Init_Move_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::t3_action_msg::action::Move_Feedback feedback(::t3_action_msg::action::Move_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::t3_action_msg::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::t3_action_msg::action::Move_Feedback>()
{
  return t3_action_msg::action::builder::Init_Move_Feedback_feedback();
}

}  // namespace t3_action_msg


namespace t3_action_msg
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::t3_action_msg::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::t3_action_msg::action::Move_SendGoal_Request goal(::t3_action_msg::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::t3_action_msg::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::t3_action_msg::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::t3_action_msg::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::t3_action_msg::action::Move_SendGoal_Request>()
{
  return t3_action_msg::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace t3_action_msg


namespace t3_action_msg
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::t3_action_msg::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::t3_action_msg::action::Move_SendGoal_Response stamp(::t3_action_msg::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::t3_action_msg::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::t3_action_msg::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::t3_action_msg::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::t3_action_msg::action::Move_SendGoal_Response>()
{
  return t3_action_msg::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace t3_action_msg


namespace t3_action_msg
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::t3_action_msg::action::Move_GetResult_Request goal_id(::t3_action_msg::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::t3_action_msg::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::t3_action_msg::action::Move_GetResult_Request>()
{
  return t3_action_msg::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace t3_action_msg


namespace t3_action_msg
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::t3_action_msg::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::t3_action_msg::action::Move_GetResult_Response result(::t3_action_msg::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::t3_action_msg::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::t3_action_msg::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::t3_action_msg::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::t3_action_msg::action::Move_GetResult_Response>()
{
  return t3_action_msg::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace t3_action_msg


namespace t3_action_msg
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::t3_action_msg::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::t3_action_msg::action::Move_FeedbackMessage feedback(::t3_action_msg::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::t3_action_msg::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::t3_action_msg::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::t3_action_msg::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::t3_action_msg::action::Move_FeedbackMessage>()
{
  return t3_action_msg::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace t3_action_msg

#endif  // T3_ACTION_MSG__ACTION__DETAIL__MOVE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:msg/TrackedFeature.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/msg/detail/tracked_feature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedFeature_tracking_error
{
public:
  explicit Init_TrackedFeature_tracking_error(::depthai_ros_msgs::msg::TrackedFeature & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::msg::TrackedFeature tracking_error(::depthai_ros_msgs::msg::TrackedFeature::_tracking_error_type arg)
  {
    msg_.tracking_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::msg::TrackedFeature msg_;
};

class Init_TrackedFeature_harris_score
{
public:
  explicit Init_TrackedFeature_harris_score(::depthai_ros_msgs::msg::TrackedFeature & msg)
  : msg_(msg)
  {}
  Init_TrackedFeature_tracking_error harris_score(::depthai_ros_msgs::msg::TrackedFeature::_harris_score_type arg)
  {
    msg_.harris_score = std::move(arg);
    return Init_TrackedFeature_tracking_error(msg_);
  }

private:
  ::depthai_ros_msgs::msg::TrackedFeature msg_;
};

class Init_TrackedFeature_age
{
public:
  explicit Init_TrackedFeature_age(::depthai_ros_msgs::msg::TrackedFeature & msg)
  : msg_(msg)
  {}
  Init_TrackedFeature_harris_score age(::depthai_ros_msgs::msg::TrackedFeature::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_TrackedFeature_harris_score(msg_);
  }

private:
  ::depthai_ros_msgs::msg::TrackedFeature msg_;
};

class Init_TrackedFeature_id
{
public:
  explicit Init_TrackedFeature_id(::depthai_ros_msgs::msg::TrackedFeature & msg)
  : msg_(msg)
  {}
  Init_TrackedFeature_age id(::depthai_ros_msgs::msg::TrackedFeature::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrackedFeature_age(msg_);
  }

private:
  ::depthai_ros_msgs::msg::TrackedFeature msg_;
};

class Init_TrackedFeature_position
{
public:
  explicit Init_TrackedFeature_position(::depthai_ros_msgs::msg::TrackedFeature & msg)
  : msg_(msg)
  {}
  Init_TrackedFeature_id position(::depthai_ros_msgs::msg::TrackedFeature::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrackedFeature_id(msg_);
  }

private:
  ::depthai_ros_msgs::msg::TrackedFeature msg_;
};

class Init_TrackedFeature_header
{
public:
  Init_TrackedFeature_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedFeature_position header(::depthai_ros_msgs::msg::TrackedFeature::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedFeature_position(msg_);
  }

private:
  ::depthai_ros_msgs::msg::TrackedFeature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::msg::TrackedFeature>()
{
  return depthai_ros_msgs::msg::builder::Init_TrackedFeature_header();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:msg/TrackedFeatures.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURES__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/msg/detail/tracked_features__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedFeatures_features
{
public:
  explicit Init_TrackedFeatures_features(::depthai_ros_msgs::msg::TrackedFeatures & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::msg::TrackedFeatures features(::depthai_ros_msgs::msg::TrackedFeatures::_features_type arg)
  {
    msg_.features = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::msg::TrackedFeatures msg_;
};

class Init_TrackedFeatures_header
{
public:
  Init_TrackedFeatures_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedFeatures_features header(::depthai_ros_msgs::msg::TrackedFeatures::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedFeatures_features(msg_);
  }

private:
  ::depthai_ros_msgs::msg::TrackedFeatures msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::msg::TrackedFeatures>()
{
  return depthai_ros_msgs::msg::builder::Init_TrackedFeatures_header();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURES__BUILDER_HPP_

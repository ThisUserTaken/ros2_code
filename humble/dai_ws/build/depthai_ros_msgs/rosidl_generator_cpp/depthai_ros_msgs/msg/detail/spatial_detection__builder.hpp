// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:msg/SpatialDetection.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/msg/detail/spatial_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_SpatialDetection_tracking_id
{
public:
  explicit Init_SpatialDetection_tracking_id(::depthai_ros_msgs::msg::SpatialDetection & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::msg::SpatialDetection tracking_id(::depthai_ros_msgs::msg::SpatialDetection::_tracking_id_type arg)
  {
    msg_.tracking_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::msg::SpatialDetection msg_;
};

class Init_SpatialDetection_is_tracking
{
public:
  explicit Init_SpatialDetection_is_tracking(::depthai_ros_msgs::msg::SpatialDetection & msg)
  : msg_(msg)
  {}
  Init_SpatialDetection_tracking_id is_tracking(::depthai_ros_msgs::msg::SpatialDetection::_is_tracking_type arg)
  {
    msg_.is_tracking = std::move(arg);
    return Init_SpatialDetection_tracking_id(msg_);
  }

private:
  ::depthai_ros_msgs::msg::SpatialDetection msg_;
};

class Init_SpatialDetection_position
{
public:
  explicit Init_SpatialDetection_position(::depthai_ros_msgs::msg::SpatialDetection & msg)
  : msg_(msg)
  {}
  Init_SpatialDetection_is_tracking position(::depthai_ros_msgs::msg::SpatialDetection::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SpatialDetection_is_tracking(msg_);
  }

private:
  ::depthai_ros_msgs::msg::SpatialDetection msg_;
};

class Init_SpatialDetection_bbox
{
public:
  explicit Init_SpatialDetection_bbox(::depthai_ros_msgs::msg::SpatialDetection & msg)
  : msg_(msg)
  {}
  Init_SpatialDetection_position bbox(::depthai_ros_msgs::msg::SpatialDetection::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_SpatialDetection_position(msg_);
  }

private:
  ::depthai_ros_msgs::msg::SpatialDetection msg_;
};

class Init_SpatialDetection_results
{
public:
  Init_SpatialDetection_results()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpatialDetection_bbox results(::depthai_ros_msgs::msg::SpatialDetection::_results_type arg)
  {
    msg_.results = std::move(arg);
    return Init_SpatialDetection_bbox(msg_);
  }

private:
  ::depthai_ros_msgs::msg::SpatialDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::msg::SpatialDetection>()
{
  return depthai_ros_msgs::msg::builder::Init_SpatialDetection_results();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION__BUILDER_HPP_

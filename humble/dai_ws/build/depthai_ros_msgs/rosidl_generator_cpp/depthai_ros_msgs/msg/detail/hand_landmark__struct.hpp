// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from depthai_ros_msgs:msg/HandLandmark.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__STRUCT_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'landmark'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__depthai_ros_msgs__msg__HandLandmark __attribute__((deprecated))
#else
# define DEPRECATED__depthai_ros_msgs__msg__HandLandmark __declspec(deprecated)
#endif

namespace depthai_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandLandmark_
{
  using Type = HandLandmark_<ContainerAllocator>;

  explicit HandLandmark_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->lm_score = 0.0f;
      this->is_spatial = false;
    }
  }

  explicit HandLandmark_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->lm_score = 0.0f;
      this->is_spatial = false;
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _lm_score_type =
    float;
  _lm_score_type lm_score;
  using _landmark_type =
    std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>>;
  _landmark_type landmark;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _is_spatial_type =
    bool;
  _is_spatial_type is_spatial;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__lm_score(
    const float & _arg)
  {
    this->lm_score = _arg;
    return *this;
  }
  Type & set__landmark(
    const std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>> & _arg)
  {
    this->landmark = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__is_spatial(
    const bool & _arg)
  {
    this->is_spatial = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator> *;
  using ConstRawPtr =
    const depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__depthai_ros_msgs__msg__HandLandmark
    std::shared_ptr<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__depthai_ros_msgs__msg__HandLandmark
    std::shared_ptr<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandLandmark_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->lm_score != other.lm_score) {
      return false;
    }
    if (this->landmark != other.landmark) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->is_spatial != other.is_spatial) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandLandmark_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandLandmark_

// alias to use template instance with default allocator
using HandLandmark =
  depthai_ros_msgs::msg::HandLandmark_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__STRUCT_HPP_

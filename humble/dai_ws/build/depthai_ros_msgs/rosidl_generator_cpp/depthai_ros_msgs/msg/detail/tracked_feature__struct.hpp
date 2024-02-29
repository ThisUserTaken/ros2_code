// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from depthai_ros_msgs:msg/TrackedFeature.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__STRUCT_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__depthai_ros_msgs__msg__TrackedFeature __attribute__((deprecated))
#else
# define DEPRECATED__depthai_ros_msgs__msg__TrackedFeature __declspec(deprecated)
#endif

namespace depthai_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedFeature_
{
  using Type = TrackedFeature_<ContainerAllocator>;

  explicit TrackedFeature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->age = 0ul;
      this->harris_score = 0.0f;
      this->tracking_error = 0.0f;
    }
  }

  explicit TrackedFeature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->age = 0ul;
      this->harris_score = 0.0f;
      this->tracking_error = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _id_type =
    uint32_t;
  _id_type id;
  using _age_type =
    uint32_t;
  _age_type age;
  using _harris_score_type =
    float;
  _harris_score_type harris_score;
  using _tracking_error_type =
    float;
  _tracking_error_type tracking_error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__age(
    const uint32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__harris_score(
    const float & _arg)
  {
    this->harris_score = _arg;
    return *this;
  }
  Type & set__tracking_error(
    const float & _arg)
  {
    this->tracking_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator> *;
  using ConstRawPtr =
    const depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__depthai_ros_msgs__msg__TrackedFeature
    std::shared_ptr<depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__depthai_ros_msgs__msg__TrackedFeature
    std::shared_ptr<depthai_ros_msgs::msg::TrackedFeature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedFeature_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->harris_score != other.harris_score) {
      return false;
    }
    if (this->tracking_error != other.tracking_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedFeature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedFeature_

// alias to use template instance with default allocator
using TrackedFeature =
  depthai_ros_msgs::msg::TrackedFeature_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__TRACKED_FEATURE__STRUCT_HPP_

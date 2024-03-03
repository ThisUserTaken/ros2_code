// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from depthai_ros_msgs:msg/HandLandmarkArray.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__STRUCT_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__STRUCT_HPP_

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
// Member 'landmarks'
#include "depthai_ros_msgs/msg/detail/hand_landmark__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__depthai_ros_msgs__msg__HandLandmarkArray __attribute__((deprecated))
#else
# define DEPRECATED__depthai_ros_msgs__msg__HandLandmarkArray __declspec(deprecated)
#endif

namespace depthai_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandLandmarkArray_
{
  using Type = HandLandmarkArray_<ContainerAllocator>;

  explicit HandLandmarkArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit HandLandmarkArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _landmarks_type =
    std::vector<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>>>;
  _landmarks_type landmarks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__landmarks(
    const std::vector<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<depthai_ros_msgs::msg::HandLandmark_<ContainerAllocator>>> & _arg)
  {
    this->landmarks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__depthai_ros_msgs__msg__HandLandmarkArray
    std::shared_ptr<depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__depthai_ros_msgs__msg__HandLandmarkArray
    std::shared_ptr<depthai_ros_msgs::msg::HandLandmarkArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandLandmarkArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->landmarks != other.landmarks) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandLandmarkArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandLandmarkArray_

// alias to use template instance with default allocator
using HandLandmarkArray =
  depthai_ros_msgs::msg::HandLandmarkArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__STRUCT_HPP_

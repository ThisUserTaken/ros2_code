// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__STRUCT_HPP_
#define DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'top_left'
// Member 'bottom_right'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__depthai_ros_msgs__srv__NormalizedImageCrop_Request __attribute__((deprecated))
#else
# define DEPRECATED__depthai_ros_msgs__srv__NormalizedImageCrop_Request __declspec(deprecated)
#endif

namespace depthai_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NormalizedImageCrop_Request_
{
  using Type = NormalizedImageCrop_Request_<ContainerAllocator>;

  explicit NormalizedImageCrop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : top_left(_init),
    bottom_right(_init)
  {
    (void)_init;
  }

  explicit NormalizedImageCrop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : top_left(_alloc, _init),
    bottom_right(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _top_left_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _top_left_type top_left;
  using _bottom_right_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _bottom_right_type bottom_right;

  // setters for named parameter idiom
  Type & set__top_left(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->top_left = _arg;
    return *this;
  }
  Type & set__bottom_right(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->bottom_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__depthai_ros_msgs__srv__NormalizedImageCrop_Request
    std::shared_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__depthai_ros_msgs__srv__NormalizedImageCrop_Request
    std::shared_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NormalizedImageCrop_Request_ & other) const
  {
    if (this->top_left != other.top_left) {
      return false;
    }
    if (this->bottom_right != other.bottom_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const NormalizedImageCrop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NormalizedImageCrop_Request_

// alias to use template instance with default allocator
using NormalizedImageCrop_Request =
  depthai_ros_msgs::srv::NormalizedImageCrop_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace depthai_ros_msgs


#ifndef _WIN32
# define DEPRECATED__depthai_ros_msgs__srv__NormalizedImageCrop_Response __attribute__((deprecated))
#else
# define DEPRECATED__depthai_ros_msgs__srv__NormalizedImageCrop_Response __declspec(deprecated)
#endif

namespace depthai_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NormalizedImageCrop_Response_
{
  using Type = NormalizedImageCrop_Response_<ContainerAllocator>;

  explicit NormalizedImageCrop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ll;
    }
  }

  explicit NormalizedImageCrop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ll;
    }
  }

  // field types and members
  using _status_type =
    int64_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const int64_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__depthai_ros_msgs__srv__NormalizedImageCrop_Response
    std::shared_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__depthai_ros_msgs__srv__NormalizedImageCrop_Response
    std::shared_ptr<depthai_ros_msgs::srv::NormalizedImageCrop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NormalizedImageCrop_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NormalizedImageCrop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NormalizedImageCrop_Response_

// alias to use template instance with default allocator
using NormalizedImageCrop_Response =
  depthai_ros_msgs::srv::NormalizedImageCrop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace depthai_ros_msgs

namespace depthai_ros_msgs
{

namespace srv
{

struct NormalizedImageCrop
{
  using Request = depthai_ros_msgs::srv::NormalizedImageCrop_Request;
  using Response = depthai_ros_msgs::srv::NormalizedImageCrop_Response;
};

}  // namespace srv

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__STRUCT_HPP_

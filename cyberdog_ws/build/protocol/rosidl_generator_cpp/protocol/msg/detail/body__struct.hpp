// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/Body.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BODY__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__BODY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"
// Member 'keypoints'
#include "protocol/msg/detail/keypoint__struct.hpp"
// Member 'gesture'
#include "protocol/msg/detail/gesture__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__Body __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__Body __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Body_
{
  using Type = Body_<ContainerAllocator>;

  explicit Body_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init),
    gesture(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reid = "";
    }
  }

  explicit Body_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init),
    reid(_alloc),
    gesture(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reid = "";
    }
  }

  // field types and members
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;
  using _reid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reid_type reid;
  using _feats_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _feats_type feats;
  using _keypoints_type =
    std::vector<protocol::msg::Keypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::Keypoint_<ContainerAllocator>>>;
  _keypoints_type keypoints;
  using _gesture_type =
    protocol::msg::Gesture_<ContainerAllocator>;
  _gesture_type gesture;

  // setters for named parameter idiom
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }
  Type & set__reid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reid = _arg;
    return *this;
  }
  Type & set__feats(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->feats = _arg;
    return *this;
  }
  Type & set__keypoints(
    const std::vector<protocol::msg::Keypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::Keypoint_<ContainerAllocator>>> & _arg)
  {
    this->keypoints = _arg;
    return *this;
  }
  Type & set__gesture(
    const protocol::msg::Gesture_<ContainerAllocator> & _arg)
  {
    this->gesture = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::Body_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::Body_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::Body_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::Body_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Body_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Body_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Body_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Body_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::Body_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::Body_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__Body
    std::shared_ptr<protocol::msg::Body_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__Body
    std::shared_ptr<protocol::msg::Body_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Body_ & other) const
  {
    if (this->roi != other.roi) {
      return false;
    }
    if (this->reid != other.reid) {
      return false;
    }
    if (this->feats != other.feats) {
      return false;
    }
    if (this->keypoints != other.keypoints) {
      return false;
    }
    if (this->gesture != other.gesture) {
      return false;
    }
    return true;
  }
  bool operator!=(const Body_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Body_

// alias to use template instance with default allocator
using Body =
  protocol::msg::Body_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BODY__STRUCT_HPP_

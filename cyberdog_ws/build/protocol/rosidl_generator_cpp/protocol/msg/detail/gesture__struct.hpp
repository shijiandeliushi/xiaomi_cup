// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/Gesture.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GESTURE__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__GESTURE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__protocol__msg__Gesture __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__Gesture __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gesture_
{
  using Type = Gesture_<ContainerAllocator>;

  explicit Gesture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cls = 0l;
    }
  }

  explicit Gesture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cls = 0l;
    }
  }

  // field types and members
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;
  using _cls_type =
    int32_t;
  _cls_type cls;

  // setters for named parameter idiom
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }
  Type & set__cls(
    const int32_t & _arg)
  {
    this->cls = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t GESTURE_OK =
    0;
  static constexpr int32_t GESTURE_FAST_BACKWARD =
    1;
  static constexpr int32_t GESTURE_FAST_FORWARD =
    2;
  static constexpr int32_t GESTURE_STOP_LEFT =
    3;
  static constexpr int32_t GESTURE_STOP_RIGHT =
    4;
  static constexpr int32_t GESTURE_THUMBS_UP =
    5;
  static constexpr int32_t GESTURE_SHHH =
    6;
  static constexpr int32_t GESTURE_FIST =
    7;
  static constexpr int32_t GESTURE_PALM2FIST =
    8;
  static constexpr int32_t GESTURE_INVALID =
    9;

  // pointer types
  using RawPtr =
    protocol::msg::Gesture_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::Gesture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::Gesture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::Gesture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Gesture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Gesture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Gesture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Gesture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::Gesture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::Gesture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__Gesture
    std::shared_ptr<protocol::msg::Gesture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__Gesture
    std::shared_ptr<protocol::msg::Gesture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gesture_ & other) const
  {
    if (this->roi != other.roi) {
      return false;
    }
    if (this->cls != other.cls) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gesture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gesture_

// alias to use template instance with default allocator
using Gesture =
  protocol::msg::Gesture_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_OK;
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_FAST_BACKWARD;
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_FAST_FORWARD;
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_STOP_LEFT;
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_STOP_RIGHT;
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_THUMBS_UP;
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_SHHH;
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_FIST;
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_PALM2FIST;
template<typename ContainerAllocator>
constexpr int32_t Gesture_<ContainerAllocator>::GESTURE_INVALID;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__GESTURE__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/TrackResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRACK_RESULT__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__TRACK_RESULT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__TrackResult __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__TrackResult __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackResult_
{
  using Type = TrackResult_<ContainerAllocator>;

  explicit TrackResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    roi(_init)
  {
    (void)_init;
  }

  explicit TrackResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    roi(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::TrackResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::TrackResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::TrackResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::TrackResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TrackResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TrackResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TrackResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TrackResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::TrackResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::TrackResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__TrackResult
    std::shared_ptr<protocol::msg::TrackResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__TrackResult
    std::shared_ptr<protocol::msg::TrackResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackResult_

// alias to use template instance with default allocator
using TrackResult =
  protocol::msg::TrackResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TRACK_RESULT__STRUCT_HPP_

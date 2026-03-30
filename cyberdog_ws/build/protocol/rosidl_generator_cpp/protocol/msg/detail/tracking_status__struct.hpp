// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/TrackingStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRACKING_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__TRACKING_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__TrackingStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__TrackingStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackingStatus_
{
  using Type = TrackingStatus_<ContainerAllocator>;

  explicit TrackingStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TrackingStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OBJECT_FAR =
    0u;
  static constexpr uint8_t OBJECT_NEAR =
    1u;
  static constexpr uint8_t OBJECT_LOST =
    2u;
  static constexpr uint8_t OBJECT_EDGE =
    3u;
  static constexpr uint8_t START_SUCCESS =
    4u;
  static constexpr uint8_t START_FAIL =
    5u;
  static constexpr uint8_t OBJECT_INVISIBLE =
    6u;
  static constexpr uint8_t STATUS_SELECTING =
    7u;
  static constexpr uint8_t STATUS_RECOGNIZING =
    8u;
  static constexpr uint8_t STATUS_TRACKING =
    9u;

  // pointer types
  using RawPtr =
    protocol::msg::TrackingStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::TrackingStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::TrackingStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::TrackingStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TrackingStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TrackingStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TrackingStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TrackingStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::TrackingStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::TrackingStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__TrackingStatus
    std::shared_ptr<protocol::msg::TrackingStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__TrackingStatus
    std::shared_ptr<protocol::msg::TrackingStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackingStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackingStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackingStatus_

// alias to use template instance with default allocator
using TrackingStatus =
  protocol::msg::TrackingStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::OBJECT_FAR;
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::OBJECT_NEAR;
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::OBJECT_LOST;
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::OBJECT_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::START_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::START_FAIL;
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::OBJECT_INVISIBLE;
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::STATUS_SELECTING;
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::STATUS_RECOGNIZING;
template<typename ContainerAllocator>
constexpr uint8_t TrackingStatus_<ContainerAllocator>::STATUS_TRACKING;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TRACKING_STATUS__STRUCT_HPP_

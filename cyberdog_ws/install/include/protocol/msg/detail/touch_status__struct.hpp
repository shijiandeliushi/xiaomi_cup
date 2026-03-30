// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/TouchStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TOUCH_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__TOUCH_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__protocol__msg__TouchStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__TouchStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TouchStatus_
{
  using Type = TouchStatus_<ContainerAllocator>;

  explicit TouchStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->touch_state = 0l;
      this->timestamp = 0ull;
    }
  }

  explicit TouchStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->touch_state = 0l;
      this->timestamp = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _touch_state_type =
    int32_t;
  _touch_state_type touch_state;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__touch_state(
    const int32_t & _arg)
  {
    this->touch_state = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::TouchStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::TouchStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::TouchStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::TouchStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TouchStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TouchStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TouchStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TouchStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::TouchStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::TouchStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__TouchStatus
    std::shared_ptr<protocol::msg::TouchStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__TouchStatus
    std::shared_ptr<protocol::msg::TouchStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TouchStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->touch_state != other.touch_state) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TouchStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TouchStatus_

// alias to use template instance with default allocator
using TouchStatus =
  protocol::msg::TouchStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TOUCH_STATUS__STRUCT_HPP_

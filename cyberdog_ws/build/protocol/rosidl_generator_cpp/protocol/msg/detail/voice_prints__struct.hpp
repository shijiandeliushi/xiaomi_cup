// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/VoicePrints.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VOICE_PRINTS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__VOICE_PRINTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'prints'
#include "protocol/msg/detail/voice_print__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__VoicePrints __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__VoicePrints __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VoicePrints_
{
  using Type = VoicePrints_<ContainerAllocator>;

  explicit VoicePrints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit VoicePrints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _prints_type =
    std::vector<protocol::msg::VoicePrint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::VoicePrint_<ContainerAllocator>>>;
  _prints_type prints;

  // setters for named parameter idiom
  Type & set__prints(
    const std::vector<protocol::msg::VoicePrint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::VoicePrint_<ContainerAllocator>>> & _arg)
  {
    this->prints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::VoicePrints_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::VoicePrints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::VoicePrints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::VoicePrints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::VoicePrints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::VoicePrints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::VoicePrints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::VoicePrints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::VoicePrints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::VoicePrints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__VoicePrints
    std::shared_ptr<protocol::msg::VoicePrints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__VoicePrints
    std::shared_ptr<protocol::msg::VoicePrints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoicePrints_ & other) const
  {
    if (this->prints != other.prints) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoicePrints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoicePrints_

// alias to use template instance with default allocator
using VoicePrints =
  protocol::msg::VoicePrints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__VOICE_PRINTS__STRUCT_HPP_

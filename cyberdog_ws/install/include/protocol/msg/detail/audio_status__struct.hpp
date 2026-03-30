// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/AudioStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__AudioStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__AudioStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioStatus_
{
  using Type = AudioStatus_<ContainerAllocator>;

  explicit AudioStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit AudioStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AUDIO_STATUS_NORMAL =
    0u;
  static constexpr uint8_t AUDIO_STATUS_OFFMIC =
    1u;

  // pointer types
  using RawPtr =
    protocol::msg::AudioStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::AudioStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::AudioStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::AudioStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AudioStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AudioStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AudioStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AudioStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::AudioStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::AudioStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__AudioStatus
    std::shared_ptr<protocol::msg::AudioStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__AudioStatus
    std::shared_ptr<protocol::msg::AudioStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioStatus_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioStatus_

// alias to use template instance with default allocator
using AudioStatus =
  protocol::msg::AudioStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AudioStatus_<ContainerAllocator>::AUDIO_STATUS_NORMAL;
template<typename ContainerAllocator>
constexpr uint8_t AudioStatus_<ContainerAllocator>::AUDIO_STATUS_OFFMIC;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_STATUS__STRUCT_HPP_

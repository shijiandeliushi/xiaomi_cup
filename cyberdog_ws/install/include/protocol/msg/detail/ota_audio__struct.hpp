// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/OtaAudio.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_AUDIO__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_AUDIO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__OtaAudio __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__OtaAudio __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OtaAudio_
{
  using Type = OtaAudio_<ContainerAllocator>;

  explicit OtaAudio_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0ul;
      this->version = "";
    }
  }

  explicit OtaAudio_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0ul;
      this->version = "";
    }
  }

  // field types and members
  using _command_type =
    uint32_t;
  _command_type command;
  using _version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_type version;

  // setters for named parameter idiom
  Type & set__command(
    const uint32_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::OtaAudio_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::OtaAudio_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::OtaAudio_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::OtaAudio_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::OtaAudio_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::OtaAudio_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::OtaAudio_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::OtaAudio_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::OtaAudio_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::OtaAudio_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__OtaAudio
    std::shared_ptr<protocol::msg::OtaAudio_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__OtaAudio
    std::shared_ptr<protocol::msg::OtaAudio_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OtaAudio_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    return true;
  }
  bool operator!=(const OtaAudio_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OtaAudio_

// alias to use template instance with default allocator
using OtaAudio =
  protocol::msg::OtaAudio_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OTA_AUDIO__STRUCT_HPP_

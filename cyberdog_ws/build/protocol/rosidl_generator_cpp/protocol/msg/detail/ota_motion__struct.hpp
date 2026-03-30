// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/OtaMotion.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_MOTION__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_MOTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__OtaMotion __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__OtaMotion __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OtaMotion_
{
  using Type = OtaMotion_<ContainerAllocator>;

  explicit OtaMotion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0ul;
      this->version = "";
    }
  }

  explicit OtaMotion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::msg::OtaMotion_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::OtaMotion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::OtaMotion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::OtaMotion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::OtaMotion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::OtaMotion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::OtaMotion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::OtaMotion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::OtaMotion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::OtaMotion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__OtaMotion
    std::shared_ptr<protocol::msg::OtaMotion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__OtaMotion
    std::shared_ptr<protocol::msg::OtaMotion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OtaMotion_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    return true;
  }
  bool operator!=(const OtaMotion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OtaMotion_

// alias to use template instance with default allocator
using OtaMotion =
  protocol::msg::OtaMotion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OTA_MOTION__STRUCT_HPP_

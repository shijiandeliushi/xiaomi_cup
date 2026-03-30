// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/OtaUpdate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_UPDATE__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_UPDATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__OtaUpdate __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__OtaUpdate __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OtaUpdate_
{
  using Type = OtaUpdate_<ContainerAllocator>;

  explicit OtaUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0l;
      this->code = 0l;
    }
  }

  explicit OtaUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0l;
      this->code = 0l;
    }
  }

  // field types and members
  using _progress_type =
    int32_t;
  _progress_type progress;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__progress(
    const int32_t & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::OtaUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::OtaUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::OtaUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::OtaUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::OtaUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::OtaUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::OtaUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::OtaUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::OtaUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::OtaUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__OtaUpdate
    std::shared_ptr<protocol::msg::OtaUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__OtaUpdate
    std::shared_ptr<protocol::msg::OtaUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OtaUpdate_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const OtaUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OtaUpdate_

// alias to use template instance with default allocator
using OtaUpdate =
  protocol::msg::OtaUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OTA_UPDATE__STRUCT_HPP_

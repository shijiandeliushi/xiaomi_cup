// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/BLEDFUProgress.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLEDFU_PROGRESS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__BLEDFU_PROGRESS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__BLEDFUProgress __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__BLEDFUProgress __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BLEDFUProgress_
{
  using Type = BLEDFUProgress_<ContainerAllocator>;

  explicit BLEDFUProgress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->progress = 0.0;
      this->message = "";
    }
  }

  explicit BLEDFUProgress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->progress = 0.0;
      this->message = "";
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _progress_type =
    double;
  _progress_type progress;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__progress(
    const double & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::BLEDFUProgress_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::BLEDFUProgress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::BLEDFUProgress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::BLEDFUProgress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::BLEDFUProgress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::BLEDFUProgress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::BLEDFUProgress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::BLEDFUProgress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::BLEDFUProgress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::BLEDFUProgress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__BLEDFUProgress
    std::shared_ptr<protocol::msg::BLEDFUProgress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__BLEDFUProgress
    std::shared_ptr<protocol::msg::BLEDFUProgress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BLEDFUProgress_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const BLEDFUProgress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BLEDFUProgress_

// alias to use template instance with default allocator
using BLEDFUProgress =
  protocol::msg::BLEDFUProgress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BLEDFU_PROGRESS__STRUCT_HPP_

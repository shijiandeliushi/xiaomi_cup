// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/OtaReady.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_READY__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_READY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__OtaReady __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__OtaReady __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OtaReady_
{
  using Type = OtaReady_<ContainerAllocator>;

  explicit OtaReady_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->ready = false;
      this->status = 0l;
    }
  }

  explicit OtaReady_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->ready = false;
      this->status = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _ready_type =
    bool;
  _ready_type ready;
  using _status_type =
    int32_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__ready(
    const bool & _arg)
  {
    this->ready = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::OtaReady_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::OtaReady_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::OtaReady_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::OtaReady_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::OtaReady_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::OtaReady_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::OtaReady_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::OtaReady_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::OtaReady_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::OtaReady_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__OtaReady
    std::shared_ptr<protocol::msg::OtaReady_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__OtaReady
    std::shared_ptr<protocol::msg::OtaReady_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OtaReady_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->ready != other.ready) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const OtaReady_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OtaReady_

// alias to use template instance with default allocator
using OtaReady =
  protocol::msg::OtaReady_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OTA_READY__STRUCT_HPP_

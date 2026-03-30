// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/NotifyToApp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__NOTIFY_TO_APP__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__NOTIFY_TO_APP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__NotifyToApp __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__NotifyToApp __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NotifyToApp_
{
  using Type = NotifyToApp_<ContainerAllocator>;

  explicit NotifyToApp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssid = "";
      this->ip = "";
      this->code = 0l;
    }
  }

  explicit NotifyToApp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ssid(_alloc),
    ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssid = "";
      this->ip = "";
      this->code = 0l;
    }
  }

  // field types and members
  using _ssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ssid_type ssid;
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__ssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ssid = _arg;
    return *this;
  }
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
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
    protocol::msg::NotifyToApp_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::NotifyToApp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::NotifyToApp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::NotifyToApp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::NotifyToApp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::NotifyToApp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::NotifyToApp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::NotifyToApp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::NotifyToApp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::NotifyToApp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__NotifyToApp
    std::shared_ptr<protocol::msg::NotifyToApp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__NotifyToApp
    std::shared_ptr<protocol::msg::NotifyToApp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NotifyToApp_ & other) const
  {
    if (this->ssid != other.ssid) {
      return false;
    }
    if (this->ip != other.ip) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const NotifyToApp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NotifyToApp_

// alias to use template instance with default allocator
using NotifyToApp =
  protocol::msg::NotifyToApp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__NOTIFY_TO_APP__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/WifiStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__WIFI_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__WIFI_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__WifiStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__WifiStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WifiStatus_
{
  using Type = WifiStatus_<ContainerAllocator>;

  explicit WifiStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->ip = "";
      this->ssid = "";
      this->strength = 0;
    }
  }

  explicit WifiStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc),
    ssid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->ip = "";
      this->ssid = "";
      this->strength = 0;
    }
  }

  // field types and members
  using _is_connected_type =
    bool;
  _is_connected_type is_connected;
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _ssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ssid_type ssid;
  using _strength_type =
    uint8_t;
  _strength_type strength;

  // setters for named parameter idiom
  Type & set__is_connected(
    const bool & _arg)
  {
    this->is_connected = _arg;
    return *this;
  }
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__ssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ssid = _arg;
    return *this;
  }
  Type & set__strength(
    const uint8_t & _arg)
  {
    this->strength = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::WifiStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::WifiStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::WifiStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::WifiStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::WifiStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::WifiStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::WifiStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::WifiStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::WifiStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::WifiStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__WifiStatus
    std::shared_ptr<protocol::msg::WifiStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__WifiStatus
    std::shared_ptr<protocol::msg::WifiStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiStatus_ & other) const
  {
    if (this->is_connected != other.is_connected) {
      return false;
    }
    if (this->ip != other.ip) {
      return false;
    }
    if (this->ssid != other.ssid) {
      return false;
    }
    if (this->strength != other.strength) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiStatus_

// alias to use template instance with default allocator
using WifiStatus =
  protocol::msg::WifiStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__WIFI_STATUS__STRUCT_HPP_

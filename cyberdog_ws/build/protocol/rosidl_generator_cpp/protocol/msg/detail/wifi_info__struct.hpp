// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/WifiInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__WIFI_INFO__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__WIFI_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__WifiInfo __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__WifiInfo __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WifiInfo_
{
  using Type = WifiInfo_<ContainerAllocator>;

  explicit WifiInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssid = "";
      this->pwd = "";
      this->ip = "";
      this->mac = "";
      this->type = "";
    }
  }

  explicit WifiInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ssid(_alloc),
    pwd(_alloc),
    ip(_alloc),
    mac(_alloc),
    type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssid = "";
      this->pwd = "";
      this->ip = "";
      this->mac = "";
      this->type = "";
    }
  }

  // field types and members
  using _ssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ssid_type ssid;
  using _pwd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pwd_type pwd;
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _mac_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mac_type mac;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__ssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ssid = _arg;
    return *this;
  }
  Type & set__pwd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pwd = _arg;
    return *this;
  }
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__mac(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mac = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::WifiInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::WifiInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::WifiInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::WifiInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::WifiInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::WifiInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::WifiInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::WifiInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::WifiInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::WifiInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__WifiInfo
    std::shared_ptr<protocol::msg::WifiInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__WifiInfo
    std::shared_ptr<protocol::msg::WifiInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiInfo_ & other) const
  {
    if (this->ssid != other.ssid) {
      return false;
    }
    if (this->pwd != other.pwd) {
      return false;
    }
    if (this->ip != other.ip) {
      return false;
    }
    if (this->mac != other.mac) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiInfo_

// alias to use template instance with default allocator
using WifiInfo =
  protocol::msg::WifiInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__WIFI_INFO__STRUCT_HPP_

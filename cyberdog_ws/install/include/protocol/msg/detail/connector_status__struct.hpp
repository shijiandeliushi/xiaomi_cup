// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/ConnectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__ConnectorStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__ConnectorStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectorStatus_
{
  using Type = ConnectorStatus_<ContainerAllocator>;

  explicit ConnectorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->is_internet = false;
      this->ssid = "";
      this->robot_ip = "";
      this->provider_ip = "";
      this->strength = 0;
      this->code = 0l;
    }
  }

  explicit ConnectorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ssid(_alloc),
    robot_ip(_alloc),
    provider_ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->is_internet = false;
      this->ssid = "";
      this->robot_ip = "";
      this->provider_ip = "";
      this->strength = 0;
      this->code = 0l;
    }
  }

  // field types and members
  using _is_connected_type =
    bool;
  _is_connected_type is_connected;
  using _is_internet_type =
    bool;
  _is_internet_type is_internet;
  using _ssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ssid_type ssid;
  using _robot_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_ip_type robot_ip;
  using _provider_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _provider_ip_type provider_ip;
  using _strength_type =
    uint8_t;
  _strength_type strength;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__is_connected(
    const bool & _arg)
  {
    this->is_connected = _arg;
    return *this;
  }
  Type & set__is_internet(
    const bool & _arg)
  {
    this->is_internet = _arg;
    return *this;
  }
  Type & set__ssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ssid = _arg;
    return *this;
  }
  Type & set__robot_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_ip = _arg;
    return *this;
  }
  Type & set__provider_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->provider_ip = _arg;
    return *this;
  }
  Type & set__strength(
    const uint8_t & _arg)
  {
    this->strength = _arg;
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
    protocol::msg::ConnectorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::ConnectorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::ConnectorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::ConnectorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::ConnectorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::ConnectorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::ConnectorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::ConnectorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::ConnectorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::ConnectorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__ConnectorStatus
    std::shared_ptr<protocol::msg::ConnectorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__ConnectorStatus
    std::shared_ptr<protocol::msg::ConnectorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectorStatus_ & other) const
  {
    if (this->is_connected != other.is_connected) {
      return false;
    }
    if (this->is_internet != other.is_internet) {
      return false;
    }
    if (this->ssid != other.ssid) {
      return false;
    }
    if (this->robot_ip != other.robot_ip) {
      return false;
    }
    if (this->provider_ip != other.provider_ip) {
      return false;
    }
    if (this->strength != other.strength) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectorStatus_

// alias to use template instance with default allocator
using ConnectorStatus =
  protocol::msg::ConnectorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__STRUCT_HPP_

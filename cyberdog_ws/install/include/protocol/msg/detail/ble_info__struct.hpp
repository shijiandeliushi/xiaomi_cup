// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/BLEInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLE_INFO__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__BLE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__BLEInfo __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__BLEInfo __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BLEInfo_
{
  using Type = BLEInfo_<ContainerAllocator>;

  explicit BLEInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mac = "";
      this->name = "";
      this->addr_type = "";
      this->device_type = 0;
      this->battery_level = 0.0f;
      this->firmware_version = "";
    }
  }

  explicit BLEInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mac(_alloc),
    name(_alloc),
    addr_type(_alloc),
    firmware_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mac = "";
      this->name = "";
      this->addr_type = "";
      this->device_type = 0;
      this->battery_level = 0.0f;
      this->firmware_version = "";
    }
  }

  // field types and members
  using _mac_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mac_type mac;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _addr_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _addr_type_type addr_type;
  using _device_type_type =
    uint8_t;
  _device_type_type device_type;
  using _battery_level_type =
    float;
  _battery_level_type battery_level;
  using _firmware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _firmware_version_type firmware_version;

  // setters for named parameter idiom
  Type & set__mac(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mac = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__addr_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->addr_type = _arg;
    return *this;
  }
  Type & set__device_type(
    const uint8_t & _arg)
  {
    this->device_type = _arg;
    return *this;
  }
  Type & set__battery_level(
    const float & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__firmware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::BLEInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::BLEInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::BLEInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::BLEInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::BLEInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::BLEInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::BLEInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::BLEInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::BLEInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::BLEInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__BLEInfo
    std::shared_ptr<protocol::msg::BLEInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__BLEInfo
    std::shared_ptr<protocol::msg::BLEInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BLEInfo_ & other) const
  {
    if (this->mac != other.mac) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->addr_type != other.addr_type) {
      return false;
    }
    if (this->device_type != other.device_type) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const BLEInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BLEInfo_

// alias to use template instance with default allocator
using BLEInfo =
  protocol::msg::BLEInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BLE_INFO__STRUCT_HPP_

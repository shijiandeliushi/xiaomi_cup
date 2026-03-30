// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/BluetoothStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__BluetoothStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__BluetoothStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BluetoothStatus_
{
  using Type = BluetoothStatus_<ContainerAllocator>;

  explicit BluetoothStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->advtiseable = 0;
      this->connectable = 0;
    }
  }

  explicit BluetoothStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->advtiseable = 0;
      this->connectable = 0;
    }
  }

  // field types and members
  using _advtiseable_type =
    int8_t;
  _advtiseable_type advtiseable;
  using _connectable_type =
    int8_t;
  _connectable_type connectable;

  // setters for named parameter idiom
  Type & set__advtiseable(
    const int8_t & _arg)
  {
    this->advtiseable = _arg;
    return *this;
  }
  Type & set__connectable(
    const int8_t & _arg)
  {
    this->connectable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::BluetoothStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::BluetoothStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::BluetoothStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::BluetoothStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::BluetoothStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::BluetoothStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::BluetoothStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::BluetoothStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::BluetoothStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::BluetoothStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__BluetoothStatus
    std::shared_ptr<protocol::msg::BluetoothStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__BluetoothStatus
    std::shared_ptr<protocol::msg::BluetoothStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BluetoothStatus_ & other) const
  {
    if (this->advtiseable != other.advtiseable) {
      return false;
    }
    if (this->connectable != other.connectable) {
      return false;
    }
    return true;
  }
  bool operator!=(const BluetoothStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BluetoothStatus_

// alias to use template instance with default allocator
using BluetoothStatus =
  protocol::msg::BluetoothStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__STRUCT_HPP_

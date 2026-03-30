// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/UwbRaw.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__UWB_RAW__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__UWB_RAW__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__UwbRaw __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__UwbRaw __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UwbRaw_
{
  using Type = UwbRaw_<ContainerAllocator>;

  explicit UwbRaw_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist = 0.0f;
      this->angle = 0.0f;
      this->n_los = 0.0f;
      this->rssi_1 = 0.0f;
      this->rssi_2 = 0.0f;
    }
  }

  explicit UwbRaw_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist = 0.0f;
      this->angle = 0.0f;
      this->n_los = 0.0f;
      this->rssi_1 = 0.0f;
      this->rssi_2 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dist_type =
    float;
  _dist_type dist;
  using _angle_type =
    float;
  _angle_type angle;
  using _n_los_type =
    float;
  _n_los_type n_los;
  using _rssi_1_type =
    float;
  _rssi_1_type rssi_1;
  using _rssi_2_type =
    float;
  _rssi_2_type rssi_2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dist(
    const float & _arg)
  {
    this->dist = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__n_los(
    const float & _arg)
  {
    this->n_los = _arg;
    return *this;
  }
  Type & set__rssi_1(
    const float & _arg)
  {
    this->rssi_1 = _arg;
    return *this;
  }
  Type & set__rssi_2(
    const float & _arg)
  {
    this->rssi_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::UwbRaw_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::UwbRaw_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::UwbRaw_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::UwbRaw_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UwbRaw_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UwbRaw_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UwbRaw_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UwbRaw_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::UwbRaw_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::UwbRaw_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__UwbRaw
    std::shared_ptr<protocol::msg::UwbRaw_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__UwbRaw
    std::shared_ptr<protocol::msg::UwbRaw_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UwbRaw_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dist != other.dist) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->n_los != other.n_los) {
      return false;
    }
    if (this->rssi_1 != other.rssi_1) {
      return false;
    }
    if (this->rssi_2 != other.rssi_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const UwbRaw_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UwbRaw_

// alias to use template instance with default allocator
using UwbRaw =
  protocol::msg::UwbRaw_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__UWB_RAW__STRUCT_HPP_

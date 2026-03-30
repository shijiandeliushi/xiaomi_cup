// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/UltrasonicPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'ultrasonic_info'
#include "sensor_msgs/msg/detail/range__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__UltrasonicPayload __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__UltrasonicPayload __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UltrasonicPayload_
{
  using Type = UltrasonicPayload_<ContainerAllocator>;

  explicit UltrasonicPayload_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ultrasonic_info(_init)
  {
    (void)_init;
  }

  explicit UltrasonicPayload_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ultrasonic_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _ultrasonic_info_type =
    sensor_msgs::msg::Range_<ContainerAllocator>;
  _ultrasonic_info_type ultrasonic_info;

  // setters for named parameter idiom
  Type & set__ultrasonic_info(
    const sensor_msgs::msg::Range_<ContainerAllocator> & _arg)
  {
    this->ultrasonic_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::UltrasonicPayload_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::UltrasonicPayload_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::UltrasonicPayload_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::UltrasonicPayload_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UltrasonicPayload_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UltrasonicPayload_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UltrasonicPayload_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UltrasonicPayload_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::UltrasonicPayload_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::UltrasonicPayload_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__UltrasonicPayload
    std::shared_ptr<protocol::msg::UltrasonicPayload_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__UltrasonicPayload
    std::shared_ptr<protocol::msg::UltrasonicPayload_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UltrasonicPayload_ & other) const
  {
    if (this->ultrasonic_info != other.ultrasonic_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const UltrasonicPayload_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UltrasonicPayload_

// alias to use template instance with default allocator
using UltrasonicPayload =
  protocol::msg::UltrasonicPayload_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__STRUCT_HPP_

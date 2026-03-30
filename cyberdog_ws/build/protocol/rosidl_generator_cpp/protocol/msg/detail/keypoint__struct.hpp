// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/Keypoint.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__KEYPOINT__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__KEYPOINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__Keypoint __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__Keypoint __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Keypoint_
{
  using Type = Keypoint_<ContainerAllocator>;

  explicit Keypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit Keypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::Keypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::Keypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::Keypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::Keypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Keypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Keypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Keypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Keypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::Keypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::Keypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__Keypoint
    std::shared_ptr<protocol::msg::Keypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__Keypoint
    std::shared_ptr<protocol::msg::Keypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Keypoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Keypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Keypoint_

// alias to use template instance with default allocator
using Keypoint =
  protocol::msg::Keypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__KEYPOINT__STRUCT_HPP_

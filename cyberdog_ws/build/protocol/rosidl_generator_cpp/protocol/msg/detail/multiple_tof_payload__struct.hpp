// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MultipleTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MULTIPLE_TOF_PAYLOAD__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MULTIPLE_TOF_PAYLOAD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'left_head'
// Member 'left_rear'
// Member 'right_head'
// Member 'right_rear'
#include "protocol/msg/detail/single_tof_payload__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__MultipleTofPayload __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MultipleTofPayload __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultipleTofPayload_
{
  using Type = MultipleTofPayload_<ContainerAllocator>;

  explicit MultipleTofPayload_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_head(_init),
    left_rear(_init),
    right_head(_init),
    right_rear(_init)
  {
    (void)_init;
  }

  explicit MultipleTofPayload_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_head(_alloc, _init),
    left_rear(_alloc, _init),
    right_head(_alloc, _init),
    right_rear(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _left_head_type =
    protocol::msg::SingleTofPayload_<ContainerAllocator>;
  _left_head_type left_head;
  using _left_rear_type =
    protocol::msg::SingleTofPayload_<ContainerAllocator>;
  _left_rear_type left_rear;
  using _right_head_type =
    protocol::msg::SingleTofPayload_<ContainerAllocator>;
  _right_head_type right_head;
  using _right_rear_type =
    protocol::msg::SingleTofPayload_<ContainerAllocator>;
  _right_rear_type right_rear;

  // setters for named parameter idiom
  Type & set__left_head(
    const protocol::msg::SingleTofPayload_<ContainerAllocator> & _arg)
  {
    this->left_head = _arg;
    return *this;
  }
  Type & set__left_rear(
    const protocol::msg::SingleTofPayload_<ContainerAllocator> & _arg)
  {
    this->left_rear = _arg;
    return *this;
  }
  Type & set__right_head(
    const protocol::msg::SingleTofPayload_<ContainerAllocator> & _arg)
  {
    this->right_head = _arg;
    return *this;
  }
  Type & set__right_rear(
    const protocol::msg::SingleTofPayload_<ContainerAllocator> & _arg)
  {
    this->right_rear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::MultipleTofPayload_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MultipleTofPayload_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MultipleTofPayload_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MultipleTofPayload_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MultipleTofPayload_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MultipleTofPayload_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MultipleTofPayload_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MultipleTofPayload_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MultipleTofPayload_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MultipleTofPayload_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MultipleTofPayload
    std::shared_ptr<protocol::msg::MultipleTofPayload_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MultipleTofPayload
    std::shared_ptr<protocol::msg::MultipleTofPayload_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultipleTofPayload_ & other) const
  {
    if (this->left_head != other.left_head) {
      return false;
    }
    if (this->left_rear != other.left_rear) {
      return false;
    }
    if (this->right_head != other.right_head) {
      return false;
    }
    if (this->right_rear != other.right_rear) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultipleTofPayload_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultipleTofPayload_

// alias to use template instance with default allocator
using MultipleTofPayload =
  protocol::msg::MultipleTofPayload_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MULTIPLE_TOF_PAYLOAD__STRUCT_HPP_

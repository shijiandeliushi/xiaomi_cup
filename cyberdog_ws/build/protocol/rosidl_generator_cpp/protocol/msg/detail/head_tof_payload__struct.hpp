// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/HeadTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__HEAD_TOF_PAYLOAD__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__HEAD_TOF_PAYLOAD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'left_head'
// Member 'right_head'
#include "protocol/msg/detail/single_tof_payload__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__HeadTofPayload __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__HeadTofPayload __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeadTofPayload_
{
  using Type = HeadTofPayload_<ContainerAllocator>;

  explicit HeadTofPayload_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_head(_init),
    right_head(_init)
  {
    (void)_init;
  }

  explicit HeadTofPayload_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_head(_alloc, _init),
    right_head(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _left_head_type =
    protocol::msg::SingleTofPayload_<ContainerAllocator>;
  _left_head_type left_head;
  using _right_head_type =
    protocol::msg::SingleTofPayload_<ContainerAllocator>;
  _right_head_type right_head;

  // setters for named parameter idiom
  Type & set__left_head(
    const protocol::msg::SingleTofPayload_<ContainerAllocator> & _arg)
  {
    this->left_head = _arg;
    return *this;
  }
  Type & set__right_head(
    const protocol::msg::SingleTofPayload_<ContainerAllocator> & _arg)
  {
    this->right_head = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::HeadTofPayload_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::HeadTofPayload_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::HeadTofPayload_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::HeadTofPayload_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::HeadTofPayload_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::HeadTofPayload_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::HeadTofPayload_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::HeadTofPayload_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::HeadTofPayload_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::HeadTofPayload_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__HeadTofPayload
    std::shared_ptr<protocol::msg::HeadTofPayload_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__HeadTofPayload
    std::shared_ptr<protocol::msg::HeadTofPayload_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadTofPayload_ & other) const
  {
    if (this->left_head != other.left_head) {
      return false;
    }
    if (this->right_head != other.right_head) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadTofPayload_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadTofPayload_

// alias to use template instance with default allocator
using HeadTofPayload =
  protocol::msg::HeadTofPayload_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__HEAD_TOF_PAYLOAD__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/AlgoTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__AlgoTaskStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__AlgoTaskStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AlgoTaskStatus_
{
  using Type = AlgoTaskStatus_<ContainerAllocator>;

  explicit AlgoTaskStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_status = 0;
      this->task_sub_status = 0l;
    }
  }

  explicit AlgoTaskStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_status = 0;
      this->task_sub_status = 0l;
    }
  }

  // field types and members
  using _task_status_type =
    uint8_t;
  _task_status_type task_status;
  using _task_sub_status_type =
    int32_t;
  _task_sub_status_type task_sub_status;

  // setters for named parameter idiom
  Type & set__task_status(
    const uint8_t & _arg)
  {
    this->task_status = _arg;
    return *this;
  }
  Type & set__task_sub_status(
    const int32_t & _arg)
  {
    this->task_sub_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::AlgoTaskStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::AlgoTaskStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::AlgoTaskStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::AlgoTaskStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AlgoTaskStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AlgoTaskStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AlgoTaskStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AlgoTaskStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::AlgoTaskStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::AlgoTaskStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__AlgoTaskStatus
    std::shared_ptr<protocol::msg::AlgoTaskStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__AlgoTaskStatus
    std::shared_ptr<protocol::msg::AlgoTaskStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlgoTaskStatus_ & other) const
  {
    if (this->task_status != other.task_status) {
      return false;
    }
    if (this->task_sub_status != other.task_sub_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlgoTaskStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlgoTaskStatus_

// alias to use template instance with default allocator
using AlgoTaskStatus =
  protocol::msg::AlgoTaskStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__STRUCT_HPP_

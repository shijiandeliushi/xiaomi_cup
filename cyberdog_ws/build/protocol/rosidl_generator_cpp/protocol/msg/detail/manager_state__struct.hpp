// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/ManagerState.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MANAGER_STATE__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MANAGER_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__ManagerState __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__ManagerState __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManagerState_
{
  using Type = ManagerState_<ContainerAllocator>;

  explicit ManagerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->err_msg = "";
    }
  }

  explicit ManagerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : err_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->err_msg = "";
    }
  }

  // field types and members
  using _state_type =
    int8_t;
  _state_type state;
  using _err_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _err_msg_type err_msg;

  // setters for named parameter idiom
  Type & set__state(
    const int8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__err_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->err_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::ManagerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::ManagerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::ManagerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::ManagerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::ManagerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::ManagerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::ManagerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::ManagerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::ManagerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::ManagerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__ManagerState
    std::shared_ptr<protocol::msg::ManagerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__ManagerState
    std::shared_ptr<protocol::msg::ManagerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManagerState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->err_msg != other.err_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManagerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManagerState_

// alias to use template instance with default allocator
using ManagerState =
  protocol::msg::ManagerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MANAGER_STATE__STRUCT_HPP_

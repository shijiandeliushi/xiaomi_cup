// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/NodeError.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__NODE_ERROR__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__NODE_ERROR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__NodeError __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__NodeError __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeError_
{
  using Type = NodeError_<ContainerAllocator>;

  explicit NodeError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->code = 0l;
    }
  }

  explicit NodeError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->code = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
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
    protocol::msg::NodeError_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::NodeError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::NodeError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::NodeError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::NodeError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::NodeError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::NodeError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::NodeError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::NodeError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::NodeError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__NodeError
    std::shared_ptr<protocol::msg::NodeError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__NodeError
    std::shared_ptr<protocol::msg::NodeError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeError_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeError_

// alias to use template instance with default allocator
using NodeError =
  protocol::msg::NodeError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__NODE_ERROR__STRUCT_HPP_

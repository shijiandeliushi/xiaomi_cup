// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/UwbArray.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__UWB_ARRAY__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__UWB_ARRAY__STRUCT_HPP_

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
// Member 'data'
#include "protocol/msg/detail/uwb_raw__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__UwbArray __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__UwbArray __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UwbArray_
{
  using Type = UwbArray_<ContainerAllocator>;

  explicit UwbArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit UwbArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<protocol::msg::UwbRaw_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::UwbRaw_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<protocol::msg::UwbRaw_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::UwbRaw_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::UwbArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::UwbArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::UwbArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::UwbArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UwbArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UwbArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UwbArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UwbArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::UwbArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::UwbArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__UwbArray
    std::shared_ptr<protocol::msg::UwbArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__UwbArray
    std::shared_ptr<protocol::msg::UwbArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UwbArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const UwbArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UwbArray_

// alias to use template instance with default allocator
using UwbArray =
  protocol::msg::UwbArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__UWB_ARRAY__STRUCT_HPP_

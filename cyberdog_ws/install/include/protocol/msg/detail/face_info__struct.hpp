// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_INFO__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_INFO__STRUCT_HPP_

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
// Member 'infos'
#include "protocol/msg/detail/face__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__FaceInfo __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__FaceInfo __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaceInfo_
{
  using Type = FaceInfo_<ContainerAllocator>;

  explicit FaceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ul;
    }
  }

  explicit FaceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _count_type =
    uint32_t;
  _count_type count;
  using _infos_type =
    std::vector<protocol::msg::Face_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::Face_<ContainerAllocator>>>;
  _infos_type infos;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__count(
    const uint32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__infos(
    const std::vector<protocol::msg::Face_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::Face_<ContainerAllocator>>> & _arg)
  {
    this->infos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::FaceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::FaceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::FaceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::FaceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FaceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FaceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FaceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FaceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::FaceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::FaceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__FaceInfo
    std::shared_ptr<protocol::msg::FaceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__FaceInfo
    std::shared_ptr<protocol::msg::FaceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->infos != other.infos) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceInfo_

// alias to use template instance with default allocator
using FaceInfo =
  protocol::msg::FaceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE_INFO__STRUCT_HPP_

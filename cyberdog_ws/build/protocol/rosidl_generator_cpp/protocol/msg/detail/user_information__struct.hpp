// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/UserInformation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__USER_INFORMATION__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__USER_INFORMATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__UserInformation __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__UserInformation __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserInformation_
{
  using Type = UserInformation_<ContainerAllocator>;

  explicit UserInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->username = "";
      this->voicestatus = 0l;
      this->facestatus = 0l;
    }
  }

  explicit UserInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : username(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->username = "";
      this->voicestatus = 0l;
      this->facestatus = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _username_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _username_type username;
  using _voicestatus_type =
    int32_t;
  _voicestatus_type voicestatus;
  using _facestatus_type =
    int32_t;
  _facestatus_type facestatus;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__username(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->username = _arg;
    return *this;
  }
  Type & set__voicestatus(
    const int32_t & _arg)
  {
    this->voicestatus = _arg;
    return *this;
  }
  Type & set__facestatus(
    const int32_t & _arg)
  {
    this->facestatus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::UserInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::UserInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::UserInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::UserInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UserInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UserInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UserInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UserInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::UserInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::UserInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__UserInformation
    std::shared_ptr<protocol::msg::UserInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__UserInformation
    std::shared_ptr<protocol::msg::UserInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInformation_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->username != other.username) {
      return false;
    }
    if (this->voicestatus != other.voicestatus) {
      return false;
    }
    if (this->facestatus != other.facestatus) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInformation_

// alias to use template instance with default allocator
using UserInformation =
  protocol::msg::UserInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__USER_INFORMATION__STRUCT_HPP_

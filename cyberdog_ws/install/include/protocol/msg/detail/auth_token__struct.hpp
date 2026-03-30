// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/AuthToken.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUTH_TOKEN__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__AUTH_TOKEN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__AuthToken __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__AuthToken __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AuthToken_
{
  using Type = AuthToken_<ContainerAllocator>;

  explicit AuthToken_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
      this->token_access = "";
      this->token_fresh = "";
      this->token_expirein = 0ull;
    }
  }

  explicit AuthToken_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uid(_alloc),
    token_access(_alloc),
    token_fresh(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
      this->token_access = "";
      this->token_fresh = "";
      this->token_expirein = 0ull;
    }
  }

  // field types and members
  using _uid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uid_type uid;
  using _token_access_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _token_access_type token_access;
  using _token_fresh_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _token_fresh_type token_fresh;
  using _token_expirein_type =
    uint64_t;
  _token_expirein_type token_expirein;

  // setters for named parameter idiom
  Type & set__uid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uid = _arg;
    return *this;
  }
  Type & set__token_access(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->token_access = _arg;
    return *this;
  }
  Type & set__token_fresh(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->token_fresh = _arg;
    return *this;
  }
  Type & set__token_expirein(
    const uint64_t & _arg)
  {
    this->token_expirein = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::AuthToken_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::AuthToken_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::AuthToken_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::AuthToken_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AuthToken_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AuthToken_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AuthToken_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AuthToken_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::AuthToken_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::AuthToken_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__AuthToken
    std::shared_ptr<protocol::msg::AuthToken_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__AuthToken
    std::shared_ptr<protocol::msg::AuthToken_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuthToken_ & other) const
  {
    if (this->uid != other.uid) {
      return false;
    }
    if (this->token_access != other.token_access) {
      return false;
    }
    if (this->token_fresh != other.token_fresh) {
      return false;
    }
    if (this->token_expirein != other.token_expirein) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuthToken_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuthToken_

// alias to use template instance with default allocator
using AuthToken =
  protocol::msg::AuthToken_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUTH_TOKEN__STRUCT_HPP_

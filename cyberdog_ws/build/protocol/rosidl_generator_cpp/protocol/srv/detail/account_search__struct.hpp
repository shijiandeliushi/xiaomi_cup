// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/AccountSearch.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AccountSearch_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AccountSearch_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AccountSearch_Request_
{
  using Type = AccountSearch_Request_<ContainerAllocator>;

  explicit AccountSearch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->member = "";
    }
  }

  explicit AccountSearch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : member(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->member = "";
    }
  }

  // field types and members
  using _member_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _member_type member;

  // setters for named parameter idiom
  Type & set__member(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::AccountSearch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AccountSearch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AccountSearch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AccountSearch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AccountSearch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AccountSearch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AccountSearch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AccountSearch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AccountSearch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AccountSearch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AccountSearch_Request
    std::shared_ptr<protocol::srv::AccountSearch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AccountSearch_Request
    std::shared_ptr<protocol::srv::AccountSearch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccountSearch_Request_ & other) const
  {
    if (this->member != other.member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccountSearch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccountSearch_Request_

// alias to use template instance with default allocator
using AccountSearch_Request =
  protocol::srv::AccountSearch_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AccountSearch_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AccountSearch_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AccountSearch_Response_
{
  using Type = AccountSearch_Response_<ContainerAllocator>;

  explicit AccountSearch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->code = 0l;
    }
  }

  explicit AccountSearch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->code = 0l;
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
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
    protocol::srv::AccountSearch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AccountSearch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AccountSearch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AccountSearch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AccountSearch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AccountSearch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AccountSearch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AccountSearch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AccountSearch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AccountSearch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AccountSearch_Response
    std::shared_ptr<protocol::srv::AccountSearch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AccountSearch_Response
    std::shared_ptr<protocol::srv::AccountSearch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccountSearch_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccountSearch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccountSearch_Response_

// alias to use template instance with default allocator
using AccountSearch_Response =
  protocol::srv::AccountSearch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct AccountSearch
{
  using Request = protocol::srv::AccountSearch_Request;
  using Response = protocol::srv::AccountSearch_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/Unlock.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__UNLOCK__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__UNLOCK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__Unlock_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__Unlock_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Unlock_Request_
{
  using Type = Unlock_Request_<ContainerAllocator>;

  explicit Unlock_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->httplink = "";
    }
  }

  explicit Unlock_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : httplink(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->httplink = "";
    }
  }

  // field types and members
  using _httplink_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _httplink_type httplink;

  // setters for named parameter idiom
  Type & set__httplink(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->httplink = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::Unlock_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::Unlock_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::Unlock_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::Unlock_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Unlock_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Unlock_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Unlock_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Unlock_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::Unlock_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::Unlock_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__Unlock_Request
    std::shared_ptr<protocol::srv::Unlock_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__Unlock_Request
    std::shared_ptr<protocol::srv::Unlock_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Unlock_Request_ & other) const
  {
    if (this->httplink != other.httplink) {
      return false;
    }
    return true;
  }
  bool operator!=(const Unlock_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Unlock_Request_

// alias to use template instance with default allocator
using Unlock_Request =
  protocol::srv::Unlock_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__Unlock_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__Unlock_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Unlock_Response_
{
  using Type = Unlock_Response_<ContainerAllocator>;

  explicit Unlock_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unlock_result = 0ul;
      this->code = 0l;
    }
  }

  explicit Unlock_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unlock_result = 0ul;
      this->code = 0l;
    }
  }

  // field types and members
  using _unlock_result_type =
    uint32_t;
  _unlock_result_type unlock_result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__unlock_result(
    const uint32_t & _arg)
  {
    this->unlock_result = _arg;
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
    protocol::srv::Unlock_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::Unlock_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::Unlock_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::Unlock_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Unlock_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Unlock_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Unlock_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Unlock_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::Unlock_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::Unlock_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__Unlock_Response
    std::shared_ptr<protocol::srv::Unlock_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__Unlock_Response
    std::shared_ptr<protocol::srv::Unlock_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Unlock_Response_ & other) const
  {
    if (this->unlock_result != other.unlock_result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const Unlock_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Unlock_Response_

// alias to use template instance with default allocator
using Unlock_Response =
  protocol::srv::Unlock_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct Unlock
{
  using Request = protocol::srv::Unlock_Request;
  using Response = protocol::srv::Unlock_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__UNLOCK__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/FsMachine.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FS_MACHINE__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__FS_MACHINE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__FsMachine_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__FsMachine_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FsMachine_Request_
{
  using Type = FsMachine_Request_<ContainerAllocator>;

  explicit FsMachine_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_state = "";
    }
  }

  explicit FsMachine_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_state = "";
    }
  }

  // field types and members
  using _target_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_state_type target_state;

  // setters for named parameter idiom
  Type & set__target_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::FsMachine_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::FsMachine_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::FsMachine_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::FsMachine_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FsMachine_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FsMachine_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FsMachine_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FsMachine_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::FsMachine_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::FsMachine_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__FsMachine_Request
    std::shared_ptr<protocol::srv::FsMachine_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__FsMachine_Request
    std::shared_ptr<protocol::srv::FsMachine_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FsMachine_Request_ & other) const
  {
    if (this->target_state != other.target_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const FsMachine_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FsMachine_Request_

// alias to use template instance with default allocator
using FsMachine_Request =
  protocol::srv::FsMachine_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__FsMachine_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__FsMachine_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FsMachine_Response_
{
  using Type = FsMachine_Response_<ContainerAllocator>;

  explicit FsMachine_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = 0;
      this->code = 0l;
    }
  }

  explicit FsMachine_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = 0;
      this->code = 0l;
    }
  }

  // field types and members
  using _current_state_type =
    uint8_t;
  _current_state_type current_state;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__current_state(
    const uint8_t & _arg)
  {
    this->current_state = _arg;
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
    protocol::srv::FsMachine_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::FsMachine_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::FsMachine_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::FsMachine_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FsMachine_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FsMachine_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FsMachine_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FsMachine_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::FsMachine_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::FsMachine_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__FsMachine_Response
    std::shared_ptr<protocol::srv::FsMachine_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__FsMachine_Response
    std::shared_ptr<protocol::srv::FsMachine_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FsMachine_Response_ & other) const
  {
    if (this->current_state != other.current_state) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const FsMachine_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FsMachine_Response_

// alias to use template instance with default allocator
using FsMachine_Response =
  protocol::srv::FsMachine_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct FsMachine
{
  using Request = protocol::srv::FsMachine_Request;
  using Response = protocol::srv::FsMachine_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__FS_MACHINE__STRUCT_HPP_

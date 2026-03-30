// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/GestureActionControl.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__GestureActionControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__GestureActionControl_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GestureActionControl_Request_
{
  using Type = GestureActionControl_Request_<ContainerAllocator>;

  explicit GestureActionControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->timeout = 0l;
    }
  }

  explicit GestureActionControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->timeout = 0l;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _timeout_type =
    int32_t;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__timeout(
    const int32_t & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t START_ALGO =
    0u;
  static constexpr uint8_t STOP_ALGO =
    1u;
  static constexpr int32_t DEFAUT_TIMEOUT =
    60;

  // pointer types
  using RawPtr =
    protocol::srv::GestureActionControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::GestureActionControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::GestureActionControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::GestureActionControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GestureActionControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GestureActionControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GestureActionControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GestureActionControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::GestureActionControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::GestureActionControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__GestureActionControl_Request
    std::shared_ptr<protocol::srv::GestureActionControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__GestureActionControl_Request
    std::shared_ptr<protocol::srv::GestureActionControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GestureActionControl_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const GestureActionControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GestureActionControl_Request_

// alias to use template instance with default allocator
using GestureActionControl_Request =
  protocol::srv::GestureActionControl_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GestureActionControl_Request_<ContainerAllocator>::START_ALGO;
template<typename ContainerAllocator>
constexpr uint8_t GestureActionControl_Request_<ContainerAllocator>::STOP_ALGO;
template<typename ContainerAllocator>
constexpr int32_t GestureActionControl_Request_<ContainerAllocator>::DEFAUT_TIMEOUT;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__GestureActionControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__GestureActionControl_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GestureActionControl_Response_
{
  using Type = GestureActionControl_Response_<ContainerAllocator>;

  explicit GestureActionControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit GestureActionControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  // field types and members
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t RESULT_SUCCESS =
    0;
  static constexpr int32_t RESULT_BUSY =
    1;

  // pointer types
  using RawPtr =
    protocol::srv::GestureActionControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::GestureActionControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::GestureActionControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::GestureActionControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GestureActionControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GestureActionControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GestureActionControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GestureActionControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::GestureActionControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::GestureActionControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__GestureActionControl_Response
    std::shared_ptr<protocol::srv::GestureActionControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__GestureActionControl_Response
    std::shared_ptr<protocol::srv::GestureActionControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GestureActionControl_Response_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const GestureActionControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GestureActionControl_Response_

// alias to use template instance with default allocator
using GestureActionControl_Response =
  protocol::srv::GestureActionControl_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t GestureActionControl_Response_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t GestureActionControl_Response_<ContainerAllocator>::RESULT_BUSY;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct GestureActionControl
{
  using Request = protocol::srv::GestureActionControl_Request;
  using Response = protocol::srv::GestureActionControl_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__STRUCT_HPP_

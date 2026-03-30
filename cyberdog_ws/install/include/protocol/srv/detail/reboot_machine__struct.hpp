// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/RebootMachine.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__RebootMachine_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__RebootMachine_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RebootMachine_Request_
{
  using Type = RebootMachine_Request_<ContainerAllocator>;

  explicit RebootMachine_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rebootmachine = 0l;
    }
  }

  explicit RebootMachine_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rebootmachine = 0l;
    }
  }

  // field types and members
  using _rebootmachine_type =
    int32_t;
  _rebootmachine_type rebootmachine;

  // setters for named parameter idiom
  Type & set__rebootmachine(
    const int32_t & _arg)
  {
    this->rebootmachine = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::RebootMachine_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::RebootMachine_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::RebootMachine_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::RebootMachine_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::RebootMachine_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::RebootMachine_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::RebootMachine_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::RebootMachine_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::RebootMachine_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::RebootMachine_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__RebootMachine_Request
    std::shared_ptr<protocol::srv::RebootMachine_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__RebootMachine_Request
    std::shared_ptr<protocol::srv::RebootMachine_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RebootMachine_Request_ & other) const
  {
    if (this->rebootmachine != other.rebootmachine) {
      return false;
    }
    return true;
  }
  bool operator!=(const RebootMachine_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RebootMachine_Request_

// alias to use template instance with default allocator
using RebootMachine_Request =
  protocol::srv::RebootMachine_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__RebootMachine_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__RebootMachine_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RebootMachine_Response_
{
  using Type = RebootMachine_Response_<ContainerAllocator>;

  explicit RebootMachine_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rebootresult = 0l;
    }
  }

  explicit RebootMachine_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rebootresult = 0l;
    }
  }

  // field types and members
  using _rebootresult_type =
    int32_t;
  _rebootresult_type rebootresult;

  // setters for named parameter idiom
  Type & set__rebootresult(
    const int32_t & _arg)
  {
    this->rebootresult = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::RebootMachine_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::RebootMachine_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::RebootMachine_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::RebootMachine_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::RebootMachine_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::RebootMachine_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::RebootMachine_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::RebootMachine_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::RebootMachine_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::RebootMachine_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__RebootMachine_Response
    std::shared_ptr<protocol::srv::RebootMachine_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__RebootMachine_Response
    std::shared_ptr<protocol::srv::RebootMachine_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RebootMachine_Response_ & other) const
  {
    if (this->rebootresult != other.rebootresult) {
      return false;
    }
    return true;
  }
  bool operator!=(const RebootMachine_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RebootMachine_Response_

// alias to use template instance with default allocator
using RebootMachine_Response =
  protocol::srv::RebootMachine_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct RebootMachine
{
  using Request = protocol::srv::RebootMachine_Request;
  using Response = protocol::srv::RebootMachine_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__STRUCT_HPP_

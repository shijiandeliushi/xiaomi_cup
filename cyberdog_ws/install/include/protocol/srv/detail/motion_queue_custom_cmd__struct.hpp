// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/MotionQueueCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'cmds'
#include "protocol/msg/detail/motion_custom_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionQueueCustomCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionQueueCustomCmd_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionQueueCustomCmd_Request_
{
  using Type = MotionQueueCustomCmd_Request_<ContainerAllocator>;

  explicit MotionQueueCustomCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotionQueueCustomCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _cmds_type =
    std::vector<protocol::msg::MotionCustomCmd_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotionCustomCmd_<ContainerAllocator>>>;
  _cmds_type cmds;

  // setters for named parameter idiom
  Type & set__cmds(
    const std::vector<protocol::msg::MotionCustomCmd_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotionCustomCmd_<ContainerAllocator>>> & _arg)
  {
    this->cmds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionQueueCustomCmd_Request
    std::shared_ptr<protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionQueueCustomCmd_Request
    std::shared_ptr<protocol::srv::MotionQueueCustomCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionQueueCustomCmd_Request_ & other) const
  {
    if (this->cmds != other.cmds) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionQueueCustomCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionQueueCustomCmd_Request_

// alias to use template instance with default allocator
using MotionQueueCustomCmd_Request =
  protocol::srv::MotionQueueCustomCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionQueueCustomCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionQueueCustomCmd_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionQueueCustomCmd_Response_
{
  using Type = MotionQueueCustomCmd_Response_<ContainerAllocator>;

  explicit MotionQueueCustomCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->code = 0l;
    }
  }

  explicit MotionQueueCustomCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->code = 0l;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
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
    protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionQueueCustomCmd_Response
    std::shared_ptr<protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionQueueCustomCmd_Response
    std::shared_ptr<protocol::srv::MotionQueueCustomCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionQueueCustomCmd_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionQueueCustomCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionQueueCustomCmd_Response_

// alias to use template instance with default allocator
using MotionQueueCustomCmd_Response =
  protocol::srv::MotionQueueCustomCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct MotionQueueCustomCmd
{
  using Request = protocol::srv::MotionQueueCustomCmd_Request;
  using Response = protocol::srv::MotionQueueCustomCmd_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__STRUCT_HPP_

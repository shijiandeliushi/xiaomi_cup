// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/OtaServerCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'request'
#include "protocol/msg/detail/ota_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__OtaServerCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__OtaServerCmd_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OtaServerCmd_Request_
{
  using Type = OtaServerCmd_Request_<ContainerAllocator>;

  explicit OtaServerCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit OtaServerCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    protocol::msg::OtaCmd_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const protocol::msg::OtaCmd_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::OtaServerCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::OtaServerCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::OtaServerCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::OtaServerCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::OtaServerCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::OtaServerCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::OtaServerCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::OtaServerCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::OtaServerCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::OtaServerCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__OtaServerCmd_Request
    std::shared_ptr<protocol::srv::OtaServerCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__OtaServerCmd_Request
    std::shared_ptr<protocol::srv::OtaServerCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OtaServerCmd_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const OtaServerCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OtaServerCmd_Request_

// alias to use template instance with default allocator
using OtaServerCmd_Request =
  protocol::srv::OtaServerCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


// Include directives for member types
// Member 'response'
// already included above
// #include "protocol/msg/detail/ota_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__OtaServerCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__OtaServerCmd_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OtaServerCmd_Response_
{
  using Type = OtaServerCmd_Response_<ContainerAllocator>;

  explicit OtaServerCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit OtaServerCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  // field types and members
  using _response_type =
    protocol::msg::OtaCmd_<ContainerAllocator>;
  _response_type response;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__response(
    const protocol::msg::OtaCmd_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
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
    protocol::srv::OtaServerCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::OtaServerCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::OtaServerCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::OtaServerCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::OtaServerCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::OtaServerCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::OtaServerCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::OtaServerCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::OtaServerCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::OtaServerCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__OtaServerCmd_Response
    std::shared_ptr<protocol::srv::OtaServerCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__OtaServerCmd_Response
    std::shared_ptr<protocol::srv::OtaServerCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OtaServerCmd_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const OtaServerCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OtaServerCmd_Response_

// alias to use template instance with default allocator
using OtaServerCmd_Response =
  protocol::srv::OtaServerCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct OtaServerCmd
{
  using Request = protocol::srv::OtaServerCmd_Request;
  using Response = protocol::srv::OtaServerCmd_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__STRUCT_HPP_

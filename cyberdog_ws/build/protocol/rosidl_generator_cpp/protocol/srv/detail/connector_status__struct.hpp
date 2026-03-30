// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/ConnectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECTOR_STATUS__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__CONNECTOR_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__ConnectorStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__ConnectorStatus_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConnectorStatus_Request_
{
  using Type = ConnectorStatus_Request_<ContainerAllocator>;

  explicit ConnectorStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ConnectorStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::ConnectorStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::ConnectorStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::ConnectorStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::ConnectorStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::ConnectorStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::ConnectorStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::ConnectorStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::ConnectorStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::ConnectorStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::ConnectorStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__ConnectorStatus_Request
    std::shared_ptr<protocol::srv::ConnectorStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__ConnectorStatus_Request
    std::shared_ptr<protocol::srv::ConnectorStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectorStatus_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectorStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectorStatus_Request_

// alias to use template instance with default allocator
using ConnectorStatus_Request =
  protocol::srv::ConnectorStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__ConnectorStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__ConnectorStatus_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConnectorStatus_Response_
{
  using Type = ConnectorStatus_Response_<ContainerAllocator>;

  explicit ConnectorStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->ssid = "";
      this->strength = 0;
      this->code = 0l;
    }
  }

  explicit ConnectorStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ssid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->ssid = "";
      this->strength = 0;
      this->code = 0l;
    }
  }

  // field types and members
  using _is_connected_type =
    bool;
  _is_connected_type is_connected;
  using _ssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ssid_type ssid;
  using _strength_type =
    uint8_t;
  _strength_type strength;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__is_connected(
    const bool & _arg)
  {
    this->is_connected = _arg;
    return *this;
  }
  Type & set__ssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ssid = _arg;
    return *this;
  }
  Type & set__strength(
    const uint8_t & _arg)
  {
    this->strength = _arg;
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
    protocol::srv::ConnectorStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::ConnectorStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::ConnectorStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::ConnectorStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::ConnectorStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::ConnectorStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::ConnectorStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::ConnectorStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::ConnectorStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::ConnectorStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__ConnectorStatus_Response
    std::shared_ptr<protocol::srv::ConnectorStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__ConnectorStatus_Response
    std::shared_ptr<protocol::srv::ConnectorStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectorStatus_Response_ & other) const
  {
    if (this->is_connected != other.is_connected) {
      return false;
    }
    if (this->ssid != other.ssid) {
      return false;
    }
    if (this->strength != other.strength) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectorStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectorStatus_Response_

// alias to use template instance with default allocator
using ConnectorStatus_Response =
  protocol::srv::ConnectorStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct ConnectorStatus
{
  using Request = protocol::srv::ConnectorStatus_Request;
  using Response = protocol::srv::ConnectorStatus_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__CONNECTOR_STATUS__STRUCT_HPP_

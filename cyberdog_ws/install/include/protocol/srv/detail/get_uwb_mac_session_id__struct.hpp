// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/GetUWBMacSessionID.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__GetUWBMacSessionID_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__GetUWBMacSessionID_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUWBMacSessionID_Request_
{
  using Type = GetUWBMacSessionID_Request_<ContainerAllocator>;

  explicit GetUWBMacSessionID_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetUWBMacSessionID_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__GetUWBMacSessionID_Request
    std::shared_ptr<protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__GetUWBMacSessionID_Request
    std::shared_ptr<protocol::srv::GetUWBMacSessionID_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUWBMacSessionID_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetUWBMacSessionID_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUWBMacSessionID_Request_

// alias to use template instance with default allocator
using GetUWBMacSessionID_Request =
  protocol::srv::GetUWBMacSessionID_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__GetUWBMacSessionID_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__GetUWBMacSessionID_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUWBMacSessionID_Response_
{
  using Type = GetUWBMacSessionID_Response_<ContainerAllocator>;

  explicit GetUWBMacSessionID_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = 0ul;
      this->master = 0;
      this->slave1 = 0;
      this->slave2 = 0;
      this->slave3 = 0;
      this->slave4 = 0;
      this->code = 0l;
    }
  }

  explicit GetUWBMacSessionID_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = 0ul;
      this->master = 0;
      this->slave1 = 0;
      this->slave2 = 0;
      this->slave3 = 0;
      this->slave4 = 0;
      this->code = 0l;
    }
  }

  // field types and members
  using _session_id_type =
    uint32_t;
  _session_id_type session_id;
  using _master_type =
    uint16_t;
  _master_type master;
  using _slave1_type =
    uint16_t;
  _slave1_type slave1;
  using _slave2_type =
    uint16_t;
  _slave2_type slave2;
  using _slave3_type =
    uint16_t;
  _slave3_type slave3;
  using _slave4_type =
    uint16_t;
  _slave4_type slave4;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__session_id(
    const uint32_t & _arg)
  {
    this->session_id = _arg;
    return *this;
  }
  Type & set__master(
    const uint16_t & _arg)
  {
    this->master = _arg;
    return *this;
  }
  Type & set__slave1(
    const uint16_t & _arg)
  {
    this->slave1 = _arg;
    return *this;
  }
  Type & set__slave2(
    const uint16_t & _arg)
  {
    this->slave2 = _arg;
    return *this;
  }
  Type & set__slave3(
    const uint16_t & _arg)
  {
    this->slave3 = _arg;
    return *this;
  }
  Type & set__slave4(
    const uint16_t & _arg)
  {
    this->slave4 = _arg;
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
    protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__GetUWBMacSessionID_Response
    std::shared_ptr<protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__GetUWBMacSessionID_Response
    std::shared_ptr<protocol::srv::GetUWBMacSessionID_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUWBMacSessionID_Response_ & other) const
  {
    if (this->session_id != other.session_id) {
      return false;
    }
    if (this->master != other.master) {
      return false;
    }
    if (this->slave1 != other.slave1) {
      return false;
    }
    if (this->slave2 != other.slave2) {
      return false;
    }
    if (this->slave3 != other.slave3) {
      return false;
    }
    if (this->slave4 != other.slave4) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetUWBMacSessionID_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUWBMacSessionID_Response_

// alias to use template instance with default allocator
using GetUWBMacSessionID_Response =
  protocol::srv::GetUWBMacSessionID_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct GetUWBMacSessionID
{
  using Request = protocol::srv::GetUWBMacSessionID_Request;
  using Response = protocol::srv::GetUWBMacSessionID_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__STRUCT_HPP_

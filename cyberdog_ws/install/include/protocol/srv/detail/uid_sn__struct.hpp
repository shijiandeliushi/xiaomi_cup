// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/UidSn.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__UID_SN__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__UID_SN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__UidSn_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__UidSn_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UidSn_Request_
{
  using Type = UidSn_Request_<ContainerAllocator>;

  explicit UidSn_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit UidSn_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::UidSn_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::UidSn_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::UidSn_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::UidSn_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::UidSn_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::UidSn_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::UidSn_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::UidSn_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::UidSn_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::UidSn_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__UidSn_Request
    std::shared_ptr<protocol::srv::UidSn_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__UidSn_Request
    std::shared_ptr<protocol::srv::UidSn_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UidSn_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const UidSn_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UidSn_Request_

// alias to use template instance with default allocator
using UidSn_Request =
  protocol::srv::UidSn_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__UidSn_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__UidSn_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UidSn_Response_
{
  using Type = UidSn_Response_<ContainerAllocator>;

  explicit UidSn_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
      this->sn = "";
      this->code = 0l;
    }
  }

  explicit UidSn_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uid(_alloc),
    sn(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
      this->sn = "";
      this->code = 0l;
    }
  }

  // field types and members
  using _uid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uid_type uid;
  using _sn_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sn_type sn;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__uid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uid = _arg;
    return *this;
  }
  Type & set__sn(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sn = _arg;
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
    protocol::srv::UidSn_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::UidSn_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::UidSn_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::UidSn_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::UidSn_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::UidSn_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::UidSn_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::UidSn_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::UidSn_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::UidSn_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__UidSn_Response
    std::shared_ptr<protocol::srv::UidSn_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__UidSn_Response
    std::shared_ptr<protocol::srv::UidSn_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UidSn_Response_ & other) const
  {
    if (this->uid != other.uid) {
      return false;
    }
    if (this->sn != other.sn) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const UidSn_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UidSn_Response_

// alias to use template instance with default allocator
using UidSn_Response =
  protocol::srv::UidSn_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct UidSn
{
  using Request = protocol::srv::UidSn_Request;
  using Response = protocol::srv::UidSn_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__UID_SN__STRUCT_HPP_

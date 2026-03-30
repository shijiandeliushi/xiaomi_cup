// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__DEVICE_INFO__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__DEVICE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__DeviceInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__DeviceInfo_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DeviceInfo_Request_
{
  using Type = DeviceInfo_Request_<ContainerAllocator>;

  explicit DeviceInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
    }
  }

  explicit DeviceInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
    }
  }

  // field types and members
  using _enables_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _enables_type enables;
  using _uid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uid_type uid;

  // setters for named parameter idiom
  Type & set__enables(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->enables = _arg;
    return *this;
  }
  Type & set__uid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::DeviceInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::DeviceInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::DeviceInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::DeviceInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::DeviceInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::DeviceInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::DeviceInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::DeviceInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::DeviceInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::DeviceInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__DeviceInfo_Request
    std::shared_ptr<protocol::srv::DeviceInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__DeviceInfo_Request
    std::shared_ptr<protocol::srv::DeviceInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceInfo_Request_ & other) const
  {
    if (this->enables != other.enables) {
      return false;
    }
    if (this->uid != other.uid) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceInfo_Request_

// alias to use template instance with default allocator
using DeviceInfo_Request =
  protocol::srv::DeviceInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__DeviceInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__DeviceInfo_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DeviceInfo_Response_
{
  using Type = DeviceInfo_Response_<ContainerAllocator>;

  explicit DeviceInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->info = "";
      this->code = 0l;
    }
  }

  explicit DeviceInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->info = "";
      this->code = 0l;
    }
  }

  // field types and members
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
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
    protocol::srv::DeviceInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::DeviceInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::DeviceInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::DeviceInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::DeviceInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::DeviceInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::DeviceInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::DeviceInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::DeviceInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::DeviceInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__DeviceInfo_Response
    std::shared_ptr<protocol::srv::DeviceInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__DeviceInfo_Response
    std::shared_ptr<protocol::srv::DeviceInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceInfo_Response_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceInfo_Response_

// alias to use template instance with default allocator
using DeviceInfo_Response =
  protocol::srv::DeviceInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct DeviceInfo
{
  using Request = protocol::srv::DeviceInfo_Request;
  using Response = protocol::srv::DeviceInfo_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__DEVICE_INFO__STRUCT_HPP_

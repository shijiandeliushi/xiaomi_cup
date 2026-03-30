// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/GetMapLabel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_MAP_LABEL__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__GET_MAP_LABEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__GetMapLabel_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__GetMapLabel_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMapLabel_Request_
{
  using Type = GetMapLabel_Request_<ContainerAllocator>;

  explicit GetMapLabel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->map_id = 0ull;
    }
  }

  explicit GetMapLabel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->map_id = 0ull;
    }
  }

  // field types and members
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _map_id_type =
    uint64_t;
  _map_id_type map_id;

  // setters for named parameter idiom
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__map_id(
    const uint64_t & _arg)
  {
    this->map_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::GetMapLabel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::GetMapLabel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::GetMapLabel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::GetMapLabel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetMapLabel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetMapLabel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetMapLabel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetMapLabel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::GetMapLabel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::GetMapLabel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__GetMapLabel_Request
    std::shared_ptr<protocol::srv::GetMapLabel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__GetMapLabel_Request
    std::shared_ptr<protocol::srv::GetMapLabel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMapLabel_Request_ & other) const
  {
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMapLabel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMapLabel_Request_

// alias to use template instance with default allocator
using GetMapLabel_Request =
  protocol::srv::GetMapLabel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


// Include directives for member types
// Member 'label'
#include "protocol/msg/detail/map_label__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__GetMapLabel_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__GetMapLabel_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMapLabel_Response_
{
  using Type = GetMapLabel_Response_<ContainerAllocator>;

  explicit GetMapLabel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0;
      this->code = 0l;
    }
  }

  explicit GetMapLabel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0;
      this->code = 0l;
    }
  }

  // field types and members
  using _success_type =
    uint8_t;
  _success_type success;
  using _label_type =
    protocol::msg::MapLabel_<ContainerAllocator>;
  _label_type label;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__success(
    const uint8_t & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__label(
    const protocol::msg::MapLabel_<ContainerAllocator> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESULT_FAILED =
    1u;
  static constexpr uint8_t RESULT_SUCCESS =
    0u;

  // pointer types
  using RawPtr =
    protocol::srv::GetMapLabel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::GetMapLabel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::GetMapLabel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::GetMapLabel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetMapLabel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetMapLabel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetMapLabel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetMapLabel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::GetMapLabel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::GetMapLabel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__GetMapLabel_Response
    std::shared_ptr<protocol::srv::GetMapLabel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__GetMapLabel_Response
    std::shared_ptr<protocol::srv::GetMapLabel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMapLabel_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMapLabel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMapLabel_Response_

// alias to use template instance with default allocator
using GetMapLabel_Response =
  protocol::srv::GetMapLabel_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GetMapLabel_Response_<ContainerAllocator>::RESULT_FAILED;
template<typename ContainerAllocator>
constexpr uint8_t GetMapLabel_Response_<ContainerAllocator>::RESULT_SUCCESS;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct GetMapLabel
{
  using Request = protocol::srv::GetMapLabel_Request;
  using Response = protocol::srv::GetMapLabel_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__GET_MAP_LABEL__STRUCT_HPP_

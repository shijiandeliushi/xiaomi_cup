// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/Map.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MAP__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__MAP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__Map_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__Map_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Map_Request_
{
  using Type = Map_Request_<ContainerAllocator>;

  explicit Map_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->map_build_type = 0;
      this->request = "";
    }
  }

  explicit Map_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->map_build_type = 0;
      this->request = "";
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _map_build_type_type =
    uint8_t;
  _map_build_type_type map_build_type;
  using _request_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__map_build_type(
    const uint8_t & _arg)
  {
    this->map_build_type = _arg;
    return *this;
  }
  Type & set__request(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAP_COMMAND_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t MAP_COMMAND_TYPE_INSERT =
    1u;
  static constexpr uint8_t MAP_COMMAND_TYPE_DELETE =
    2u;
  static constexpr uint8_t MAP_COMMAND_TYPE_UPDATE =
    3u;
  static constexpr uint8_t MAP_COMMAND_TYPE_QUERY =
    4u;
  static constexpr uint8_t MAP_COMMAND_TYPE_LOAD =
    5u;
  static constexpr uint8_t MAP_BUILD_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t MAP_BUILD_TYPE_LIDAR =
    1u;
  static constexpr uint8_t MAP_BUILD_TYPE_VISION =
    2u;

  // pointer types
  using RawPtr =
    protocol::srv::Map_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::Map_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::Map_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::Map_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Map_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Map_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Map_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Map_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::Map_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::Map_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__Map_Request
    std::shared_ptr<protocol::srv::Map_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__Map_Request
    std::shared_ptr<protocol::srv::Map_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Map_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->map_build_type != other.map_build_type) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const Map_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Map_Request_

// alias to use template instance with default allocator
using Map_Request =
  protocol::srv::Map_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Map_Request_<ContainerAllocator>::MAP_COMMAND_TYPE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t Map_Request_<ContainerAllocator>::MAP_COMMAND_TYPE_INSERT;
template<typename ContainerAllocator>
constexpr uint8_t Map_Request_<ContainerAllocator>::MAP_COMMAND_TYPE_DELETE;
template<typename ContainerAllocator>
constexpr uint8_t Map_Request_<ContainerAllocator>::MAP_COMMAND_TYPE_UPDATE;
template<typename ContainerAllocator>
constexpr uint8_t Map_Request_<ContainerAllocator>::MAP_COMMAND_TYPE_QUERY;
template<typename ContainerAllocator>
constexpr uint8_t Map_Request_<ContainerAllocator>::MAP_COMMAND_TYPE_LOAD;
template<typename ContainerAllocator>
constexpr uint8_t Map_Request_<ContainerAllocator>::MAP_BUILD_TYPE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t Map_Request_<ContainerAllocator>::MAP_BUILD_TYPE_LIDAR;
template<typename ContainerAllocator>
constexpr uint8_t Map_Request_<ContainerAllocator>::MAP_BUILD_TYPE_VISION;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__Map_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__Map_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Map_Response_
{
  using Type = Map_Response_<ContainerAllocator>;

  explicit Map_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
      this->code = 0l;
    }
  }

  explicit Map_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
      this->code = 0l;
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
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
    protocol::srv::Map_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::Map_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::Map_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::Map_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Map_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Map_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Map_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Map_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::Map_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::Map_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__Map_Response
    std::shared_ptr<protocol::srv::Map_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__Map_Response
    std::shared_ptr<protocol::srv::Map_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Map_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const Map_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Map_Response_

// alias to use template instance with default allocator
using Map_Response =
  protocol::srv::Map_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct Map
{
  using Request = protocol::srv::Map_Request;
  using Response = protocol::srv::Map_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MAP__STRUCT_HPP_

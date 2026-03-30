// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/Connector.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECTOR__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__CONNECTOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__Connector_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__Connector_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Connector_Request_
{
  using Type = Connector_Request_<ContainerAllocator>;

  explicit Connector_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wifi_name = "";
      this->wifi_password = "";
      this->provider_ip = "";
    }
  }

  explicit Connector_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wifi_name(_alloc),
    wifi_password(_alloc),
    provider_ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wifi_name = "";
      this->wifi_password = "";
      this->provider_ip = "";
    }
  }

  // field types and members
  using _wifi_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wifi_name_type wifi_name;
  using _wifi_password_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wifi_password_type wifi_password;
  using _provider_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _provider_ip_type provider_ip;

  // setters for named parameter idiom
  Type & set__wifi_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wifi_name = _arg;
    return *this;
  }
  Type & set__wifi_password(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wifi_password = _arg;
    return *this;
  }
  Type & set__provider_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->provider_ip = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::Connector_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::Connector_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::Connector_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::Connector_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Connector_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Connector_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Connector_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Connector_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::Connector_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::Connector_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__Connector_Request
    std::shared_ptr<protocol::srv::Connector_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__Connector_Request
    std::shared_ptr<protocol::srv::Connector_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connector_Request_ & other) const
  {
    if (this->wifi_name != other.wifi_name) {
      return false;
    }
    if (this->wifi_password != other.wifi_password) {
      return false;
    }
    if (this->provider_ip != other.provider_ip) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connector_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connector_Request_

// alias to use template instance with default allocator
using Connector_Request =
  protocol::srv::Connector_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__Connector_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__Connector_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Connector_Response_
{
  using Type = Connector_Response_<ContainerAllocator>;

  explicit Connector_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->code = 0l;
    }
  }

  explicit Connector_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->code = 0l;
    }
  }

  // field types and members
  using _connected_type =
    bool;
  _connected_type connected;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t CODE_SUCCESS =
    0;
  static constexpr int32_t CODE_WIFI_NAME_FAIL =
    8121;
  static constexpr int32_t CODE_WIFI_PASSWORD_FAIL =
    8122;
  static constexpr int32_t CODE_WIFI_PROVIDER_IP_FAIL =
    8123;
  static constexpr int32_t CODE_CONNECTION_TIMEOUT_FAIL =
    8124;

  // pointer types
  using RawPtr =
    protocol::srv::Connector_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::Connector_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::Connector_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::Connector_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Connector_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Connector_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::Connector_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::Connector_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::Connector_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::Connector_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__Connector_Response
    std::shared_ptr<protocol::srv::Connector_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__Connector_Response
    std::shared_ptr<protocol::srv::Connector_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connector_Response_ & other) const
  {
    if (this->connected != other.connected) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connector_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connector_Response_

// alias to use template instance with default allocator
using Connector_Response =
  protocol::srv::Connector_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t Connector_Response_<ContainerAllocator>::CODE_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t Connector_Response_<ContainerAllocator>::CODE_WIFI_NAME_FAIL;
template<typename ContainerAllocator>
constexpr int32_t Connector_Response_<ContainerAllocator>::CODE_WIFI_PASSWORD_FAIL;
template<typename ContainerAllocator>
constexpr int32_t Connector_Response_<ContainerAllocator>::CODE_WIFI_PROVIDER_IP_FAIL;
template<typename ContainerAllocator>
constexpr int32_t Connector_Response_<ContainerAllocator>::CODE_CONNECTION_TIMEOUT_FAIL;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct Connector
{
  using Request = protocol::srv::Connector_Request;
  using Response = protocol::srv::Connector_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__CONNECTOR__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/WifiConnect.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__WIFI_CONNECT__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__WIFI_CONNECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__WifiConnect_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__WifiConnect_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WifiConnect_Request_
{
  using Type = WifiConnect_Request_<ContainerAllocator>;

  explicit WifiConnect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssid = "";
      this->pwd = "";
    }
  }

  explicit WifiConnect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ssid(_alloc),
    pwd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssid = "";
      this->pwd = "";
    }
  }

  // field types and members
  using _ssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ssid_type ssid;
  using _pwd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pwd_type pwd;

  // setters for named parameter idiom
  Type & set__ssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ssid = _arg;
    return *this;
  }
  Type & set__pwd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pwd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::WifiConnect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::WifiConnect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::WifiConnect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::WifiConnect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::WifiConnect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::WifiConnect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::WifiConnect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::WifiConnect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::WifiConnect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::WifiConnect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__WifiConnect_Request
    std::shared_ptr<protocol::srv::WifiConnect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__WifiConnect_Request
    std::shared_ptr<protocol::srv::WifiConnect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiConnect_Request_ & other) const
  {
    if (this->ssid != other.ssid) {
      return false;
    }
    if (this->pwd != other.pwd) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiConnect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiConnect_Request_

// alias to use template instance with default allocator
using WifiConnect_Request =
  protocol::srv::WifiConnect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__WifiConnect_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__WifiConnect_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WifiConnect_Response_
{
  using Type = WifiConnect_Response_<ContainerAllocator>;

  explicit WifiConnect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->code = 0l;
    }
  }

  explicit WifiConnect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->code = 0l;
    }
  }

  // field types and members
  using _result_type =
    uint8_t;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
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
  static constexpr uint8_t RESULT_NO_SSID =
    4u;
  static constexpr uint8_t RESULT_ERR_PWD =
    5u;
  static constexpr uint8_t RESULT_OTHER =
    6u;
  static constexpr uint8_t RESULT_SUCCESS =
    7u;
  static constexpr uint8_t RESULT_INTERRUPT =
    14u;
  static constexpr uint8_t RESULT_TIMEOUT =
    15u;

  // pointer types
  using RawPtr =
    protocol::srv::WifiConnect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::WifiConnect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::WifiConnect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::WifiConnect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::WifiConnect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::WifiConnect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::WifiConnect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::WifiConnect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::WifiConnect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::WifiConnect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__WifiConnect_Response
    std::shared_ptr<protocol::srv::WifiConnect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__WifiConnect_Response
    std::shared_ptr<protocol::srv::WifiConnect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiConnect_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiConnect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiConnect_Response_

// alias to use template instance with default allocator
using WifiConnect_Response =
  protocol::srv::WifiConnect_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t WifiConnect_Response_<ContainerAllocator>::RESULT_NO_SSID;
template<typename ContainerAllocator>
constexpr uint8_t WifiConnect_Response_<ContainerAllocator>::RESULT_ERR_PWD;
template<typename ContainerAllocator>
constexpr uint8_t WifiConnect_Response_<ContainerAllocator>::RESULT_OTHER;
template<typename ContainerAllocator>
constexpr uint8_t WifiConnect_Response_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t WifiConnect_Response_<ContainerAllocator>::RESULT_INTERRUPT;
template<typename ContainerAllocator>
constexpr uint8_t WifiConnect_Response_<ContainerAllocator>::RESULT_TIMEOUT;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct WifiConnect
{
  using Request = protocol::srv::WifiConnect_Request;
  using Response = protocol::srv::WifiConnect_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__WIFI_CONNECT__STRUCT_HPP_

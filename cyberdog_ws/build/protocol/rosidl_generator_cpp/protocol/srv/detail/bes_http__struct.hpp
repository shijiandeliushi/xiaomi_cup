// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/BesHttp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BES_HTTP__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__BES_HTTP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__BesHttp_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BesHttp_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BesHttp_Request_
{
  using Type = BesHttp_Request_<ContainerAllocator>;

  explicit BesHttp_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->method = 0;
      this->url = "";
      this->params = "";
      this->milsecs = 0;
    }
  }

  explicit BesHttp_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : url(_alloc),
    params(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->method = 0;
      this->url = "";
      this->params = "";
      this->milsecs = 0;
    }
  }

  // field types and members
  using _method_type =
    uint8_t;
  _method_type method;
  using _url_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _url_type url;
  using _params_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _params_type params;
  using _milsecs_type =
    uint16_t;
  _milsecs_type milsecs;

  // setters for named parameter idiom
  Type & set__method(
    const uint8_t & _arg)
  {
    this->method = _arg;
    return *this;
  }
  Type & set__url(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->url = _arg;
    return *this;
  }
  Type & set__params(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__milsecs(
    const uint16_t & _arg)
  {
    this->milsecs = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HTTP_METHOD_GET =
    0u;
  static constexpr uint8_t HTTP_METHOD_POST =
    1u;

  // pointer types
  using RawPtr =
    protocol::srv::BesHttp_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BesHttp_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BesHttp_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BesHttp_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BesHttp_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BesHttp_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BesHttp_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BesHttp_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BesHttp_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BesHttp_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BesHttp_Request
    std::shared_ptr<protocol::srv::BesHttp_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BesHttp_Request
    std::shared_ptr<protocol::srv::BesHttp_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BesHttp_Request_ & other) const
  {
    if (this->method != other.method) {
      return false;
    }
    if (this->url != other.url) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    if (this->milsecs != other.milsecs) {
      return false;
    }
    return true;
  }
  bool operator!=(const BesHttp_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BesHttp_Request_

// alias to use template instance with default allocator
using BesHttp_Request =
  protocol::srv::BesHttp_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t BesHttp_Request_<ContainerAllocator>::HTTP_METHOD_GET;
template<typename ContainerAllocator>
constexpr uint8_t BesHttp_Request_<ContainerAllocator>::HTTP_METHOD_POST;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__BesHttp_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BesHttp_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BesHttp_Response_
{
  using Type = BesHttp_Response_<ContainerAllocator>;

  explicit BesHttp_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->code = 0l;
    }
  }

  explicit BesHttp_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->code = 0l;
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
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
    protocol::srv::BesHttp_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BesHttp_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BesHttp_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BesHttp_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BesHttp_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BesHttp_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BesHttp_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BesHttp_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BesHttp_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BesHttp_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BesHttp_Response
    std::shared_ptr<protocol::srv::BesHttp_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BesHttp_Response
    std::shared_ptr<protocol::srv::BesHttp_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BesHttp_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const BesHttp_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BesHttp_Response_

// alias to use template instance with default allocator
using BesHttp_Response =
  protocol::srv::BesHttp_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct BesHttp
{
  using Request = protocol::srv::BesHttp_Request;
  using Response = protocol::srv::BesHttp_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BES_HTTP__STRUCT_HPP_

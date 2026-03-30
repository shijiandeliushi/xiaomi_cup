// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/FaceRec.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_REC__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__FACE_REC__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__FaceRec_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__FaceRec_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceRec_Request_
{
  using Type = FaceRec_Request_<ContainerAllocator>;

  explicit FaceRec_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0l;
      this->username = "";
      this->id = "";
      this->timeout = 0l;
    }
  }

  explicit FaceRec_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : username(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0l;
      this->username = "";
      this->id = "";
      this->timeout = 0l;
    }
  }

  // field types and members
  using _command_type =
    int32_t;
  _command_type command;
  using _username_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _username_type username;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _timeout_type =
    int32_t;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__command(
    const int32_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__username(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->username = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__timeout(
    const int32_t & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t COMMAND_RECOGNITION_ALL =
    0;
  static constexpr int32_t COMMAND_RECOGNITION_SINGLE =
    1;
  static constexpr int32_t COMMAND_RECOGNITION_CANCEL =
    2;
  static constexpr int32_t MAX_TIMEOUT =
    300;
  static constexpr int32_t MIN_TIMEOUT =
    30;
  static constexpr int32_t DEFAULT_TIMEOUT =
    60;
  static constexpr int32_t ALGORITHM_LOAD_DURATION =
    100;

  // pointer types
  using RawPtr =
    protocol::srv::FaceRec_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::FaceRec_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::FaceRec_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::FaceRec_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceRec_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceRec_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceRec_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceRec_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::FaceRec_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::FaceRec_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__FaceRec_Request
    std::shared_ptr<protocol::srv::FaceRec_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__FaceRec_Request
    std::shared_ptr<protocol::srv::FaceRec_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceRec_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->username != other.username) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceRec_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceRec_Request_

// alias to use template instance with default allocator
using FaceRec_Request =
  protocol::srv::FaceRec_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t FaceRec_Request_<ContainerAllocator>::COMMAND_RECOGNITION_ALL;
template<typename ContainerAllocator>
constexpr int32_t FaceRec_Request_<ContainerAllocator>::COMMAND_RECOGNITION_SINGLE;
template<typename ContainerAllocator>
constexpr int32_t FaceRec_Request_<ContainerAllocator>::COMMAND_RECOGNITION_CANCEL;
template<typename ContainerAllocator>
constexpr int32_t FaceRec_Request_<ContainerAllocator>::MAX_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t FaceRec_Request_<ContainerAllocator>::MIN_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t FaceRec_Request_<ContainerAllocator>::DEFAULT_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t FaceRec_Request_<ContainerAllocator>::ALGORITHM_LOAD_DURATION;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__FaceRec_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__FaceRec_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceRec_Response_
{
  using Type = FaceRec_Response_<ContainerAllocator>;

  explicit FaceRec_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->code = 0l;
    }
  }

  explicit FaceRec_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->code = 0l;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
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
  static constexpr int32_t ENABLE_SUCCESS =
    0;
  static constexpr int32_t ENABLE_FAIL =
    5901;

  // pointer types
  using RawPtr =
    protocol::srv::FaceRec_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::FaceRec_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::FaceRec_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::FaceRec_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceRec_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceRec_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceRec_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceRec_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::FaceRec_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::FaceRec_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__FaceRec_Response
    std::shared_ptr<protocol::srv::FaceRec_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__FaceRec_Response
    std::shared_ptr<protocol::srv::FaceRec_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceRec_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceRec_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceRec_Response_

// alias to use template instance with default allocator
using FaceRec_Response =
  protocol::srv::FaceRec_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t FaceRec_Response_<ContainerAllocator>::ENABLE_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t FaceRec_Response_<ContainerAllocator>::ENABLE_FAIL;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct FaceRec
{
  using Request = protocol::srv::FaceRec_Request;
  using Response = protocol::srv::FaceRec_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__FACE_REC__STRUCT_HPP_

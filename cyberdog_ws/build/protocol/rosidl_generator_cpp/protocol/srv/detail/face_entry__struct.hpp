// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/FaceEntry.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_ENTRY__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__FACE_ENTRY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__FaceEntry_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__FaceEntry_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceEntry_Request_
{
  using Type = FaceEntry_Request_<ContainerAllocator>;

  explicit FaceEntry_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0l;
      this->username = "";
      this->oriname = "";
      this->ishost = false;
    }
  }

  explicit FaceEntry_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : username(_alloc),
    oriname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0l;
      this->username = "";
      this->oriname = "";
      this->ishost = false;
    }
  }

  // field types and members
  using _command_type =
    int32_t;
  _command_type command;
  using _username_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _username_type username;
  using _oriname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _oriname_type oriname;
  using _ishost_type =
    bool;
  _ishost_type ishost;

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
  Type & set__oriname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->oriname = _arg;
    return *this;
  }
  Type & set__ishost(
    const bool & _arg)
  {
    this->ishost = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t ADD_FACE =
    0;
  static constexpr int32_t CANCLE_ADD_FACE =
    1;
  static constexpr int32_t CONFIRM_LAST_FACE =
    2;
  static constexpr int32_t UPDATE_FACE_ID =
    3;
  static constexpr int32_t DELETE_FACE =
    4;
  static constexpr int32_t GET_ALL_FACES =
    5;

  // pointer types
  using RawPtr =
    protocol::srv::FaceEntry_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::FaceEntry_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::FaceEntry_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::FaceEntry_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceEntry_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceEntry_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceEntry_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceEntry_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::FaceEntry_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::FaceEntry_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__FaceEntry_Request
    std::shared_ptr<protocol::srv::FaceEntry_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__FaceEntry_Request
    std::shared_ptr<protocol::srv::FaceEntry_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceEntry_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->username != other.username) {
      return false;
    }
    if (this->oriname != other.oriname) {
      return false;
    }
    if (this->ishost != other.ishost) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceEntry_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceEntry_Request_

// alias to use template instance with default allocator
using FaceEntry_Request =
  protocol::srv::FaceEntry_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Request_<ContainerAllocator>::ADD_FACE;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Request_<ContainerAllocator>::CANCLE_ADD_FACE;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Request_<ContainerAllocator>::CONFIRM_LAST_FACE;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Request_<ContainerAllocator>::UPDATE_FACE_ID;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Request_<ContainerAllocator>::DELETE_FACE;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Request_<ContainerAllocator>::GET_ALL_FACES;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__FaceEntry_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__FaceEntry_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceEntry_Response_
{
  using Type = FaceEntry_Response_<ContainerAllocator>;

  explicit FaceEntry_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->allfaces = "";
      this->code = 0l;
    }
  }

  explicit FaceEntry_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : allfaces(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->allfaces = "";
      this->code = 0l;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;
  using _allfaces_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _allfaces_type allfaces;
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
  Type & set__allfaces(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->allfaces = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t RESULT_SUCCESS =
    0;
  static constexpr int32_t RESULT_INVALID_ARGS =
    5910;
  static constexpr int32_t RESULT_UNSUPPORTED =
    5908;
  static constexpr int32_t RESULT_TIMEOUT =
    5907;
  static constexpr int32_t RESULT_BUSY =
    5911;
  static constexpr int32_t RESULT_INVALID_STATE =
    5903;
  static constexpr int32_t RESULT_INNER_ERROR =
    5904;
  static constexpr int32_t RESULT_UNDEFINED_ERROR =
    5901;

  // pointer types
  using RawPtr =
    protocol::srv::FaceEntry_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::FaceEntry_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::FaceEntry_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::FaceEntry_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceEntry_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceEntry_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceEntry_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceEntry_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::FaceEntry_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::FaceEntry_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__FaceEntry_Response
    std::shared_ptr<protocol::srv::FaceEntry_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__FaceEntry_Response
    std::shared_ptr<protocol::srv::FaceEntry_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceEntry_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->allfaces != other.allfaces) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceEntry_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceEntry_Response_

// alias to use template instance with default allocator
using FaceEntry_Response =
  protocol::srv::FaceEntry_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Response_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Response_<ContainerAllocator>::RESULT_INVALID_ARGS;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Response_<ContainerAllocator>::RESULT_UNSUPPORTED;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Response_<ContainerAllocator>::RESULT_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Response_<ContainerAllocator>::RESULT_BUSY;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Response_<ContainerAllocator>::RESULT_INVALID_STATE;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Response_<ContainerAllocator>::RESULT_INNER_ERROR;
template<typename ContainerAllocator>
constexpr int32_t FaceEntry_Response_<ContainerAllocator>::RESULT_UNDEFINED_ERROR;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct FaceEntry
{
  using Request = protocol::srv::FaceEntry_Request;
  using Response = protocol::srv::FaceEntry_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__FACE_ENTRY__STRUCT_HPP_

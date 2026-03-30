// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/FaceManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_MANAGER__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__FACE_MANAGER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__FaceManager_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__FaceManager_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceManager_Request_
{
  using Type = FaceManager_Request_<ContainerAllocator>;

  explicit FaceManager_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->args = "";
      this->username = "";
      this->oriname = "";
      this->ishost = false;
    }
  }

  explicit FaceManager_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : args(_alloc),
    username(_alloc),
    oriname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->args = "";
      this->username = "";
      this->oriname = "";
      this->ishost = false;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _args_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _args_type args;
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
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__args(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->args = _arg;
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
  static constexpr uint8_t ADD_FACE =
    0u;
  static constexpr uint8_t CANCLE_ADD_FACE =
    1u;
  static constexpr uint8_t CONFIRM_LAST_FACE =
    2u;
  static constexpr uint8_t UPDATE_FACE_ID =
    3u;
  static constexpr uint8_t DELETE_FACE =
    4u;
  static constexpr uint8_t GET_ALL_FACES =
    5u;
  static constexpr uint8_t SET_CURRENT_ACCOUNT =
    6u;

  // pointer types
  using RawPtr =
    protocol::srv::FaceManager_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::FaceManager_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::FaceManager_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::FaceManager_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceManager_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceManager_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceManager_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceManager_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::FaceManager_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::FaceManager_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__FaceManager_Request
    std::shared_ptr<protocol::srv::FaceManager_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__FaceManager_Request
    std::shared_ptr<protocol::srv::FaceManager_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceManager_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->args != other.args) {
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
  bool operator!=(const FaceManager_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceManager_Request_

// alias to use template instance with default allocator
using FaceManager_Request =
  protocol::srv::FaceManager_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Request_<ContainerAllocator>::ADD_FACE;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Request_<ContainerAllocator>::CANCLE_ADD_FACE;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Request_<ContainerAllocator>::CONFIRM_LAST_FACE;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Request_<ContainerAllocator>::UPDATE_FACE_ID;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Request_<ContainerAllocator>::DELETE_FACE;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Request_<ContainerAllocator>::GET_ALL_FACES;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Request_<ContainerAllocator>::SET_CURRENT_ACCOUNT;

}  // namespace srv

}  // namespace protocol


// Include directives for member types
// Member 'face_images'
#include "protocol/msg/detail/compressed_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__FaceManager_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__FaceManager_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceManager_Response_
{
  using Type = FaceManager_Response_<ContainerAllocator>;

  explicit FaceManager_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->msg = "";
      this->code = 0l;
    }
  }

  explicit FaceManager_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->msg = "";
      this->code = 0l;
    }
  }

  // field types and members
  using _result_type =
    uint8_t;
  _result_type result;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _face_images_type =
    std::vector<protocol::msg::CompressedImage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::CompressedImage_<ContainerAllocator>>>;
  _face_images_type face_images;
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
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__face_images(
    const std::vector<protocol::msg::CompressedImage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::CompressedImage_<ContainerAllocator>>> & _arg)
  {
    this->face_images = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESULT_SUCCESS =
    0u;
  static constexpr uint8_t RESULT_INVALID_ARGS =
    1u;
  static constexpr uint8_t RESULT_UNSUPPORTED =
    2u;
  static constexpr uint8_t RESULT_TIMEOUT =
    3u;
  static constexpr uint8_t RESULT_BUSY =
    4u;
  static constexpr uint8_t RESULT_INVALID_STATE =
    5u;
  static constexpr uint8_t RESULT_INNER_ERROR =
    6u;
  static constexpr uint8_t RESULT_UNDEFINED_ERROR =
    255u;

  // pointer types
  using RawPtr =
    protocol::srv::FaceManager_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::FaceManager_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::FaceManager_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::FaceManager_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceManager_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceManager_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::FaceManager_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::FaceManager_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::FaceManager_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::FaceManager_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__FaceManager_Response
    std::shared_ptr<protocol::srv::FaceManager_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__FaceManager_Response
    std::shared_ptr<protocol::srv::FaceManager_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceManager_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->face_images != other.face_images) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceManager_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceManager_Response_

// alias to use template instance with default allocator
using FaceManager_Response =
  protocol::srv::FaceManager_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Response_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Response_<ContainerAllocator>::RESULT_INVALID_ARGS;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Response_<ContainerAllocator>::RESULT_UNSUPPORTED;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Response_<ContainerAllocator>::RESULT_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Response_<ContainerAllocator>::RESULT_BUSY;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Response_<ContainerAllocator>::RESULT_INVALID_STATE;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Response_<ContainerAllocator>::RESULT_INNER_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t FaceManager_Response_<ContainerAllocator>::RESULT_UNDEFINED_ERROR;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct FaceManager
{
  using Request = protocol::srv::FaceManager_Request;
  using Response = protocol::srv::FaceManager_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__FACE_MANAGER__STRUCT_HPP_

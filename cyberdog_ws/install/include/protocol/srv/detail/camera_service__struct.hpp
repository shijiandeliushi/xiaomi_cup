// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/CameraService.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__CameraService_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__CameraService_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraService_Request_
{
  using Type = CameraService_Request_<ContainerAllocator>;

  explicit CameraService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->args = "";
      this->width = 0;
      this->height = 0;
      this->fps = 0;
    }
  }

  explicit CameraService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : args(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->args = "";
      this->width = 0;
      this->height = 0;
      this->fps = 0;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _args_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _args_type args;
  using _width_type =
    uint16_t;
  _width_type width;
  using _height_type =
    uint16_t;
  _height_type height;
  using _fps_type =
    uint16_t;
  _fps_type fps;

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
  Type & set__width(
    const uint16_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint16_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__fps(
    const uint16_t & _arg)
  {
    this->fps = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SET_PARAMETERS =
    0u;
  static constexpr uint8_t TAKE_PICTURE =
    1u;
  static constexpr uint8_t START_RECORDING =
    2u;
  static constexpr uint8_t STOP_RECORDING =
    3u;
  static constexpr uint8_t GET_STATE =
    4u;
  static constexpr uint8_t DELETE_FILE =
    5u;
  static constexpr uint8_t GET_ALL_FILES =
    6u;
  static constexpr uint8_t START_LIVE_STREAM =
    7u;
  static constexpr uint8_t STOP_LIVE_STREAM =
    8u;
  static constexpr uint8_t START_IMAGE_PUBLISH =
    9u;
  static constexpr uint8_t STOP_IMAGE_PUBLISH =
    10u;

  // pointer types
  using RawPtr =
    protocol::srv::CameraService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::CameraService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::CameraService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::CameraService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::CameraService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::CameraService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::CameraService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::CameraService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::CameraService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::CameraService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__CameraService_Request
    std::shared_ptr<protocol::srv::CameraService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__CameraService_Request
    std::shared_ptr<protocol::srv::CameraService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraService_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->args != other.args) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->fps != other.fps) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraService_Request_

// alias to use template instance with default allocator
using CameraService_Request =
  protocol::srv::CameraService_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::SET_PARAMETERS;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::TAKE_PICTURE;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::START_RECORDING;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::STOP_RECORDING;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::GET_STATE;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::DELETE_FILE;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::GET_ALL_FILES;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::START_LIVE_STREAM;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::STOP_LIVE_STREAM;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::START_IMAGE_PUBLISH;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Request_<ContainerAllocator>::STOP_IMAGE_PUBLISH;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__CameraService_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__CameraService_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraService_Response_
{
  using Type = CameraService_Response_<ContainerAllocator>;

  explicit CameraService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->msg = "";
      this->code = 0l;
    }
  }

  explicit CameraService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::CameraService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::CameraService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::CameraService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::CameraService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::CameraService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::CameraService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::CameraService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::CameraService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::CameraService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::CameraService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__CameraService_Response
    std::shared_ptr<protocol::srv::CameraService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__CameraService_Response
    std::shared_ptr<protocol::srv::CameraService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraService_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraService_Response_

// alias to use template instance with default allocator
using CameraService_Response =
  protocol::srv::CameraService_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Response_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Response_<ContainerAllocator>::RESULT_INVALID_ARGS;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Response_<ContainerAllocator>::RESULT_UNSUPPORTED;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Response_<ContainerAllocator>::RESULT_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Response_<ContainerAllocator>::RESULT_BUSY;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Response_<ContainerAllocator>::RESULT_INVALID_STATE;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Response_<ContainerAllocator>::RESULT_INNER_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t CameraService_Response_<ContainerAllocator>::RESULT_UNDEFINED_ERROR;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct CameraService
{
  using Request = protocol::srv::CameraService_Request;
  using Response = protocol::srv::CameraService_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__STRUCT_HPP_

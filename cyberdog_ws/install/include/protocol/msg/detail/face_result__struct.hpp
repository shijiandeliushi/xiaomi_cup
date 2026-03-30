// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/FaceResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_RESULT__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_RESULT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'face_images'
#include "protocol/msg/detail/compressed_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__FaceResult __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__FaceResult __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaceResult_
{
  using Type = FaceResult_<ContainerAllocator>;

  explicit FaceResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->msg = "";
    }
  }

  explicit FaceResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->msg = "";
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
  static constexpr uint8_t RESULT_NO_FACE_FOUND =
    7u;
  static constexpr uint8_t RESULT_MULTI_FACE_FOUND =
    8u;
  static constexpr uint8_t RESULT_KEEP_STABLE =
    9u;
  static constexpr uint8_t RESULT_DEGREE_NOT_SATISFIED =
    10u;
  static constexpr uint8_t RESULT_DISTANCE_NOT_SATISFIED =
    11u;
  static constexpr uint8_t RESULT_DEGREE_HEAD_LEFT =
    12u;
  static constexpr uint8_t RESULT_DEGREE_HEAD_RIGHT =
    13u;
  static constexpr uint8_t RESULT_DEGREE_HEAD_DOWN =
    14u;
  static constexpr uint8_t RESULT_DEGREE_HEAD_UP =
    15u;
  static constexpr uint8_t RESULT_DEGREE_HEAD_TILT =
    16u;
  static constexpr uint8_t RESULT_FACE_ALREADY_EXIST =
    17u;
  static constexpr uint8_t RESULT_UNDEFINED_ERROR =
    255u;

  // pointer types
  using RawPtr =
    protocol::msg::FaceResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::FaceResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::FaceResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::FaceResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FaceResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FaceResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FaceResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FaceResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::FaceResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::FaceResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__FaceResult
    std::shared_ptr<protocol::msg::FaceResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__FaceResult
    std::shared_ptr<protocol::msg::FaceResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceResult_ & other) const
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
    return true;
  }
  bool operator!=(const FaceResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceResult_

// alias to use template instance with default allocator
using FaceResult =
  protocol::msg::FaceResult_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_INVALID_ARGS;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_UNSUPPORTED;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_BUSY;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_INVALID_STATE;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_INNER_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_NO_FACE_FOUND;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_MULTI_FACE_FOUND;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_KEEP_STABLE;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_DEGREE_NOT_SATISFIED;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_DISTANCE_NOT_SATISFIED;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_DEGREE_HEAD_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_DEGREE_HEAD_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_DEGREE_HEAD_DOWN;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_DEGREE_HEAD_UP;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_DEGREE_HEAD_TILT;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_FACE_ALREADY_EXIST;
template<typename ContainerAllocator>
constexpr uint8_t FaceResult_<ContainerAllocator>::RESULT_UNDEFINED_ERROR;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE_RESULT__STRUCT_HPP_

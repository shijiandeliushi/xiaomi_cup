// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/FaceRecognitionResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_RECOGNITION_RESULT__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_RECOGNITION_RESULT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__FaceRecognitionResult __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__FaceRecognitionResult __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaceRecognitionResult_
{
  using Type = FaceRecognitionResult_<ContainerAllocator>;

  explicit FaceRecognitionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->username = "";
      this->result = 0l;
      this->id = "";
      this->age = 0.0f;
      this->emotion = 0.0f;
    }
  }

  explicit FaceRecognitionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : username(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->username = "";
      this->result = 0l;
      this->id = "";
      this->age = 0.0f;
      this->emotion = 0.0f;
    }
  }

  // field types and members
  using _username_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _username_type username;
  using _result_type =
    int32_t;
  _result_type result;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _age_type =
    float;
  _age_type age;
  using _emotion_type =
    float;
  _emotion_type emotion;

  // setters for named parameter idiom
  Type & set__username(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->username = _arg;
    return *this;
  }
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__age(
    const float & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__emotion(
    const float & _arg)
  {
    this->emotion = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t RESULT_SUCCESS =
    0;
  static constexpr int32_t RESULT_TIMEOUT =
    5907;

  // pointer types
  using RawPtr =
    protocol::msg::FaceRecognitionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::FaceRecognitionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::FaceRecognitionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::FaceRecognitionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FaceRecognitionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FaceRecognitionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FaceRecognitionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FaceRecognitionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::FaceRecognitionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::FaceRecognitionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__FaceRecognitionResult
    std::shared_ptr<protocol::msg::FaceRecognitionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__FaceRecognitionResult
    std::shared_ptr<protocol::msg::FaceRecognitionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceRecognitionResult_ & other) const
  {
    if (this->username != other.username) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->emotion != other.emotion) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceRecognitionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceRecognitionResult_

// alias to use template instance with default allocator
using FaceRecognitionResult =
  protocol::msg::FaceRecognitionResult_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t FaceRecognitionResult_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t FaceRecognitionResult_<ContainerAllocator>::RESULT_TIMEOUT;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE_RECOGNITION_RESULT__STRUCT_HPP_

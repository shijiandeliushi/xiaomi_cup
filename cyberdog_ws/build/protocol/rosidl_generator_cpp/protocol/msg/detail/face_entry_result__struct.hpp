// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/FaceEntryResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__FaceEntryResult __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__FaceEntryResult __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaceEntryResult_
{
  using Type = FaceEntryResult_<ContainerAllocator>;

  explicit FaceEntryResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->username = "";
    }
  }

  explicit FaceEntryResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : username(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->username = "";
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;
  using _username_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _username_type username;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__username(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->username = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t RESULT_SUCCESS =
    0;
  static constexpr int32_t RESULT_TIMEOUT =
    5907;
  static constexpr int32_t RESULT_FACE_ALREADY_EXIST =
    5921;

  // pointer types
  using RawPtr =
    protocol::msg::FaceEntryResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::FaceEntryResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::FaceEntryResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::FaceEntryResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FaceEntryResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FaceEntryResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FaceEntryResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FaceEntryResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::FaceEntryResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::FaceEntryResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__FaceEntryResult
    std::shared_ptr<protocol::msg::FaceEntryResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__FaceEntryResult
    std::shared_ptr<protocol::msg::FaceEntryResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceEntryResult_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->username != other.username) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceEntryResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceEntryResult_

// alias to use template instance with default allocator
using FaceEntryResult =
  protocol::msg::FaceEntryResult_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t FaceEntryResult_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t FaceEntryResult_<ContainerAllocator>::RESULT_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t FaceEntryResult_<ContainerAllocator>::RESULT_FACE_ALREADY_EXIST;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__STRUCT_HPP_

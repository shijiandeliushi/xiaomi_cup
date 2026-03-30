// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/GestureActionResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GESTURE_ACTION_RESULT__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__GESTURE_ACTION_RESULT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__GestureActionResult __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__GestureActionResult __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GestureActionResult_
{
  using Type = GestureActionResult_<ContainerAllocator>;

  explicit GestureActionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit GestureActionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t NO_GESTURE =
    0;
  static constexpr int32_t PULLING_HAND_OR_TWO_FINGERS_IN =
    1;
  static constexpr int32_t PUSHING_HAND_OR_TWO_FINGERS_AWAY =
    2;
  static constexpr int32_t SLIDING_HAND_OR_TWO_FINGERS_UP =
    3;
  static constexpr int32_t SLIDING_HAND_OR_TWO_FINGERS_DOWN =
    4;
  static constexpr int32_t SLIDING_HAND_OR_TWO_FINGERS_LEFT =
    5;
  static constexpr int32_t SLIDING_HAND_OR_TWO_FINGERS_RIGHT =
    6;
  static constexpr int32_t STOP_SIGN =
    7;
  static constexpr int32_t THUMB_UP =
    8;
  static constexpr int32_t ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS =
    9;
  static constexpr int32_t ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS =
    10;
  static constexpr int32_t THUMB_DOWN =
    11;

  // pointer types
  using RawPtr =
    protocol::msg::GestureActionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::GestureActionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::GestureActionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::GestureActionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::GestureActionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::GestureActionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::GestureActionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::GestureActionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::GestureActionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::GestureActionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__GestureActionResult
    std::shared_ptr<protocol::msg::GestureActionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__GestureActionResult
    std::shared_ptr<protocol::msg::GestureActionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GestureActionResult_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GestureActionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GestureActionResult_

// alias to use template instance with default allocator
using GestureActionResult =
  protocol::msg::GestureActionResult_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::NO_GESTURE;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::PULLING_HAND_OR_TWO_FINGERS_IN;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::PUSHING_HAND_OR_TWO_FINGERS_AWAY;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::SLIDING_HAND_OR_TWO_FINGERS_UP;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::SLIDING_HAND_OR_TWO_FINGERS_DOWN;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::SLIDING_HAND_OR_TWO_FINGERS_LEFT;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::SLIDING_HAND_OR_TWO_FINGERS_RIGHT;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::STOP_SIGN;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::THUMB_UP;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS;
template<typename ContainerAllocator>
constexpr int32_t GestureActionResult_<ContainerAllocator>::THUMB_DOWN;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__GESTURE_ACTION_RESULT__STRUCT_HPP_

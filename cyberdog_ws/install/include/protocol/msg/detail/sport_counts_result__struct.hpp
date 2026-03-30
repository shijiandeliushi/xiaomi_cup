// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/SportCountsResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__SportCountsResult __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__SportCountsResult __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SportCountsResult_
{
  using Type = SportCountsResult_<ContainerAllocator>;

  explicit SportCountsResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->algo_switch = 0;
      this->sport_type = 0l;
      this->counts = 0l;
      this->duration = 0l;
    }
  }

  explicit SportCountsResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->algo_switch = 0;
      this->sport_type = 0l;
      this->counts = 0l;
      this->duration = 0l;
    }
  }

  // field types and members
  using _algo_switch_type =
    uint8_t;
  _algo_switch_type algo_switch;
  using _sport_type_type =
    int32_t;
  _sport_type_type sport_type;
  using _counts_type =
    int32_t;
  _counts_type counts;
  using _duration_type =
    int32_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__algo_switch(
    const uint8_t & _arg)
  {
    this->algo_switch = _arg;
    return *this;
  }
  Type & set__sport_type(
    const int32_t & _arg)
  {
    this->sport_type = _arg;
    return *this;
  }
  Type & set__counts(
    const int32_t & _arg)
  {
    this->counts = _arg;
    return *this;
  }
  Type & set__duration(
    const int32_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ALGO_OPEN =
    0u;
  static constexpr uint8_t COUNT_COMPLETE_CLOSE =
    1u;
  static constexpr uint8_t TIMEOUT_CLOSE =
    2u;
  static constexpr uint8_t REQUEST_CLOSE =
    3u;
  static constexpr int32_t SPORT_SQUAT =
    1;
  static constexpr int32_t SPORT_HIGHKNEES =
    2;
  static constexpr int32_t SPORT_SITUP =
    3;
  static constexpr int32_t SPORT_PRESSUP =
    4;
  static constexpr int32_t SPORT_PLANK =
    5;
  static constexpr int32_t SPORT_JUMPJACK =
    6;

  // pointer types
  using RawPtr =
    protocol::msg::SportCountsResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::SportCountsResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::SportCountsResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::SportCountsResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::SportCountsResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::SportCountsResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::SportCountsResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::SportCountsResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::SportCountsResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::SportCountsResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__SportCountsResult
    std::shared_ptr<protocol::msg::SportCountsResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__SportCountsResult
    std::shared_ptr<protocol::msg::SportCountsResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SportCountsResult_ & other) const
  {
    if (this->algo_switch != other.algo_switch) {
      return false;
    }
    if (this->sport_type != other.sport_type) {
      return false;
    }
    if (this->counts != other.counts) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SportCountsResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SportCountsResult_

// alias to use template instance with default allocator
using SportCountsResult =
  protocol::msg::SportCountsResult_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SportCountsResult_<ContainerAllocator>::ALGO_OPEN;
template<typename ContainerAllocator>
constexpr uint8_t SportCountsResult_<ContainerAllocator>::COUNT_COMPLETE_CLOSE;
template<typename ContainerAllocator>
constexpr uint8_t SportCountsResult_<ContainerAllocator>::TIMEOUT_CLOSE;
template<typename ContainerAllocator>
constexpr uint8_t SportCountsResult_<ContainerAllocator>::REQUEST_CLOSE;
template<typename ContainerAllocator>
constexpr int32_t SportCountsResult_<ContainerAllocator>::SPORT_SQUAT;
template<typename ContainerAllocator>
constexpr int32_t SportCountsResult_<ContainerAllocator>::SPORT_HIGHKNEES;
template<typename ContainerAllocator>
constexpr int32_t SportCountsResult_<ContainerAllocator>::SPORT_SITUP;
template<typename ContainerAllocator>
constexpr int32_t SportCountsResult_<ContainerAllocator>::SPORT_PRESSUP;
template<typename ContainerAllocator>
constexpr int32_t SportCountsResult_<ContainerAllocator>::SPORT_PLANK;
template<typename ContainerAllocator>
constexpr int32_t SportCountsResult_<ContainerAllocator>::SPORT_JUMPJACK;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__STRUCT_HPP_

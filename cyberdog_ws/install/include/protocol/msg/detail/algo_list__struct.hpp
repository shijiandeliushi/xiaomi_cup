// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/AlgoList.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ALGO_LIST__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__ALGO_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__AlgoList __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__AlgoList __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AlgoList_
{
  using Type = AlgoList_<ContainerAllocator>;

  explicit AlgoList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->algo_module = 0;
    }
  }

  explicit AlgoList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->algo_module = 0;
    }
  }

  // field types and members
  using _algo_module_type =
    uint8_t;
  _algo_module_type algo_module;

  // setters for named parameter idiom
  Type & set__algo_module(
    const uint8_t & _arg)
  {
    this->algo_module = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ALGO_FACE =
    0u;
  static constexpr uint8_t ALGO_BODY =
    1u;
  static constexpr uint8_t ALGO_GESTURE =
    2u;
  static constexpr uint8_t ALGO_KEYPOINTS =
    3u;
  static constexpr uint8_t ALGO_REID =
    4u;
  static constexpr uint8_t ALGO_FOCUS =
    5u;
  static constexpr uint8_t FACE_MANAGER =
    6u;

  // pointer types
  using RawPtr =
    protocol::msg::AlgoList_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::AlgoList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::AlgoList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::AlgoList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AlgoList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AlgoList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AlgoList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AlgoList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::AlgoList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::AlgoList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__AlgoList
    std::shared_ptr<protocol::msg::AlgoList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__AlgoList
    std::shared_ptr<protocol::msg::AlgoList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlgoList_ & other) const
  {
    if (this->algo_module != other.algo_module) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlgoList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlgoList_

// alias to use template instance with default allocator
using AlgoList =
  protocol::msg::AlgoList_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AlgoList_<ContainerAllocator>::ALGO_FACE;
template<typename ContainerAllocator>
constexpr uint8_t AlgoList_<ContainerAllocator>::ALGO_BODY;
template<typename ContainerAllocator>
constexpr uint8_t AlgoList_<ContainerAllocator>::ALGO_GESTURE;
template<typename ContainerAllocator>
constexpr uint8_t AlgoList_<ContainerAllocator>::ALGO_KEYPOINTS;
template<typename ContainerAllocator>
constexpr uint8_t AlgoList_<ContainerAllocator>::ALGO_REID;
template<typename ContainerAllocator>
constexpr uint8_t AlgoList_<ContainerAllocator>::ALGO_FOCUS;
template<typename ContainerAllocator>
constexpr uint8_t AlgoList_<ContainerAllocator>::FACE_MANAGER;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__ALGO_LIST__STRUCT_HPP_

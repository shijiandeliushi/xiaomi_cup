// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotionSequenceGait.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotionSequenceGait __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotionSequenceGait __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionSequenceGait_
{
  using Type = MotionSequenceGait_<ContainerAllocator>;

  explicit MotionSequenceGait_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_forefoot = false;
      this->left_forefoot = false;
      this->right_hindfoot = false;
      this->left_hindfoot = false;
      this->duration = 0ll;
    }
  }

  explicit MotionSequenceGait_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_forefoot = false;
      this->left_forefoot = false;
      this->right_hindfoot = false;
      this->left_hindfoot = false;
      this->duration = 0ll;
    }
  }

  // field types and members
  using _right_forefoot_type =
    bool;
  _right_forefoot_type right_forefoot;
  using _left_forefoot_type =
    bool;
  _left_forefoot_type left_forefoot;
  using _right_hindfoot_type =
    bool;
  _right_hindfoot_type right_hindfoot;
  using _left_hindfoot_type =
    bool;
  _left_hindfoot_type left_hindfoot;
  using _duration_type =
    int64_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__right_forefoot(
    const bool & _arg)
  {
    this->right_forefoot = _arg;
    return *this;
  }
  Type & set__left_forefoot(
    const bool & _arg)
  {
    this->left_forefoot = _arg;
    return *this;
  }
  Type & set__right_hindfoot(
    const bool & _arg)
  {
    this->right_hindfoot = _arg;
    return *this;
  }
  Type & set__left_hindfoot(
    const bool & _arg)
  {
    this->left_hindfoot = _arg;
    return *this;
  }
  Type & set__duration(
    const int64_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::MotionSequenceGait_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotionSequenceGait_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotionSequenceGait_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotionSequenceGait_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionSequenceGait_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionSequenceGait_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionSequenceGait_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionSequenceGait_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotionSequenceGait_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotionSequenceGait_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotionSequenceGait
    std::shared_ptr<protocol::msg::MotionSequenceGait_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotionSequenceGait
    std::shared_ptr<protocol::msg::MotionSequenceGait_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequenceGait_ & other) const
  {
    if (this->right_forefoot != other.right_forefoot) {
      return false;
    }
    if (this->left_forefoot != other.left_forefoot) {
      return false;
    }
    if (this->right_hindfoot != other.right_hindfoot) {
      return false;
    }
    if (this->left_hindfoot != other.left_hindfoot) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequenceGait_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequenceGait_

// alias to use template instance with default allocator
using MotionSequenceGait =
  protocol::msg::MotionSequenceGait_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__STRUCT_HPP_

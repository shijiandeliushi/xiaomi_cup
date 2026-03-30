// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotionSequenceParam.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'centroid_height'
// Member 'right_forefoot'
// Member 'left_forefoot'
// Member 'right_hindfoot'
// Member 'left_hindfoot'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotionSequenceParam __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotionSequenceParam __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionSequenceParam_
{
  using Type = MotionSequenceParam_<ContainerAllocator>;

  explicit MotionSequenceParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_init),
    centroid_height(_init),
    right_forefoot(_init),
    left_forefoot(_init),
    right_hindfoot(_init),
    left_hindfoot(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forefoot_height = 0.0f;
      this->hindfoot_height = 0.0f;
      this->friction_coefficient = 0.0f;
      this->duration_ms = 0ll;
    }
  }

  explicit MotionSequenceParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_alloc, _init),
    centroid_height(_alloc, _init),
    right_forefoot(_alloc, _init),
    left_forefoot(_alloc, _init),
    right_hindfoot(_alloc, _init),
    left_hindfoot(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forefoot_height = 0.0f;
      this->hindfoot_height = 0.0f;
      this->friction_coefficient = 0.0f;
      this->duration_ms = 0ll;
    }
  }

  // field types and members
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _centroid_height_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _centroid_height_type centroid_height;
  using _right_forefoot_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _right_forefoot_type right_forefoot;
  using _left_forefoot_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _left_forefoot_type left_forefoot;
  using _right_hindfoot_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _right_hindfoot_type right_hindfoot;
  using _left_hindfoot_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _left_hindfoot_type left_hindfoot;
  using _forefoot_height_type =
    float;
  _forefoot_height_type forefoot_height;
  using _hindfoot_height_type =
    float;
  _hindfoot_height_type hindfoot_height;
  using _friction_coefficient_type =
    float;
  _friction_coefficient_type friction_coefficient;
  using _duration_ms_type =
    int64_t;
  _duration_ms_type duration_ms;

  // setters for named parameter idiom
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__centroid_height(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->centroid_height = _arg;
    return *this;
  }
  Type & set__right_forefoot(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->right_forefoot = _arg;
    return *this;
  }
  Type & set__left_forefoot(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->left_forefoot = _arg;
    return *this;
  }
  Type & set__right_hindfoot(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->right_hindfoot = _arg;
    return *this;
  }
  Type & set__left_hindfoot(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->left_hindfoot = _arg;
    return *this;
  }
  Type & set__forefoot_height(
    const float & _arg)
  {
    this->forefoot_height = _arg;
    return *this;
  }
  Type & set__hindfoot_height(
    const float & _arg)
  {
    this->hindfoot_height = _arg;
    return *this;
  }
  Type & set__friction_coefficient(
    const float & _arg)
  {
    this->friction_coefficient = _arg;
    return *this;
  }
  Type & set__duration_ms(
    const int64_t & _arg)
  {
    this->duration_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::MotionSequenceParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotionSequenceParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotionSequenceParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotionSequenceParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionSequenceParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionSequenceParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionSequenceParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionSequenceParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotionSequenceParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotionSequenceParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotionSequenceParam
    std::shared_ptr<protocol::msg::MotionSequenceParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotionSequenceParam
    std::shared_ptr<protocol::msg::MotionSequenceParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequenceParam_ & other) const
  {
    if (this->twist != other.twist) {
      return false;
    }
    if (this->centroid_height != other.centroid_height) {
      return false;
    }
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
    if (this->forefoot_height != other.forefoot_height) {
      return false;
    }
    if (this->hindfoot_height != other.hindfoot_height) {
      return false;
    }
    if (this->friction_coefficient != other.friction_coefficient) {
      return false;
    }
    if (this->duration_ms != other.duration_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequenceParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequenceParam_

// alias to use template instance with default allocator
using MotionSequenceParam =
  protocol::msg::MotionSequenceParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__STRUCT_HPP_

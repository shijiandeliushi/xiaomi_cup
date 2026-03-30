// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotionSequencePace.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'twist'
// Member 'weight'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'centroid'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'right_forefoot'
// Member 'left_forefoot'
// Member 'right_hindfoot'
// Member 'left_hindfoot'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotionSequencePace __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotionSequencePace __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionSequencePace_
{
  using Type = MotionSequencePace_<ContainerAllocator>;

  explicit MotionSequencePace_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_init),
    centroid(_init),
    weight(_init),
    right_forefoot(_init),
    left_forefoot(_init),
    right_hindfoot(_init),
    left_hindfoot(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->friction_coefficient = 0.0f;
      this->landing_gain = 0.0f;
      this->use_mpc_track = false;
      this->duration = 0ll;
    }
  }

  explicit MotionSequencePace_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_alloc, _init),
    centroid(_alloc, _init),
    weight(_alloc, _init),
    right_forefoot(_alloc, _init),
    left_forefoot(_alloc, _init),
    right_hindfoot(_alloc, _init),
    left_hindfoot(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->friction_coefficient = 0.0f;
      this->landing_gain = 0.0f;
      this->use_mpc_track = false;
      this->duration = 0ll;
    }
  }

  // field types and members
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _centroid_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _centroid_type centroid;
  using _weight_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _weight_type weight;
  using _right_forefoot_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _right_forefoot_type right_forefoot;
  using _left_forefoot_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _left_forefoot_type left_forefoot;
  using _right_hindfoot_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _right_hindfoot_type right_hindfoot;
  using _left_hindfoot_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _left_hindfoot_type left_hindfoot;
  using _friction_coefficient_type =
    float;
  _friction_coefficient_type friction_coefficient;
  using _landing_gain_type =
    float;
  _landing_gain_type landing_gain;
  using _use_mpc_track_type =
    bool;
  _use_mpc_track_type use_mpc_track;
  using _duration_type =
    int64_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__centroid(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }
  Type & set__weight(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__right_forefoot(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->right_forefoot = _arg;
    return *this;
  }
  Type & set__left_forefoot(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->left_forefoot = _arg;
    return *this;
  }
  Type & set__right_hindfoot(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->right_hindfoot = _arg;
    return *this;
  }
  Type & set__left_hindfoot(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->left_hindfoot = _arg;
    return *this;
  }
  Type & set__friction_coefficient(
    const float & _arg)
  {
    this->friction_coefficient = _arg;
    return *this;
  }
  Type & set__landing_gain(
    const float & _arg)
  {
    this->landing_gain = _arg;
    return *this;
  }
  Type & set__use_mpc_track(
    const bool & _arg)
  {
    this->use_mpc_track = _arg;
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
    protocol::msg::MotionSequencePace_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotionSequencePace_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotionSequencePace_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotionSequencePace_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionSequencePace_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionSequencePace_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionSequencePace_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionSequencePace_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotionSequencePace_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotionSequencePace_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotionSequencePace
    std::shared_ptr<protocol::msg::MotionSequencePace_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotionSequencePace
    std::shared_ptr<protocol::msg::MotionSequencePace_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequencePace_ & other) const
  {
    if (this->twist != other.twist) {
      return false;
    }
    if (this->centroid != other.centroid) {
      return false;
    }
    if (this->weight != other.weight) {
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
    if (this->friction_coefficient != other.friction_coefficient) {
      return false;
    }
    if (this->landing_gain != other.landing_gain) {
      return false;
    }
    if (this->use_mpc_track != other.use_mpc_track) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequencePace_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequencePace_

// alias to use template instance with default allocator
using MotionSequencePace =
  protocol::msg::MotionSequencePace_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__STRUCT_HPP_

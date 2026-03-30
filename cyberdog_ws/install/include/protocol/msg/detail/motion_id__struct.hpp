// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotionID.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_ID__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotionID __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotionID __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionID_
{
  using Type = MotionID_<ContainerAllocator>;

  explicit MotionID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MotionID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr int32_t ESTOP =
    0;
  static constexpr int32_t GETDOWN =
    101;
  static constexpr int32_t RECOVERYSTAND =
    111;
  static constexpr int32_t WALK_STAND =
    112;
  static constexpr int32_t BACK_FLIP =
    121;
  static constexpr int32_t TWO_LEG_STAND =
    123;
  static constexpr int32_t ROLL_OVER =
    124;
  static constexpr int32_t PASSIVE_TROT =
    125;
  static constexpr int32_t JUMP_STAIR =
    126;
  static constexpr int32_t JUMP_UPSTAIR =
    126;
  static constexpr int32_t JUMP_DOWNSTAIR =
    137;
  static constexpr int32_t JUMP3D_LEFT90DEG =
    130;
  static constexpr int32_t JUMP3D_RIGHT90DEG =
    131;
  static constexpr int32_t JUMP3D_FORWARD60CM =
    132;
  static constexpr int32_t JUMP3D_FORWARD30CM =
    133;
  static constexpr int32_t JUMP3D_LEFT20CM =
    134;
  static constexpr int32_t JUMP3D_RIGHT20CM =
    135;
  static constexpr int32_t JUMP3D_UP30CM =
    136;
  static constexpr int32_t FORCECONTROL_DEFINITIVELY =
    201;
  static constexpr int32_t FORCECONTROL_RELATIVEYLY =
    202;
  static constexpr int32_t POSECONTROL_DEFINITIVELY =
    211;
  static constexpr int32_t POSECONTROL_RELATIVEYLY =
    212;
  static constexpr int32_t JUMP_BOUND =
    301;
  static constexpr int32_t JUMP_PRONK =
    302;
  static constexpr int32_t WALK_USERTROT =
    303;
  static constexpr int32_t WALK_ADAPTIVELY =
    304;
  static constexpr int32_t WALK_FLYTROT =
    305;
  static constexpr int32_t SEQUENCE_CUSTOM =
    400;

  // pointer types
  using RawPtr =
    protocol::msg::MotionID_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotionID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotionID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotionID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotionID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotionID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotionID
    std::shared_ptr<protocol::msg::MotionID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotionID
    std::shared_ptr<protocol::msg::MotionID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionID_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionID_

// alias to use template instance with default allocator
using MotionID =
  protocol::msg::MotionID_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::ESTOP;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::GETDOWN;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::RECOVERYSTAND;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::WALK_STAND;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::BACK_FLIP;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::TWO_LEG_STAND;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::ROLL_OVER;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::PASSIVE_TROT;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP_STAIR;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP_UPSTAIR;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP_DOWNSTAIR;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP3D_LEFT90DEG;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP3D_RIGHT90DEG;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP3D_FORWARD60CM;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP3D_FORWARD30CM;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP3D_LEFT20CM;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP3D_RIGHT20CM;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP3D_UP30CM;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::FORCECONTROL_DEFINITIVELY;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::FORCECONTROL_RELATIVEYLY;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::POSECONTROL_DEFINITIVELY;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::POSECONTROL_RELATIVEYLY;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP_BOUND;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::JUMP_PRONK;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::WALK_USERTROT;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::WALK_ADAPTIVELY;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::WALK_FLYTROT;
template<typename ContainerAllocator>
constexpr int32_t MotionID_<ContainerAllocator>::SEQUENCE_CUSTOM;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_ID__STRUCT_HPP_

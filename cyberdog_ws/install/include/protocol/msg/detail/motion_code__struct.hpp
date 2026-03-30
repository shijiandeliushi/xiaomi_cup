// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotionCode.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_CODE__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_CODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotionCode __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotionCode __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionCode_
{
  using Type = MotionCode_<ContainerAllocator>;

  explicit MotionCode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MotionCode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int32_t OK =
    0;
  static constexpr int32_t HW_LOW_BATTERY =
    300;
  static constexpr int32_t HW_MOTOR_OFFLINE =
    301;
  static constexpr int32_t COM_LCM_TIMEOUT =
    310;
  static constexpr int32_t MOTION_SWITCH_ERROR =
    320;
  static constexpr int32_t MOTION_TRANSITION_TIMEOUT =
    321;
  static constexpr int32_t MOTION_EXECUTE_TIMEOUT =
    322;
  static constexpr int32_t MOTION_EXECUTE_ERROR =
    323;
  static constexpr int32_t COMMAND_INVALID =
    330;
  static constexpr int32_t TASK_STATE_ERROR =
    340;
  static constexpr int32_t TASK_MODE_ERROR =
    341;

  // pointer types
  using RawPtr =
    protocol::msg::MotionCode_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotionCode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotionCode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotionCode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionCode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionCode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionCode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionCode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotionCode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotionCode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotionCode
    std::shared_ptr<protocol::msg::MotionCode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotionCode
    std::shared_ptr<protocol::msg::MotionCode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionCode_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionCode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionCode_

// alias to use template instance with default allocator
using MotionCode =
  protocol::msg::MotionCode_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::OK;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::HW_LOW_BATTERY;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::HW_MOTOR_OFFLINE;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::COM_LCM_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::MOTION_SWITCH_ERROR;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::MOTION_TRANSITION_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::MOTION_EXECUTE_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::MOTION_EXECUTE_ERROR;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::COMMAND_INVALID;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::TASK_STATE_ERROR;
template<typename ContainerAllocator>
constexpr int32_t MotionCode_<ContainerAllocator>::TASK_MODE_ERROR;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_CODE__STRUCT_HPP_

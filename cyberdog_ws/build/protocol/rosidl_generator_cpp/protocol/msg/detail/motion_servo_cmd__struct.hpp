// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotionServoCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotionServoCmd __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotionServoCmd __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionServoCmd_
{
  using Type = MotionServoCmd_<ContainerAllocator>;

  explicit MotionServoCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->cmd_type = 0l;
      this->cmd_source = 0l;
      this->value = 0l;
    }
  }

  explicit MotionServoCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->cmd_type = 0l;
      this->cmd_source = 0l;
      this->value = 0l;
    }
  }

  // field types and members
  using _motion_id_type =
    int32_t;
  _motion_id_type motion_id;
  using _cmd_type_type =
    int32_t;
  _cmd_type_type cmd_type;
  using _cmd_source_type =
    int32_t;
  _cmd_source_type cmd_source;
  using _value_type =
    int32_t;
  _value_type value;
  using _vel_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _vel_des_type vel_des;
  using _rpy_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _rpy_des_type rpy_des;
  using _pos_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _pos_des_type pos_des;
  using _acc_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _acc_des_type acc_des;
  using _ctrl_point_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ctrl_point_type ctrl_point;
  using _foot_pose_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _foot_pose_type foot_pose;
  using _step_height_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _step_height_type step_height;

  // setters for named parameter idiom
  Type & set__motion_id(
    const int32_t & _arg)
  {
    this->motion_id = _arg;
    return *this;
  }
  Type & set__cmd_type(
    const int32_t & _arg)
  {
    this->cmd_type = _arg;
    return *this;
  }
  Type & set__cmd_source(
    const int32_t & _arg)
  {
    this->cmd_source = _arg;
    return *this;
  }
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__vel_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->vel_des = _arg;
    return *this;
  }
  Type & set__rpy_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->rpy_des = _arg;
    return *this;
  }
  Type & set__pos_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->pos_des = _arg;
    return *this;
  }
  Type & set__acc_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->acc_des = _arg;
    return *this;
  }
  Type & set__ctrl_point(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ctrl_point = _arg;
    return *this;
  }
  Type & set__foot_pose(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->foot_pose = _arg;
    return *this;
  }
  Type & set__step_height(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->step_height = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SERVO_START =
    0;
  static constexpr int32_t SERVO_DATA =
    1;
  static constexpr int32_t SERVO_END =
    2;
  static constexpr int32_t APP =
    0;
  static constexpr int32_t AUDIO =
    1;
  static constexpr int32_t VIS =
    2;

  // pointer types
  using RawPtr =
    protocol::msg::MotionServoCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotionServoCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotionServoCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotionServoCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionServoCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionServoCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionServoCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionServoCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotionServoCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotionServoCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotionServoCmd
    std::shared_ptr<protocol::msg::MotionServoCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotionServoCmd
    std::shared_ptr<protocol::msg::MotionServoCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionServoCmd_ & other) const
  {
    if (this->motion_id != other.motion_id) {
      return false;
    }
    if (this->cmd_type != other.cmd_type) {
      return false;
    }
    if (this->cmd_source != other.cmd_source) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->vel_des != other.vel_des) {
      return false;
    }
    if (this->rpy_des != other.rpy_des) {
      return false;
    }
    if (this->pos_des != other.pos_des) {
      return false;
    }
    if (this->acc_des != other.acc_des) {
      return false;
    }
    if (this->ctrl_point != other.ctrl_point) {
      return false;
    }
    if (this->foot_pose != other.foot_pose) {
      return false;
    }
    if (this->step_height != other.step_height) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionServoCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionServoCmd_

// alias to use template instance with default allocator
using MotionServoCmd =
  protocol::msg::MotionServoCmd_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t MotionServoCmd_<ContainerAllocator>::SERVO_START;
template<typename ContainerAllocator>
constexpr int32_t MotionServoCmd_<ContainerAllocator>::SERVO_DATA;
template<typename ContainerAllocator>
constexpr int32_t MotionServoCmd_<ContainerAllocator>::SERVO_END;
template<typename ContainerAllocator>
constexpr int32_t MotionServoCmd_<ContainerAllocator>::APP;
template<typename ContainerAllocator>
constexpr int32_t MotionServoCmd_<ContainerAllocator>::AUDIO;
template<typename ContainerAllocator>
constexpr int32_t MotionServoCmd_<ContainerAllocator>::VIS;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__STRUCT_HPP_

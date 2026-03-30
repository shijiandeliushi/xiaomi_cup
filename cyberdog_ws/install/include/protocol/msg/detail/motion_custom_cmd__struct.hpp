// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotionCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_CUSTOM_CMD__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_CUSTOM_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotionCustomCmd __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotionCustomCmd __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionCustomCmd_
{
  using Type = MotionCustomCmd_<ContainerAllocator>;

  explicit MotionCustomCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->gait_id = 0;
      this->contact = 0;
      this->life_count = 0;
      this->value = 0l;
      this->duration = 0l;
    }
  }

  explicit MotionCustomCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->gait_id = 0;
      this->contact = 0;
      this->life_count = 0;
      this->value = 0l;
      this->duration = 0l;
    }
  }

  // field types and members
  using _mode_type =
    int8_t;
  _mode_type mode;
  using _gait_id_type =
    int8_t;
  _gait_id_type gait_id;
  using _contact_type =
    int8_t;
  _contact_type contact;
  using _life_count_type =
    int8_t;
  _life_count_type life_count;
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
  using _value_type =
    int32_t;
  _value_type value;
  using _duration_type =
    int32_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__mode(
    const int8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__gait_id(
    const int8_t & _arg)
  {
    this->gait_id = _arg;
    return *this;
  }
  Type & set__contact(
    const int8_t & _arg)
  {
    this->contact = _arg;
    return *this;
  }
  Type & set__life_count(
    const int8_t & _arg)
  {
    this->life_count = _arg;
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
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__duration(
    const int32_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::MotionCustomCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotionCustomCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotionCustomCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotionCustomCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionCustomCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionCustomCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionCustomCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionCustomCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotionCustomCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotionCustomCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotionCustomCmd
    std::shared_ptr<protocol::msg::MotionCustomCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotionCustomCmd
    std::shared_ptr<protocol::msg::MotionCustomCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionCustomCmd_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->gait_id != other.gait_id) {
      return false;
    }
    if (this->contact != other.contact) {
      return false;
    }
    if (this->life_count != other.life_count) {
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
    if (this->value != other.value) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionCustomCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionCustomCmd_

// alias to use template instance with default allocator
using MotionCustomCmd =
  protocol::msg::MotionCustomCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_CUSTOM_CMD__STRUCT_HPP_

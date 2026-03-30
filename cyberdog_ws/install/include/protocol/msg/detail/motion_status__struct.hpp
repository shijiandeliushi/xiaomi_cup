// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotionStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotionStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotionStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionStatus_
{
  using Type = MotionStatus_<ContainerAllocator>;

  explicit MotionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->contact = 0;
      this->order_process_bar = 0;
      this->switch_status = 0;
      this->ori_error = 0;
      this->footpos_error = 0;
    }
  }

  explicit MotionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->contact = 0;
      this->order_process_bar = 0;
      this->switch_status = 0;
      this->ori_error = 0;
      this->footpos_error = 0;
    }
  }

  // field types and members
  using _motion_id_type =
    int32_t;
  _motion_id_type motion_id;
  using _contact_type =
    int8_t;
  _contact_type contact;
  using _order_process_bar_type =
    int8_t;
  _order_process_bar_type order_process_bar;
  using _switch_status_type =
    int8_t;
  _switch_status_type switch_status;
  using _ori_error_type =
    int8_t;
  _ori_error_type ori_error;
  using _footpos_error_type =
    int16_t;
  _footpos_error_type footpos_error;
  using _motor_error_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _motor_error_type motor_error;

  // setters for named parameter idiom
  Type & set__motion_id(
    const int32_t & _arg)
  {
    this->motion_id = _arg;
    return *this;
  }
  Type & set__contact(
    const int8_t & _arg)
  {
    this->contact = _arg;
    return *this;
  }
  Type & set__order_process_bar(
    const int8_t & _arg)
  {
    this->order_process_bar = _arg;
    return *this;
  }
  Type & set__switch_status(
    const int8_t & _arg)
  {
    this->switch_status = _arg;
    return *this;
  }
  Type & set__ori_error(
    const int8_t & _arg)
  {
    this->ori_error = _arg;
    return *this;
  }
  Type & set__footpos_error(
    const int16_t & _arg)
  {
    this->footpos_error = _arg;
    return *this;
  }
  Type & set__motor_error(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->motor_error = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t NORMAL =
    0;
  static constexpr int8_t TRANSITIONING =
    1;
  static constexpr int8_t ESTOP =
    2;
  static constexpr int8_t EDAMP =
    3;
  static constexpr int8_t LIFTED =
    4;
  static constexpr int8_t BAN_TRANS =
    5;
  static constexpr int8_t OVER_HEAT =
    6;
  static constexpr int8_t LOW_BAT =
    7;
  static constexpr int8_t ORI_ERR =
    8;
  static constexpr int8_t FOOTPOS_ERR =
    9;
  static constexpr int8_t STAND_STUCK =
    10;
  static constexpr int8_t MOTOR_OVER_HEAT =
    11;
  static constexpr int8_t MOTOR_OVER_CURR =
    12;
  static constexpr int8_t MOTOR_ERR =
    13;
  static constexpr int8_t CHARGING =
    14;

  // pointer types
  using RawPtr =
    protocol::msg::MotionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotionStatus
    std::shared_ptr<protocol::msg::MotionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotionStatus
    std::shared_ptr<protocol::msg::MotionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionStatus_ & other) const
  {
    if (this->motion_id != other.motion_id) {
      return false;
    }
    if (this->contact != other.contact) {
      return false;
    }
    if (this->order_process_bar != other.order_process_bar) {
      return false;
    }
    if (this->switch_status != other.switch_status) {
      return false;
    }
    if (this->ori_error != other.ori_error) {
      return false;
    }
    if (this->footpos_error != other.footpos_error) {
      return false;
    }
    if (this->motor_error != other.motor_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionStatus_

// alias to use template instance with default allocator
using MotionStatus =
  protocol::msg::MotionStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::NORMAL;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::TRANSITIONING;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::ESTOP;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::EDAMP;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::LIFTED;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::BAN_TRANS;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::OVER_HEAT;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::LOW_BAT;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::ORI_ERR;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::FOOTPOS_ERR;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::STAND_STUCK;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::MOTOR_OVER_HEAT;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::MOTOR_OVER_CURR;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::MOTOR_ERR;
template<typename ContainerAllocator>
constexpr int8_t MotionStatus_<ContainerAllocator>::CHARGING;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_STATUS__STRUCT_HPP_

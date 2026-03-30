// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotionServoResponse.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotionServoResponse __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotionServoResponse __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionServoResponse_
{
  using Type = MotionServoResponse_<ContainerAllocator>;

  explicit MotionServoResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->cmd_id = 0l;
      this->order_process_bar = 0;
      this->status = 0;
      this->result = false;
      this->code = 0l;
    }
  }

  explicit MotionServoResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->cmd_id = 0l;
      this->order_process_bar = 0;
      this->status = 0;
      this->result = false;
      this->code = 0l;
    }
  }

  // field types and members
  using _motion_id_type =
    int32_t;
  _motion_id_type motion_id;
  using _cmd_id_type =
    int32_t;
  _cmd_id_type cmd_id;
  using _order_process_bar_type =
    int8_t;
  _order_process_bar_type order_process_bar;
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    bool;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__motion_id(
    const int32_t & _arg)
  {
    this->motion_id = _arg;
    return *this;
  }
  Type & set__cmd_id(
    const int32_t & _arg)
  {
    this->cmd_id = _arg;
    return *this;
  }
  Type & set__order_process_bar(
    const int8_t & _arg)
  {
    this->order_process_bar = _arg;
    return *this;
  }
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::MotionServoResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotionServoResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotionServoResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotionServoResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionServoResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionServoResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotionServoResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotionServoResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotionServoResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotionServoResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotionServoResponse
    std::shared_ptr<protocol::msg::MotionServoResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotionServoResponse
    std::shared_ptr<protocol::msg::MotionServoResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionServoResponse_ & other) const
  {
    if (this->motion_id != other.motion_id) {
      return false;
    }
    if (this->cmd_id != other.cmd_id) {
      return false;
    }
    if (this->order_process_bar != other.order_process_bar) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionServoResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionServoResponse_

// alias to use template instance with default allocator
using MotionServoResponse =
  protocol::msg::MotionServoResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__STRUCT_HPP_

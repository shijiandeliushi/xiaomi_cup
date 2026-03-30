// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/SingleTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SINGLE_TOF_PAYLOAD__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__SINGLE_TOF_PAYLOAD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__SingleTofPayload __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__SingleTofPayload __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SingleTofPayload_
{
  using Type = SingleTofPayload_<ContainerAllocator>;

  explicit SingleTofPayload_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_available = false;
      this->tof_position = 0;
    }
  }

  explicit SingleTofPayload_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_available = false;
      this->tof_position = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_available_type =
    bool;
  _data_available_type data_available;
  using _tof_position_type =
    uint8_t;
  _tof_position_type tof_position;
  using _data_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _data_type data;
  using _intensity_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _intensity_type intensity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data_available(
    const bool & _arg)
  {
    this->data_available = _arg;
    return *this;
  }
  Type & set__tof_position(
    const uint8_t & _arg)
  {
    this->tof_position = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__intensity(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->intensity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LEFT_HEAD =
    0u;
  static constexpr uint8_t RIGHT_HEAD =
    1u;
  static constexpr uint8_t LEFT_REAR =
    2u;
  static constexpr uint8_t RIGHT_REAR =
    3u;
  static constexpr uint8_t HEAD =
    4u;
  static constexpr uint8_t REAR =
    5u;
  static constexpr int32_t TOF_DATA_NUM =
    64;
  static constexpr float SCALE_FACTOR =
    0.001;

  // pointer types
  using RawPtr =
    protocol::msg::SingleTofPayload_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::SingleTofPayload_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::SingleTofPayload_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::SingleTofPayload_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::SingleTofPayload_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::SingleTofPayload_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::SingleTofPayload_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::SingleTofPayload_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::SingleTofPayload_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::SingleTofPayload_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__SingleTofPayload
    std::shared_ptr<protocol::msg::SingleTofPayload_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__SingleTofPayload
    std::shared_ptr<protocol::msg::SingleTofPayload_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SingleTofPayload_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data_available != other.data_available) {
      return false;
    }
    if (this->tof_position != other.tof_position) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->intensity != other.intensity) {
      return false;
    }
    return true;
  }
  bool operator!=(const SingleTofPayload_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SingleTofPayload_

// alias to use template instance with default allocator
using SingleTofPayload =
  protocol::msg::SingleTofPayload_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SingleTofPayload_<ContainerAllocator>::LEFT_HEAD;
template<typename ContainerAllocator>
constexpr uint8_t SingleTofPayload_<ContainerAllocator>::RIGHT_HEAD;
template<typename ContainerAllocator>
constexpr uint8_t SingleTofPayload_<ContainerAllocator>::LEFT_REAR;
template<typename ContainerAllocator>
constexpr uint8_t SingleTofPayload_<ContainerAllocator>::RIGHT_REAR;
template<typename ContainerAllocator>
constexpr uint8_t SingleTofPayload_<ContainerAllocator>::HEAD;
template<typename ContainerAllocator>
constexpr uint8_t SingleTofPayload_<ContainerAllocator>::REAR;
template<typename ContainerAllocator>
constexpr int32_t SingleTofPayload_<ContainerAllocator>::TOF_DATA_NUM;
template<typename ContainerAllocator>
constexpr float SingleTofPayload_<ContainerAllocator>::SCALE_FACTOR;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__SINGLE_TOF_PAYLOAD__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/GpsPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__GpsPayload __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__GpsPayload __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsPayload_
{
  using Type = GpsPayload_<ContainerAllocator>;

  explicit GpsPayload_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0ul;
      this->nanosec = 0ul;
      this->itow = 0ul;
      this->fix_type = 0;
      this->num_sv = 0;
      this->lon = 0.0;
      this->lat = 0.0;
    }
  }

  explicit GpsPayload_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0ul;
      this->nanosec = 0ul;
      this->itow = 0ul;
      this->fix_type = 0;
      this->num_sv = 0;
      this->lon = 0.0;
      this->lat = 0.0;
    }
  }

  // field types and members
  using _sec_type =
    uint32_t;
  _sec_type sec;
  using _nanosec_type =
    uint32_t;
  _nanosec_type nanosec;
  using _itow_type =
    uint32_t;
  _itow_type itow;
  using _fix_type_type =
    uint8_t;
  _fix_type_type fix_type;
  using _num_sv_type =
    uint8_t;
  _num_sv_type num_sv;
  using _lon_type =
    double;
  _lon_type lon;
  using _lat_type =
    double;
  _lat_type lat;

  // setters for named parameter idiom
  Type & set__sec(
    const uint32_t & _arg)
  {
    this->sec = _arg;
    return *this;
  }
  Type & set__nanosec(
    const uint32_t & _arg)
  {
    this->nanosec = _arg;
    return *this;
  }
  Type & set__itow(
    const uint32_t & _arg)
  {
    this->itow = _arg;
    return *this;
  }
  Type & set__fix_type(
    const uint8_t & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }
  Type & set__num_sv(
    const uint8_t & _arg)
  {
    this->num_sv = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::GpsPayload_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::GpsPayload_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::GpsPayload_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::GpsPayload_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::GpsPayload_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::GpsPayload_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::GpsPayload_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::GpsPayload_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::GpsPayload_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::GpsPayload_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__GpsPayload
    std::shared_ptr<protocol::msg::GpsPayload_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__GpsPayload
    std::shared_ptr<protocol::msg::GpsPayload_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsPayload_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    if (this->itow != other.itow) {
      return false;
    }
    if (this->fix_type != other.fix_type) {
      return false;
    }
    if (this->num_sv != other.num_sv) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsPayload_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsPayload_

// alias to use template instance with default allocator
using GpsPayload =
  protocol::msg::GpsPayload_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__STRUCT_HPP_

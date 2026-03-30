// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__FACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__Face __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__Face __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Face_
{
  using Type = Face_<ContainerAllocator>;

  explicit Face_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->score = 0.0f;
      this->match = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->row = 0.0f;
      this->is_host = false;
      this->age = 0.0f;
      this->emotion = 0.0f;
    }
  }

  explicit Face_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->score = 0.0f;
      this->match = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->row = 0.0f;
      this->is_host = false;
      this->age = 0.0f;
      this->emotion = 0.0f;
    }
  }

  // field types and members
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _score_type =
    float;
  _score_type score;
  using _match_type =
    float;
  _match_type match;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _row_type =
    float;
  _row_type row;
  using _is_host_type =
    bool;
  _is_host_type is_host;
  using _age_type =
    float;
  _age_type age;
  using _emotion_type =
    float;
  _emotion_type emotion;

  // setters for named parameter idiom
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__score(
    const float & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__match(
    const float & _arg)
  {
    this->match = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__row(
    const float & _arg)
  {
    this->row = _arg;
    return *this;
  }
  Type & set__is_host(
    const bool & _arg)
  {
    this->is_host = _arg;
    return *this;
  }
  Type & set__age(
    const float & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__emotion(
    const float & _arg)
  {
    this->emotion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::Face_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::Face_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::Face_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::Face_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Face_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Face_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Face_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Face_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::Face_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::Face_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__Face
    std::shared_ptr<protocol::msg::Face_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__Face
    std::shared_ptr<protocol::msg::Face_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Face_ & other) const
  {
    if (this->roi != other.roi) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->match != other.match) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->row != other.row) {
      return false;
    }
    if (this->is_host != other.is_host) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->emotion != other.emotion) {
      return false;
    }
    return true;
  }
  bool operator!=(const Face_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Face_

// alias to use template instance with default allocator
using Face =
  protocol::msg::Face_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__PERSON__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__PERSON__STRUCT_HPP_

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
// Member 'face_info'
#include "protocol/msg/detail/face_info__struct.hpp"
// Member 'body_info'
#include "protocol/msg/detail/body_info__struct.hpp"
// Member 'track_res'
#include "protocol/msg/detail/track_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__Person __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__Person __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Person_
{
  using Type = Person_<ContainerAllocator>;

  explicit Person_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    face_info(_init),
    body_info(_init),
    track_res(_init)
  {
    (void)_init;
  }

  explicit Person_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    face_info(_alloc, _init),
    body_info(_alloc, _init),
    track_res(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _face_info_type =
    protocol::msg::FaceInfo_<ContainerAllocator>;
  _face_info_type face_info;
  using _body_info_type =
    protocol::msg::BodyInfo_<ContainerAllocator>;
  _body_info_type body_info;
  using _track_res_type =
    protocol::msg::TrackResult_<ContainerAllocator>;
  _track_res_type track_res;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__face_info(
    const protocol::msg::FaceInfo_<ContainerAllocator> & _arg)
  {
    this->face_info = _arg;
    return *this;
  }
  Type & set__body_info(
    const protocol::msg::BodyInfo_<ContainerAllocator> & _arg)
  {
    this->body_info = _arg;
    return *this;
  }
  Type & set__track_res(
    const protocol::msg::TrackResult_<ContainerAllocator> & _arg)
  {
    this->track_res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::Person_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::Person_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::Person_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::Person_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Person_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Person_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Person_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Person_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::Person_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::Person_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__Person
    std::shared_ptr<protocol::msg::Person_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__Person
    std::shared_ptr<protocol::msg::Person_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Person_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->face_info != other.face_info) {
      return false;
    }
    if (this->body_info != other.body_info) {
      return false;
    }
    if (this->track_res != other.track_res) {
      return false;
    }
    return true;
  }
  bool operator!=(const Person_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Person_

// alias to use template instance with default allocator
using Person =
  protocol::msg::Person_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__PERSON__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/FollowPoints.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__STRUCT_HPP_

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
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__FollowPoints __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__FollowPoints __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FollowPoints_
{
  using Type = FollowPoints_<ContainerAllocator>;

  explicit FollowPoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->token = "";
    }
  }

  explicit FollowPoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    token(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->token = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _token_type token;
  using _poses_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__token(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->token = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::FollowPoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::FollowPoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::FollowPoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::FollowPoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FollowPoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FollowPoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::FollowPoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::FollowPoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::FollowPoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::FollowPoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__FollowPoints
    std::shared_ptr<protocol::msg::FollowPoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__FollowPoints
    std::shared_ptr<protocol::msg::FollowPoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowPoints_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->token != other.token) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowPoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowPoints_

// alias to use template instance with default allocator
using FollowPoints =
  protocol::msg::FollowPoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__STRUCT_HPP_

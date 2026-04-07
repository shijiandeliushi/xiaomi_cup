// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice

#ifndef CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__STRUCT_HPP_
#define CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cyberdog_msg__msg__ApplyForce __attribute__((deprecated))
#else
# define DEPRECATED__cyberdog_msg__msg__ApplyForce __declspec(deprecated)
#endif

namespace cyberdog_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ApplyForce_
{
  using Type = ApplyForce_<ContainerAllocator>;

  explicit ApplyForce_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->time = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->force.begin(), this->force.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->rel_pos.begin(), this->rel_pos.end(), 0.0);
    }
  }

  explicit ApplyForce_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_name(_alloc),
    force(_alloc),
    rel_pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->time = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->force.begin(), this->force.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->rel_pos.begin(), this->rel_pos.end(), 0.0);
    }
  }

  // field types and members
  using _link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_name_type link_name;
  using _time_type =
    double;
  _time_type time;
  using _force_type =
    std::array<double, 3>;
  _force_type force;
  using _rel_pos_type =
    std::array<double, 3>;
  _rel_pos_type rel_pos;

  // setters for named parameter idiom
  Type & set__link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_name = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__force(
    const std::array<double, 3> & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__rel_pos(
    const std::array<double, 3> & _arg)
  {
    this->rel_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cyberdog_msg::msg::ApplyForce_<ContainerAllocator> *;
  using ConstRawPtr =
    const cyberdog_msg::msg::ApplyForce_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cyberdog_msg::msg::ApplyForce_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cyberdog_msg::msg::ApplyForce_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cyberdog_msg::msg::ApplyForce_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cyberdog_msg::msg::ApplyForce_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cyberdog_msg::msg::ApplyForce_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cyberdog_msg::msg::ApplyForce_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cyberdog_msg::msg::ApplyForce_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cyberdog_msg::msg::ApplyForce_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cyberdog_msg__msg__ApplyForce
    std::shared_ptr<cyberdog_msg::msg::ApplyForce_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cyberdog_msg__msg__ApplyForce
    std::shared_ptr<cyberdog_msg::msg::ApplyForce_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyForce_ & other) const
  {
    if (this->link_name != other.link_name) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->rel_pos != other.rel_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyForce_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyForce_

// alias to use template instance with default allocator
using ApplyForce =
  cyberdog_msg::msg::ApplyForce_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cyberdog_msg

#endif  // CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__STRUCT_HPP_

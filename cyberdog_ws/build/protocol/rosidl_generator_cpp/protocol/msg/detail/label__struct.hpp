// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/Label.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__LABEL__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__LABEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__Label __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__Label __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Label_
{
  using Type = Label_<ContainerAllocator>;

  explicit Label_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label_name = "";
      this->physic_x = 0.0f;
      this->physic_y = 0.0f;
    }
  }

  explicit Label_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label_name = "";
      this->physic_x = 0.0f;
      this->physic_y = 0.0f;
    }
  }

  // field types and members
  using _label_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_name_type label_name;
  using _physic_x_type =
    float;
  _physic_x_type physic_x;
  using _physic_y_type =
    float;
  _physic_y_type physic_y;

  // setters for named parameter idiom
  Type & set__label_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label_name = _arg;
    return *this;
  }
  Type & set__physic_x(
    const float & _arg)
  {
    this->physic_x = _arg;
    return *this;
  }
  Type & set__physic_y(
    const float & _arg)
  {
    this->physic_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::Label_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::Label_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::Label_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::Label_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Label_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Label_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Label_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Label_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::Label_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::Label_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__Label
    std::shared_ptr<protocol::msg::Label_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__Label
    std::shared_ptr<protocol::msg::Label_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Label_ & other) const
  {
    if (this->label_name != other.label_name) {
      return false;
    }
    if (this->physic_x != other.physic_x) {
      return false;
    }
    if (this->physic_y != other.physic_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Label_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Label_

// alias to use template instance with default allocator
using Label =
  protocol::msg::Label_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__LABEL__STRUCT_HPP_

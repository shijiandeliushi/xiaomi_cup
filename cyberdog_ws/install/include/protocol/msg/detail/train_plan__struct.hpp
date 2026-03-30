// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/TrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRAIN_PLAN__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__TRAIN_PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__TrainPlan __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__TrainPlan __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrainPlan_
{
  using Type = TrainPlan_<ContainerAllocator>;

  explicit TrainPlan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trigger = "";
      this->type = "";
      this->value = "";
    }
  }

  explicit TrainPlan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trigger(_alloc),
    type(_alloc),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trigger = "";
      this->type = "";
      this->value = "";
    }
  }

  // field types and members
  using _trigger_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _trigger_type trigger;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__trigger(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->trigger = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::TrainPlan_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::TrainPlan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::TrainPlan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::TrainPlan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TrainPlan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TrainPlan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TrainPlan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TrainPlan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::TrainPlan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::TrainPlan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__TrainPlan
    std::shared_ptr<protocol::msg::TrainPlan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__TrainPlan
    std::shared_ptr<protocol::msg::TrainPlan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainPlan_ & other) const
  {
    if (this->trigger != other.trigger) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainPlan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainPlan_

// alias to use template instance with default allocator
using TrainPlan =
  protocol::msg::TrainPlan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TRAIN_PLAN__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/SetTrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__SetTrainPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__SetTrainPlan_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTrainPlan_Request_
{
  using Type = SetTrainPlan_Request_<ContainerAllocator>;

  explicit SetTrainPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trigger = "";
      this->type = "";
      this->value = "";
    }
  }

  explicit SetTrainPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::SetTrainPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::SetTrainPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::SetTrainPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::SetTrainPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::SetTrainPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::SetTrainPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::SetTrainPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::SetTrainPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::SetTrainPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::SetTrainPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__SetTrainPlan_Request
    std::shared_ptr<protocol::srv::SetTrainPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__SetTrainPlan_Request
    std::shared_ptr<protocol::srv::SetTrainPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTrainPlan_Request_ & other) const
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
  bool operator!=(const SetTrainPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTrainPlan_Request_

// alias to use template instance with default allocator
using SetTrainPlan_Request =
  protocol::srv::SetTrainPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__SetTrainPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__SetTrainPlan_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTrainPlan_Response_
{
  using Type = SetTrainPlan_Response_<ContainerAllocator>;

  explicit SetTrainPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->skill_id = 0l;
      this->code = 0l;
    }
  }

  explicit SetTrainPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->skill_id = 0l;
      this->code = 0l;
    }
  }

  // field types and members
  using _skill_id_type =
    int32_t;
  _skill_id_type skill_id;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__skill_id(
    const int32_t & _arg)
  {
    this->skill_id = _arg;
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
    protocol::srv::SetTrainPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::SetTrainPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::SetTrainPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::SetTrainPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::SetTrainPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::SetTrainPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::SetTrainPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::SetTrainPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::SetTrainPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::SetTrainPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__SetTrainPlan_Response
    std::shared_ptr<protocol::srv::SetTrainPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__SetTrainPlan_Response
    std::shared_ptr<protocol::srv::SetTrainPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTrainPlan_Response_ & other) const
  {
    if (this->skill_id != other.skill_id) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTrainPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTrainPlan_Response_

// alias to use template instance with default allocator
using SetTrainPlan_Response =
  protocol::srv::SetTrainPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct SetTrainPlan
{
  using Request = protocol::srv::SetTrainPlan_Request;
  using Response = protocol::srv::SetTrainPlan_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__STRUCT_HPP_

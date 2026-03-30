// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/TrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TRAIN_PLAN__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__TRAIN_PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__TrainPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__TrainPlan_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrainPlan_Request_
{
  using Type = TrainPlan_Request_<ContainerAllocator>;

  explicit TrainPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->value = "";
    }
  }

  explicit TrainPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->value = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
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
    protocol::srv::TrainPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::TrainPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::TrainPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::TrainPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TrainPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TrainPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TrainPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TrainPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::TrainPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::TrainPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__TrainPlan_Request
    std::shared_ptr<protocol::srv::TrainPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__TrainPlan_Request
    std::shared_ptr<protocol::srv::TrainPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainPlan_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainPlan_Request_

// alias to use template instance with default allocator
using TrainPlan_Request =
  protocol::srv::TrainPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


// Include directives for member types
// Member 'training'
#include "protocol/msg/detail/train_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__TrainPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__TrainPlan_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrainPlan_Response_
{
  using Type = TrainPlan_Response_<ContainerAllocator>;

  explicit TrainPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : training(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit TrainPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : training(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  // field types and members
  using _training_type =
    protocol::msg::TrainPlan_<ContainerAllocator>;
  _training_type training;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__training(
    const protocol::msg::TrainPlan_<ContainerAllocator> & _arg)
  {
    this->training = _arg;
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
    protocol::srv::TrainPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::TrainPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::TrainPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::TrainPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TrainPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TrainPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TrainPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TrainPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::TrainPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::TrainPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__TrainPlan_Response
    std::shared_ptr<protocol::srv::TrainPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__TrainPlan_Response
    std::shared_ptr<protocol::srv::TrainPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainPlan_Response_ & other) const
  {
    if (this->training != other.training) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainPlan_Response_

// alias to use template instance with default allocator
using TrainPlan_Response =
  protocol::srv::TrainPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct TrainPlan
{
  using Request = protocol::srv::TrainPlan_Request;
  using Response = protocol::srv::TrainPlan_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__TRAIN_PLAN__STRUCT_HPP_

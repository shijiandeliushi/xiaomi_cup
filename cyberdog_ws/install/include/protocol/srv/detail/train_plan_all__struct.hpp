// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/TrainPlanAll.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__TrainPlanAll_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__TrainPlanAll_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrainPlanAll_Request_
{
  using Type = TrainPlanAll_Request_<ContainerAllocator>;

  explicit TrainPlanAll_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TrainPlanAll_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::TrainPlanAll_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::TrainPlanAll_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::TrainPlanAll_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::TrainPlanAll_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TrainPlanAll_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TrainPlanAll_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TrainPlanAll_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TrainPlanAll_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::TrainPlanAll_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::TrainPlanAll_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__TrainPlanAll_Request
    std::shared_ptr<protocol::srv::TrainPlanAll_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__TrainPlanAll_Request
    std::shared_ptr<protocol::srv::TrainPlanAll_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainPlanAll_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainPlanAll_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainPlanAll_Request_

// alias to use template instance with default allocator
using TrainPlanAll_Request =
  protocol::srv::TrainPlanAll_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


// Include directives for member types
// Member 'training_set'
#include "protocol/msg/detail/train_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__TrainPlanAll_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__TrainPlanAll_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrainPlanAll_Response_
{
  using Type = TrainPlanAll_Response_<ContainerAllocator>;

  explicit TrainPlanAll_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit TrainPlanAll_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  // field types and members
  using _training_set_type =
    std::vector<protocol::msg::TrainPlan_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::TrainPlan_<ContainerAllocator>>>;
  _training_set_type training_set;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__training_set(
    const std::vector<protocol::msg::TrainPlan_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::TrainPlan_<ContainerAllocator>>> & _arg)
  {
    this->training_set = _arg;
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
    protocol::srv::TrainPlanAll_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::TrainPlanAll_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::TrainPlanAll_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::TrainPlanAll_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TrainPlanAll_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TrainPlanAll_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TrainPlanAll_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TrainPlanAll_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::TrainPlanAll_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::TrainPlanAll_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__TrainPlanAll_Response
    std::shared_ptr<protocol::srv::TrainPlanAll_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__TrainPlanAll_Response
    std::shared_ptr<protocol::srv::TrainPlanAll_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainPlanAll_Response_ & other) const
  {
    if (this->training_set != other.training_set) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainPlanAll_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainPlanAll_Response_

// alias to use template instance with default allocator
using TrainPlanAll_Response =
  protocol::srv::TrainPlanAll_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct TrainPlanAll
{
  using Request = protocol::srv::TrainPlanAll_Request;
  using Response = protocol::srv::TrainPlanAll_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/DeleteTrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__DELETE_TRAIN_PLAN__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__DELETE_TRAIN_PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__DeleteTrainPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__DeleteTrainPlan_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DeleteTrainPlan_Request_
{
  using Type = DeleteTrainPlan_Request_<ContainerAllocator>;

  explicit DeleteTrainPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trigger = "";
    }
  }

  explicit DeleteTrainPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trigger(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trigger = "";
    }
  }

  // field types and members
  using _trigger_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _trigger_type trigger;

  // setters for named parameter idiom
  Type & set__trigger(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->trigger = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__DeleteTrainPlan_Request
    std::shared_ptr<protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__DeleteTrainPlan_Request
    std::shared_ptr<protocol::srv::DeleteTrainPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeleteTrainPlan_Request_ & other) const
  {
    if (this->trigger != other.trigger) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeleteTrainPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeleteTrainPlan_Request_

// alias to use template instance with default allocator
using DeleteTrainPlan_Request =
  protocol::srv::DeleteTrainPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__DeleteTrainPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__DeleteTrainPlan_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DeleteTrainPlan_Response_
{
  using Type = DeleteTrainPlan_Response_<ContainerAllocator>;

  explicit DeleteTrainPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit DeleteTrainPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  // field types and members
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__DeleteTrainPlan_Response
    std::shared_ptr<protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__DeleteTrainPlan_Response
    std::shared_ptr<protocol::srv::DeleteTrainPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeleteTrainPlan_Response_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeleteTrainPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeleteTrainPlan_Response_

// alias to use template instance with default allocator
using DeleteTrainPlan_Response =
  protocol::srv::DeleteTrainPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct DeleteTrainPlan
{
  using Request = protocol::srv::DeleteTrainPlan_Request;
  using Response = protocol::srv::DeleteTrainPlan_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__DELETE_TRAIN_PLAN__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/StopAlgoTask.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__StopAlgoTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__StopAlgoTask_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StopAlgoTask_Request_
{
  using Type = StopAlgoTask_Request_<ContainerAllocator>;

  explicit StopAlgoTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0;
      this->map_name = "";
    }
  }

  explicit StopAlgoTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0;
      this->map_name = "";
    }
  }

  // field types and members
  using _task_id_type =
    uint8_t;
  _task_id_type task_id;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;

  // setters for named parameter idiom
  Type & set__task_id(
    const uint8_t & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ALGO_TASK_ALL =
    0u;
  static constexpr uint8_t ALGO_TASK_AB =
    1u;
  static constexpr uint8_t ALGO_TASK_FOLLOW =
    3u;
  static constexpr uint8_t ALGO_TASK_MAPPING =
    5u;
  static constexpr uint8_t ALGO_TASK_LOCALIZATION =
    7u;
  static constexpr uint8_t ALGO_TASK_AUTO_DOCKING =
    9u;
  static constexpr uint8_t ALGO_TASK_UWB_TRACKING =
    11u;
  static constexpr uint8_t ALGO_TASK_HUMAN_TRACKING =
    13u;

  // pointer types
  using RawPtr =
    protocol::srv::StopAlgoTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::StopAlgoTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::StopAlgoTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::StopAlgoTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::StopAlgoTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::StopAlgoTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::StopAlgoTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::StopAlgoTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::StopAlgoTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::StopAlgoTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__StopAlgoTask_Request
    std::shared_ptr<protocol::srv::StopAlgoTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__StopAlgoTask_Request
    std::shared_ptr<protocol::srv::StopAlgoTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopAlgoTask_Request_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopAlgoTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopAlgoTask_Request_

// alias to use template instance with default allocator
using StopAlgoTask_Request =
  protocol::srv::StopAlgoTask_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t StopAlgoTask_Request_<ContainerAllocator>::ALGO_TASK_ALL;
template<typename ContainerAllocator>
constexpr uint8_t StopAlgoTask_Request_<ContainerAllocator>::ALGO_TASK_AB;
template<typename ContainerAllocator>
constexpr uint8_t StopAlgoTask_Request_<ContainerAllocator>::ALGO_TASK_FOLLOW;
template<typename ContainerAllocator>
constexpr uint8_t StopAlgoTask_Request_<ContainerAllocator>::ALGO_TASK_MAPPING;
template<typename ContainerAllocator>
constexpr uint8_t StopAlgoTask_Request_<ContainerAllocator>::ALGO_TASK_LOCALIZATION;
template<typename ContainerAllocator>
constexpr uint8_t StopAlgoTask_Request_<ContainerAllocator>::ALGO_TASK_AUTO_DOCKING;
template<typename ContainerAllocator>
constexpr uint8_t StopAlgoTask_Request_<ContainerAllocator>::ALGO_TASK_UWB_TRACKING;
template<typename ContainerAllocator>
constexpr uint8_t StopAlgoTask_Request_<ContainerAllocator>::ALGO_TASK_HUMAN_TRACKING;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__StopAlgoTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__StopAlgoTask_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StopAlgoTask_Response_
{
  using Type = StopAlgoTask_Response_<ContainerAllocator>;

  explicit StopAlgoTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->code = 0l;
    }
  }

  explicit StopAlgoTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->code = 0l;
    }
  }

  // field types and members
  using _result_type =
    int8_t;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__result(
    const int8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SUCCESS =
    0;
  static constexpr int8_t FAILED =
    1;

  // pointer types
  using RawPtr =
    protocol::srv::StopAlgoTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::StopAlgoTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::StopAlgoTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::StopAlgoTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::StopAlgoTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::StopAlgoTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::StopAlgoTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::StopAlgoTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::StopAlgoTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::StopAlgoTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__StopAlgoTask_Response
    std::shared_ptr<protocol::srv::StopAlgoTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__StopAlgoTask_Response
    std::shared_ptr<protocol::srv::StopAlgoTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopAlgoTask_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopAlgoTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopAlgoTask_Response_

// alias to use template instance with default allocator
using StopAlgoTask_Response =
  protocol::srv::StopAlgoTask_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t StopAlgoTask_Response_<ContainerAllocator>::SUCCESS;
template<typename ContainerAllocator>
constexpr int8_t StopAlgoTask_Response_<ContainerAllocator>::FAILED;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct StopAlgoTask
{
  using Request = protocol::srv::StopAlgoTask_Request;
  using Response = protocol::srv::StopAlgoTask_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/AlgoManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ALGO_MANAGER__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__ALGO_MANAGER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'algo_enable'
// Member 'algo_disable'
#include "protocol/msg/detail/algo_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__AlgoManager_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AlgoManager_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AlgoManager_Request_
{
  using Type = AlgoManager_Request_<ContainerAllocator>;

  explicit AlgoManager_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->open_age = false;
      this->open_emotion = false;
    }
  }

  explicit AlgoManager_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->open_age = false;
      this->open_emotion = false;
    }
  }

  // field types and members
  using _algo_enable_type =
    std::vector<protocol::msg::AlgoList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::AlgoList_<ContainerAllocator>>>;
  _algo_enable_type algo_enable;
  using _algo_disable_type =
    std::vector<protocol::msg::AlgoList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::AlgoList_<ContainerAllocator>>>;
  _algo_disable_type algo_disable;
  using _open_age_type =
    bool;
  _open_age_type open_age;
  using _open_emotion_type =
    bool;
  _open_emotion_type open_emotion;

  // setters for named parameter idiom
  Type & set__algo_enable(
    const std::vector<protocol::msg::AlgoList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::AlgoList_<ContainerAllocator>>> & _arg)
  {
    this->algo_enable = _arg;
    return *this;
  }
  Type & set__algo_disable(
    const std::vector<protocol::msg::AlgoList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::AlgoList_<ContainerAllocator>>> & _arg)
  {
    this->algo_disable = _arg;
    return *this;
  }
  Type & set__open_age(
    const bool & _arg)
  {
    this->open_age = _arg;
    return *this;
  }
  Type & set__open_emotion(
    const bool & _arg)
  {
    this->open_emotion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::AlgoManager_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AlgoManager_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AlgoManager_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AlgoManager_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AlgoManager_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AlgoManager_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AlgoManager_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AlgoManager_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AlgoManager_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AlgoManager_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AlgoManager_Request
    std::shared_ptr<protocol::srv::AlgoManager_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AlgoManager_Request
    std::shared_ptr<protocol::srv::AlgoManager_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlgoManager_Request_ & other) const
  {
    if (this->algo_enable != other.algo_enable) {
      return false;
    }
    if (this->algo_disable != other.algo_disable) {
      return false;
    }
    if (this->open_age != other.open_age) {
      return false;
    }
    if (this->open_emotion != other.open_emotion) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlgoManager_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlgoManager_Request_

// alias to use template instance with default allocator
using AlgoManager_Request =
  protocol::srv::AlgoManager_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AlgoManager_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AlgoManager_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AlgoManager_Response_
{
  using Type = AlgoManager_Response_<ContainerAllocator>;

  explicit AlgoManager_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_enable = 0;
      this->result_disable = 0;
      this->code = 0l;
    }
  }

  explicit AlgoManager_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_enable = 0;
      this->result_disable = 0;
      this->code = 0l;
    }
  }

  // field types and members
  using _result_enable_type =
    uint8_t;
  _result_enable_type result_enable;
  using _result_disable_type =
    uint8_t;
  _result_disable_type result_disable;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__result_enable(
    const uint8_t & _arg)
  {
    this->result_enable = _arg;
    return *this;
  }
  Type & set__result_disable(
    const uint8_t & _arg)
  {
    this->result_disable = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ENABLE_SUCCESS =
    0u;
  static constexpr uint8_t ENABLE_FAIL =
    1u;
  static constexpr uint8_t DISABLE_SUCCESS =
    0u;
  static constexpr uint8_t DISABLE_FAIL =
    1u;

  // pointer types
  using RawPtr =
    protocol::srv::AlgoManager_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AlgoManager_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AlgoManager_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AlgoManager_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AlgoManager_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AlgoManager_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AlgoManager_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AlgoManager_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AlgoManager_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AlgoManager_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AlgoManager_Response
    std::shared_ptr<protocol::srv::AlgoManager_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AlgoManager_Response
    std::shared_ptr<protocol::srv::AlgoManager_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlgoManager_Response_ & other) const
  {
    if (this->result_enable != other.result_enable) {
      return false;
    }
    if (this->result_disable != other.result_disable) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlgoManager_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlgoManager_Response_

// alias to use template instance with default allocator
using AlgoManager_Response =
  protocol::srv::AlgoManager_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AlgoManager_Response_<ContainerAllocator>::ENABLE_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t AlgoManager_Response_<ContainerAllocator>::ENABLE_FAIL;
template<typename ContainerAllocator>
constexpr uint8_t AlgoManager_Response_<ContainerAllocator>::DISABLE_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t AlgoManager_Response_<ContainerAllocator>::DISABLE_FAIL;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct AlgoManager
{
  using Request = protocol::srv::AlgoManager_Request;
  using Response = protocol::srv::AlgoManager_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__ALGO_MANAGER__STRUCT_HPP_

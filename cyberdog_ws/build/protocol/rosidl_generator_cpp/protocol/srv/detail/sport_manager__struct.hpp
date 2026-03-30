// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/SportManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SPORT_MANAGER__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__SPORT_MANAGER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__SportManager_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__SportManager_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SportManager_Request_
{
  using Type = SportManager_Request_<ContainerAllocator>;

  explicit SportManager_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sport_type = 0;
      this->id = "";
      this->command = false;
      this->counts = 0l;
      this->timeout = 0l;
    }
  }

  explicit SportManager_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sport_type = 0;
      this->id = "";
      this->command = false;
      this->counts = 0l;
      this->timeout = 0l;
    }
  }

  // field types and members
  using _sport_type_type =
    uint8_t;
  _sport_type_type sport_type;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _command_type =
    bool;
  _command_type command;
  using _counts_type =
    int32_t;
  _counts_type counts;
  using _timeout_type =
    int32_t;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__sport_type(
    const uint8_t & _arg)
  {
    this->sport_type = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__command(
    const bool & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__counts(
    const int32_t & _arg)
  {
    this->counts = _arg;
    return *this;
  }
  Type & set__timeout(
    const int32_t & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SPORT_SQUAT =
    1u;
  static constexpr uint8_t SPORT_HIGHKNEES =
    2u;
  static constexpr uint8_t SPORT_SITUP =
    3u;
  static constexpr uint8_t SPORT_PRESSUP =
    4u;
  static constexpr uint8_t SPORT_PLANK =
    5u;
  static constexpr uint8_t SPORT_JUMPJACK =
    6u;
  static constexpr int32_t DEFAULT_TIMEOUT =
    100;
  static constexpr int32_t MAX_TIMEOUT =
    300;
  static constexpr int32_t MIN_TIMEOUT =
    5;
  static constexpr int32_t ALGORITHM_LOAD_DURATION =
    100;

  // pointer types
  using RawPtr =
    protocol::srv::SportManager_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::SportManager_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::SportManager_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::SportManager_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::SportManager_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::SportManager_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::SportManager_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::SportManager_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::SportManager_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::SportManager_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__SportManager_Request
    std::shared_ptr<protocol::srv::SportManager_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__SportManager_Request
    std::shared_ptr<protocol::srv::SportManager_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SportManager_Request_ & other) const
  {
    if (this->sport_type != other.sport_type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->counts != other.counts) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const SportManager_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SportManager_Request_

// alias to use template instance with default allocator
using SportManager_Request =
  protocol::srv::SportManager_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SportManager_Request_<ContainerAllocator>::SPORT_SQUAT;
template<typename ContainerAllocator>
constexpr uint8_t SportManager_Request_<ContainerAllocator>::SPORT_HIGHKNEES;
template<typename ContainerAllocator>
constexpr uint8_t SportManager_Request_<ContainerAllocator>::SPORT_SITUP;
template<typename ContainerAllocator>
constexpr uint8_t SportManager_Request_<ContainerAllocator>::SPORT_PRESSUP;
template<typename ContainerAllocator>
constexpr uint8_t SportManager_Request_<ContainerAllocator>::SPORT_PLANK;
template<typename ContainerAllocator>
constexpr uint8_t SportManager_Request_<ContainerAllocator>::SPORT_JUMPJACK;
template<typename ContainerAllocator>
constexpr int32_t SportManager_Request_<ContainerAllocator>::DEFAULT_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t SportManager_Request_<ContainerAllocator>::MAX_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t SportManager_Request_<ContainerAllocator>::MIN_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t SportManager_Request_<ContainerAllocator>::ALGORITHM_LOAD_DURATION;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__SportManager_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__SportManager_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SportManager_Response_
{
  using Type = SportManager_Response_<ContainerAllocator>;

  explicit SportManager_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->code = 0l;
    }
  }

  explicit SportManager_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->code = 0l;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
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
  static constexpr int32_t ENABLE_SUCCESS =
    0;
  static constexpr int32_t ENABLE_FAIL =
    7001;

  // pointer types
  using RawPtr =
    protocol::srv::SportManager_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::SportManager_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::SportManager_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::SportManager_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::SportManager_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::SportManager_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::SportManager_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::SportManager_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::SportManager_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::SportManager_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__SportManager_Response
    std::shared_ptr<protocol::srv::SportManager_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__SportManager_Response
    std::shared_ptr<protocol::srv::SportManager_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SportManager_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const SportManager_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SportManager_Response_

// alias to use template instance with default allocator
using SportManager_Response =
  protocol::srv::SportManager_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t SportManager_Response_<ContainerAllocator>::ENABLE_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t SportManager_Response_<ContainerAllocator>::ENABLE_FAIL;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct SportManager
{
  using Request = protocol::srv::SportManager_Request;
  using Response = protocol::srv::SportManager_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__SPORT_MANAGER__STRUCT_HPP_

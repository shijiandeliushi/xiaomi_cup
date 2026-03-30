// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/BmsCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BMS_CMD__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__BMS_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__BmsCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BmsCmd_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BmsCmd_Request_
{
  using Type = BmsCmd_Request_<ContainerAllocator>;

  explicit BmsCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->electric_machine_command = 0;
      this->wireless_charging_command = 0;
    }
  }

  explicit BmsCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->electric_machine_command = 0;
      this->wireless_charging_command = 0;
    }
  }

  // field types and members
  using _electric_machine_command_type =
    uint8_t;
  _electric_machine_command_type electric_machine_command;
  using _wireless_charging_command_type =
    uint8_t;
  _wireless_charging_command_type wireless_charging_command;

  // setters for named parameter idiom
  Type & set__electric_machine_command(
    const uint8_t & _arg)
  {
    this->electric_machine_command = _arg;
    return *this;
  }
  Type & set__wireless_charging_command(
    const uint8_t & _arg)
  {
    this->wireless_charging_command = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP =
    1u;
  static constexpr uint8_t BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN =
    2u;
  static constexpr uint8_t BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON =
    3u;
  static constexpr uint8_t BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF =
    4u;

  // pointer types
  using RawPtr =
    protocol::srv::BmsCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BmsCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BmsCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BmsCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BmsCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BmsCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BmsCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BmsCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BmsCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BmsCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BmsCmd_Request
    std::shared_ptr<protocol::srv::BmsCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BmsCmd_Request
    std::shared_ptr<protocol::srv::BmsCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BmsCmd_Request_ & other) const
  {
    if (this->electric_machine_command != other.electric_machine_command) {
      return false;
    }
    if (this->wireless_charging_command != other.wireless_charging_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const BmsCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BmsCmd_Request_

// alias to use template instance with default allocator
using BmsCmd_Request =
  protocol::srv::BmsCmd_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t BmsCmd_Request_<ContainerAllocator>::BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP;
template<typename ContainerAllocator>
constexpr uint8_t BmsCmd_Request_<ContainerAllocator>::BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN;
template<typename ContainerAllocator>
constexpr uint8_t BmsCmd_Request_<ContainerAllocator>::BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON;
template<typename ContainerAllocator>
constexpr uint8_t BmsCmd_Request_<ContainerAllocator>::BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__BmsCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BmsCmd_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BmsCmd_Response_
{
  using Type = BmsCmd_Response_<ContainerAllocator>;

  explicit BmsCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->code = 0l;
    }
  }

  explicit BmsCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->code = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
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
    protocol::srv::BmsCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BmsCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BmsCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BmsCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BmsCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BmsCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BmsCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BmsCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BmsCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BmsCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BmsCmd_Response
    std::shared_ptr<protocol::srv::BmsCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BmsCmd_Response
    std::shared_ptr<protocol::srv::BmsCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BmsCmd_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const BmsCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BmsCmd_Response_

// alias to use template instance with default allocator
using BmsCmd_Response =
  protocol::srv::BmsCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct BmsCmd
{
  using Request = protocol::srv::BmsCmd_Request;
  using Response = protocol::srv::BmsCmd_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BMS_CMD__STRUCT_HPP_

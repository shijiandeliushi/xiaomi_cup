// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/Bms.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BMS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__BMS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__Bms __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__Bms __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bms_
{
  using Type = Bms_<ContainerAllocator>;

  explicit Bms_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->batt_volt = 0;
      this->batt_curr = 0;
      this->batt_soc = 0;
      this->batt_temp = 0;
      this->batt_st = 0;
      this->key_val = 0;
      this->disable_charge = 0;
      this->power_supply = 0;
      this->buzze = 0;
      this->status = 0;
      this->batt_health = 0;
      this->batt_loop_number = 0;
      this->powerboard_status = 0;
    }
  }

  explicit Bms_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->batt_volt = 0;
      this->batt_curr = 0;
      this->batt_soc = 0;
      this->batt_temp = 0;
      this->batt_st = 0;
      this->key_val = 0;
      this->disable_charge = 0;
      this->power_supply = 0;
      this->buzze = 0;
      this->status = 0;
      this->batt_health = 0;
      this->batt_loop_number = 0;
      this->powerboard_status = 0;
    }
  }

  // field types and members
  using _batt_volt_type =
    uint16_t;
  _batt_volt_type batt_volt;
  using _batt_curr_type =
    int16_t;
  _batt_curr_type batt_curr;
  using _batt_soc_type =
    uint8_t;
  _batt_soc_type batt_soc;
  using _batt_temp_type =
    int16_t;
  _batt_temp_type batt_temp;
  using _batt_st_type =
    uint8_t;
  _batt_st_type batt_st;
  using _key_val_type =
    uint8_t;
  _key_val_type key_val;
  using _disable_charge_type =
    uint8_t;
  _disable_charge_type disable_charge;
  using _power_supply_type =
    uint8_t;
  _power_supply_type power_supply;
  using _buzze_type =
    uint8_t;
  _buzze_type buzze;
  using _status_type =
    uint8_t;
  _status_type status;
  using _batt_health_type =
    int8_t;
  _batt_health_type batt_health;
  using _batt_loop_number_type =
    int16_t;
  _batt_loop_number_type batt_loop_number;
  using _powerboard_status_type =
    int8_t;
  _powerboard_status_type powerboard_status;

  // setters for named parameter idiom
  Type & set__batt_volt(
    const uint16_t & _arg)
  {
    this->batt_volt = _arg;
    return *this;
  }
  Type & set__batt_curr(
    const int16_t & _arg)
  {
    this->batt_curr = _arg;
    return *this;
  }
  Type & set__batt_soc(
    const uint8_t & _arg)
  {
    this->batt_soc = _arg;
    return *this;
  }
  Type & set__batt_temp(
    const int16_t & _arg)
  {
    this->batt_temp = _arg;
    return *this;
  }
  Type & set__batt_st(
    const uint8_t & _arg)
  {
    this->batt_st = _arg;
    return *this;
  }
  Type & set__key_val(
    const uint8_t & _arg)
  {
    this->key_val = _arg;
    return *this;
  }
  Type & set__disable_charge(
    const uint8_t & _arg)
  {
    this->disable_charge = _arg;
    return *this;
  }
  Type & set__power_supply(
    const uint8_t & _arg)
  {
    this->power_supply = _arg;
    return *this;
  }
  Type & set__buzze(
    const uint8_t & _arg)
  {
    this->buzze = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__batt_health(
    const int8_t & _arg)
  {
    this->batt_health = _arg;
    return *this;
  }
  Type & set__batt_loop_number(
    const int16_t & _arg)
  {
    this->batt_loop_number = _arg;
    return *this;
  }
  Type & set__powerboard_status(
    const int8_t & _arg)
  {
    this->powerboard_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::Bms_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::Bms_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::Bms_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::Bms_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Bms_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Bms_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Bms_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Bms_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::Bms_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::Bms_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__Bms
    std::shared_ptr<protocol::msg::Bms_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__Bms
    std::shared_ptr<protocol::msg::Bms_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bms_ & other) const
  {
    if (this->batt_volt != other.batt_volt) {
      return false;
    }
    if (this->batt_curr != other.batt_curr) {
      return false;
    }
    if (this->batt_soc != other.batt_soc) {
      return false;
    }
    if (this->batt_temp != other.batt_temp) {
      return false;
    }
    if (this->batt_st != other.batt_st) {
      return false;
    }
    if (this->key_val != other.key_val) {
      return false;
    }
    if (this->disable_charge != other.disable_charge) {
      return false;
    }
    if (this->power_supply != other.power_supply) {
      return false;
    }
    if (this->buzze != other.buzze) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->batt_health != other.batt_health) {
      return false;
    }
    if (this->batt_loop_number != other.batt_loop_number) {
      return false;
    }
    if (this->powerboard_status != other.powerboard_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bms_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bms_

// alias to use template instance with default allocator
using Bms =
  protocol::msg::Bms_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BMS__STRUCT_HPP_

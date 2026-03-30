// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:action/OverTheAir.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__STRUCT_HPP_
#define PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__action__OverTheAir_Goal __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__OverTheAir_Goal __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OverTheAir_Goal_
{
  using Type = OverTheAir_Goal_<ContainerAllocator>;

  explicit OverTheAir_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_msg = "";
      this->id = "";
      this->user = "";
      this->operate = "";
      this->data = "";
      this->type = "";
      this->depth = "";
    }
  }

  explicit OverTheAir_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_msg(_alloc),
    id(_alloc),
    user(_alloc),
    operate(_alloc),
    data(_alloc),
    type(_alloc),
    depth(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_msg = "";
      this->id = "";
      this->user = "";
      this->operate = "";
      this->data = "";
      this->type = "";
      this->depth = "";
    }
  }

  // field types and members
  using _goal_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _goal_msg_type goal_msg;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _user_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_type user;
  using _operate_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operate_type operate;
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _depth_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _depth_type depth;

  // setters for named parameter idiom
  Type & set__goal_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->goal_msg = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__user(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user = _arg;
    return *this;
  }
  Type & set__operate(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operate = _arg;
    return *this;
  }
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__depth(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> USER_APP;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OPERATE_INQUIRE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OPERATE_DOWNLOAD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OPERATE_UPGRADE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OPERATE_UPGRADE_AND_ROBOOT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OPERATE_REMOVE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OPERATE_ROBOOT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OPERATE_RESET;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OPERATE_DISK;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_FILE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_DIRECTORY;

  // pointer types
  using RawPtr =
    protocol::action::OverTheAir_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::OverTheAir_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__OverTheAir_Goal
    std::shared_ptr<protocol::action::OverTheAir_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__OverTheAir_Goal
    std::shared_ptr<protocol::action::OverTheAir_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverTheAir_Goal_ & other) const
  {
    if (this->goal_msg != other.goal_msg) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->user != other.user) {
      return false;
    }
    if (this->operate != other.operate) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverTheAir_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverTheAir_Goal_

// alias to use template instance with default allocator
using OverTheAir_Goal =
  protocol::action::OverTheAir_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::USER_APP = "APP";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::OPERATE_INQUIRE = "inquire";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::OPERATE_DOWNLOAD = "download";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::OPERATE_UPGRADE = "upgrade";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::OPERATE_UPGRADE_AND_ROBOOT = "upgrade_and_reboot";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::OPERATE_REMOVE = "remove";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::OPERATE_ROBOOT = "reboot";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::OPERATE_RESET = "reset";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::OPERATE_DISK = "disk";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::TYPE_FILE = "file";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Goal_<ContainerAllocator>::TYPE_DIRECTORY = "directory";

}  // namespace action

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__action__OverTheAir_Result __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__OverTheAir_Result __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OverTheAir_Result_
{
  using Type = OverTheAir_Result_<ContainerAllocator>;

  explicit OverTheAir_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_msg = "";
      this->id = "";
      this->type = "";
      this->operate = "";
      this->sn = "";
      this->not_unlocked = "";
      this->version_nx = "";
      this->version_nx_mini_led = "";
      this->version_nx_head_tof = "";
      this->version_nx_rear_tof = "";
      this->version_nx_head_uwb = "";
      this->version_nx_rear_uwb = "";
      this->version_nx_imu = "";
      this->version_nx_power = "";
      this->version_r329 = "";
      this->version_mr813 = "";
      this->version_mr813_spie1 = "";
      this->version_mr813_spie2 = "";
      this->disk_name = "";
      this->disk_filesystem = "";
      this->disk_size = "";
      this->disk_used = "";
      this->disk_avail = "";
      this->disk_scale = "";
      this->disk_mounted = "";
      this->reboot = "";
      this->state = "";
      this->code = 0l;
      this->result = "";
    }
  }

  explicit OverTheAir_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_msg(_alloc),
    id(_alloc),
    type(_alloc),
    operate(_alloc),
    sn(_alloc),
    not_unlocked(_alloc),
    version_nx(_alloc),
    version_nx_mini_led(_alloc),
    version_nx_head_tof(_alloc),
    version_nx_rear_tof(_alloc),
    version_nx_head_uwb(_alloc),
    version_nx_rear_uwb(_alloc),
    version_nx_imu(_alloc),
    version_nx_power(_alloc),
    version_r329(_alloc),
    version_mr813(_alloc),
    version_mr813_spie1(_alloc),
    version_mr813_spie2(_alloc),
    disk_name(_alloc),
    disk_filesystem(_alloc),
    disk_size(_alloc),
    disk_used(_alloc),
    disk_avail(_alloc),
    disk_scale(_alloc),
    disk_mounted(_alloc),
    reboot(_alloc),
    state(_alloc),
    result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_msg = "";
      this->id = "";
      this->type = "";
      this->operate = "";
      this->sn = "";
      this->not_unlocked = "";
      this->version_nx = "";
      this->version_nx_mini_led = "";
      this->version_nx_head_tof = "";
      this->version_nx_rear_tof = "";
      this->version_nx_head_uwb = "";
      this->version_nx_rear_uwb = "";
      this->version_nx_imu = "";
      this->version_nx_power = "";
      this->version_r329 = "";
      this->version_mr813 = "";
      this->version_mr813_spie1 = "";
      this->version_mr813_spie2 = "";
      this->disk_name = "";
      this->disk_filesystem = "";
      this->disk_size = "";
      this->disk_used = "";
      this->disk_avail = "";
      this->disk_scale = "";
      this->disk_mounted = "";
      this->reboot = "";
      this->state = "";
      this->code = 0l;
      this->result = "";
    }
  }

  // field types and members
  using _result_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_msg_type result_msg;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _operate_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operate_type operate;
  using _sn_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sn_type sn;
  using _not_unlocked_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _not_unlocked_type not_unlocked;
  using _version_nx_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_nx_type version_nx;
  using _version_nx_mini_led_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_nx_mini_led_type version_nx_mini_led;
  using _version_nx_head_tof_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_nx_head_tof_type version_nx_head_tof;
  using _version_nx_rear_tof_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_nx_rear_tof_type version_nx_rear_tof;
  using _version_nx_head_uwb_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_nx_head_uwb_type version_nx_head_uwb;
  using _version_nx_rear_uwb_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_nx_rear_uwb_type version_nx_rear_uwb;
  using _version_nx_imu_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_nx_imu_type version_nx_imu;
  using _version_nx_power_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_nx_power_type version_nx_power;
  using _version_r329_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_r329_type version_r329;
  using _version_mr813_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_mr813_type version_mr813;
  using _version_mr813_spie1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_mr813_spie1_type version_mr813_spie1;
  using _version_mr813_spie2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_mr813_spie2_type version_mr813_spie2;
  using _version_motors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _version_motors_type version_motors;
  using _disk_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _disk_name_type disk_name;
  using _disk_filesystem_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _disk_filesystem_type disk_filesystem;
  using _disk_size_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _disk_size_type disk_size;
  using _disk_used_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _disk_used_type disk_used;
  using _disk_avail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _disk_avail_type disk_avail;
  using _disk_scale_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _disk_scale_type disk_scale;
  using _disk_mounted_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _disk_mounted_type disk_mounted;
  using _disk_meta_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _disk_meta_name_type disk_meta_name;
  using _disk_meta_size_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _disk_meta_size_type disk_meta_size;
  using _disk_meta_change_time_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _disk_meta_change_time_type disk_meta_change_time;
  using _disk_meta_user_rights_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _disk_meta_user_rights_type disk_meta_user_rights;
  using _reboot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reboot_type reboot;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _code_type =
    int32_t;
  _code_type code;
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_msg = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__operate(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operate = _arg;
    return *this;
  }
  Type & set__sn(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sn = _arg;
    return *this;
  }
  Type & set__not_unlocked(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->not_unlocked = _arg;
    return *this;
  }
  Type & set__version_nx(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_nx = _arg;
    return *this;
  }
  Type & set__version_nx_mini_led(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_nx_mini_led = _arg;
    return *this;
  }
  Type & set__version_nx_head_tof(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_nx_head_tof = _arg;
    return *this;
  }
  Type & set__version_nx_rear_tof(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_nx_rear_tof = _arg;
    return *this;
  }
  Type & set__version_nx_head_uwb(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_nx_head_uwb = _arg;
    return *this;
  }
  Type & set__version_nx_rear_uwb(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_nx_rear_uwb = _arg;
    return *this;
  }
  Type & set__version_nx_imu(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_nx_imu = _arg;
    return *this;
  }
  Type & set__version_nx_power(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_nx_power = _arg;
    return *this;
  }
  Type & set__version_r329(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_r329 = _arg;
    return *this;
  }
  Type & set__version_mr813(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_mr813 = _arg;
    return *this;
  }
  Type & set__version_mr813_spie1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_mr813_spie1 = _arg;
    return *this;
  }
  Type & set__version_mr813_spie2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_mr813_spie2 = _arg;
    return *this;
  }
  Type & set__version_motors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->version_motors = _arg;
    return *this;
  }
  Type & set__disk_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->disk_name = _arg;
    return *this;
  }
  Type & set__disk_filesystem(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->disk_filesystem = _arg;
    return *this;
  }
  Type & set__disk_size(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->disk_size = _arg;
    return *this;
  }
  Type & set__disk_used(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->disk_used = _arg;
    return *this;
  }
  Type & set__disk_avail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->disk_avail = _arg;
    return *this;
  }
  Type & set__disk_scale(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->disk_scale = _arg;
    return *this;
  }
  Type & set__disk_mounted(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->disk_mounted = _arg;
    return *this;
  }
  Type & set__disk_meta_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->disk_meta_name = _arg;
    return *this;
  }
  Type & set__disk_meta_size(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->disk_meta_size = _arg;
    return *this;
  }
  Type & set__disk_meta_change_time(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->disk_meta_change_time = _arg;
    return *this;
  }
  Type & set__disk_meta_user_rights(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->disk_meta_user_rights = _arg;
    return *this;
  }
  Type & set__reboot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reboot = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE;

  // pointer types
  using RawPtr =
    protocol::action::OverTheAir_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::OverTheAir_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__OverTheAir_Result
    std::shared_ptr<protocol::action::OverTheAir_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__OverTheAir_Result
    std::shared_ptr<protocol::action::OverTheAir_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverTheAir_Result_ & other) const
  {
    if (this->result_msg != other.result_msg) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->operate != other.operate) {
      return false;
    }
    if (this->sn != other.sn) {
      return false;
    }
    if (this->not_unlocked != other.not_unlocked) {
      return false;
    }
    if (this->version_nx != other.version_nx) {
      return false;
    }
    if (this->version_nx_mini_led != other.version_nx_mini_led) {
      return false;
    }
    if (this->version_nx_head_tof != other.version_nx_head_tof) {
      return false;
    }
    if (this->version_nx_rear_tof != other.version_nx_rear_tof) {
      return false;
    }
    if (this->version_nx_head_uwb != other.version_nx_head_uwb) {
      return false;
    }
    if (this->version_nx_rear_uwb != other.version_nx_rear_uwb) {
      return false;
    }
    if (this->version_nx_imu != other.version_nx_imu) {
      return false;
    }
    if (this->version_nx_power != other.version_nx_power) {
      return false;
    }
    if (this->version_r329 != other.version_r329) {
      return false;
    }
    if (this->version_mr813 != other.version_mr813) {
      return false;
    }
    if (this->version_mr813_spie1 != other.version_mr813_spie1) {
      return false;
    }
    if (this->version_mr813_spie2 != other.version_mr813_spie2) {
      return false;
    }
    if (this->version_motors != other.version_motors) {
      return false;
    }
    if (this->disk_name != other.disk_name) {
      return false;
    }
    if (this->disk_filesystem != other.disk_filesystem) {
      return false;
    }
    if (this->disk_size != other.disk_size) {
      return false;
    }
    if (this->disk_used != other.disk_used) {
      return false;
    }
    if (this->disk_avail != other.disk_avail) {
      return false;
    }
    if (this->disk_scale != other.disk_scale) {
      return false;
    }
    if (this->disk_mounted != other.disk_mounted) {
      return false;
    }
    if (this->disk_meta_name != other.disk_meta_name) {
      return false;
    }
    if (this->disk_meta_size != other.disk_meta_size) {
      return false;
    }
    if (this->disk_meta_change_time != other.disk_meta_change_time) {
      return false;
    }
    if (this->disk_meta_user_rights != other.disk_meta_user_rights) {
      return false;
    }
    if (this->reboot != other.reboot) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverTheAir_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverTheAir_Result_

// alias to use template instance with default allocator
using OverTheAir_Result =
  protocol::action::OverTheAir_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Result_<ContainerAllocator>::TYPE = "result";

}  // namespace action

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__action__OverTheAir_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__OverTheAir_Feedback __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OverTheAir_Feedback_
{
  using Type = OverTheAir_Feedback_<ContainerAllocator>;

  explicit OverTheAir_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_msg = "";
      this->id = "";
      this->type = "";
      this->operate = "";
      this->now_version = "";
      this->ota_version = "";
      this->stage = "";
      this->target = "";
      this->target_stage = "";
      this->file = "";
      this->size = "";
      this->schedule = "";
      this->time_remaining = "";
      this->progress = "";
      this->speed = "";
      this->describe = "";
    }
  }

  explicit OverTheAir_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback_msg(_alloc),
    id(_alloc),
    type(_alloc),
    operate(_alloc),
    now_version(_alloc),
    ota_version(_alloc),
    stage(_alloc),
    target(_alloc),
    target_stage(_alloc),
    file(_alloc),
    size(_alloc),
    schedule(_alloc),
    time_remaining(_alloc),
    progress(_alloc),
    speed(_alloc),
    describe(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_msg = "";
      this->id = "";
      this->type = "";
      this->operate = "";
      this->now_version = "";
      this->ota_version = "";
      this->stage = "";
      this->target = "";
      this->target_stage = "";
      this->file = "";
      this->size = "";
      this->schedule = "";
      this->time_remaining = "";
      this->progress = "";
      this->speed = "";
      this->describe = "";
    }
  }

  // field types and members
  using _feedback_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_msg_type feedback_msg;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _operate_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operate_type operate;
  using _now_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _now_version_type now_version;
  using _ota_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ota_version_type ota_version;
  using _stage_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stage_type stage;
  using _target_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_type target;
  using _target_stage_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_stage_type target_stage;
  using _file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_type file;
  using _size_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _size_type size;
  using _schedule_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _schedule_type schedule;
  using _time_remaining_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _time_remaining_type time_remaining;
  using _progress_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _progress_type progress;
  using _speed_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _speed_type speed;
  using _describe_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _describe_type describe;

  // setters for named parameter idiom
  Type & set__feedback_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback_msg = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__operate(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operate = _arg;
    return *this;
  }
  Type & set__now_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->now_version = _arg;
    return *this;
  }
  Type & set__ota_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ota_version = _arg;
    return *this;
  }
  Type & set__stage(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stage = _arg;
    return *this;
  }
  Type & set__target(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__target_stage(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_stage = _arg;
    return *this;
  }
  Type & set__file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file = _arg;
    return *this;
  }
  Type & set__size(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__schedule(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->schedule = _arg;
    return *this;
  }
  Type & set__time_remaining(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->time_remaining = _arg;
    return *this;
  }
  Type & set__progress(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__speed(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__describe(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->describe = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TARGET_OTA;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TARGET_DEB;

  // pointer types
  using RawPtr =
    protocol::action::OverTheAir_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::OverTheAir_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__OverTheAir_Feedback
    std::shared_ptr<protocol::action::OverTheAir_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__OverTheAir_Feedback
    std::shared_ptr<protocol::action::OverTheAir_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverTheAir_Feedback_ & other) const
  {
    if (this->feedback_msg != other.feedback_msg) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->operate != other.operate) {
      return false;
    }
    if (this->now_version != other.now_version) {
      return false;
    }
    if (this->ota_version != other.ota_version) {
      return false;
    }
    if (this->stage != other.stage) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->target_stage != other.target_stage) {
      return false;
    }
    if (this->file != other.file) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->schedule != other.schedule) {
      return false;
    }
    if (this->time_remaining != other.time_remaining) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->describe != other.describe) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverTheAir_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverTheAir_Feedback_

// alias to use template instance with default allocator
using OverTheAir_Feedback =
  protocol::action::OverTheAir_Feedback_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Feedback_<ContainerAllocator>::TYPE = "feedback";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Feedback_<ContainerAllocator>::TARGET_OTA = "ota";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
OverTheAir_Feedback_<ContainerAllocator>::TARGET_DEB = "deb";

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "protocol/action/detail/over_the_air__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__OverTheAir_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__OverTheAir_SendGoal_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OverTheAir_SendGoal_Request_
{
  using Type = OverTheAir_SendGoal_Request_<ContainerAllocator>;

  explicit OverTheAir_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit OverTheAir_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    protocol::action::OverTheAir_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const protocol::action::OverTheAir_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__OverTheAir_SendGoal_Request
    std::shared_ptr<protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__OverTheAir_SendGoal_Request
    std::shared_ptr<protocol::action::OverTheAir_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverTheAir_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverTheAir_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverTheAir_SendGoal_Request_

// alias to use template instance with default allocator
using OverTheAir_SendGoal_Request =
  protocol::action::OverTheAir_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__OverTheAir_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__OverTheAir_SendGoal_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OverTheAir_SendGoal_Response_
{
  using Type = OverTheAir_SendGoal_Response_<ContainerAllocator>;

  explicit OverTheAir_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit OverTheAir_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__OverTheAir_SendGoal_Response
    std::shared_ptr<protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__OverTheAir_SendGoal_Response
    std::shared_ptr<protocol::action::OverTheAir_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverTheAir_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverTheAir_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverTheAir_SendGoal_Response_

// alias to use template instance with default allocator
using OverTheAir_SendGoal_Response =
  protocol::action::OverTheAir_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol

namespace protocol
{

namespace action
{

struct OverTheAir_SendGoal
{
  using Request = protocol::action::OverTheAir_SendGoal_Request;
  using Response = protocol::action::OverTheAir_SendGoal_Response;
};

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__OverTheAir_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__OverTheAir_GetResult_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OverTheAir_GetResult_Request_
{
  using Type = OverTheAir_GetResult_Request_<ContainerAllocator>;

  explicit OverTheAir_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit OverTheAir_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__OverTheAir_GetResult_Request
    std::shared_ptr<protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__OverTheAir_GetResult_Request
    std::shared_ptr<protocol::action::OverTheAir_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverTheAir_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverTheAir_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverTheAir_GetResult_Request_

// alias to use template instance with default allocator
using OverTheAir_GetResult_Request =
  protocol::action::OverTheAir_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/over_the_air__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__OverTheAir_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__OverTheAir_GetResult_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OverTheAir_GetResult_Response_
{
  using Type = OverTheAir_GetResult_Response_<ContainerAllocator>;

  explicit OverTheAir_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit OverTheAir_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    protocol::action::OverTheAir_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const protocol::action::OverTheAir_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__OverTheAir_GetResult_Response
    std::shared_ptr<protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__OverTheAir_GetResult_Response
    std::shared_ptr<protocol::action::OverTheAir_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverTheAir_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverTheAir_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverTheAir_GetResult_Response_

// alias to use template instance with default allocator
using OverTheAir_GetResult_Response =
  protocol::action::OverTheAir_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol

namespace protocol
{

namespace action
{

struct OverTheAir_GetResult
{
  using Request = protocol::action::OverTheAir_GetResult_Request;
  using Response = protocol::action::OverTheAir_GetResult_Response;
};

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "protocol/action/detail/over_the_air__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__OverTheAir_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__OverTheAir_FeedbackMessage __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OverTheAir_FeedbackMessage_
{
  using Type = OverTheAir_FeedbackMessage_<ContainerAllocator>;

  explicit OverTheAir_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit OverTheAir_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    protocol::action::OverTheAir_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const protocol::action::OverTheAir_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__OverTheAir_FeedbackMessage
    std::shared_ptr<protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__OverTheAir_FeedbackMessage
    std::shared_ptr<protocol::action::OverTheAir_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverTheAir_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverTheAir_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverTheAir_FeedbackMessage_

// alias to use template instance with default allocator
using OverTheAir_FeedbackMessage =
  protocol::action::OverTheAir_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace protocol
{

namespace action
{

struct OverTheAir
{
  /// The goal message defined in the action definition.
  using Goal = protocol::action::OverTheAir_Goal;
  /// The result message defined in the action definition.
  using Result = protocol::action::OverTheAir_Result;
  /// The feedback message defined in the action definition.
  using Feedback = protocol::action::OverTheAir_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = protocol::action::OverTheAir_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = protocol::action::OverTheAir_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = protocol::action::OverTheAir_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct OverTheAir OverTheAir;

}  // namespace action

}  // namespace protocol

#endif  // PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__STRUCT_HPP_

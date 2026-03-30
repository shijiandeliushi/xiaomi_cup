// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:action/OverTheAir.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__BUILDER_HPP_
#define PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__BUILDER_HPP_

#include "protocol/action/detail/over_the_air__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace action
{

namespace builder
{

class Init_OverTheAir_Goal_depth
{
public:
  explicit Init_OverTheAir_Goal_depth(::protocol::action::OverTheAir_Goal & msg)
  : msg_(msg)
  {}
  ::protocol::action::OverTheAir_Goal depth(::protocol::action::OverTheAir_Goal::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::OverTheAir_Goal msg_;
};

class Init_OverTheAir_Goal_type
{
public:
  explicit Init_OverTheAir_Goal_type(::protocol::action::OverTheAir_Goal & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Goal_depth type(::protocol::action::OverTheAir_Goal::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_OverTheAir_Goal_depth(msg_);
  }

private:
  ::protocol::action::OverTheAir_Goal msg_;
};

class Init_OverTheAir_Goal_data
{
public:
  explicit Init_OverTheAir_Goal_data(::protocol::action::OverTheAir_Goal & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Goal_type data(::protocol::action::OverTheAir_Goal::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_OverTheAir_Goal_type(msg_);
  }

private:
  ::protocol::action::OverTheAir_Goal msg_;
};

class Init_OverTheAir_Goal_operate
{
public:
  explicit Init_OverTheAir_Goal_operate(::protocol::action::OverTheAir_Goal & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Goal_data operate(::protocol::action::OverTheAir_Goal::_operate_type arg)
  {
    msg_.operate = std::move(arg);
    return Init_OverTheAir_Goal_data(msg_);
  }

private:
  ::protocol::action::OverTheAir_Goal msg_;
};

class Init_OverTheAir_Goal_user
{
public:
  explicit Init_OverTheAir_Goal_user(::protocol::action::OverTheAir_Goal & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Goal_operate user(::protocol::action::OverTheAir_Goal::_user_type arg)
  {
    msg_.user = std::move(arg);
    return Init_OverTheAir_Goal_operate(msg_);
  }

private:
  ::protocol::action::OverTheAir_Goal msg_;
};

class Init_OverTheAir_Goal_id
{
public:
  explicit Init_OverTheAir_Goal_id(::protocol::action::OverTheAir_Goal & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Goal_user id(::protocol::action::OverTheAir_Goal::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_OverTheAir_Goal_user(msg_);
  }

private:
  ::protocol::action::OverTheAir_Goal msg_;
};

class Init_OverTheAir_Goal_goal_msg
{
public:
  Init_OverTheAir_Goal_goal_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverTheAir_Goal_id goal_msg(::protocol::action::OverTheAir_Goal::_goal_msg_type arg)
  {
    msg_.goal_msg = std::move(arg);
    return Init_OverTheAir_Goal_id(msg_);
  }

private:
  ::protocol::action::OverTheAir_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::OverTheAir_Goal>()
{
  return protocol::action::builder::Init_OverTheAir_Goal_goal_msg();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_OverTheAir_Result_result
{
public:
  explicit Init_OverTheAir_Result_result(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  ::protocol::action::OverTheAir_Result result(::protocol::action::OverTheAir_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_code
{
public:
  explicit Init_OverTheAir_Result_code(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_result code(::protocol::action::OverTheAir_Result::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_OverTheAir_Result_result(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_state
{
public:
  explicit Init_OverTheAir_Result_state(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_code state(::protocol::action::OverTheAir_Result::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_OverTheAir_Result_code(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_reboot
{
public:
  explicit Init_OverTheAir_Result_reboot(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_state reboot(::protocol::action::OverTheAir_Result::_reboot_type arg)
  {
    msg_.reboot = std::move(arg);
    return Init_OverTheAir_Result_state(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_meta_user_rights
{
public:
  explicit Init_OverTheAir_Result_disk_meta_user_rights(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_reboot disk_meta_user_rights(::protocol::action::OverTheAir_Result::_disk_meta_user_rights_type arg)
  {
    msg_.disk_meta_user_rights = std::move(arg);
    return Init_OverTheAir_Result_reboot(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_meta_change_time
{
public:
  explicit Init_OverTheAir_Result_disk_meta_change_time(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_meta_user_rights disk_meta_change_time(::protocol::action::OverTheAir_Result::_disk_meta_change_time_type arg)
  {
    msg_.disk_meta_change_time = std::move(arg);
    return Init_OverTheAir_Result_disk_meta_user_rights(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_meta_size
{
public:
  explicit Init_OverTheAir_Result_disk_meta_size(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_meta_change_time disk_meta_size(::protocol::action::OverTheAir_Result::_disk_meta_size_type arg)
  {
    msg_.disk_meta_size = std::move(arg);
    return Init_OverTheAir_Result_disk_meta_change_time(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_meta_name
{
public:
  explicit Init_OverTheAir_Result_disk_meta_name(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_meta_size disk_meta_name(::protocol::action::OverTheAir_Result::_disk_meta_name_type arg)
  {
    msg_.disk_meta_name = std::move(arg);
    return Init_OverTheAir_Result_disk_meta_size(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_mounted
{
public:
  explicit Init_OverTheAir_Result_disk_mounted(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_meta_name disk_mounted(::protocol::action::OverTheAir_Result::_disk_mounted_type arg)
  {
    msg_.disk_mounted = std::move(arg);
    return Init_OverTheAir_Result_disk_meta_name(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_scale
{
public:
  explicit Init_OverTheAir_Result_disk_scale(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_mounted disk_scale(::protocol::action::OverTheAir_Result::_disk_scale_type arg)
  {
    msg_.disk_scale = std::move(arg);
    return Init_OverTheAir_Result_disk_mounted(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_avail
{
public:
  explicit Init_OverTheAir_Result_disk_avail(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_scale disk_avail(::protocol::action::OverTheAir_Result::_disk_avail_type arg)
  {
    msg_.disk_avail = std::move(arg);
    return Init_OverTheAir_Result_disk_scale(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_used
{
public:
  explicit Init_OverTheAir_Result_disk_used(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_avail disk_used(::protocol::action::OverTheAir_Result::_disk_used_type arg)
  {
    msg_.disk_used = std::move(arg);
    return Init_OverTheAir_Result_disk_avail(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_size
{
public:
  explicit Init_OverTheAir_Result_disk_size(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_used disk_size(::protocol::action::OverTheAir_Result::_disk_size_type arg)
  {
    msg_.disk_size = std::move(arg);
    return Init_OverTheAir_Result_disk_used(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_filesystem
{
public:
  explicit Init_OverTheAir_Result_disk_filesystem(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_size disk_filesystem(::protocol::action::OverTheAir_Result::_disk_filesystem_type arg)
  {
    msg_.disk_filesystem = std::move(arg);
    return Init_OverTheAir_Result_disk_size(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_disk_name
{
public:
  explicit Init_OverTheAir_Result_disk_name(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_filesystem disk_name(::protocol::action::OverTheAir_Result::_disk_name_type arg)
  {
    msg_.disk_name = std::move(arg);
    return Init_OverTheAir_Result_disk_filesystem(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_motors
{
public:
  explicit Init_OverTheAir_Result_version_motors(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_disk_name version_motors(::protocol::action::OverTheAir_Result::_version_motors_type arg)
  {
    msg_.version_motors = std::move(arg);
    return Init_OverTheAir_Result_disk_name(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_mr813_spie2
{
public:
  explicit Init_OverTheAir_Result_version_mr813_spie2(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_motors version_mr813_spie2(::protocol::action::OverTheAir_Result::_version_mr813_spie2_type arg)
  {
    msg_.version_mr813_spie2 = std::move(arg);
    return Init_OverTheAir_Result_version_motors(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_mr813_spie1
{
public:
  explicit Init_OverTheAir_Result_version_mr813_spie1(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_mr813_spie2 version_mr813_spie1(::protocol::action::OverTheAir_Result::_version_mr813_spie1_type arg)
  {
    msg_.version_mr813_spie1 = std::move(arg);
    return Init_OverTheAir_Result_version_mr813_spie2(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_mr813
{
public:
  explicit Init_OverTheAir_Result_version_mr813(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_mr813_spie1 version_mr813(::protocol::action::OverTheAir_Result::_version_mr813_type arg)
  {
    msg_.version_mr813 = std::move(arg);
    return Init_OverTheAir_Result_version_mr813_spie1(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_r329
{
public:
  explicit Init_OverTheAir_Result_version_r329(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_mr813 version_r329(::protocol::action::OverTheAir_Result::_version_r329_type arg)
  {
    msg_.version_r329 = std::move(arg);
    return Init_OverTheAir_Result_version_mr813(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_nx_power
{
public:
  explicit Init_OverTheAir_Result_version_nx_power(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_r329 version_nx_power(::protocol::action::OverTheAir_Result::_version_nx_power_type arg)
  {
    msg_.version_nx_power = std::move(arg);
    return Init_OverTheAir_Result_version_r329(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_nx_imu
{
public:
  explicit Init_OverTheAir_Result_version_nx_imu(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_nx_power version_nx_imu(::protocol::action::OverTheAir_Result::_version_nx_imu_type arg)
  {
    msg_.version_nx_imu = std::move(arg);
    return Init_OverTheAir_Result_version_nx_power(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_nx_rear_uwb
{
public:
  explicit Init_OverTheAir_Result_version_nx_rear_uwb(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_nx_imu version_nx_rear_uwb(::protocol::action::OverTheAir_Result::_version_nx_rear_uwb_type arg)
  {
    msg_.version_nx_rear_uwb = std::move(arg);
    return Init_OverTheAir_Result_version_nx_imu(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_nx_head_uwb
{
public:
  explicit Init_OverTheAir_Result_version_nx_head_uwb(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_nx_rear_uwb version_nx_head_uwb(::protocol::action::OverTheAir_Result::_version_nx_head_uwb_type arg)
  {
    msg_.version_nx_head_uwb = std::move(arg);
    return Init_OverTheAir_Result_version_nx_rear_uwb(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_nx_rear_tof
{
public:
  explicit Init_OverTheAir_Result_version_nx_rear_tof(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_nx_head_uwb version_nx_rear_tof(::protocol::action::OverTheAir_Result::_version_nx_rear_tof_type arg)
  {
    msg_.version_nx_rear_tof = std::move(arg);
    return Init_OverTheAir_Result_version_nx_head_uwb(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_nx_head_tof
{
public:
  explicit Init_OverTheAir_Result_version_nx_head_tof(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_nx_rear_tof version_nx_head_tof(::protocol::action::OverTheAir_Result::_version_nx_head_tof_type arg)
  {
    msg_.version_nx_head_tof = std::move(arg);
    return Init_OverTheAir_Result_version_nx_rear_tof(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_nx_mini_led
{
public:
  explicit Init_OverTheAir_Result_version_nx_mini_led(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_nx_head_tof version_nx_mini_led(::protocol::action::OverTheAir_Result::_version_nx_mini_led_type arg)
  {
    msg_.version_nx_mini_led = std::move(arg);
    return Init_OverTheAir_Result_version_nx_head_tof(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_version_nx
{
public:
  explicit Init_OverTheAir_Result_version_nx(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_nx_mini_led version_nx(::protocol::action::OverTheAir_Result::_version_nx_type arg)
  {
    msg_.version_nx = std::move(arg);
    return Init_OverTheAir_Result_version_nx_mini_led(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_not_unlocked
{
public:
  explicit Init_OverTheAir_Result_not_unlocked(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_version_nx not_unlocked(::protocol::action::OverTheAir_Result::_not_unlocked_type arg)
  {
    msg_.not_unlocked = std::move(arg);
    return Init_OverTheAir_Result_version_nx(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_sn
{
public:
  explicit Init_OverTheAir_Result_sn(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_not_unlocked sn(::protocol::action::OverTheAir_Result::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_OverTheAir_Result_not_unlocked(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_operate
{
public:
  explicit Init_OverTheAir_Result_operate(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_sn operate(::protocol::action::OverTheAir_Result::_operate_type arg)
  {
    msg_.operate = std::move(arg);
    return Init_OverTheAir_Result_sn(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_type
{
public:
  explicit Init_OverTheAir_Result_type(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_operate type(::protocol::action::OverTheAir_Result::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_OverTheAir_Result_operate(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_id
{
public:
  explicit Init_OverTheAir_Result_id(::protocol::action::OverTheAir_Result & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Result_type id(::protocol::action::OverTheAir_Result::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_OverTheAir_Result_type(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

class Init_OverTheAir_Result_result_msg
{
public:
  Init_OverTheAir_Result_result_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverTheAir_Result_id result_msg(::protocol::action::OverTheAir_Result::_result_msg_type arg)
  {
    msg_.result_msg = std::move(arg);
    return Init_OverTheAir_Result_id(msg_);
  }

private:
  ::protocol::action::OverTheAir_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::OverTheAir_Result>()
{
  return protocol::action::builder::Init_OverTheAir_Result_result_msg();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_OverTheAir_Feedback_describe
{
public:
  explicit Init_OverTheAir_Feedback_describe(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  ::protocol::action::OverTheAir_Feedback describe(::protocol::action::OverTheAir_Feedback::_describe_type arg)
  {
    msg_.describe = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_speed
{
public:
  explicit Init_OverTheAir_Feedback_speed(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_describe speed(::protocol::action::OverTheAir_Feedback::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_OverTheAir_Feedback_describe(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_progress
{
public:
  explicit Init_OverTheAir_Feedback_progress(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_speed progress(::protocol::action::OverTheAir_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_OverTheAir_Feedback_speed(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_time_remaining
{
public:
  explicit Init_OverTheAir_Feedback_time_remaining(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_progress time_remaining(::protocol::action::OverTheAir_Feedback::_time_remaining_type arg)
  {
    msg_.time_remaining = std::move(arg);
    return Init_OverTheAir_Feedback_progress(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_schedule
{
public:
  explicit Init_OverTheAir_Feedback_schedule(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_time_remaining schedule(::protocol::action::OverTheAir_Feedback::_schedule_type arg)
  {
    msg_.schedule = std::move(arg);
    return Init_OverTheAir_Feedback_time_remaining(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_size
{
public:
  explicit Init_OverTheAir_Feedback_size(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_schedule size(::protocol::action::OverTheAir_Feedback::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_OverTheAir_Feedback_schedule(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_file
{
public:
  explicit Init_OverTheAir_Feedback_file(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_size file(::protocol::action::OverTheAir_Feedback::_file_type arg)
  {
    msg_.file = std::move(arg);
    return Init_OverTheAir_Feedback_size(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_target_stage
{
public:
  explicit Init_OverTheAir_Feedback_target_stage(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_file target_stage(::protocol::action::OverTheAir_Feedback::_target_stage_type arg)
  {
    msg_.target_stage = std::move(arg);
    return Init_OverTheAir_Feedback_file(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_target
{
public:
  explicit Init_OverTheAir_Feedback_target(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_target_stage target(::protocol::action::OverTheAir_Feedback::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_OverTheAir_Feedback_target_stage(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_stage
{
public:
  explicit Init_OverTheAir_Feedback_stage(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_target stage(::protocol::action::OverTheAir_Feedback::_stage_type arg)
  {
    msg_.stage = std::move(arg);
    return Init_OverTheAir_Feedback_target(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_ota_version
{
public:
  explicit Init_OverTheAir_Feedback_ota_version(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_stage ota_version(::protocol::action::OverTheAir_Feedback::_ota_version_type arg)
  {
    msg_.ota_version = std::move(arg);
    return Init_OverTheAir_Feedback_stage(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_now_version
{
public:
  explicit Init_OverTheAir_Feedback_now_version(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_ota_version now_version(::protocol::action::OverTheAir_Feedback::_now_version_type arg)
  {
    msg_.now_version = std::move(arg);
    return Init_OverTheAir_Feedback_ota_version(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_operate
{
public:
  explicit Init_OverTheAir_Feedback_operate(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_now_version operate(::protocol::action::OverTheAir_Feedback::_operate_type arg)
  {
    msg_.operate = std::move(arg);
    return Init_OverTheAir_Feedback_now_version(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_type
{
public:
  explicit Init_OverTheAir_Feedback_type(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_operate type(::protocol::action::OverTheAir_Feedback::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_OverTheAir_Feedback_operate(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_id
{
public:
  explicit Init_OverTheAir_Feedback_id(::protocol::action::OverTheAir_Feedback & msg)
  : msg_(msg)
  {}
  Init_OverTheAir_Feedback_type id(::protocol::action::OverTheAir_Feedback::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_OverTheAir_Feedback_type(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

class Init_OverTheAir_Feedback_feedback_msg
{
public:
  Init_OverTheAir_Feedback_feedback_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverTheAir_Feedback_id feedback_msg(::protocol::action::OverTheAir_Feedback::_feedback_msg_type arg)
  {
    msg_.feedback_msg = std::move(arg);
    return Init_OverTheAir_Feedback_id(msg_);
  }

private:
  ::protocol::action::OverTheAir_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::OverTheAir_Feedback>()
{
  return protocol::action::builder::Init_OverTheAir_Feedback_feedback_msg();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_OverTheAir_SendGoal_Request_goal
{
public:
  explicit Init_OverTheAir_SendGoal_Request_goal(::protocol::action::OverTheAir_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::protocol::action::OverTheAir_SendGoal_Request goal(::protocol::action::OverTheAir_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::OverTheAir_SendGoal_Request msg_;
};

class Init_OverTheAir_SendGoal_Request_goal_id
{
public:
  Init_OverTheAir_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverTheAir_SendGoal_Request_goal goal_id(::protocol::action::OverTheAir_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OverTheAir_SendGoal_Request_goal(msg_);
  }

private:
  ::protocol::action::OverTheAir_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::OverTheAir_SendGoal_Request>()
{
  return protocol::action::builder::Init_OverTheAir_SendGoal_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_OverTheAir_SendGoal_Response_stamp
{
public:
  explicit Init_OverTheAir_SendGoal_Response_stamp(::protocol::action::OverTheAir_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::OverTheAir_SendGoal_Response stamp(::protocol::action::OverTheAir_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::OverTheAir_SendGoal_Response msg_;
};

class Init_OverTheAir_SendGoal_Response_accepted
{
public:
  Init_OverTheAir_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverTheAir_SendGoal_Response_stamp accepted(::protocol::action::OverTheAir_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_OverTheAir_SendGoal_Response_stamp(msg_);
  }

private:
  ::protocol::action::OverTheAir_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::OverTheAir_SendGoal_Response>()
{
  return protocol::action::builder::Init_OverTheAir_SendGoal_Response_accepted();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_OverTheAir_GetResult_Request_goal_id
{
public:
  Init_OverTheAir_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::OverTheAir_GetResult_Request goal_id(::protocol::action::OverTheAir_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::OverTheAir_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::OverTheAir_GetResult_Request>()
{
  return protocol::action::builder::Init_OverTheAir_GetResult_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_OverTheAir_GetResult_Response_result
{
public:
  explicit Init_OverTheAir_GetResult_Response_result(::protocol::action::OverTheAir_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::OverTheAir_GetResult_Response result(::protocol::action::OverTheAir_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::OverTheAir_GetResult_Response msg_;
};

class Init_OverTheAir_GetResult_Response_status
{
public:
  Init_OverTheAir_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverTheAir_GetResult_Response_result status(::protocol::action::OverTheAir_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OverTheAir_GetResult_Response_result(msg_);
  }

private:
  ::protocol::action::OverTheAir_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::OverTheAir_GetResult_Response>()
{
  return protocol::action::builder::Init_OverTheAir_GetResult_Response_status();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_OverTheAir_FeedbackMessage_feedback
{
public:
  explicit Init_OverTheAir_FeedbackMessage_feedback(::protocol::action::OverTheAir_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::protocol::action::OverTheAir_FeedbackMessage feedback(::protocol::action::OverTheAir_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::OverTheAir_FeedbackMessage msg_;
};

class Init_OverTheAir_FeedbackMessage_goal_id
{
public:
  Init_OverTheAir_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverTheAir_FeedbackMessage_feedback goal_id(::protocol::action::OverTheAir_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OverTheAir_FeedbackMessage_feedback(msg_);
  }

private:
  ::protocol::action::OverTheAir_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::OverTheAir_FeedbackMessage>()
{
  return protocol::action::builder::Init_OverTheAir_FeedbackMessage_goal_id();
}

}  // namespace protocol

#endif  // PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__BUILDER_HPP_

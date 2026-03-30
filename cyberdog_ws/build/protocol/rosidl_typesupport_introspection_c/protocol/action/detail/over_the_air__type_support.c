// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:action/OverTheAir.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/action/detail/over_the_air__functions.h"
#include "protocol/action/detail/over_the_air__struct.h"


// Include directives for member types
// Member `goal_msg`
// Member `id`
// Member `user`
// Member `operate`
// Member `data`
// Member `type`
// Member `depth`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__OverTheAir_Goal__init(message_memory);
}

void OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_fini_function(void * message_memory)
{
  protocol__action__OverTheAir_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_message_member_array[7] = {
  {
    "goal_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Goal, goal_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Goal, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Goal, user),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Goal, operate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Goal, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Goal, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Goal, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_message_members = {
  "protocol__action",  // message namespace
  "OverTheAir_Goal",  // message name
  7,  // number of fields
  sizeof(protocol__action__OverTheAir_Goal),
  OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_message_member_array,  // message members
  OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_message_type_support_handle = {
  0,
  &OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_Goal)() {
  if (!OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_message_type_support_handle.typesupport_identifier) {
    OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OverTheAir_Goal__rosidl_typesupport_introspection_c__OverTheAir_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
// already included above
// #include "protocol/action/detail/over_the_air__struct.h"


// Include directives for member types
// Member `result_msg`
// Member `id`
// Member `type`
// Member `operate`
// Member `sn`
// Member `not_unlocked`
// Member `version_nx`
// Member `version_nx_mini_led`
// Member `version_nx_head_tof`
// Member `version_nx_rear_tof`
// Member `version_nx_head_uwb`
// Member `version_nx_rear_uwb`
// Member `version_nx_imu`
// Member `version_nx_power`
// Member `version_r329`
// Member `version_mr813`
// Member `version_mr813_spie1`
// Member `version_mr813_spie2`
// Member `version_motors`
// Member `disk_name`
// Member `disk_filesystem`
// Member `disk_size`
// Member `disk_used`
// Member `disk_avail`
// Member `disk_scale`
// Member `disk_mounted`
// Member `disk_meta_name`
// Member `disk_meta_size`
// Member `disk_meta_change_time`
// Member `disk_meta_user_rights`
// Member `reboot`
// Member `state`
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__OverTheAir_Result__init(message_memory);
}

void OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_fini_function(void * message_memory)
{
  protocol__action__OverTheAir_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_message_member_array[34] = {
  {
    "result_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, result_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, operate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, sn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "not_unlocked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, not_unlocked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_nx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_nx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_nx_mini_led",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_nx_mini_led),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_nx_head_tof",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_nx_head_tof),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_nx_rear_tof",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_nx_rear_tof),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_nx_head_uwb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_nx_head_uwb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_nx_rear_uwb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_nx_rear_uwb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_nx_imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_nx_imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_nx_power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_nx_power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_r329",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_r329),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_mr813",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_mr813),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_mr813_spie1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_mr813_spie1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_mr813_spie2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_mr813_spie2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_motors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, version_motors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_filesystem",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_filesystem),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_used",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_used),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_avail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_avail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_mounted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_mounted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_meta_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_meta_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_meta_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_meta_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_meta_change_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_meta_change_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disk_meta_user_rights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, disk_meta_user_rights),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reboot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, reboot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_message_members = {
  "protocol__action",  // message namespace
  "OverTheAir_Result",  // message name
  34,  // number of fields
  sizeof(protocol__action__OverTheAir_Result),
  OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_message_member_array,  // message members
  OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_message_type_support_handle = {
  0,
  &OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_Result)() {
  if (!OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_message_type_support_handle.typesupport_identifier) {
    OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OverTheAir_Result__rosidl_typesupport_introspection_c__OverTheAir_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
// already included above
// #include "protocol/action/detail/over_the_air__struct.h"


// Include directives for member types
// Member `feedback_msg`
// Member `id`
// Member `type`
// Member `operate`
// Member `now_version`
// Member `ota_version`
// Member `stage`
// Member `target`
// Member `target_stage`
// Member `file`
// Member `size`
// Member `schedule`
// Member `time_remaining`
// Member `progress`
// Member `speed`
// Member `describe`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__OverTheAir_Feedback__init(message_memory);
}

void OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_fini_function(void * message_memory)
{
  protocol__action__OverTheAir_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_message_member_array[16] = {
  {
    "feedback_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, feedback_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, operate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "now_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, now_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ota_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, ota_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, stage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_stage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, target_stage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "schedule",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, schedule),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, time_remaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "describe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_Feedback, describe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_message_members = {
  "protocol__action",  // message namespace
  "OverTheAir_Feedback",  // message name
  16,  // number of fields
  sizeof(protocol__action__OverTheAir_Feedback),
  OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_message_member_array,  // message members
  OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_message_type_support_handle = {
  0,
  &OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_Feedback)() {
  if (!OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_message_type_support_handle.typesupport_identifier) {
    OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OverTheAir_Feedback__rosidl_typesupport_introspection_c__OverTheAir_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
// already included above
// #include "protocol/action/detail/over_the_air__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "protocol/action/over_the_air.h"
// Member `goal`
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__OverTheAir_SendGoal_Request__init(message_memory);
}

void OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_fini_function(void * message_memory)
{
  protocol__action__OverTheAir_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_members = {
  "protocol__action",  // message namespace
  "OverTheAir_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(protocol__action__OverTheAir_SendGoal_Request),
  OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_member_array,  // message members
  OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_type_support_handle = {
  0,
  &OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_SendGoal_Request)() {
  OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_Goal)();
  if (!OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OverTheAir_SendGoal_Request__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
// already included above
// #include "protocol/action/detail/over_the_air__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__OverTheAir_SendGoal_Response__init(message_memory);
}

void OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_fini_function(void * message_memory)
{
  protocol__action__OverTheAir_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_members = {
  "protocol__action",  // message namespace
  "OverTheAir_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(protocol__action__OverTheAir_SendGoal_Response),
  OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_member_array,  // message members
  OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_type_support_handle = {
  0,
  &OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_SendGoal_Response)() {
  OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OverTheAir_SendGoal_Response__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_service_members = {
  "protocol__action",  // service namespace
  "OverTheAir_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_service_type_support_handle = {
  0,
  &protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_SendGoal)() {
  if (!protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_service_type_support_handle.typesupport_identifier) {
    protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_SendGoal_Response)()->data;
  }

  return &protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
// already included above
// #include "protocol/action/detail/over_the_air__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__OverTheAir_GetResult_Request__init(message_memory);
}

void OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_fini_function(void * message_memory)
{
  protocol__action__OverTheAir_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_members = {
  "protocol__action",  // message namespace
  "OverTheAir_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(protocol__action__OverTheAir_GetResult_Request),
  OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_member_array,  // message members
  OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_type_support_handle = {
  0,
  &OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_GetResult_Request)() {
  OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OverTheAir_GetResult_Request__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
// already included above
// #include "protocol/action/detail/over_the_air__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "protocol/action/over_the_air.h"
// Member `result`
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__OverTheAir_GetResult_Response__init(message_memory);
}

void OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_fini_function(void * message_memory)
{
  protocol__action__OverTheAir_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_members = {
  "protocol__action",  // message namespace
  "OverTheAir_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(protocol__action__OverTheAir_GetResult_Response),
  OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_member_array,  // message members
  OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_type_support_handle = {
  0,
  &OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_GetResult_Response)() {
  OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_Result)();
  if (!OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OverTheAir_GetResult_Response__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_GetResult_service_members = {
  "protocol__action",  // service namespace
  "OverTheAir_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_GetResult_service_type_support_handle = {
  0,
  &protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_GetResult)() {
  if (!protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_GetResult_service_type_support_handle.typesupport_identifier) {
    protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_GetResult_Response)()->data;
  }

  return &protocol__action__detail__over_the_air__rosidl_typesupport_introspection_c__OverTheAir_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
// already included above
// #include "protocol/action/detail/over_the_air__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "protocol/action/over_the_air.h"
// Member `feedback`
// already included above
// #include "protocol/action/detail/over_the_air__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__OverTheAir_FeedbackMessage__init(message_memory);
}

void OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_fini_function(void * message_memory)
{
  protocol__action__OverTheAir_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__OverTheAir_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_members = {
  "protocol__action",  // message namespace
  "OverTheAir_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(protocol__action__OverTheAir_FeedbackMessage),
  OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_member_array,  // message members
  OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_type_support_handle = {
  0,
  &OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_FeedbackMessage)() {
  OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, OverTheAir_Feedback)();
  if (!OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OverTheAir_FeedbackMessage__rosidl_typesupport_introspection_c__OverTheAir_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:action/OverTheAir.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__STRUCT_H_
#define PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'USER_APP'.
static const char * const protocol__action__OverTheAir_Goal__USER_APP = "APP";

/// Constant 'OPERATE_INQUIRE'.
static const char * const protocol__action__OverTheAir_Goal__OPERATE_INQUIRE = "inquire";

/// Constant 'OPERATE_DOWNLOAD'.
static const char * const protocol__action__OverTheAir_Goal__OPERATE_DOWNLOAD = "download";

/// Constant 'OPERATE_UPGRADE'.
static const char * const protocol__action__OverTheAir_Goal__OPERATE_UPGRADE = "upgrade";

/// Constant 'OPERATE_UPGRADE_AND_ROBOOT'.
static const char * const protocol__action__OverTheAir_Goal__OPERATE_UPGRADE_AND_ROBOOT = "upgrade_and_reboot";

/// Constant 'OPERATE_REMOVE'.
static const char * const protocol__action__OverTheAir_Goal__OPERATE_REMOVE = "remove";

/// Constant 'OPERATE_ROBOOT'.
static const char * const protocol__action__OverTheAir_Goal__OPERATE_ROBOOT = "reboot";

/// Constant 'OPERATE_RESET'.
static const char * const protocol__action__OverTheAir_Goal__OPERATE_RESET = "reset";

/// Constant 'OPERATE_DISK'.
static const char * const protocol__action__OverTheAir_Goal__OPERATE_DISK = "disk";

/// Constant 'TYPE_FILE'.
static const char * const protocol__action__OverTheAir_Goal__TYPE_FILE = "file";

/// Constant 'TYPE_DIRECTORY'.
static const char * const protocol__action__OverTheAir_Goal__TYPE_DIRECTORY = "directory";

// Include directives for member types
// Member 'goal_msg'
// Member 'id'
// Member 'user'
// Member 'operate'
// Member 'data'
// Member 'type'
// Member 'depth'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/OverTheAir in the package protocol.
typedef struct protocol__action__OverTheAir_Goal
{
  rosidl_runtime_c__String goal_msg;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String user;
  rosidl_runtime_c__String operate;
  rosidl_runtime_c__String data;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String depth;
} protocol__action__OverTheAir_Goal;

// Struct for a sequence of protocol__action__OverTheAir_Goal.
typedef struct protocol__action__OverTheAir_Goal__Sequence
{
  protocol__action__OverTheAir_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__OverTheAir_Goal__Sequence;


// Constants defined in the message

/// Constant 'TYPE'.
static const char * const protocol__action__OverTheAir_Result__TYPE = "result";

// Include directives for member types
// Member 'result_msg'
// Member 'id'
// Member 'type'
// Member 'operate'
// Member 'sn'
// Member 'not_unlocked'
// Member 'version_nx'
// Member 'version_nx_mini_led'
// Member 'version_nx_head_tof'
// Member 'version_nx_rear_tof'
// Member 'version_nx_head_uwb'
// Member 'version_nx_rear_uwb'
// Member 'version_nx_imu'
// Member 'version_nx_power'
// Member 'version_r329'
// Member 'version_mr813'
// Member 'version_mr813_spie1'
// Member 'version_mr813_spie2'
// Member 'version_motors'
// Member 'disk_name'
// Member 'disk_filesystem'
// Member 'disk_size'
// Member 'disk_used'
// Member 'disk_avail'
// Member 'disk_scale'
// Member 'disk_mounted'
// Member 'disk_meta_name'
// Member 'disk_meta_size'
// Member 'disk_meta_change_time'
// Member 'disk_meta_user_rights'
// Member 'reboot'
// Member 'state'
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/OverTheAir in the package protocol.
typedef struct protocol__action__OverTheAir_Result
{
  rosidl_runtime_c__String result_msg;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String operate;
  rosidl_runtime_c__String sn;
  rosidl_runtime_c__String not_unlocked;
  rosidl_runtime_c__String version_nx;
  rosidl_runtime_c__String version_nx_mini_led;
  rosidl_runtime_c__String version_nx_head_tof;
  rosidl_runtime_c__String version_nx_rear_tof;
  rosidl_runtime_c__String version_nx_head_uwb;
  rosidl_runtime_c__String version_nx_rear_uwb;
  rosidl_runtime_c__String version_nx_imu;
  rosidl_runtime_c__String version_nx_power;
  rosidl_runtime_c__String version_r329;
  rosidl_runtime_c__String version_mr813;
  rosidl_runtime_c__String version_mr813_spie1;
  rosidl_runtime_c__String version_mr813_spie2;
  rosidl_runtime_c__String__Sequence version_motors;
  rosidl_runtime_c__String disk_name;
  rosidl_runtime_c__String disk_filesystem;
  rosidl_runtime_c__String disk_size;
  rosidl_runtime_c__String disk_used;
  rosidl_runtime_c__String disk_avail;
  rosidl_runtime_c__String disk_scale;
  rosidl_runtime_c__String disk_mounted;
  rosidl_runtime_c__String__Sequence disk_meta_name;
  rosidl_runtime_c__String__Sequence disk_meta_size;
  rosidl_runtime_c__String__Sequence disk_meta_change_time;
  rosidl_runtime_c__String__Sequence disk_meta_user_rights;
  rosidl_runtime_c__String reboot;
  rosidl_runtime_c__String state;
  int32_t code;
  rosidl_runtime_c__String result;
} protocol__action__OverTheAir_Result;

// Struct for a sequence of protocol__action__OverTheAir_Result.
typedef struct protocol__action__OverTheAir_Result__Sequence
{
  protocol__action__OverTheAir_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__OverTheAir_Result__Sequence;


// Constants defined in the message

/// Constant 'TYPE'.
static const char * const protocol__action__OverTheAir_Feedback__TYPE = "feedback";

/// Constant 'TARGET_OTA'.
static const char * const protocol__action__OverTheAir_Feedback__TARGET_OTA = "ota";

/// Constant 'TARGET_DEB'.
static const char * const protocol__action__OverTheAir_Feedback__TARGET_DEB = "deb";

// Include directives for member types
// Member 'feedback_msg'
// Member 'id'
// Member 'type'
// Member 'operate'
// Member 'now_version'
// Member 'ota_version'
// Member 'stage'
// Member 'target'
// Member 'target_stage'
// Member 'file'
// Member 'size'
// Member 'schedule'
// Member 'time_remaining'
// Member 'progress'
// Member 'speed'
// Member 'describe'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/OverTheAir in the package protocol.
typedef struct protocol__action__OverTheAir_Feedback
{
  rosidl_runtime_c__String feedback_msg;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String operate;
  rosidl_runtime_c__String now_version;
  rosidl_runtime_c__String ota_version;
  rosidl_runtime_c__String stage;
  rosidl_runtime_c__String target;
  rosidl_runtime_c__String target_stage;
  rosidl_runtime_c__String file;
  rosidl_runtime_c__String size;
  rosidl_runtime_c__String schedule;
  rosidl_runtime_c__String time_remaining;
  rosidl_runtime_c__String progress;
  rosidl_runtime_c__String speed;
  rosidl_runtime_c__String describe;
} protocol__action__OverTheAir_Feedback;

// Struct for a sequence of protocol__action__OverTheAir_Feedback.
typedef struct protocol__action__OverTheAir_Feedback__Sequence
{
  protocol__action__OverTheAir_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__OverTheAir_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "protocol/action/detail/over_the_air__struct.h"

// Struct defined in action/OverTheAir in the package protocol.
typedef struct protocol__action__OverTheAir_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  protocol__action__OverTheAir_Goal goal;
} protocol__action__OverTheAir_SendGoal_Request;

// Struct for a sequence of protocol__action__OverTheAir_SendGoal_Request.
typedef struct protocol__action__OverTheAir_SendGoal_Request__Sequence
{
  protocol__action__OverTheAir_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__OverTheAir_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/OverTheAir in the package protocol.
typedef struct protocol__action__OverTheAir_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} protocol__action__OverTheAir_SendGoal_Response;

// Struct for a sequence of protocol__action__OverTheAir_SendGoal_Response.
typedef struct protocol__action__OverTheAir_SendGoal_Response__Sequence
{
  protocol__action__OverTheAir_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__OverTheAir_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/OverTheAir in the package protocol.
typedef struct protocol__action__OverTheAir_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} protocol__action__OverTheAir_GetResult_Request;

// Struct for a sequence of protocol__action__OverTheAir_GetResult_Request.
typedef struct protocol__action__OverTheAir_GetResult_Request__Sequence
{
  protocol__action__OverTheAir_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__OverTheAir_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/over_the_air__struct.h"

// Struct defined in action/OverTheAir in the package protocol.
typedef struct protocol__action__OverTheAir_GetResult_Response
{
  int8_t status;
  protocol__action__OverTheAir_Result result;
} protocol__action__OverTheAir_GetResult_Response;

// Struct for a sequence of protocol__action__OverTheAir_GetResult_Response.
typedef struct protocol__action__OverTheAir_GetResult_Response__Sequence
{
  protocol__action__OverTheAir_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__OverTheAir_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "protocol/action/detail/over_the_air__struct.h"

// Struct defined in action/OverTheAir in the package protocol.
typedef struct protocol__action__OverTheAir_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  protocol__action__OverTheAir_Feedback feedback;
} protocol__action__OverTheAir_FeedbackMessage;

// Struct for a sequence of protocol__action__OverTheAir_FeedbackMessage.
typedef struct protocol__action__OverTheAir_FeedbackMessage__Sequence
{
  protocol__action__OverTheAir_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__OverTheAir_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__STRUCT_H_

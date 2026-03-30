// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:action/Navigation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__NAVIGATION__STRUCT_H_
#define PROTOCOL__ACTION__DETAIL__NAVIGATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NAVIGATION_TYPE_UNKNWON'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_UNKNWON = 0
};

/// Constant 'NAVIGATION_TYPE_START_AB'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_START_AB = 1
};

/// Constant 'NAVIGATION_TYPE_STOP_AB'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_STOP_AB = 2
};

/// Constant 'NAVIGATION_TYPE_START_FOLLOW'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_START_FOLLOW = 3
};

/// Constant 'NAVIGATION_TYPE_STOP_FOLLOW'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_STOP_FOLLOW = 4
};

/// Constant 'NAVIGATION_TYPE_START_MAPPING'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_START_MAPPING = 5
};

/// Constant 'NAVIGATION_TYPE_STOP_MAPPING'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_STOP_MAPPING = 6
};

/// Constant 'NAVIGATION_TYPE_START_LOCALIZATION'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_START_LOCALIZATION = 7
};

/// Constant 'NAVIGATION_TYPE_STOP_LOCALIZATION'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_STOP_LOCALIZATION = 8
};

/// Constant 'NAVIGATION_TYPE_START_AUTO_DOCKING'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_START_AUTO_DOCKING = 9
};

/// Constant 'NAVIGATION_TYPE_STOP_AUTO_DOCKING'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_STOP_AUTO_DOCKING = 10
};

/// Constant 'NAVIGATION_TYPE_START_UWB_TRACKING'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_START_UWB_TRACKING = 11
};

/// Constant 'NAVIGATION_TYPE_STOP_UWB_TRACKING'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_STOP_UWB_TRACKING = 12
};

/// Constant 'NAVIGATION_TYPE_START_HUMAN_TRACKING'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_START_HUMAN_TRACKING = 13
};

/// Constant 'NAVIGATION_TYPE_STOP_HUMAN_TRACKING'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_TYPE_STOP_HUMAN_TRACKING = 14
};

/// Constant 'NAVIGATION_GOAL_TYPE_AB'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_GOAL_TYPE_AB = 101
};

/// Constant 'NAVIGATION_GOAL_TYPE_FOLLOW'.
enum
{
  protocol__action__Navigation_Goal__NAVIGATION_GOAL_TYPE_FOLLOW = 102
};

/// Constant 'TRACING_AUTO'.
enum
{
  protocol__action__Navigation_Goal__TRACING_AUTO = 200
};

/// Constant 'TRACING_BEHIND'.
enum
{
  protocol__action__Navigation_Goal__TRACING_BEHIND = 201
};

/// Constant 'TRACING_LEFT'.
enum
{
  protocol__action__Navigation_Goal__TRACING_LEFT = 202
};

/// Constant 'TRACING_RIGHT'.
enum
{
  protocol__action__Navigation_Goal__TRACING_RIGHT = 203
};

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'label_id'
// Member 'map_name'
#include "rosidl_runtime_c/string.h"
// Member 'tracking_roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

// Struct defined in action/Navigation in the package protocol.
typedef struct protocol__action__Navigation_Goal
{
  uint8_t nav_type;
  geometry_msgs__msg__PoseStamped__Sequence poses;
  rosidl_runtime_c__String label_id;
  rosidl_runtime_c__String map_name;
  sensor_msgs__msg__RegionOfInterest tracking_roi;
  uint8_t relative_pos;
  float keep_distance;
  bool outdoor;
  bool object_tracking;
} protocol__action__Navigation_Goal;

// Struct for a sequence of protocol__action__Navigation_Goal.
typedef struct protocol__action__Navigation_Goal__Sequence
{
  protocol__action__Navigation_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Navigation_Goal__Sequence;


// Constants defined in the message

/// Constant 'NAVIGATION_RESULT_TYPE_SUCCESS'.
enum
{
  protocol__action__Navigation_Result__NAVIGATION_RESULT_TYPE_SUCCESS = 0
};

/// Constant 'NAVIGATION_RESULT_TYPE_ACCEPT'.
enum
{
  protocol__action__Navigation_Result__NAVIGATION_RESULT_TYPE_ACCEPT = 1
};

/// Constant 'NAVIGATION_RESULT_TYPE_UNAVALIBLE'.
enum
{
  protocol__action__Navigation_Result__NAVIGATION_RESULT_TYPE_UNAVALIBLE = 2
};

/// Constant 'NAVIGATION_RESULT_TYPE_FAILED'.
enum
{
  protocol__action__Navigation_Result__NAVIGATION_RESULT_TYPE_FAILED = 3
};

/// Constant 'NAVIGATION_RESULT_TYPE_REJECT'.
enum
{
  protocol__action__Navigation_Result__NAVIGATION_RESULT_TYPE_REJECT = 4
};

/// Constant 'NAVIGATION_RESULT_TYPE_CANCEL'.
enum
{
  protocol__action__Navigation_Result__NAVIGATION_RESULT_TYPE_CANCEL = 5
};

// Struct defined in action/Navigation in the package protocol.
typedef struct protocol__action__Navigation_Result
{
  uint8_t result;
} protocol__action__Navigation_Result;

// Struct for a sequence of protocol__action__Navigation_Result.
typedef struct protocol__action__Navigation_Result__Sequence
{
  protocol__action__Navigation_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Navigation_Result__Sequence;


// Constants defined in the message

/// Constant 'NAVIGATION_FEEDBACK_RELOCING_SUCCESS'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_RELOCING_SUCCESS = 0l
};

/// Constant 'NAVIGATION_FEEDBACK_RELOCING_RETRYING'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_RELOCING_RETRYING = 100l
};

/// Constant 'NAVIGATION_FEEDBACK_RELOCING_FAILED'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_RELOCING_FAILED = 200l
};

/// Constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_NAVIGATING_AB = 1l
};

/// Constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS = 2l
};

/// Constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE = 3l
};

/// Constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS = 4l
};

/// Constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE = 5l
};

/// Constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING = 20l
};

/// Constant 'NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS = 6l
};

/// Constant 'NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE = 7l
};

/// Constant 'NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS = 8l
};

/// Constant 'NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE = 9l
};

/// Constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION = 10l
};

/// Constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION = 11l
};

/// Constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION = 12l
};

/// Constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION = 13l
};

/// Constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION = 14l
};

/// Constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET = 15l
};

/// Constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING = 16l
};

/// Constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING = 17l
};

/// Constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM = 18l
};

/// Constant 'TASK_PREPARATION_EXECUTING'.
enum
{
  protocol__action__Navigation_Feedback__TASK_PREPARATION_EXECUTING = 1000l
};

/// Constant 'TASK_PREPARATION_SUCCESS'.
enum
{
  protocol__action__Navigation_Feedback__TASK_PREPARATION_SUCCESS = 1001l
};

/// Constant 'TASK_PREPARATION_FAILED'.
enum
{
  protocol__action__Navigation_Feedback__TASK_PREPARATION_FAILED = 1002l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING = 500l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_READY'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_READY = 501l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED = 502l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING = 503l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR = 504l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE = 505l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED = 506l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED = 507l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED = 508l
};

/// Constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY'.
enum
{
  protocol__action__Navigation_Feedback__NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY = 509l
};

// Include directives for member types
// Member 'feedback_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/Navigation in the package protocol.
typedef struct protocol__action__Navigation_Feedback
{
  int32_t feedback_code;
  rosidl_runtime_c__String feedback_msg;
} protocol__action__Navigation_Feedback;

// Struct for a sequence of protocol__action__Navigation_Feedback.
typedef struct protocol__action__Navigation_Feedback__Sequence
{
  protocol__action__Navigation_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Navigation_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "protocol/action/detail/navigation__struct.h"

// Struct defined in action/Navigation in the package protocol.
typedef struct protocol__action__Navigation_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  protocol__action__Navigation_Goal goal;
} protocol__action__Navigation_SendGoal_Request;

// Struct for a sequence of protocol__action__Navigation_SendGoal_Request.
typedef struct protocol__action__Navigation_SendGoal_Request__Sequence
{
  protocol__action__Navigation_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Navigation_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Navigation in the package protocol.
typedef struct protocol__action__Navigation_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} protocol__action__Navigation_SendGoal_Response;

// Struct for a sequence of protocol__action__Navigation_SendGoal_Response.
typedef struct protocol__action__Navigation_SendGoal_Response__Sequence
{
  protocol__action__Navigation_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Navigation_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Navigation in the package protocol.
typedef struct protocol__action__Navigation_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} protocol__action__Navigation_GetResult_Request;

// Struct for a sequence of protocol__action__Navigation_GetResult_Request.
typedef struct protocol__action__Navigation_GetResult_Request__Sequence
{
  protocol__action__Navigation_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Navigation_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/navigation__struct.h"

// Struct defined in action/Navigation in the package protocol.
typedef struct protocol__action__Navigation_GetResult_Response
{
  int8_t status;
  protocol__action__Navigation_Result result;
} protocol__action__Navigation_GetResult_Response;

// Struct for a sequence of protocol__action__Navigation_GetResult_Response.
typedef struct protocol__action__Navigation_GetResult_Response__Sequence
{
  protocol__action__Navigation_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Navigation_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "protocol/action/detail/navigation__struct.h"

// Struct defined in action/Navigation in the package protocol.
typedef struct protocol__action__Navigation_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  protocol__action__Navigation_Feedback feedback;
} protocol__action__Navigation_FeedbackMessage;

// Struct for a sequence of protocol__action__Navigation_FeedbackMessage.
typedef struct protocol__action__Navigation_FeedbackMessage__Sequence
{
  protocol__action__Navigation_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Navigation_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__ACTION__DETAIL__NAVIGATION__STRUCT_H_

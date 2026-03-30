// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from protocol:action/AutoCharging.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
#include "protocol/action/detail/auto_charging__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_Goal_type_support_ids_t;

static const _AutoCharging_Goal_type_support_ids_t _AutoCharging_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_Goal_type_support_symbol_names_t _AutoCharging_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_Goal)),
  }
};

typedef struct _AutoCharging_Goal_type_support_data_t
{
  void * data[2];
} _AutoCharging_Goal_type_support_data_t;

static _AutoCharging_Goal_type_support_data_t _AutoCharging_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_Goal_message_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoCharging_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_Goal)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/auto_charging__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_Result_type_support_ids_t;

static const _AutoCharging_Result_type_support_ids_t _AutoCharging_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_Result_type_support_symbol_names_t _AutoCharging_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_Result)),
  }
};

typedef struct _AutoCharging_Result_type_support_data_t
{
  void * data[2];
} _AutoCharging_Result_type_support_data_t;

static _AutoCharging_Result_type_support_data_t _AutoCharging_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_Result_message_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_Result_message_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_Result_message_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoCharging_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_Result)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/auto_charging__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_Feedback_type_support_ids_t;

static const _AutoCharging_Feedback_type_support_ids_t _AutoCharging_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_Feedback_type_support_symbol_names_t _AutoCharging_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_Feedback)),
  }
};

typedef struct _AutoCharging_Feedback_type_support_data_t
{
  void * data[2];
} _AutoCharging_Feedback_type_support_data_t;

static _AutoCharging_Feedback_type_support_data_t _AutoCharging_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_Feedback_message_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoCharging_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_Feedback)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/auto_charging__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_SendGoal_Request_type_support_ids_t;

static const _AutoCharging_SendGoal_Request_type_support_ids_t _AutoCharging_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_SendGoal_Request_type_support_symbol_names_t _AutoCharging_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_SendGoal_Request)),
  }
};

typedef struct _AutoCharging_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _AutoCharging_SendGoal_Request_type_support_data_t;

static _AutoCharging_SendGoal_Request_type_support_data_t _AutoCharging_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_SendGoal_Request_message_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoCharging_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_SendGoal_Request)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/auto_charging__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_SendGoal_Response_type_support_ids_t;

static const _AutoCharging_SendGoal_Response_type_support_ids_t _AutoCharging_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_SendGoal_Response_type_support_symbol_names_t _AutoCharging_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_SendGoal_Response)),
  }
};

typedef struct _AutoCharging_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _AutoCharging_SendGoal_Response_type_support_data_t;

static _AutoCharging_SendGoal_Response_type_support_data_t _AutoCharging_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_SendGoal_Response_message_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoCharging_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_SendGoal_Response)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_SendGoal_type_support_ids_t;

static const _AutoCharging_SendGoal_type_support_ids_t _AutoCharging_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_SendGoal_type_support_symbol_names_t _AutoCharging_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_SendGoal)),
  }
};

typedef struct _AutoCharging_SendGoal_type_support_data_t
{
  void * data[2];
} _AutoCharging_SendGoal_type_support_data_t;

static _AutoCharging_SendGoal_type_support_data_t _AutoCharging_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_SendGoal_service_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AutoCharging_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_SendGoal)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/auto_charging__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_GetResult_Request_type_support_ids_t;

static const _AutoCharging_GetResult_Request_type_support_ids_t _AutoCharging_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_GetResult_Request_type_support_symbol_names_t _AutoCharging_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_GetResult_Request)),
  }
};

typedef struct _AutoCharging_GetResult_Request_type_support_data_t
{
  void * data[2];
} _AutoCharging_GetResult_Request_type_support_data_t;

static _AutoCharging_GetResult_Request_type_support_data_t _AutoCharging_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_GetResult_Request_message_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoCharging_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_GetResult_Request)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/auto_charging__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_GetResult_Response_type_support_ids_t;

static const _AutoCharging_GetResult_Response_type_support_ids_t _AutoCharging_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_GetResult_Response_type_support_symbol_names_t _AutoCharging_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_GetResult_Response)),
  }
};

typedef struct _AutoCharging_GetResult_Response_type_support_data_t
{
  void * data[2];
} _AutoCharging_GetResult_Response_type_support_data_t;

static _AutoCharging_GetResult_Response_type_support_data_t _AutoCharging_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_GetResult_Response_message_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoCharging_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_GetResult_Response)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_GetResult_type_support_ids_t;

static const _AutoCharging_GetResult_type_support_ids_t _AutoCharging_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_GetResult_type_support_symbol_names_t _AutoCharging_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_GetResult)),
  }
};

typedef struct _AutoCharging_GetResult_type_support_data_t
{
  void * data[2];
} _AutoCharging_GetResult_type_support_data_t;

static _AutoCharging_GetResult_type_support_data_t _AutoCharging_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_GetResult_service_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AutoCharging_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_GetResult)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/auto_charging__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoCharging_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoCharging_FeedbackMessage_type_support_ids_t;

static const _AutoCharging_FeedbackMessage_type_support_ids_t _AutoCharging_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoCharging_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoCharging_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoCharging_FeedbackMessage_type_support_symbol_names_t _AutoCharging_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, AutoCharging_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, AutoCharging_FeedbackMessage)),
  }
};

typedef struct _AutoCharging_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _AutoCharging_FeedbackMessage_type_support_data_t;

static _AutoCharging_FeedbackMessage_type_support_data_t _AutoCharging_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoCharging_FeedbackMessage_message_typesupport_map = {
  2,
  "protocol",
  &_AutoCharging_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_AutoCharging_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_AutoCharging_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoCharging_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoCharging_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, action, AutoCharging_FeedbackMessage)() {
  return &::protocol::action::rosidl_typesupport_c::AutoCharging_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "protocol/action/auto_charging.h"
#include "protocol/action/detail/auto_charging__type_support.h"

static rosidl_action_type_support_t _protocol__action__AutoCharging__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, protocol, action, AutoCharging)()
{
  // Thread-safe by always writing the same values to the static struct
  _protocol__action__AutoCharging__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, protocol, action, AutoCharging_SendGoal)();
  _protocol__action__AutoCharging__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, protocol, action, AutoCharging_GetResult)();
  _protocol__action__AutoCharging__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _protocol__action__AutoCharging__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, protocol, action, AutoCharging_FeedbackMessage)();
  _protocol__action__AutoCharging__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_protocol__action__AutoCharging__typesupport_c;
}

#ifdef __cplusplus
}
#endif

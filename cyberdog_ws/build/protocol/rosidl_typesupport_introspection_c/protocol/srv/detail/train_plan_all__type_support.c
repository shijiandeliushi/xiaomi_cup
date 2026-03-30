// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/TrainPlanAll.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/train_plan_all__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/train_plan_all__functions.h"
#include "protocol/srv/detail/train_plan_all__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__TrainPlanAll_Request__init(message_memory);
}

void TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_fini_function(void * message_memory)
{
  protocol__srv__TrainPlanAll_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__TrainPlanAll_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_message_members = {
  "protocol__srv",  // message namespace
  "TrainPlanAll_Request",  // message name
  1,  // number of fields
  sizeof(protocol__srv__TrainPlanAll_Request),
  TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_message_member_array,  // message members
  TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_message_type_support_handle = {
  0,
  &TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TrainPlanAll_Request)() {
  if (!TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_message_type_support_handle.typesupport_identifier) {
    TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrainPlanAll_Request__rosidl_typesupport_introspection_c__TrainPlanAll_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/train_plan_all__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/train_plan_all__functions.h"
// already included above
// #include "protocol/srv/detail/train_plan_all__struct.h"


// Include directives for member types
// Member `training_set`
#include "protocol/msg/train_plan.h"
// Member `training_set`
#include "protocol/msg/detail/train_plan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__TrainPlanAll_Response__init(message_memory);
}

void TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_fini_function(void * message_memory)
{
  protocol__srv__TrainPlanAll_Response__fini(message_memory);
}

size_t TrainPlanAll_Response__rosidl_typesupport_introspection_c__size_function__TrainPlan__training_set(
  const void * untyped_member)
{
  const protocol__msg__TrainPlan__Sequence * member =
    (const protocol__msg__TrainPlan__Sequence *)(untyped_member);
  return member->size;
}

const void * TrainPlanAll_Response__rosidl_typesupport_introspection_c__get_const_function__TrainPlan__training_set(
  const void * untyped_member, size_t index)
{
  const protocol__msg__TrainPlan__Sequence * member =
    (const protocol__msg__TrainPlan__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrainPlanAll_Response__rosidl_typesupport_introspection_c__get_function__TrainPlan__training_set(
  void * untyped_member, size_t index)
{
  protocol__msg__TrainPlan__Sequence * member =
    (protocol__msg__TrainPlan__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrainPlanAll_Response__rosidl_typesupport_introspection_c__resize_function__TrainPlan__training_set(
  void * untyped_member, size_t size)
{
  protocol__msg__TrainPlan__Sequence * member =
    (protocol__msg__TrainPlan__Sequence *)(untyped_member);
  protocol__msg__TrainPlan__Sequence__fini(member);
  return protocol__msg__TrainPlan__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_member_array[2] = {
  {
    "training_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__TrainPlanAll_Response, training_set),  // bytes offset in struct
    NULL,  // default value
    TrainPlanAll_Response__rosidl_typesupport_introspection_c__size_function__TrainPlan__training_set,  // size() function pointer
    TrainPlanAll_Response__rosidl_typesupport_introspection_c__get_const_function__TrainPlan__training_set,  // get_const(index) function pointer
    TrainPlanAll_Response__rosidl_typesupport_introspection_c__get_function__TrainPlan__training_set,  // get(index) function pointer
    TrainPlanAll_Response__rosidl_typesupport_introspection_c__resize_function__TrainPlan__training_set  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__TrainPlanAll_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_members = {
  "protocol__srv",  // message namespace
  "TrainPlanAll_Response",  // message name
  2,  // number of fields
  sizeof(protocol__srv__TrainPlanAll_Response),
  TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_member_array,  // message members
  TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_type_support_handle = {
  0,
  &TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TrainPlanAll_Response)() {
  TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, TrainPlan)();
  if (!TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_type_support_handle.typesupport_identifier) {
    TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrainPlanAll_Response__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/train_plan_all__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__train_plan_all__rosidl_typesupport_introspection_c__TrainPlanAll_service_members = {
  "protocol__srv",  // service namespace
  "TrainPlanAll",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__train_plan_all__rosidl_typesupport_introspection_c__TrainPlanAll_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__train_plan_all__rosidl_typesupport_introspection_c__TrainPlanAll_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__train_plan_all__rosidl_typesupport_introspection_c__TrainPlanAll_service_type_support_handle = {
  0,
  &protocol__srv__detail__train_plan_all__rosidl_typesupport_introspection_c__TrainPlanAll_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TrainPlanAll_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TrainPlanAll_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TrainPlanAll)() {
  if (!protocol__srv__detail__train_plan_all__rosidl_typesupport_introspection_c__TrainPlanAll_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__train_plan_all__rosidl_typesupport_introspection_c__TrainPlanAll_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__train_plan_all__rosidl_typesupport_introspection_c__TrainPlanAll_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TrainPlanAll_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TrainPlanAll_Response)()->data;
  }

  return &protocol__srv__detail__train_plan_all__rosidl_typesupport_introspection_c__TrainPlanAll_service_type_support_handle;
}

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from protocol:srv/DeleteTrainPlan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/srv/detail/delete_train_plan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DeleteTrainPlan_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::srv::DeleteTrainPlan_Request(_init);
}

void DeleteTrainPlan_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::srv::DeleteTrainPlan_Request *>(message_memory);
  typed_message->~DeleteTrainPlan_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DeleteTrainPlan_Request_message_member_array[1] = {
  {
    "trigger",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::DeleteTrainPlan_Request, trigger),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DeleteTrainPlan_Request_message_members = {
  "protocol::srv",  // message namespace
  "DeleteTrainPlan_Request",  // message name
  1,  // number of fields
  sizeof(protocol::srv::DeleteTrainPlan_Request),
  DeleteTrainPlan_Request_message_member_array,  // message members
  DeleteTrainPlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DeleteTrainPlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DeleteTrainPlan_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DeleteTrainPlan_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace protocol


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::srv::DeleteTrainPlan_Request>()
{
  return &::protocol::srv::rosidl_typesupport_introspection_cpp::DeleteTrainPlan_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, srv, DeleteTrainPlan_Request)() {
  return &::protocol::srv::rosidl_typesupport_introspection_cpp::DeleteTrainPlan_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "protocol/srv/detail/delete_train_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DeleteTrainPlan_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::srv::DeleteTrainPlan_Response(_init);
}

void DeleteTrainPlan_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::srv::DeleteTrainPlan_Response *>(message_memory);
  typed_message->~DeleteTrainPlan_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DeleteTrainPlan_Response_message_member_array[1] = {
  {
    "code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::DeleteTrainPlan_Response, code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DeleteTrainPlan_Response_message_members = {
  "protocol::srv",  // message namespace
  "DeleteTrainPlan_Response",  // message name
  1,  // number of fields
  sizeof(protocol::srv::DeleteTrainPlan_Response),
  DeleteTrainPlan_Response_message_member_array,  // message members
  DeleteTrainPlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DeleteTrainPlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DeleteTrainPlan_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DeleteTrainPlan_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace protocol


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::srv::DeleteTrainPlan_Response>()
{
  return &::protocol::srv::rosidl_typesupport_introspection_cpp::DeleteTrainPlan_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, srv, DeleteTrainPlan_Response)() {
  return &::protocol::srv::rosidl_typesupport_introspection_cpp::DeleteTrainPlan_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "protocol/srv/detail/delete_train_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DeleteTrainPlan_service_members = {
  "protocol::srv",  // service namespace
  "DeleteTrainPlan",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<protocol::srv::DeleteTrainPlan>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t DeleteTrainPlan_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DeleteTrainPlan_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace protocol


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<protocol::srv::DeleteTrainPlan>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::protocol::srv::rosidl_typesupport_introspection_cpp::DeleteTrainPlan_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::protocol::srv::DeleteTrainPlan_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::protocol::srv::DeleteTrainPlan_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, srv, DeleteTrainPlan)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<protocol::srv::DeleteTrainPlan>();
}

#ifdef __cplusplus
}
#endif

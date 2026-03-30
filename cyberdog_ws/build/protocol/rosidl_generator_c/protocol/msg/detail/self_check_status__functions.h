// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from protocol:msg/SelfCheckStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__FUNCTIONS_H_
#define PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "protocol/msg/rosidl_generator_c__visibility_control.h"

#include "protocol/msg/detail/self_check_status__struct.h"

/// Initialize msg/SelfCheckStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * protocol__msg__SelfCheckStatus
 * )) before or use
 * protocol__msg__SelfCheckStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__SelfCheckStatus__init(protocol__msg__SelfCheckStatus * msg);

/// Finalize msg/SelfCheckStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__SelfCheckStatus__fini(protocol__msg__SelfCheckStatus * msg);

/// Create msg/SelfCheckStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * protocol__msg__SelfCheckStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__msg__SelfCheckStatus *
protocol__msg__SelfCheckStatus__create();

/// Destroy msg/SelfCheckStatus message.
/**
 * It calls
 * protocol__msg__SelfCheckStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__SelfCheckStatus__destroy(protocol__msg__SelfCheckStatus * msg);

/// Check for msg/SelfCheckStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__SelfCheckStatus__are_equal(const protocol__msg__SelfCheckStatus * lhs, const protocol__msg__SelfCheckStatus * rhs);

/// Copy a msg/SelfCheckStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__SelfCheckStatus__copy(
  const protocol__msg__SelfCheckStatus * input,
  protocol__msg__SelfCheckStatus * output);

/// Initialize array of msg/SelfCheckStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * protocol__msg__SelfCheckStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__SelfCheckStatus__Sequence__init(protocol__msg__SelfCheckStatus__Sequence * array, size_t size);

/// Finalize array of msg/SelfCheckStatus messages.
/**
 * It calls
 * protocol__msg__SelfCheckStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__SelfCheckStatus__Sequence__fini(protocol__msg__SelfCheckStatus__Sequence * array);

/// Create array of msg/SelfCheckStatus messages.
/**
 * It allocates the memory for the array and calls
 * protocol__msg__SelfCheckStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__msg__SelfCheckStatus__Sequence *
protocol__msg__SelfCheckStatus__Sequence__create(size_t size);

/// Destroy array of msg/SelfCheckStatus messages.
/**
 * It calls
 * protocol__msg__SelfCheckStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__SelfCheckStatus__Sequence__destroy(protocol__msg__SelfCheckStatus__Sequence * array);

/// Check for msg/SelfCheckStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__SelfCheckStatus__Sequence__are_equal(const protocol__msg__SelfCheckStatus__Sequence * lhs, const protocol__msg__SelfCheckStatus__Sequence * rhs);

/// Copy an array of msg/SelfCheckStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__SelfCheckStatus__Sequence__copy(
  const protocol__msg__SelfCheckStatus__Sequence * input,
  protocol__msg__SelfCheckStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__FUNCTIONS_H_

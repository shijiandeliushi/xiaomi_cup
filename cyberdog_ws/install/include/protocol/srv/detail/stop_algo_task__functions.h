// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from protocol:srv/StopAlgoTask.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__FUNCTIONS_H_
#define PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "protocol/msg/rosidl_generator_c__visibility_control.h"

#include "protocol/srv/detail/stop_algo_task__struct.h"

/// Initialize srv/StopAlgoTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * protocol__srv__StopAlgoTask_Request
 * )) before or use
 * protocol__srv__StopAlgoTask_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__srv__StopAlgoTask_Request__init(protocol__srv__StopAlgoTask_Request * msg);

/// Finalize srv/StopAlgoTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__srv__StopAlgoTask_Request__fini(protocol__srv__StopAlgoTask_Request * msg);

/// Create srv/StopAlgoTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * protocol__srv__StopAlgoTask_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__srv__StopAlgoTask_Request *
protocol__srv__StopAlgoTask_Request__create();

/// Destroy srv/StopAlgoTask message.
/**
 * It calls
 * protocol__srv__StopAlgoTask_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__srv__StopAlgoTask_Request__destroy(protocol__srv__StopAlgoTask_Request * msg);

/// Check for srv/StopAlgoTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__srv__StopAlgoTask_Request__are_equal(const protocol__srv__StopAlgoTask_Request * lhs, const protocol__srv__StopAlgoTask_Request * rhs);

/// Copy a srv/StopAlgoTask message.
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
protocol__srv__StopAlgoTask_Request__copy(
  const protocol__srv__StopAlgoTask_Request * input,
  protocol__srv__StopAlgoTask_Request * output);

/// Initialize array of srv/StopAlgoTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * protocol__srv__StopAlgoTask_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__srv__StopAlgoTask_Request__Sequence__init(protocol__srv__StopAlgoTask_Request__Sequence * array, size_t size);

/// Finalize array of srv/StopAlgoTask messages.
/**
 * It calls
 * protocol__srv__StopAlgoTask_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__srv__StopAlgoTask_Request__Sequence__fini(protocol__srv__StopAlgoTask_Request__Sequence * array);

/// Create array of srv/StopAlgoTask messages.
/**
 * It allocates the memory for the array and calls
 * protocol__srv__StopAlgoTask_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__srv__StopAlgoTask_Request__Sequence *
protocol__srv__StopAlgoTask_Request__Sequence__create(size_t size);

/// Destroy array of srv/StopAlgoTask messages.
/**
 * It calls
 * protocol__srv__StopAlgoTask_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__srv__StopAlgoTask_Request__Sequence__destroy(protocol__srv__StopAlgoTask_Request__Sequence * array);

/// Check for srv/StopAlgoTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__srv__StopAlgoTask_Request__Sequence__are_equal(const protocol__srv__StopAlgoTask_Request__Sequence * lhs, const protocol__srv__StopAlgoTask_Request__Sequence * rhs);

/// Copy an array of srv/StopAlgoTask messages.
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
protocol__srv__StopAlgoTask_Request__Sequence__copy(
  const protocol__srv__StopAlgoTask_Request__Sequence * input,
  protocol__srv__StopAlgoTask_Request__Sequence * output);

/// Initialize srv/StopAlgoTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * protocol__srv__StopAlgoTask_Response
 * )) before or use
 * protocol__srv__StopAlgoTask_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__srv__StopAlgoTask_Response__init(protocol__srv__StopAlgoTask_Response * msg);

/// Finalize srv/StopAlgoTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__srv__StopAlgoTask_Response__fini(protocol__srv__StopAlgoTask_Response * msg);

/// Create srv/StopAlgoTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * protocol__srv__StopAlgoTask_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__srv__StopAlgoTask_Response *
protocol__srv__StopAlgoTask_Response__create();

/// Destroy srv/StopAlgoTask message.
/**
 * It calls
 * protocol__srv__StopAlgoTask_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__srv__StopAlgoTask_Response__destroy(protocol__srv__StopAlgoTask_Response * msg);

/// Check for srv/StopAlgoTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__srv__StopAlgoTask_Response__are_equal(const protocol__srv__StopAlgoTask_Response * lhs, const protocol__srv__StopAlgoTask_Response * rhs);

/// Copy a srv/StopAlgoTask message.
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
protocol__srv__StopAlgoTask_Response__copy(
  const protocol__srv__StopAlgoTask_Response * input,
  protocol__srv__StopAlgoTask_Response * output);

/// Initialize array of srv/StopAlgoTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * protocol__srv__StopAlgoTask_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__srv__StopAlgoTask_Response__Sequence__init(protocol__srv__StopAlgoTask_Response__Sequence * array, size_t size);

/// Finalize array of srv/StopAlgoTask messages.
/**
 * It calls
 * protocol__srv__StopAlgoTask_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__srv__StopAlgoTask_Response__Sequence__fini(protocol__srv__StopAlgoTask_Response__Sequence * array);

/// Create array of srv/StopAlgoTask messages.
/**
 * It allocates the memory for the array and calls
 * protocol__srv__StopAlgoTask_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__srv__StopAlgoTask_Response__Sequence *
protocol__srv__StopAlgoTask_Response__Sequence__create(size_t size);

/// Destroy array of srv/StopAlgoTask messages.
/**
 * It calls
 * protocol__srv__StopAlgoTask_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__srv__StopAlgoTask_Response__Sequence__destroy(protocol__srv__StopAlgoTask_Response__Sequence * array);

/// Check for srv/StopAlgoTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__srv__StopAlgoTask_Response__Sequence__are_equal(const protocol__srv__StopAlgoTask_Response__Sequence * lhs, const protocol__srv__StopAlgoTask_Response__Sequence * rhs);

/// Copy an array of srv/StopAlgoTask messages.
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
protocol__srv__StopAlgoTask_Response__Sequence__copy(
  const protocol__srv__StopAlgoTask_Response__Sequence * input,
  protocol__srv__StopAlgoTask_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__FUNCTIONS_H_

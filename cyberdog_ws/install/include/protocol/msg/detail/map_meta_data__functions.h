// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from protocol:msg/MapMetaData.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MAP_META_DATA__FUNCTIONS_H_
#define PROTOCOL__MSG__DETAIL__MAP_META_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "protocol/msg/rosidl_generator_c__visibility_control.h"

#include "protocol/msg/detail/map_meta_data__struct.h"

/// Initialize msg/MapMetaData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * protocol__msg__MapMetaData
 * )) before or use
 * protocol__msg__MapMetaData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MapMetaData__init(protocol__msg__MapMetaData * msg);

/// Finalize msg/MapMetaData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__MapMetaData__fini(protocol__msg__MapMetaData * msg);

/// Create msg/MapMetaData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * protocol__msg__MapMetaData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__msg__MapMetaData *
protocol__msg__MapMetaData__create();

/// Destroy msg/MapMetaData message.
/**
 * It calls
 * protocol__msg__MapMetaData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__MapMetaData__destroy(protocol__msg__MapMetaData * msg);

/// Check for msg/MapMetaData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MapMetaData__are_equal(const protocol__msg__MapMetaData * lhs, const protocol__msg__MapMetaData * rhs);

/// Copy a msg/MapMetaData message.
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
protocol__msg__MapMetaData__copy(
  const protocol__msg__MapMetaData * input,
  protocol__msg__MapMetaData * output);

/// Initialize array of msg/MapMetaData messages.
/**
 * It allocates the memory for the number of elements and calls
 * protocol__msg__MapMetaData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MapMetaData__Sequence__init(protocol__msg__MapMetaData__Sequence * array, size_t size);

/// Finalize array of msg/MapMetaData messages.
/**
 * It calls
 * protocol__msg__MapMetaData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__MapMetaData__Sequence__fini(protocol__msg__MapMetaData__Sequence * array);

/// Create array of msg/MapMetaData messages.
/**
 * It allocates the memory for the array and calls
 * protocol__msg__MapMetaData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__msg__MapMetaData__Sequence *
protocol__msg__MapMetaData__Sequence__create(size_t size);

/// Destroy array of msg/MapMetaData messages.
/**
 * It calls
 * protocol__msg__MapMetaData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__MapMetaData__Sequence__destroy(protocol__msg__MapMetaData__Sequence * array);

/// Check for msg/MapMetaData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MapMetaData__Sequence__are_equal(const protocol__msg__MapMetaData__Sequence * lhs, const protocol__msg__MapMetaData__Sequence * rhs);

/// Copy an array of msg/MapMetaData messages.
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
protocol__msg__MapMetaData__Sequence__copy(
  const protocol__msg__MapMetaData__Sequence * input,
  protocol__msg__MapMetaData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MAP_META_DATA__FUNCTIONS_H_

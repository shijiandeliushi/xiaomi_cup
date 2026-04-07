// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice

#ifndef CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__FUNCTIONS_H_
#define CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cyberdog_msg/msg/rosidl_generator_c__visibility_control.h"

#include "cyberdog_msg/msg/detail/apply_force__struct.h"

/// Initialize msg/ApplyForce message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cyberdog_msg__msg__ApplyForce
 * )) before or use
 * cyberdog_msg__msg__ApplyForce__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
bool
cyberdog_msg__msg__ApplyForce__init(cyberdog_msg__msg__ApplyForce * msg);

/// Finalize msg/ApplyForce message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
void
cyberdog_msg__msg__ApplyForce__fini(cyberdog_msg__msg__ApplyForce * msg);

/// Create msg/ApplyForce message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cyberdog_msg__msg__ApplyForce__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
cyberdog_msg__msg__ApplyForce *
cyberdog_msg__msg__ApplyForce__create();

/// Destroy msg/ApplyForce message.
/**
 * It calls
 * cyberdog_msg__msg__ApplyForce__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
void
cyberdog_msg__msg__ApplyForce__destroy(cyberdog_msg__msg__ApplyForce * msg);

/// Check for msg/ApplyForce message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
bool
cyberdog_msg__msg__ApplyForce__are_equal(const cyberdog_msg__msg__ApplyForce * lhs, const cyberdog_msg__msg__ApplyForce * rhs);

/// Copy a msg/ApplyForce message.
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
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
bool
cyberdog_msg__msg__ApplyForce__copy(
  const cyberdog_msg__msg__ApplyForce * input,
  cyberdog_msg__msg__ApplyForce * output);

/// Initialize array of msg/ApplyForce messages.
/**
 * It allocates the memory for the number of elements and calls
 * cyberdog_msg__msg__ApplyForce__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
bool
cyberdog_msg__msg__ApplyForce__Sequence__init(cyberdog_msg__msg__ApplyForce__Sequence * array, size_t size);

/// Finalize array of msg/ApplyForce messages.
/**
 * It calls
 * cyberdog_msg__msg__ApplyForce__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
void
cyberdog_msg__msg__ApplyForce__Sequence__fini(cyberdog_msg__msg__ApplyForce__Sequence * array);

/// Create array of msg/ApplyForce messages.
/**
 * It allocates the memory for the array and calls
 * cyberdog_msg__msg__ApplyForce__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
cyberdog_msg__msg__ApplyForce__Sequence *
cyberdog_msg__msg__ApplyForce__Sequence__create(size_t size);

/// Destroy array of msg/ApplyForce messages.
/**
 * It calls
 * cyberdog_msg__msg__ApplyForce__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
void
cyberdog_msg__msg__ApplyForce__Sequence__destroy(cyberdog_msg__msg__ApplyForce__Sequence * array);

/// Check for msg/ApplyForce message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
bool
cyberdog_msg__msg__ApplyForce__Sequence__are_equal(const cyberdog_msg__msg__ApplyForce__Sequence * lhs, const cyberdog_msg__msg__ApplyForce__Sequence * rhs);

/// Copy an array of msg/ApplyForce messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cyberdog_msg
bool
cyberdog_msg__msg__ApplyForce__Sequence__copy(
  const cyberdog_msg__msg__ApplyForce__Sequence * input,
  cyberdog_msg__msg__ApplyForce__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__FUNCTIONS_H_

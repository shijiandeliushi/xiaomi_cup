// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/ManagerState.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/manager_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `err_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__ManagerState__init(protocol__msg__ManagerState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // err_msg
  if (!rosidl_runtime_c__String__init(&msg->err_msg)) {
    protocol__msg__ManagerState__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__ManagerState__fini(protocol__msg__ManagerState * msg)
{
  if (!msg) {
    return;
  }
  // state
  // err_msg
  rosidl_runtime_c__String__fini(&msg->err_msg);
}

bool
protocol__msg__ManagerState__are_equal(const protocol__msg__ManagerState * lhs, const protocol__msg__ManagerState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // err_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->err_msg), &(rhs->err_msg)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__ManagerState__copy(
  const protocol__msg__ManagerState * input,
  protocol__msg__ManagerState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  // err_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->err_msg), &(output->err_msg)))
  {
    return false;
  }
  return true;
}

protocol__msg__ManagerState *
protocol__msg__ManagerState__create()
{
  protocol__msg__ManagerState * msg = (protocol__msg__ManagerState *)malloc(sizeof(protocol__msg__ManagerState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__ManagerState));
  bool success = protocol__msg__ManagerState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__ManagerState__destroy(protocol__msg__ManagerState * msg)
{
  if (msg) {
    protocol__msg__ManagerState__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__ManagerState__Sequence__init(protocol__msg__ManagerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__ManagerState * data = NULL;
  if (size) {
    data = (protocol__msg__ManagerState *)calloc(size, sizeof(protocol__msg__ManagerState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__ManagerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__ManagerState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
protocol__msg__ManagerState__Sequence__fini(protocol__msg__ManagerState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__ManagerState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

protocol__msg__ManagerState__Sequence *
protocol__msg__ManagerState__Sequence__create(size_t size)
{
  protocol__msg__ManagerState__Sequence * array = (protocol__msg__ManagerState__Sequence *)malloc(sizeof(protocol__msg__ManagerState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__ManagerState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__ManagerState__Sequence__destroy(protocol__msg__ManagerState__Sequence * array)
{
  if (array) {
    protocol__msg__ManagerState__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__ManagerState__Sequence__are_equal(const protocol__msg__ManagerState__Sequence * lhs, const protocol__msg__ManagerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__ManagerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__ManagerState__Sequence__copy(
  const protocol__msg__ManagerState__Sequence * input,
  protocol__msg__ManagerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__ManagerState);
    protocol__msg__ManagerState * data =
      (protocol__msg__ManagerState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__ManagerState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__ManagerState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!protocol__msg__ManagerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

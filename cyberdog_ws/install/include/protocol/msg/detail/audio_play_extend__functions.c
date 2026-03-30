// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/AudioPlayExtend.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/audio_play_extend__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `module_name`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `speech`
#include "protocol/msg/detail/audio_play__functions.h"

bool
protocol__msg__AudioPlayExtend__init(protocol__msg__AudioPlayExtend * msg)
{
  if (!msg) {
    return false;
  }
  // module_name
  if (!rosidl_runtime_c__String__init(&msg->module_name)) {
    protocol__msg__AudioPlayExtend__fini(msg);
    return false;
  }
  // is_online
  // speech
  if (!protocol__msg__AudioPlay__init(&msg->speech)) {
    protocol__msg__AudioPlayExtend__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    protocol__msg__AudioPlayExtend__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__AudioPlayExtend__fini(protocol__msg__AudioPlayExtend * msg)
{
  if (!msg) {
    return;
  }
  // module_name
  rosidl_runtime_c__String__fini(&msg->module_name);
  // is_online
  // speech
  protocol__msg__AudioPlay__fini(&msg->speech);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
}

bool
protocol__msg__AudioPlayExtend__are_equal(const protocol__msg__AudioPlayExtend * lhs, const protocol__msg__AudioPlayExtend * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // module_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->module_name), &(rhs->module_name)))
  {
    return false;
  }
  // is_online
  if (lhs->is_online != rhs->is_online) {
    return false;
  }
  // speech
  if (!protocol__msg__AudioPlay__are_equal(
      &(lhs->speech), &(rhs->speech)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__AudioPlayExtend__copy(
  const protocol__msg__AudioPlayExtend * input,
  protocol__msg__AudioPlayExtend * output)
{
  if (!input || !output) {
    return false;
  }
  // module_name
  if (!rosidl_runtime_c__String__copy(
      &(input->module_name), &(output->module_name)))
  {
    return false;
  }
  // is_online
  output->is_online = input->is_online;
  // speech
  if (!protocol__msg__AudioPlay__copy(
      &(input->speech), &(output->speech)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

protocol__msg__AudioPlayExtend *
protocol__msg__AudioPlayExtend__create()
{
  protocol__msg__AudioPlayExtend * msg = (protocol__msg__AudioPlayExtend *)malloc(sizeof(protocol__msg__AudioPlayExtend));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__AudioPlayExtend));
  bool success = protocol__msg__AudioPlayExtend__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__AudioPlayExtend__destroy(protocol__msg__AudioPlayExtend * msg)
{
  if (msg) {
    protocol__msg__AudioPlayExtend__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__AudioPlayExtend__Sequence__init(protocol__msg__AudioPlayExtend__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__AudioPlayExtend * data = NULL;
  if (size) {
    data = (protocol__msg__AudioPlayExtend *)calloc(size, sizeof(protocol__msg__AudioPlayExtend));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__AudioPlayExtend__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__AudioPlayExtend__fini(&data[i - 1]);
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
protocol__msg__AudioPlayExtend__Sequence__fini(protocol__msg__AudioPlayExtend__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__AudioPlayExtend__fini(&array->data[i]);
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

protocol__msg__AudioPlayExtend__Sequence *
protocol__msg__AudioPlayExtend__Sequence__create(size_t size)
{
  protocol__msg__AudioPlayExtend__Sequence * array = (protocol__msg__AudioPlayExtend__Sequence *)malloc(sizeof(protocol__msg__AudioPlayExtend__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__AudioPlayExtend__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__AudioPlayExtend__Sequence__destroy(protocol__msg__AudioPlayExtend__Sequence * array)
{
  if (array) {
    protocol__msg__AudioPlayExtend__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__AudioPlayExtend__Sequence__are_equal(const protocol__msg__AudioPlayExtend__Sequence * lhs, const protocol__msg__AudioPlayExtend__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__AudioPlayExtend__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__AudioPlayExtend__Sequence__copy(
  const protocol__msg__AudioPlayExtend__Sequence * input,
  protocol__msg__AudioPlayExtend__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__AudioPlayExtend);
    protocol__msg__AudioPlayExtend * data =
      (protocol__msg__AudioPlayExtend *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__AudioPlayExtend__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__AudioPlayExtend__fini(&data[i]);
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
    if (!protocol__msg__AudioPlayExtend__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MapMetaData.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/map_meta_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `map_load_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `origin`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
protocol__msg__MapMetaData__init(protocol__msg__MapMetaData * msg)
{
  if (!msg) {
    return false;
  }
  // map_load_time
  if (!builtin_interfaces__msg__Time__init(&msg->map_load_time)) {
    protocol__msg__MapMetaData__fini(msg);
    return false;
  }
  // resolution
  // width
  // height
  // origin
  if (!geometry_msgs__msg__Pose__init(&msg->origin)) {
    protocol__msg__MapMetaData__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__MapMetaData__fini(protocol__msg__MapMetaData * msg)
{
  if (!msg) {
    return;
  }
  // map_load_time
  builtin_interfaces__msg__Time__fini(&msg->map_load_time);
  // resolution
  // width
  // height
  // origin
  geometry_msgs__msg__Pose__fini(&msg->origin);
}

bool
protocol__msg__MapMetaData__are_equal(const protocol__msg__MapMetaData * lhs, const protocol__msg__MapMetaData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_load_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->map_load_time), &(rhs->map_load_time)))
  {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->origin), &(rhs->origin)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__MapMetaData__copy(
  const protocol__msg__MapMetaData * input,
  protocol__msg__MapMetaData * output)
{
  if (!input || !output) {
    return false;
  }
  // map_load_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->map_load_time), &(output->map_load_time)))
  {
    return false;
  }
  // resolution
  output->resolution = input->resolution;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // origin
  if (!geometry_msgs__msg__Pose__copy(
      &(input->origin), &(output->origin)))
  {
    return false;
  }
  return true;
}

protocol__msg__MapMetaData *
protocol__msg__MapMetaData__create()
{
  protocol__msg__MapMetaData * msg = (protocol__msg__MapMetaData *)malloc(sizeof(protocol__msg__MapMetaData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MapMetaData));
  bool success = protocol__msg__MapMetaData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MapMetaData__destroy(protocol__msg__MapMetaData * msg)
{
  if (msg) {
    protocol__msg__MapMetaData__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MapMetaData__Sequence__init(protocol__msg__MapMetaData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MapMetaData * data = NULL;
  if (size) {
    data = (protocol__msg__MapMetaData *)calloc(size, sizeof(protocol__msg__MapMetaData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MapMetaData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MapMetaData__fini(&data[i - 1]);
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
protocol__msg__MapMetaData__Sequence__fini(protocol__msg__MapMetaData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MapMetaData__fini(&array->data[i]);
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

protocol__msg__MapMetaData__Sequence *
protocol__msg__MapMetaData__Sequence__create(size_t size)
{
  protocol__msg__MapMetaData__Sequence * array = (protocol__msg__MapMetaData__Sequence *)malloc(sizeof(protocol__msg__MapMetaData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MapMetaData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MapMetaData__Sequence__destroy(protocol__msg__MapMetaData__Sequence * array)
{
  if (array) {
    protocol__msg__MapMetaData__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MapMetaData__Sequence__are_equal(const protocol__msg__MapMetaData__Sequence * lhs, const protocol__msg__MapMetaData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MapMetaData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MapMetaData__Sequence__copy(
  const protocol__msg__MapMetaData__Sequence * input,
  protocol__msg__MapMetaData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MapMetaData);
    protocol__msg__MapMetaData * data =
      (protocol__msg__MapMetaData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MapMetaData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MapMetaData__fini(&data[i]);
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
    if (!protocol__msg__MapMetaData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

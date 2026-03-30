// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MapLabel.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/map_label__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `map`
#include "protocol/msg/detail/occupancy_grid__functions.h"
// Member `labels`
#include "protocol/msg/detail/label__functions.h"

bool
protocol__msg__MapLabel__init(protocol__msg__MapLabel * msg)
{
  if (!msg) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    protocol__msg__MapLabel__fini(msg);
    return false;
  }
  // map_id
  // is_outdoor
  // map
  if (!protocol__msg__OccupancyGrid__init(&msg->map)) {
    protocol__msg__MapLabel__fini(msg);
    return false;
  }
  // labels
  if (!protocol__msg__Label__Sequence__init(&msg->labels, 0)) {
    protocol__msg__MapLabel__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__MapLabel__fini(protocol__msg__MapLabel * msg)
{
  if (!msg) {
    return;
  }
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // map_id
  // is_outdoor
  // map
  protocol__msg__OccupancyGrid__fini(&msg->map);
  // labels
  protocol__msg__Label__Sequence__fini(&msg->labels);
}

bool
protocol__msg__MapLabel__are_equal(const protocol__msg__MapLabel * lhs, const protocol__msg__MapLabel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // map_id
  if (lhs->map_id != rhs->map_id) {
    return false;
  }
  // is_outdoor
  if (lhs->is_outdoor != rhs->is_outdoor) {
    return false;
  }
  // map
  if (!protocol__msg__OccupancyGrid__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  // labels
  if (!protocol__msg__Label__Sequence__are_equal(
      &(lhs->labels), &(rhs->labels)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__MapLabel__copy(
  const protocol__msg__MapLabel * input,
  protocol__msg__MapLabel * output)
{
  if (!input || !output) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // map_id
  output->map_id = input->map_id;
  // is_outdoor
  output->is_outdoor = input->is_outdoor;
  // map
  if (!protocol__msg__OccupancyGrid__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  // labels
  if (!protocol__msg__Label__Sequence__copy(
      &(input->labels), &(output->labels)))
  {
    return false;
  }
  return true;
}

protocol__msg__MapLabel *
protocol__msg__MapLabel__create()
{
  protocol__msg__MapLabel * msg = (protocol__msg__MapLabel *)malloc(sizeof(protocol__msg__MapLabel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MapLabel));
  bool success = protocol__msg__MapLabel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MapLabel__destroy(protocol__msg__MapLabel * msg)
{
  if (msg) {
    protocol__msg__MapLabel__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MapLabel__Sequence__init(protocol__msg__MapLabel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MapLabel * data = NULL;
  if (size) {
    data = (protocol__msg__MapLabel *)calloc(size, sizeof(protocol__msg__MapLabel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MapLabel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MapLabel__fini(&data[i - 1]);
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
protocol__msg__MapLabel__Sequence__fini(protocol__msg__MapLabel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MapLabel__fini(&array->data[i]);
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

protocol__msg__MapLabel__Sequence *
protocol__msg__MapLabel__Sequence__create(size_t size)
{
  protocol__msg__MapLabel__Sequence * array = (protocol__msg__MapLabel__Sequence *)malloc(sizeof(protocol__msg__MapLabel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MapLabel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MapLabel__Sequence__destroy(protocol__msg__MapLabel__Sequence * array)
{
  if (array) {
    protocol__msg__MapLabel__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MapLabel__Sequence__are_equal(const protocol__msg__MapLabel__Sequence * lhs, const protocol__msg__MapLabel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MapLabel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MapLabel__Sequence__copy(
  const protocol__msg__MapLabel__Sequence * input,
  protocol__msg__MapLabel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MapLabel);
    protocol__msg__MapLabel * data =
      (protocol__msg__MapLabel *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MapLabel__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MapLabel__fini(&data[i]);
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
    if (!protocol__msg__MapLabel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

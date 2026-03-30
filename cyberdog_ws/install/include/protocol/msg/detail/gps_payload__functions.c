// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/GpsPayload.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/gps_payload__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
protocol__msg__GpsPayload__init(protocol__msg__GpsPayload * msg)
{
  if (!msg) {
    return false;
  }
  // sec
  // nanosec
  // itow
  // fix_type
  // num_sv
  // lon
  // lat
  return true;
}

void
protocol__msg__GpsPayload__fini(protocol__msg__GpsPayload * msg)
{
  if (!msg) {
    return;
  }
  // sec
  // nanosec
  // itow
  // fix_type
  // num_sv
  // lon
  // lat
}

bool
protocol__msg__GpsPayload__are_equal(const protocol__msg__GpsPayload * lhs, const protocol__msg__GpsPayload * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sec
  if (lhs->sec != rhs->sec) {
    return false;
  }
  // nanosec
  if (lhs->nanosec != rhs->nanosec) {
    return false;
  }
  // itow
  if (lhs->itow != rhs->itow) {
    return false;
  }
  // fix_type
  if (lhs->fix_type != rhs->fix_type) {
    return false;
  }
  // num_sv
  if (lhs->num_sv != rhs->num_sv) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  return true;
}

bool
protocol__msg__GpsPayload__copy(
  const protocol__msg__GpsPayload * input,
  protocol__msg__GpsPayload * output)
{
  if (!input || !output) {
    return false;
  }
  // sec
  output->sec = input->sec;
  // nanosec
  output->nanosec = input->nanosec;
  // itow
  output->itow = input->itow;
  // fix_type
  output->fix_type = input->fix_type;
  // num_sv
  output->num_sv = input->num_sv;
  // lon
  output->lon = input->lon;
  // lat
  output->lat = input->lat;
  return true;
}

protocol__msg__GpsPayload *
protocol__msg__GpsPayload__create()
{
  protocol__msg__GpsPayload * msg = (protocol__msg__GpsPayload *)malloc(sizeof(protocol__msg__GpsPayload));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__GpsPayload));
  bool success = protocol__msg__GpsPayload__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__GpsPayload__destroy(protocol__msg__GpsPayload * msg)
{
  if (msg) {
    protocol__msg__GpsPayload__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__GpsPayload__Sequence__init(protocol__msg__GpsPayload__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__GpsPayload * data = NULL;
  if (size) {
    data = (protocol__msg__GpsPayload *)calloc(size, sizeof(protocol__msg__GpsPayload));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__GpsPayload__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__GpsPayload__fini(&data[i - 1]);
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
protocol__msg__GpsPayload__Sequence__fini(protocol__msg__GpsPayload__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__GpsPayload__fini(&array->data[i]);
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

protocol__msg__GpsPayload__Sequence *
protocol__msg__GpsPayload__Sequence__create(size_t size)
{
  protocol__msg__GpsPayload__Sequence * array = (protocol__msg__GpsPayload__Sequence *)malloc(sizeof(protocol__msg__GpsPayload__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__GpsPayload__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__GpsPayload__Sequence__destroy(protocol__msg__GpsPayload__Sequence * array)
{
  if (array) {
    protocol__msg__GpsPayload__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__GpsPayload__Sequence__are_equal(const protocol__msg__GpsPayload__Sequence * lhs, const protocol__msg__GpsPayload__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__GpsPayload__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__GpsPayload__Sequence__copy(
  const protocol__msg__GpsPayload__Sequence * input,
  protocol__msg__GpsPayload__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__GpsPayload);
    protocol__msg__GpsPayload * data =
      (protocol__msg__GpsPayload *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__GpsPayload__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__GpsPayload__fini(&data[i]);
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
    if (!protocol__msg__GpsPayload__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

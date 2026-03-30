// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/Person.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/person__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `face_info`
#include "protocol/msg/detail/face_info__functions.h"
// Member `body_info`
#include "protocol/msg/detail/body_info__functions.h"
// Member `track_res`
#include "protocol/msg/detail/track_result__functions.h"

bool
protocol__msg__Person__init(protocol__msg__Person * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    protocol__msg__Person__fini(msg);
    return false;
  }
  // face_info
  if (!protocol__msg__FaceInfo__init(&msg->face_info)) {
    protocol__msg__Person__fini(msg);
    return false;
  }
  // body_info
  if (!protocol__msg__BodyInfo__init(&msg->body_info)) {
    protocol__msg__Person__fini(msg);
    return false;
  }
  // track_res
  if (!protocol__msg__TrackResult__init(&msg->track_res)) {
    protocol__msg__Person__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__Person__fini(protocol__msg__Person * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // face_info
  protocol__msg__FaceInfo__fini(&msg->face_info);
  // body_info
  protocol__msg__BodyInfo__fini(&msg->body_info);
  // track_res
  protocol__msg__TrackResult__fini(&msg->track_res);
}

bool
protocol__msg__Person__are_equal(const protocol__msg__Person * lhs, const protocol__msg__Person * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // face_info
  if (!protocol__msg__FaceInfo__are_equal(
      &(lhs->face_info), &(rhs->face_info)))
  {
    return false;
  }
  // body_info
  if (!protocol__msg__BodyInfo__are_equal(
      &(lhs->body_info), &(rhs->body_info)))
  {
    return false;
  }
  // track_res
  if (!protocol__msg__TrackResult__are_equal(
      &(lhs->track_res), &(rhs->track_res)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__Person__copy(
  const protocol__msg__Person * input,
  protocol__msg__Person * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // face_info
  if (!protocol__msg__FaceInfo__copy(
      &(input->face_info), &(output->face_info)))
  {
    return false;
  }
  // body_info
  if (!protocol__msg__BodyInfo__copy(
      &(input->body_info), &(output->body_info)))
  {
    return false;
  }
  // track_res
  if (!protocol__msg__TrackResult__copy(
      &(input->track_res), &(output->track_res)))
  {
    return false;
  }
  return true;
}

protocol__msg__Person *
protocol__msg__Person__create()
{
  protocol__msg__Person * msg = (protocol__msg__Person *)malloc(sizeof(protocol__msg__Person));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__Person));
  bool success = protocol__msg__Person__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__Person__destroy(protocol__msg__Person * msg)
{
  if (msg) {
    protocol__msg__Person__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__Person__Sequence__init(protocol__msg__Person__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__Person * data = NULL;
  if (size) {
    data = (protocol__msg__Person *)calloc(size, sizeof(protocol__msg__Person));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__Person__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__Person__fini(&data[i - 1]);
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
protocol__msg__Person__Sequence__fini(protocol__msg__Person__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__Person__fini(&array->data[i]);
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

protocol__msg__Person__Sequence *
protocol__msg__Person__Sequence__create(size_t size)
{
  protocol__msg__Person__Sequence * array = (protocol__msg__Person__Sequence *)malloc(sizeof(protocol__msg__Person__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__Person__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__Person__Sequence__destroy(protocol__msg__Person__Sequence * array)
{
  if (array) {
    protocol__msg__Person__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__Person__Sequence__are_equal(const protocol__msg__Person__Sequence * lhs, const protocol__msg__Person__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__Person__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__Person__Sequence__copy(
  const protocol__msg__Person__Sequence * input,
  protocol__msg__Person__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__Person);
    protocol__msg__Person * data =
      (protocol__msg__Person *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__Person__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__Person__fini(&data[i]);
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
    if (!protocol__msg__Person__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

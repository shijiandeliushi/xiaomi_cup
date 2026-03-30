// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:srv/AudioVoiceprintTrain.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/audio_voiceprint_train__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `voice_print`
#include "protocol/msg/detail/voice_print__functions.h"

bool
protocol__srv__AudioVoiceprintTrain_Request__init(protocol__srv__AudioVoiceprintTrain_Request * msg)
{
  if (!msg) {
    return false;
  }
  // train_id
  // voice_print
  if (!protocol__msg__VoicePrint__init(&msg->voice_print)) {
    protocol__srv__AudioVoiceprintTrain_Request__fini(msg);
    return false;
  }
  return true;
}

void
protocol__srv__AudioVoiceprintTrain_Request__fini(protocol__srv__AudioVoiceprintTrain_Request * msg)
{
  if (!msg) {
    return;
  }
  // train_id
  // voice_print
  protocol__msg__VoicePrint__fini(&msg->voice_print);
}

bool
protocol__srv__AudioVoiceprintTrain_Request__are_equal(const protocol__srv__AudioVoiceprintTrain_Request * lhs, const protocol__srv__AudioVoiceprintTrain_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // train_id
  if (lhs->train_id != rhs->train_id) {
    return false;
  }
  // voice_print
  if (!protocol__msg__VoicePrint__are_equal(
      &(lhs->voice_print), &(rhs->voice_print)))
  {
    return false;
  }
  return true;
}

bool
protocol__srv__AudioVoiceprintTrain_Request__copy(
  const protocol__srv__AudioVoiceprintTrain_Request * input,
  protocol__srv__AudioVoiceprintTrain_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // train_id
  output->train_id = input->train_id;
  // voice_print
  if (!protocol__msg__VoicePrint__copy(
      &(input->voice_print), &(output->voice_print)))
  {
    return false;
  }
  return true;
}

protocol__srv__AudioVoiceprintTrain_Request *
protocol__srv__AudioVoiceprintTrain_Request__create()
{
  protocol__srv__AudioVoiceprintTrain_Request * msg = (protocol__srv__AudioVoiceprintTrain_Request *)malloc(sizeof(protocol__srv__AudioVoiceprintTrain_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__AudioVoiceprintTrain_Request));
  bool success = protocol__srv__AudioVoiceprintTrain_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__AudioVoiceprintTrain_Request__destroy(protocol__srv__AudioVoiceprintTrain_Request * msg)
{
  if (msg) {
    protocol__srv__AudioVoiceprintTrain_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__AudioVoiceprintTrain_Request__Sequence__init(protocol__srv__AudioVoiceprintTrain_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__AudioVoiceprintTrain_Request * data = NULL;
  if (size) {
    data = (protocol__srv__AudioVoiceprintTrain_Request *)calloc(size, sizeof(protocol__srv__AudioVoiceprintTrain_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__AudioVoiceprintTrain_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__AudioVoiceprintTrain_Request__fini(&data[i - 1]);
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
protocol__srv__AudioVoiceprintTrain_Request__Sequence__fini(protocol__srv__AudioVoiceprintTrain_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__AudioVoiceprintTrain_Request__fini(&array->data[i]);
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

protocol__srv__AudioVoiceprintTrain_Request__Sequence *
protocol__srv__AudioVoiceprintTrain_Request__Sequence__create(size_t size)
{
  protocol__srv__AudioVoiceprintTrain_Request__Sequence * array = (protocol__srv__AudioVoiceprintTrain_Request__Sequence *)malloc(sizeof(protocol__srv__AudioVoiceprintTrain_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__AudioVoiceprintTrain_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__AudioVoiceprintTrain_Request__Sequence__destroy(protocol__srv__AudioVoiceprintTrain_Request__Sequence * array)
{
  if (array) {
    protocol__srv__AudioVoiceprintTrain_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__AudioVoiceprintTrain_Request__Sequence__are_equal(const protocol__srv__AudioVoiceprintTrain_Request__Sequence * lhs, const protocol__srv__AudioVoiceprintTrain_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__AudioVoiceprintTrain_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__AudioVoiceprintTrain_Request__Sequence__copy(
  const protocol__srv__AudioVoiceprintTrain_Request__Sequence * input,
  protocol__srv__AudioVoiceprintTrain_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__AudioVoiceprintTrain_Request);
    protocol__srv__AudioVoiceprintTrain_Request * data =
      (protocol__srv__AudioVoiceprintTrain_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__AudioVoiceprintTrain_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__AudioVoiceprintTrain_Request__fini(&data[i]);
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
    if (!protocol__srv__AudioVoiceprintTrain_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
protocol__srv__AudioVoiceprintTrain_Response__init(protocol__srv__AudioVoiceprintTrain_Response * msg)
{
  if (!msg) {
    return false;
  }
  // code
  return true;
}

void
protocol__srv__AudioVoiceprintTrain_Response__fini(protocol__srv__AudioVoiceprintTrain_Response * msg)
{
  if (!msg) {
    return;
  }
  // code
}

bool
protocol__srv__AudioVoiceprintTrain_Response__are_equal(const protocol__srv__AudioVoiceprintTrain_Response * lhs, const protocol__srv__AudioVoiceprintTrain_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  return true;
}

bool
protocol__srv__AudioVoiceprintTrain_Response__copy(
  const protocol__srv__AudioVoiceprintTrain_Response * input,
  protocol__srv__AudioVoiceprintTrain_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  return true;
}

protocol__srv__AudioVoiceprintTrain_Response *
protocol__srv__AudioVoiceprintTrain_Response__create()
{
  protocol__srv__AudioVoiceprintTrain_Response * msg = (protocol__srv__AudioVoiceprintTrain_Response *)malloc(sizeof(protocol__srv__AudioVoiceprintTrain_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__AudioVoiceprintTrain_Response));
  bool success = protocol__srv__AudioVoiceprintTrain_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__AudioVoiceprintTrain_Response__destroy(protocol__srv__AudioVoiceprintTrain_Response * msg)
{
  if (msg) {
    protocol__srv__AudioVoiceprintTrain_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__AudioVoiceprintTrain_Response__Sequence__init(protocol__srv__AudioVoiceprintTrain_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__AudioVoiceprintTrain_Response * data = NULL;
  if (size) {
    data = (protocol__srv__AudioVoiceprintTrain_Response *)calloc(size, sizeof(protocol__srv__AudioVoiceprintTrain_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__AudioVoiceprintTrain_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__AudioVoiceprintTrain_Response__fini(&data[i - 1]);
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
protocol__srv__AudioVoiceprintTrain_Response__Sequence__fini(protocol__srv__AudioVoiceprintTrain_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__AudioVoiceprintTrain_Response__fini(&array->data[i]);
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

protocol__srv__AudioVoiceprintTrain_Response__Sequence *
protocol__srv__AudioVoiceprintTrain_Response__Sequence__create(size_t size)
{
  protocol__srv__AudioVoiceprintTrain_Response__Sequence * array = (protocol__srv__AudioVoiceprintTrain_Response__Sequence *)malloc(sizeof(protocol__srv__AudioVoiceprintTrain_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__AudioVoiceprintTrain_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__AudioVoiceprintTrain_Response__Sequence__destroy(protocol__srv__AudioVoiceprintTrain_Response__Sequence * array)
{
  if (array) {
    protocol__srv__AudioVoiceprintTrain_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__AudioVoiceprintTrain_Response__Sequence__are_equal(const protocol__srv__AudioVoiceprintTrain_Response__Sequence * lhs, const protocol__srv__AudioVoiceprintTrain_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__AudioVoiceprintTrain_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__AudioVoiceprintTrain_Response__Sequence__copy(
  const protocol__srv__AudioVoiceprintTrain_Response__Sequence * input,
  protocol__srv__AudioVoiceprintTrain_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__AudioVoiceprintTrain_Response);
    protocol__srv__AudioVoiceprintTrain_Response * data =
      (protocol__srv__AudioVoiceprintTrain_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__AudioVoiceprintTrain_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__AudioVoiceprintTrain_Response__fini(&data[i]);
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
    if (!protocol__srv__AudioVoiceprintTrain_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cyberdog_msg:msg/YamlParam.idl
// generated code does not contain a copyright notice
#include "cyberdog_msg/msg/detail/yaml_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
cyberdog_msg__msg__YamlParam__init(cyberdog_msg__msg__YamlParam * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    cyberdog_msg__msg__YamlParam__fini(msg);
    return false;
  }
  // kind
  // s64_value
  // double_value
  // vecxd_value
  // is_user
  return true;
}

void
cyberdog_msg__msg__YamlParam__fini(cyberdog_msg__msg__YamlParam * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // kind
  // s64_value
  // double_value
  // vecxd_value
  // is_user
}

bool
cyberdog_msg__msg__YamlParam__are_equal(const cyberdog_msg__msg__YamlParam * lhs, const cyberdog_msg__msg__YamlParam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // kind
  if (lhs->kind != rhs->kind) {
    return false;
  }
  // s64_value
  if (lhs->s64_value != rhs->s64_value) {
    return false;
  }
  // double_value
  if (lhs->double_value != rhs->double_value) {
    return false;
  }
  // vecxd_value
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->vecxd_value[i] != rhs->vecxd_value[i]) {
      return false;
    }
  }
  // is_user
  if (lhs->is_user != rhs->is_user) {
    return false;
  }
  return true;
}

bool
cyberdog_msg__msg__YamlParam__copy(
  const cyberdog_msg__msg__YamlParam * input,
  cyberdog_msg__msg__YamlParam * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // kind
  output->kind = input->kind;
  // s64_value
  output->s64_value = input->s64_value;
  // double_value
  output->double_value = input->double_value;
  // vecxd_value
  for (size_t i = 0; i < 12; ++i) {
    output->vecxd_value[i] = input->vecxd_value[i];
  }
  // is_user
  output->is_user = input->is_user;
  return true;
}

cyberdog_msg__msg__YamlParam *
cyberdog_msg__msg__YamlParam__create()
{
  cyberdog_msg__msg__YamlParam * msg = (cyberdog_msg__msg__YamlParam *)malloc(sizeof(cyberdog_msg__msg__YamlParam));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cyberdog_msg__msg__YamlParam));
  bool success = cyberdog_msg__msg__YamlParam__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cyberdog_msg__msg__YamlParam__destroy(cyberdog_msg__msg__YamlParam * msg)
{
  if (msg) {
    cyberdog_msg__msg__YamlParam__fini(msg);
  }
  free(msg);
}


bool
cyberdog_msg__msg__YamlParam__Sequence__init(cyberdog_msg__msg__YamlParam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cyberdog_msg__msg__YamlParam * data = NULL;
  if (size) {
    data = (cyberdog_msg__msg__YamlParam *)calloc(size, sizeof(cyberdog_msg__msg__YamlParam));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cyberdog_msg__msg__YamlParam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cyberdog_msg__msg__YamlParam__fini(&data[i - 1]);
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
cyberdog_msg__msg__YamlParam__Sequence__fini(cyberdog_msg__msg__YamlParam__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cyberdog_msg__msg__YamlParam__fini(&array->data[i]);
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

cyberdog_msg__msg__YamlParam__Sequence *
cyberdog_msg__msg__YamlParam__Sequence__create(size_t size)
{
  cyberdog_msg__msg__YamlParam__Sequence * array = (cyberdog_msg__msg__YamlParam__Sequence *)malloc(sizeof(cyberdog_msg__msg__YamlParam__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cyberdog_msg__msg__YamlParam__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cyberdog_msg__msg__YamlParam__Sequence__destroy(cyberdog_msg__msg__YamlParam__Sequence * array)
{
  if (array) {
    cyberdog_msg__msg__YamlParam__Sequence__fini(array);
  }
  free(array);
}

bool
cyberdog_msg__msg__YamlParam__Sequence__are_equal(const cyberdog_msg__msg__YamlParam__Sequence * lhs, const cyberdog_msg__msg__YamlParam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cyberdog_msg__msg__YamlParam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cyberdog_msg__msg__YamlParam__Sequence__copy(
  const cyberdog_msg__msg__YamlParam__Sequence * input,
  cyberdog_msg__msg__YamlParam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cyberdog_msg__msg__YamlParam);
    cyberdog_msg__msg__YamlParam * data =
      (cyberdog_msg__msg__YamlParam *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cyberdog_msg__msg__YamlParam__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cyberdog_msg__msg__YamlParam__fini(&data[i]);
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
    if (!cyberdog_msg__msg__YamlParam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

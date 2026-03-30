// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/MultipleTofPayload.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "protocol/msg/detail/multiple_tof_payload__struct.h"
#include "protocol/msg/detail/multiple_tof_payload__functions.h"

bool protocol__msg__single_tof_payload__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__single_tof_payload__convert_to_py(void * raw_ros_message);
bool protocol__msg__single_tof_payload__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__single_tof_payload__convert_to_py(void * raw_ros_message);
bool protocol__msg__single_tof_payload__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__single_tof_payload__convert_to_py(void * raw_ros_message);
bool protocol__msg__single_tof_payload__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__single_tof_payload__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__multiple_tof_payload__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("protocol.msg._multiple_tof_payload.MultipleTofPayload", full_classname_dest, 53) == 0);
  }
  protocol__msg__MultipleTofPayload * ros_message = _ros_message;
  {  // left_head
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_head");
    if (!field) {
      return false;
    }
    if (!protocol__msg__single_tof_payload__convert_from_py(field, &ros_message->left_head)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // left_rear
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_rear");
    if (!field) {
      return false;
    }
    if (!protocol__msg__single_tof_payload__convert_from_py(field, &ros_message->left_rear)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_head
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_head");
    if (!field) {
      return false;
    }
    if (!protocol__msg__single_tof_payload__convert_from_py(field, &ros_message->right_head)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_rear
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_rear");
    if (!field) {
      return false;
    }
    if (!protocol__msg__single_tof_payload__convert_from_py(field, &ros_message->right_rear)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__multiple_tof_payload__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MultipleTofPayload */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._multiple_tof_payload");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MultipleTofPayload");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__MultipleTofPayload * ros_message = (protocol__msg__MultipleTofPayload *)raw_ros_message;
  {  // left_head
    PyObject * field = NULL;
    field = protocol__msg__single_tof_payload__convert_to_py(&ros_message->left_head);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_head", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_rear
    PyObject * field = NULL;
    field = protocol__msg__single_tof_payload__convert_to_py(&ros_message->left_rear);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_rear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_head
    PyObject * field = NULL;
    field = protocol__msg__single_tof_payload__convert_to_py(&ros_message->right_head);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_head", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_rear
    PyObject * field = NULL;
    field = protocol__msg__single_tof_payload__convert_to_py(&ros_message->right_rear);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_rear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

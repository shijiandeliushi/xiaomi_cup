// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/MapLabel.idl
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
#include "protocol/msg/detail/map_label__struct.h"
#include "protocol/msg/detail/map_label__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "protocol/msg/detail/label__functions.h"
// end nested array functions include
bool protocol__msg__occupancy_grid__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__occupancy_grid__convert_to_py(void * raw_ros_message);
bool protocol__msg__label__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__label__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__map_label__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("protocol.msg._map_label.MapLabel", full_classname_dest, 32) == 0);
  }
  protocol__msg__MapLabel * ros_message = _ros_message;
  {  // map_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->map_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // map_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->map_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // is_outdoor
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_outdoor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_outdoor = (Py_True == field);
    Py_DECREF(field);
  }
  {  // map
    PyObject * field = PyObject_GetAttrString(_pymsg, "map");
    if (!field) {
      return false;
    }
    if (!protocol__msg__occupancy_grid__convert_from_py(field, &ros_message->map)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // labels
    PyObject * field = PyObject_GetAttrString(_pymsg, "labels");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'labels'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!protocol__msg__Label__Sequence__init(&(ros_message->labels), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create protocol__msg__Label__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    protocol__msg__Label * dest = ros_message->labels.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!protocol__msg__label__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__map_label__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MapLabel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._map_label");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapLabel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__MapLabel * ros_message = (protocol__msg__MapLabel *)raw_ros_message;
  {  // map_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->map_name.data,
      strlen(ros_message->map_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->map_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_outdoor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_outdoor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_outdoor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map
    PyObject * field = NULL;
    field = protocol__msg__occupancy_grid__convert_to_py(&ros_message->map);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // labels
    PyObject * field = NULL;
    size_t size = ros_message->labels.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    protocol__msg__Label * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->labels.data[i]);
      PyObject * pyitem = protocol__msg__label__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "labels", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/Face.idl
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
#include "protocol/msg/detail/face__struct.h"
#include "protocol/msg/detail/face__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__region_of_interest__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__region_of_interest__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__face__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[24];
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
    assert(strncmp("protocol.msg._face.Face", full_classname_dest, 23) == 0);
  }
  protocol__msg__Face * ros_message = _ros_message;
  {  // roi
    PyObject * field = PyObject_GetAttrString(_pymsg, "roi");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__region_of_interest__convert_from_py(field, &ros_message->roi)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // score
    PyObject * field = PyObject_GetAttrString(_pymsg, "score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // match
    PyObject * field = PyObject_GetAttrString(_pymsg, "match");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->match = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // row
    PyObject * field = PyObject_GetAttrString(_pymsg, "row");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->row = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_host
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_host");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_host = (Py_True == field);
    Py_DECREF(field);
  }
  {  // age
    PyObject * field = PyObject_GetAttrString(_pymsg, "age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->age = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // emotion
    PyObject * field = PyObject_GetAttrString(_pymsg, "emotion");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->emotion = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__face__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Face */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._face");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Face");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__Face * ros_message = (protocol__msg__Face *)raw_ros_message;
  {  // roi
    PyObject * field = NULL;
    field = sensor_msgs__msg__region_of_interest__convert_to_py(&ros_message->roi);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "roi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // match
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->match);
    {
      int rc = PyObject_SetAttrString(_pymessage, "match", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // row
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->row);
    {
      int rc = PyObject_SetAttrString(_pymessage, "row", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_host
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_host ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_host", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emotion
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->emotion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emotion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

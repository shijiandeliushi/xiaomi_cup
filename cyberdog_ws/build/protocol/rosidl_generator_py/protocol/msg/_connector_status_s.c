// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/ConnectorStatus.idl
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
#include "protocol/msg/detail/connector_status__struct.h"
#include "protocol/msg/detail/connector_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__connector_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("protocol.msg._connector_status.ConnectorStatus", full_classname_dest, 46) == 0);
  }
  protocol__msg__ConnectorStatus * ros_message = _ros_message;
  {  // is_connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_internet
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_internet");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_internet = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ssid
    PyObject * field = PyObject_GetAttrString(_pymsg, "ssid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ssid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // robot_ip
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_ip");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->robot_ip, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // provider_ip
    PyObject * field = PyObject_GetAttrString(_pymsg, "provider_ip");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->provider_ip, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // strength
    PyObject * field = PyObject_GetAttrString(_pymsg, "strength");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->strength = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // code
    PyObject * field = PyObject_GetAttrString(_pymsg, "code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->code = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__connector_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConnectorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._connector_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConnectorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__ConnectorStatus * ros_message = (protocol__msg__ConnectorStatus *)raw_ros_message;
  {  // is_connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_internet
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_internet ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_internet", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ssid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ssid.data,
      strlen(ros_message->ssid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ssid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_ip
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->robot_ip.data,
      strlen(ros_message->robot_ip.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_ip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // provider_ip
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->provider_ip.data,
      strlen(ros_message->provider_ip.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "provider_ip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // strength
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->strength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "strength", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // code
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

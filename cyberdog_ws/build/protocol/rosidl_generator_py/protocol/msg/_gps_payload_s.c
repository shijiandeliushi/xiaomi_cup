// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/GpsPayload.idl
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
#include "protocol/msg/detail/gps_payload__struct.h"
#include "protocol/msg/detail/gps_payload__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__gps_payload__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("protocol.msg._gps_payload.GpsPayload", full_classname_dest, 36) == 0);
  }
  protocol__msg__GpsPayload * ros_message = _ros_message;
  {  // sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "sec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sec = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nanosec
    PyObject * field = PyObject_GetAttrString(_pymsg, "nanosec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nanosec = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // itow
    PyObject * field = PyObject_GetAttrString(_pymsg, "itow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->itow = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fix_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "fix_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fix_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sv
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__gps_payload__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GpsPayload */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._gps_payload");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GpsPayload");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__GpsPayload * ros_message = (protocol__msg__GpsPayload *)raw_ros_message;
  {  // sec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nanosec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nanosec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nanosec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // itow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->itow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "itow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fix_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fix_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fix_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

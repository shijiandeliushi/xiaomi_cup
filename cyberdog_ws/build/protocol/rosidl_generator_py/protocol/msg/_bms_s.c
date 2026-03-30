// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/Bms.idl
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
#include "protocol/msg/detail/bms__struct.h"
#include "protocol/msg/detail/bms__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__bms__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[22];
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
    assert(strncmp("protocol.msg._bms.Bms", full_classname_dest, 21) == 0);
  }
  protocol__msg__Bms * ros_message = _ros_message;
  {  // batt_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "batt_volt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batt_volt = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // batt_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "batt_curr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batt_curr = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // batt_soc
    PyObject * field = PyObject_GetAttrString(_pymsg, "batt_soc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batt_soc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // batt_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "batt_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batt_temp = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // batt_st
    PyObject * field = PyObject_GetAttrString(_pymsg, "batt_st");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batt_st = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // key_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_val");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->key_val = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // disable_charge
    PyObject * field = PyObject_GetAttrString(_pymsg, "disable_charge");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->disable_charge = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // power_supply
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_supply");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power_supply = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // buzze
    PyObject * field = PyObject_GetAttrString(_pymsg, "buzze");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buzze = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // batt_health
    PyObject * field = PyObject_GetAttrString(_pymsg, "batt_health");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batt_health = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // batt_loop_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "batt_loop_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batt_loop_number = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // powerboard_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "powerboard_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->powerboard_status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__bms__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Bms */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._bms");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Bms");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__Bms * ros_message = (protocol__msg__Bms *)raw_ros_message;
  {  // batt_volt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->batt_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batt_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batt_curr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->batt_curr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batt_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batt_soc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->batt_soc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batt_soc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batt_temp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->batt_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batt_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batt_st
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->batt_st);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batt_st", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_val
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->key_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disable_charge
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->disable_charge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disable_charge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_supply
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power_supply);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_supply", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buzze
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buzze);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buzze", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batt_health
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->batt_health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batt_health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batt_loop_number
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->batt_loop_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batt_loop_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // powerboard_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->powerboard_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "powerboard_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

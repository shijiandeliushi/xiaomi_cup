// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:srv/GetUWBMacSessionID.idl
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
#include "protocol/srv/detail/get_uwb_mac_session_id__struct.h"
#include "protocol/srv/detail/get_uwb_mac_session_id__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__srv__get_uwb_mac_session_id__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("protocol.srv._get_uwb_mac_session_id.GetUWBMacSessionID_Request", full_classname_dest, 63) == 0);
  }
  protocol__srv__GetUWBMacSessionID_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__srv__get_uwb_mac_session_id__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetUWBMacSessionID_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.srv._get_uwb_mac_session_id");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetUWBMacSessionID_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "protocol/srv/detail/get_uwb_mac_session_id__struct.h"
// already included above
// #include "protocol/srv/detail/get_uwb_mac_session_id__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__srv__get_uwb_mac_session_id__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("protocol.srv._get_uwb_mac_session_id.GetUWBMacSessionID_Response", full_classname_dest, 64) == 0);
  }
  protocol__srv__GetUWBMacSessionID_Response * ros_message = _ros_message;
  {  // session_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "session_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->session_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // master
    PyObject * field = PyObject_GetAttrString(_pymsg, "master");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->master = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // slave1
    PyObject * field = PyObject_GetAttrString(_pymsg, "slave1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->slave1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // slave2
    PyObject * field = PyObject_GetAttrString(_pymsg, "slave2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->slave2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // slave3
    PyObject * field = PyObject_GetAttrString(_pymsg, "slave3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->slave3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // slave4
    PyObject * field = PyObject_GetAttrString(_pymsg, "slave4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->slave4 = (uint16_t)PyLong_AsUnsignedLong(field);
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
PyObject * protocol__srv__get_uwb_mac_session_id__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetUWBMacSessionID_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.srv._get_uwb_mac_session_id");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetUWBMacSessionID_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__srv__GetUWBMacSessionID_Response * ros_message = (protocol__srv__GetUWBMacSessionID_Response *)raw_ros_message;
  {  // session_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->session_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "session_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // master
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->master);
    {
      int rc = PyObject_SetAttrString(_pymessage, "master", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slave1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->slave1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slave1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slave2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->slave2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slave2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slave3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->slave3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slave3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slave4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->slave4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slave4", field);
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

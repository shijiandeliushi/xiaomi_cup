// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/BmsStatus.idl
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
#include "protocol/msg/detail/bms_status__struct.h"
#include "protocol/msg/detail/bms_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__bms_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("protocol.msg._bms_status.BmsStatus", full_classname_dest, 34) == 0);
  }
  protocol__msg__BmsStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
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
  {  // power_adapter_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_adapter_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power_adapter_temp = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wireless_charging_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "wireless_charging_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wireless_charging_temp = (int16_t)PyLong_AsLong(field);
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
  {  // bms_state_one
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_state_one");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_state_one = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_state_two
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_state_two");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_state_two = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // power_normal
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_normal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_normal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_wired_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_wired_charging");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_wired_charging = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_finished_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_finished_charging");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_finished_charging = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_motor_shutdown
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_motor_shutdown");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_motor_shutdown = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_soft_shutdown
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_soft_shutdown");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_soft_shutdown = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_wp_place
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_wp_place");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_wp_place = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_wp_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_wp_charging");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_wp_charging = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_expower_supply
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_expower_supply");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_expower_supply = (Py_True == field);
    Py_DECREF(field);
  }
  {  // charge_over_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_over_current");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charge_over_current = (Py_True == field);
    Py_DECREF(field);
  }
  {  // discharge_over_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "discharge_over_current");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->discharge_over_current = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cell_over_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_over_voltage");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cell_over_voltage = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cell_under_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_under_voltage");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cell_under_voltage = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cell_volt_abnormal
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_volt_abnormal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cell_volt_abnormal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mos_over_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "mos_over_temp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mos_over_temp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // discharge_short
    PyObject * field = PyObject_GetAttrString(_pymsg, "discharge_short");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->discharge_short = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fuse
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuse");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fuse = (Py_True == field);
    Py_DECREF(field);
  }
  {  // discharge_over_tmp
    PyObject * field = PyObject_GetAttrString(_pymsg, "discharge_over_tmp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->discharge_over_tmp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // discharge_under_tmp
    PyObject * field = PyObject_GetAttrString(_pymsg, "discharge_under_tmp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->discharge_under_tmp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // charge_over_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_over_temp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charge_over_temp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // charge_under_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_under_temp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charge_under_temp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // charge_mos_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_mos_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charge_mos_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // discharge_mos_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "discharge_mos_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->discharge_mos_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // chg_mos_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "chg_mos_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->chg_mos_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsg_mos_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsg_mos_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsg_mos_fault = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__bms_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BmsStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._bms_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BmsStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__BmsStatus * ros_message = (protocol__msg__BmsStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // power_adapter_temp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->power_adapter_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_adapter_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wireless_charging_temp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wireless_charging_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wireless_charging_temp", field);
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
  {  // bms_state_one
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_state_one);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_state_one", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_state_two
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_state_two);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_state_two", field);
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
  {  // power_normal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_normal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_normal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_wired_charging
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_wired_charging ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_wired_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_finished_charging
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_finished_charging ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_finished_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_motor_shutdown
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_motor_shutdown ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_motor_shutdown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_soft_shutdown
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_soft_shutdown ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_soft_shutdown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_wp_place
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_wp_place ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_wp_place", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_wp_charging
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_wp_charging ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_wp_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_expower_supply
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_expower_supply ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_expower_supply", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_over_current
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charge_over_current ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_over_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // discharge_over_current
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->discharge_over_current ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discharge_over_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cell_over_voltage
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cell_over_voltage ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cell_over_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cell_under_voltage
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cell_under_voltage ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cell_under_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cell_volt_abnormal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cell_volt_abnormal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cell_volt_abnormal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mos_over_temp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mos_over_temp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mos_over_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // discharge_short
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->discharge_short ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discharge_short", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuse
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fuse ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // discharge_over_tmp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->discharge_over_tmp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discharge_over_tmp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // discharge_under_tmp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->discharge_under_tmp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discharge_under_tmp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_over_temp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charge_over_temp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_over_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_under_temp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charge_under_temp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_under_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_mos_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charge_mos_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_mos_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // discharge_mos_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->discharge_mos_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discharge_mos_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chg_mos_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->chg_mos_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chg_mos_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsg_mos_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsg_mos_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsg_mos_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

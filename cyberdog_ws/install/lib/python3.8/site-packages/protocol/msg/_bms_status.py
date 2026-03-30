# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/BmsStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BmsStatus(type):
    """Metaclass of message 'BmsStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('protocol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'protocol.msg.BmsStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BmsStatus(metaclass=Metaclass_BmsStatus):
    """Message class 'BmsStatus'."""

    __slots__ = [
        '_header',
        '_batt_volt',
        '_batt_curr',
        '_batt_soc',
        '_batt_temp',
        '_power_adapter_temp',
        '_wireless_charging_temp',
        '_batt_st',
        '_bms_state_one',
        '_bms_state_two',
        '_batt_health',
        '_batt_loop_number',
        '_power_normal',
        '_power_wired_charging',
        '_power_finished_charging',
        '_power_motor_shutdown',
        '_power_soft_shutdown',
        '_power_wp_place',
        '_power_wp_charging',
        '_power_expower_supply',
        '_charge_over_current',
        '_discharge_over_current',
        '_cell_over_voltage',
        '_cell_under_voltage',
        '_cell_volt_abnormal',
        '_mos_over_temp',
        '_discharge_short',
        '_fuse',
        '_discharge_over_tmp',
        '_discharge_under_tmp',
        '_charge_over_temp',
        '_charge_under_temp',
        '_charge_mos_state',
        '_discharge_mos_state',
        '_chg_mos_fault',
        '_dsg_mos_fault',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'batt_volt': 'uint16',
        'batt_curr': 'int16',
        'batt_soc': 'uint8',
        'batt_temp': 'int16',
        'power_adapter_temp': 'int16',
        'wireless_charging_temp': 'int16',
        'batt_st': 'uint8',
        'bms_state_one': 'uint8',
        'bms_state_two': 'uint8',
        'batt_health': 'int8',
        'batt_loop_number': 'int16',
        'power_normal': 'boolean',
        'power_wired_charging': 'boolean',
        'power_finished_charging': 'boolean',
        'power_motor_shutdown': 'boolean',
        'power_soft_shutdown': 'boolean',
        'power_wp_place': 'boolean',
        'power_wp_charging': 'boolean',
        'power_expower_supply': 'boolean',
        'charge_over_current': 'boolean',
        'discharge_over_current': 'boolean',
        'cell_over_voltage': 'boolean',
        'cell_under_voltage': 'boolean',
        'cell_volt_abnormal': 'boolean',
        'mos_over_temp': 'boolean',
        'discharge_short': 'boolean',
        'fuse': 'boolean',
        'discharge_over_tmp': 'boolean',
        'discharge_under_tmp': 'boolean',
        'charge_over_temp': 'boolean',
        'charge_under_temp': 'boolean',
        'charge_mos_state': 'boolean',
        'discharge_mos_state': 'boolean',
        'chg_mos_fault': 'boolean',
        'dsg_mos_fault': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.batt_volt = kwargs.get('batt_volt', int())
        self.batt_curr = kwargs.get('batt_curr', int())
        self.batt_soc = kwargs.get('batt_soc', int())
        self.batt_temp = kwargs.get('batt_temp', int())
        self.power_adapter_temp = kwargs.get('power_adapter_temp', int())
        self.wireless_charging_temp = kwargs.get('wireless_charging_temp', int())
        self.batt_st = kwargs.get('batt_st', int())
        self.bms_state_one = kwargs.get('bms_state_one', int())
        self.bms_state_two = kwargs.get('bms_state_two', int())
        self.batt_health = kwargs.get('batt_health', int())
        self.batt_loop_number = kwargs.get('batt_loop_number', int())
        self.power_normal = kwargs.get('power_normal', bool())
        self.power_wired_charging = kwargs.get('power_wired_charging', bool())
        self.power_finished_charging = kwargs.get('power_finished_charging', bool())
        self.power_motor_shutdown = kwargs.get('power_motor_shutdown', bool())
        self.power_soft_shutdown = kwargs.get('power_soft_shutdown', bool())
        self.power_wp_place = kwargs.get('power_wp_place', bool())
        self.power_wp_charging = kwargs.get('power_wp_charging', bool())
        self.power_expower_supply = kwargs.get('power_expower_supply', bool())
        self.charge_over_current = kwargs.get('charge_over_current', bool())
        self.discharge_over_current = kwargs.get('discharge_over_current', bool())
        self.cell_over_voltage = kwargs.get('cell_over_voltage', bool())
        self.cell_under_voltage = kwargs.get('cell_under_voltage', bool())
        self.cell_volt_abnormal = kwargs.get('cell_volt_abnormal', bool())
        self.mos_over_temp = kwargs.get('mos_over_temp', bool())
        self.discharge_short = kwargs.get('discharge_short', bool())
        self.fuse = kwargs.get('fuse', bool())
        self.discharge_over_tmp = kwargs.get('discharge_over_tmp', bool())
        self.discharge_under_tmp = kwargs.get('discharge_under_tmp', bool())
        self.charge_over_temp = kwargs.get('charge_over_temp', bool())
        self.charge_under_temp = kwargs.get('charge_under_temp', bool())
        self.charge_mos_state = kwargs.get('charge_mos_state', bool())
        self.discharge_mos_state = kwargs.get('discharge_mos_state', bool())
        self.chg_mos_fault = kwargs.get('chg_mos_fault', bool())
        self.dsg_mos_fault = kwargs.get('dsg_mos_fault', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.batt_volt != other.batt_volt:
            return False
        if self.batt_curr != other.batt_curr:
            return False
        if self.batt_soc != other.batt_soc:
            return False
        if self.batt_temp != other.batt_temp:
            return False
        if self.power_adapter_temp != other.power_adapter_temp:
            return False
        if self.wireless_charging_temp != other.wireless_charging_temp:
            return False
        if self.batt_st != other.batt_st:
            return False
        if self.bms_state_one != other.bms_state_one:
            return False
        if self.bms_state_two != other.bms_state_two:
            return False
        if self.batt_health != other.batt_health:
            return False
        if self.batt_loop_number != other.batt_loop_number:
            return False
        if self.power_normal != other.power_normal:
            return False
        if self.power_wired_charging != other.power_wired_charging:
            return False
        if self.power_finished_charging != other.power_finished_charging:
            return False
        if self.power_motor_shutdown != other.power_motor_shutdown:
            return False
        if self.power_soft_shutdown != other.power_soft_shutdown:
            return False
        if self.power_wp_place != other.power_wp_place:
            return False
        if self.power_wp_charging != other.power_wp_charging:
            return False
        if self.power_expower_supply != other.power_expower_supply:
            return False
        if self.charge_over_current != other.charge_over_current:
            return False
        if self.discharge_over_current != other.discharge_over_current:
            return False
        if self.cell_over_voltage != other.cell_over_voltage:
            return False
        if self.cell_under_voltage != other.cell_under_voltage:
            return False
        if self.cell_volt_abnormal != other.cell_volt_abnormal:
            return False
        if self.mos_over_temp != other.mos_over_temp:
            return False
        if self.discharge_short != other.discharge_short:
            return False
        if self.fuse != other.fuse:
            return False
        if self.discharge_over_tmp != other.discharge_over_tmp:
            return False
        if self.discharge_under_tmp != other.discharge_under_tmp:
            return False
        if self.charge_over_temp != other.charge_over_temp:
            return False
        if self.charge_under_temp != other.charge_under_temp:
            return False
        if self.charge_mos_state != other.charge_mos_state:
            return False
        if self.discharge_mos_state != other.discharge_mos_state:
            return False
        if self.chg_mos_fault != other.chg_mos_fault:
            return False
        if self.dsg_mos_fault != other.dsg_mos_fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def batt_volt(self):
        """Message field 'batt_volt'."""
        return self._batt_volt

    @batt_volt.setter
    def batt_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batt_volt' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'batt_volt' field must be an unsigned integer in [0, 65535]"
        self._batt_volt = value

    @property
    def batt_curr(self):
        """Message field 'batt_curr'."""
        return self._batt_curr

    @batt_curr.setter
    def batt_curr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batt_curr' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'batt_curr' field must be an integer in [-32768, 32767]"
        self._batt_curr = value

    @property
    def batt_soc(self):
        """Message field 'batt_soc'."""
        return self._batt_soc

    @batt_soc.setter
    def batt_soc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batt_soc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'batt_soc' field must be an unsigned integer in [0, 255]"
        self._batt_soc = value

    @property
    def batt_temp(self):
        """Message field 'batt_temp'."""
        return self._batt_temp

    @batt_temp.setter
    def batt_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batt_temp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'batt_temp' field must be an integer in [-32768, 32767]"
        self._batt_temp = value

    @property
    def power_adapter_temp(self):
        """Message field 'power_adapter_temp'."""
        return self._power_adapter_temp

    @power_adapter_temp.setter
    def power_adapter_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_adapter_temp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'power_adapter_temp' field must be an integer in [-32768, 32767]"
        self._power_adapter_temp = value

    @property
    def wireless_charging_temp(self):
        """Message field 'wireless_charging_temp'."""
        return self._wireless_charging_temp

    @wireless_charging_temp.setter
    def wireless_charging_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wireless_charging_temp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'wireless_charging_temp' field must be an integer in [-32768, 32767]"
        self._wireless_charging_temp = value

    @property
    def batt_st(self):
        """Message field 'batt_st'."""
        return self._batt_st

    @batt_st.setter
    def batt_st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batt_st' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'batt_st' field must be an unsigned integer in [0, 255]"
        self._batt_st = value

    @property
    def bms_state_one(self):
        """Message field 'bms_state_one'."""
        return self._bms_state_one

    @bms_state_one.setter
    def bms_state_one(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_state_one' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bms_state_one' field must be an unsigned integer in [0, 255]"
        self._bms_state_one = value

    @property
    def bms_state_two(self):
        """Message field 'bms_state_two'."""
        return self._bms_state_two

    @bms_state_two.setter
    def bms_state_two(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_state_two' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bms_state_two' field must be an unsigned integer in [0, 255]"
        self._bms_state_two = value

    @property
    def batt_health(self):
        """Message field 'batt_health'."""
        return self._batt_health

    @batt_health.setter
    def batt_health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batt_health' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'batt_health' field must be an integer in [-128, 127]"
        self._batt_health = value

    @property
    def batt_loop_number(self):
        """Message field 'batt_loop_number'."""
        return self._batt_loop_number

    @batt_loop_number.setter
    def batt_loop_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batt_loop_number' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'batt_loop_number' field must be an integer in [-32768, 32767]"
        self._batt_loop_number = value

    @property
    def power_normal(self):
        """Message field 'power_normal'."""
        return self._power_normal

    @power_normal.setter
    def power_normal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_normal' field must be of type 'bool'"
        self._power_normal = value

    @property
    def power_wired_charging(self):
        """Message field 'power_wired_charging'."""
        return self._power_wired_charging

    @power_wired_charging.setter
    def power_wired_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_wired_charging' field must be of type 'bool'"
        self._power_wired_charging = value

    @property
    def power_finished_charging(self):
        """Message field 'power_finished_charging'."""
        return self._power_finished_charging

    @power_finished_charging.setter
    def power_finished_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_finished_charging' field must be of type 'bool'"
        self._power_finished_charging = value

    @property
    def power_motor_shutdown(self):
        """Message field 'power_motor_shutdown'."""
        return self._power_motor_shutdown

    @power_motor_shutdown.setter
    def power_motor_shutdown(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_motor_shutdown' field must be of type 'bool'"
        self._power_motor_shutdown = value

    @property
    def power_soft_shutdown(self):
        """Message field 'power_soft_shutdown'."""
        return self._power_soft_shutdown

    @power_soft_shutdown.setter
    def power_soft_shutdown(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_soft_shutdown' field must be of type 'bool'"
        self._power_soft_shutdown = value

    @property
    def power_wp_place(self):
        """Message field 'power_wp_place'."""
        return self._power_wp_place

    @power_wp_place.setter
    def power_wp_place(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_wp_place' field must be of type 'bool'"
        self._power_wp_place = value

    @property
    def power_wp_charging(self):
        """Message field 'power_wp_charging'."""
        return self._power_wp_charging

    @power_wp_charging.setter
    def power_wp_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_wp_charging' field must be of type 'bool'"
        self._power_wp_charging = value

    @property
    def power_expower_supply(self):
        """Message field 'power_expower_supply'."""
        return self._power_expower_supply

    @power_expower_supply.setter
    def power_expower_supply(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_expower_supply' field must be of type 'bool'"
        self._power_expower_supply = value

    @property
    def charge_over_current(self):
        """Message field 'charge_over_current'."""
        return self._charge_over_current

    @charge_over_current.setter
    def charge_over_current(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'charge_over_current' field must be of type 'bool'"
        self._charge_over_current = value

    @property
    def discharge_over_current(self):
        """Message field 'discharge_over_current'."""
        return self._discharge_over_current

    @discharge_over_current.setter
    def discharge_over_current(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'discharge_over_current' field must be of type 'bool'"
        self._discharge_over_current = value

    @property
    def cell_over_voltage(self):
        """Message field 'cell_over_voltage'."""
        return self._cell_over_voltage

    @cell_over_voltage.setter
    def cell_over_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cell_over_voltage' field must be of type 'bool'"
        self._cell_over_voltage = value

    @property
    def cell_under_voltage(self):
        """Message field 'cell_under_voltage'."""
        return self._cell_under_voltage

    @cell_under_voltage.setter
    def cell_under_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cell_under_voltage' field must be of type 'bool'"
        self._cell_under_voltage = value

    @property
    def cell_volt_abnormal(self):
        """Message field 'cell_volt_abnormal'."""
        return self._cell_volt_abnormal

    @cell_volt_abnormal.setter
    def cell_volt_abnormal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cell_volt_abnormal' field must be of type 'bool'"
        self._cell_volt_abnormal = value

    @property
    def mos_over_temp(self):
        """Message field 'mos_over_temp'."""
        return self._mos_over_temp

    @mos_over_temp.setter
    def mos_over_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mos_over_temp' field must be of type 'bool'"
        self._mos_over_temp = value

    @property
    def discharge_short(self):
        """Message field 'discharge_short'."""
        return self._discharge_short

    @discharge_short.setter
    def discharge_short(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'discharge_short' field must be of type 'bool'"
        self._discharge_short = value

    @property
    def fuse(self):
        """Message field 'fuse'."""
        return self._fuse

    @fuse.setter
    def fuse(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fuse' field must be of type 'bool'"
        self._fuse = value

    @property
    def discharge_over_tmp(self):
        """Message field 'discharge_over_tmp'."""
        return self._discharge_over_tmp

    @discharge_over_tmp.setter
    def discharge_over_tmp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'discharge_over_tmp' field must be of type 'bool'"
        self._discharge_over_tmp = value

    @property
    def discharge_under_tmp(self):
        """Message field 'discharge_under_tmp'."""
        return self._discharge_under_tmp

    @discharge_under_tmp.setter
    def discharge_under_tmp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'discharge_under_tmp' field must be of type 'bool'"
        self._discharge_under_tmp = value

    @property
    def charge_over_temp(self):
        """Message field 'charge_over_temp'."""
        return self._charge_over_temp

    @charge_over_temp.setter
    def charge_over_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'charge_over_temp' field must be of type 'bool'"
        self._charge_over_temp = value

    @property
    def charge_under_temp(self):
        """Message field 'charge_under_temp'."""
        return self._charge_under_temp

    @charge_under_temp.setter
    def charge_under_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'charge_under_temp' field must be of type 'bool'"
        self._charge_under_temp = value

    @property
    def charge_mos_state(self):
        """Message field 'charge_mos_state'."""
        return self._charge_mos_state

    @charge_mos_state.setter
    def charge_mos_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'charge_mos_state' field must be of type 'bool'"
        self._charge_mos_state = value

    @property
    def discharge_mos_state(self):
        """Message field 'discharge_mos_state'."""
        return self._discharge_mos_state

    @discharge_mos_state.setter
    def discharge_mos_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'discharge_mos_state' field must be of type 'bool'"
        self._discharge_mos_state = value

    @property
    def chg_mos_fault(self):
        """Message field 'chg_mos_fault'."""
        return self._chg_mos_fault

    @chg_mos_fault.setter
    def chg_mos_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'chg_mos_fault' field must be of type 'bool'"
        self._chg_mos_fault = value

    @property
    def dsg_mos_fault(self):
        """Message field 'dsg_mos_fault'."""
        return self._dsg_mos_fault

    @dsg_mos_fault.setter
    def dsg_mos_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dsg_mos_fault' field must be of type 'bool'"
        self._dsg_mos_fault = value

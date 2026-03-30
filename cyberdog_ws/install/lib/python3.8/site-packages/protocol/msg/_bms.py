# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/Bms.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Bms(type):
    """Metaclass of message 'Bms'."""

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
                'protocol.msg.Bms')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Bms(metaclass=Metaclass_Bms):
    """Message class 'Bms'."""

    __slots__ = [
        '_batt_volt',
        '_batt_curr',
        '_batt_soc',
        '_batt_temp',
        '_batt_st',
        '_key_val',
        '_disable_charge',
        '_power_supply',
        '_buzze',
        '_status',
        '_batt_health',
        '_batt_loop_number',
        '_powerboard_status',
    ]

    _fields_and_field_types = {
        'batt_volt': 'uint16',
        'batt_curr': 'int16',
        'batt_soc': 'uint8',
        'batt_temp': 'int16',
        'batt_st': 'uint8',
        'key_val': 'uint8',
        'disable_charge': 'uint8',
        'power_supply': 'uint8',
        'buzze': 'uint8',
        'status': 'uint8',
        'batt_health': 'int8',
        'batt_loop_number': 'int16',
        'powerboard_status': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.batt_volt = kwargs.get('batt_volt', int())
        self.batt_curr = kwargs.get('batt_curr', int())
        self.batt_soc = kwargs.get('batt_soc', int())
        self.batt_temp = kwargs.get('batt_temp', int())
        self.batt_st = kwargs.get('batt_st', int())
        self.key_val = kwargs.get('key_val', int())
        self.disable_charge = kwargs.get('disable_charge', int())
        self.power_supply = kwargs.get('power_supply', int())
        self.buzze = kwargs.get('buzze', int())
        self.status = kwargs.get('status', int())
        self.batt_health = kwargs.get('batt_health', int())
        self.batt_loop_number = kwargs.get('batt_loop_number', int())
        self.powerboard_status = kwargs.get('powerboard_status', int())

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
        if self.batt_volt != other.batt_volt:
            return False
        if self.batt_curr != other.batt_curr:
            return False
        if self.batt_soc != other.batt_soc:
            return False
        if self.batt_temp != other.batt_temp:
            return False
        if self.batt_st != other.batt_st:
            return False
        if self.key_val != other.key_val:
            return False
        if self.disable_charge != other.disable_charge:
            return False
        if self.power_supply != other.power_supply:
            return False
        if self.buzze != other.buzze:
            return False
        if self.status != other.status:
            return False
        if self.batt_health != other.batt_health:
            return False
        if self.batt_loop_number != other.batt_loop_number:
            return False
        if self.powerboard_status != other.powerboard_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def key_val(self):
        """Message field 'key_val'."""
        return self._key_val

    @key_val.setter
    def key_val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'key_val' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'key_val' field must be an unsigned integer in [0, 255]"
        self._key_val = value

    @property
    def disable_charge(self):
        """Message field 'disable_charge'."""
        return self._disable_charge

    @disable_charge.setter
    def disable_charge(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'disable_charge' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'disable_charge' field must be an unsigned integer in [0, 255]"
        self._disable_charge = value

    @property
    def power_supply(self):
        """Message field 'power_supply'."""
        return self._power_supply

    @power_supply.setter
    def power_supply(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_supply' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_supply' field must be an unsigned integer in [0, 255]"
        self._power_supply = value

    @property
    def buzze(self):
        """Message field 'buzze'."""
        return self._buzze

    @buzze.setter
    def buzze(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buzze' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'buzze' field must be an unsigned integer in [0, 255]"
        self._buzze = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

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
    def powerboard_status(self):
        """Message field 'powerboard_status'."""
        return self._powerboard_status

    @powerboard_status.setter
    def powerboard_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'powerboard_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'powerboard_status' field must be an integer in [-128, 127]"
        self._powerboard_status = value

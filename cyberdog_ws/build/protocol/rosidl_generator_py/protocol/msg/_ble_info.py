# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/BLEInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BLEInfo(type):
    """Metaclass of message 'BLEInfo'."""

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
                'protocol.msg.BLEInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ble_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ble_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ble_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ble_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ble_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BLEInfo(metaclass=Metaclass_BLEInfo):
    """Message class 'BLEInfo'."""

    __slots__ = [
        '_mac',
        '_name',
        '_addr_type',
        '_device_type',
        '_battery_level',
        '_firmware_version',
    ]

    _fields_and_field_types = {
        'mac': 'string',
        'name': 'string',
        'addr_type': 'string',
        'device_type': 'uint8',
        'battery_level': 'float',
        'firmware_version': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mac = kwargs.get('mac', str())
        self.name = kwargs.get('name', str())
        self.addr_type = kwargs.get('addr_type', str())
        self.device_type = kwargs.get('device_type', int())
        self.battery_level = kwargs.get('battery_level', float())
        self.firmware_version = kwargs.get('firmware_version', str())

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
        if self.mac != other.mac:
            return False
        if self.name != other.name:
            return False
        if self.addr_type != other.addr_type:
            return False
        if self.device_type != other.device_type:
            return False
        if self.battery_level != other.battery_level:
            return False
        if self.firmware_version != other.firmware_version:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mac(self):
        """Message field 'mac'."""
        return self._mac

    @mac.setter
    def mac(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mac' field must be of type 'str'"
        self._mac = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def addr_type(self):
        """Message field 'addr_type'."""
        return self._addr_type

    @addr_type.setter
    def addr_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'addr_type' field must be of type 'str'"
        self._addr_type = value

    @property
    def device_type(self):
        """Message field 'device_type'."""
        return self._device_type

    @device_type.setter
    def device_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device_type' field must be an unsigned integer in [0, 255]"
        self._device_type = value

    @property
    def battery_level(self):
        """Message field 'battery_level'."""
        return self._battery_level

    @battery_level.setter
    def battery_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_level' field must be of type 'float'"
        self._battery_level = value

    @property
    def firmware_version(self):
        """Message field 'firmware_version'."""
        return self._firmware_version

    @firmware_version.setter
    def firmware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'firmware_version' field must be of type 'str'"
        self._firmware_version = value

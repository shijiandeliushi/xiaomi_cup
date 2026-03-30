# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/WifiStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WifiStatus(type):
    """Metaclass of message 'WifiStatus'."""

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
                'protocol.msg.WifiStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wifi_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wifi_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wifi_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wifi_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wifi_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WifiStatus(metaclass=Metaclass_WifiStatus):
    """Message class 'WifiStatus'."""

    __slots__ = [
        '_is_connected',
        '_ip',
        '_ssid',
        '_strength',
    ]

    _fields_and_field_types = {
        'is_connected': 'boolean',
        'ip': 'string',
        'ssid': 'string',
        'strength': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_connected = kwargs.get('is_connected', bool())
        self.ip = kwargs.get('ip', str())
        self.ssid = kwargs.get('ssid', str())
        self.strength = kwargs.get('strength', int())

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
        if self.is_connected != other.is_connected:
            return False
        if self.ip != other.ip:
            return False
        if self.ssid != other.ssid:
            return False
        if self.strength != other.strength:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def is_connected(self):
        """Message field 'is_connected'."""
        return self._is_connected

    @is_connected.setter
    def is_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_connected' field must be of type 'bool'"
        self._is_connected = value

    @property
    def ip(self):
        """Message field 'ip'."""
        return self._ip

    @ip.setter
    def ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ip' field must be of type 'str'"
        self._ip = value

    @property
    def ssid(self):
        """Message field 'ssid'."""
        return self._ssid

    @ssid.setter
    def ssid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ssid' field must be of type 'str'"
        self._ssid = value

    @property
    def strength(self):
        """Message field 'strength'."""
        return self._strength

    @strength.setter
    def strength(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strength' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'strength' field must be an unsigned integer in [0, 255]"
        self._strength = value

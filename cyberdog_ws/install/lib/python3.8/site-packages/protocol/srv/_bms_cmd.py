# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/BmsCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BmsCmd_Request(type):
    """Metaclass of message 'BmsCmd_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP': 1,
        'BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN': 2,
        'BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON': 3,
        'BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF': 4,
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
                'protocol.srv.BmsCmd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bms_cmd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bms_cmd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bms_cmd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bms_cmd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bms_cmd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP': cls.__constants['BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP'],
            'BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN': cls.__constants['BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN'],
            'BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON': cls.__constants['BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON'],
            'BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF': cls.__constants['BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF'],
        }

    @property
    def BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP(self):
        """Message constant 'BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP'."""
        return Metaclass_BmsCmd_Request.__constants['BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP']

    @property
    def BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN(self):
        """Message constant 'BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN'."""
        return Metaclass_BmsCmd_Request.__constants['BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN']

    @property
    def BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON(self):
        """Message constant 'BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON'."""
        return Metaclass_BmsCmd_Request.__constants['BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON']

    @property
    def BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF(self):
        """Message constant 'BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF'."""
        return Metaclass_BmsCmd_Request.__constants['BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF']


class BmsCmd_Request(metaclass=Metaclass_BmsCmd_Request):
    """
    Message class 'BmsCmd_Request'.

    Constants:
      BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP
      BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN
      BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON
      BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF
    """

    __slots__ = [
        '_electric_machine_command',
        '_wireless_charging_command',
    ]

    _fields_and_field_types = {
        'electric_machine_command': 'uint8',
        'wireless_charging_command': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.electric_machine_command = kwargs.get('electric_machine_command', int())
        self.wireless_charging_command = kwargs.get('wireless_charging_command', int())

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
        if self.electric_machine_command != other.electric_machine_command:
            return False
        if self.wireless_charging_command != other.wireless_charging_command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def electric_machine_command(self):
        """Message field 'electric_machine_command'."""
        return self._electric_machine_command

    @electric_machine_command.setter
    def electric_machine_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'electric_machine_command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'electric_machine_command' field must be an unsigned integer in [0, 255]"
        self._electric_machine_command = value

    @property
    def wireless_charging_command(self):
        """Message field 'wireless_charging_command'."""
        return self._wireless_charging_command

    @wireless_charging_command.setter
    def wireless_charging_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wireless_charging_command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wireless_charging_command' field must be an unsigned integer in [0, 255]"
        self._wireless_charging_command = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_BmsCmd_Response(type):
    """Metaclass of message 'BmsCmd_Response'."""

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
                'protocol.srv.BmsCmd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bms_cmd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bms_cmd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bms_cmd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bms_cmd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bms_cmd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BmsCmd_Response(metaclass=Metaclass_BmsCmd_Response):
    """Message class 'BmsCmd_Response'."""

    __slots__ = [
        '_success',
        '_code',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.code = kwargs.get('code', int())

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
        if self.success != other.success:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'code' field must be an integer in [-2147483648, 2147483647]"
        self._code = value


class Metaclass_BmsCmd(type):
    """Metaclass of service 'BmsCmd'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('protocol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'protocol.srv.BmsCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__bms_cmd

            from protocol.srv import _bms_cmd
            if _bms_cmd.Metaclass_BmsCmd_Request._TYPE_SUPPORT is None:
                _bms_cmd.Metaclass_BmsCmd_Request.__import_type_support__()
            if _bms_cmd.Metaclass_BmsCmd_Response._TYPE_SUPPORT is None:
                _bms_cmd.Metaclass_BmsCmd_Response.__import_type_support__()


class BmsCmd(metaclass=Metaclass_BmsCmd):
    from protocol.srv._bms_cmd import BmsCmd_Request as Request
    from protocol.srv._bms_cmd import BmsCmd_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

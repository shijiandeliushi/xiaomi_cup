# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/MachineState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MachineState_Request(type):
    """Metaclass of message 'MachineState_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MACHINE_STATE_ACTIVE': 0,
        'MACHINE_STATE_PROTECT': 1,
        'MACHINE_STATE_LOWPOWER': 2,
        'MACHINE_STATE_OTA': 3,
        'MACHINE_STATE_SHUTDOWN': 4,
        'MACHINE_STATE_SELFCHECK': 5,
        'MACHINE_STATE_DEACTIVE': 6,
        'MACHINE_STATE_ERROR': 7,
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
                'protocol.srv.MachineState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__machine_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__machine_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__machine_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__machine_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__machine_state__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MACHINE_STATE_ACTIVE': cls.__constants['MACHINE_STATE_ACTIVE'],
            'MACHINE_STATE_PROTECT': cls.__constants['MACHINE_STATE_PROTECT'],
            'MACHINE_STATE_LOWPOWER': cls.__constants['MACHINE_STATE_LOWPOWER'],
            'MACHINE_STATE_OTA': cls.__constants['MACHINE_STATE_OTA'],
            'MACHINE_STATE_SHUTDOWN': cls.__constants['MACHINE_STATE_SHUTDOWN'],
            'MACHINE_STATE_SELFCHECK': cls.__constants['MACHINE_STATE_SELFCHECK'],
            'MACHINE_STATE_DEACTIVE': cls.__constants['MACHINE_STATE_DEACTIVE'],
            'MACHINE_STATE_ERROR': cls.__constants['MACHINE_STATE_ERROR'],
        }

    @property
    def MACHINE_STATE_ACTIVE(self):
        """Message constant 'MACHINE_STATE_ACTIVE'."""
        return Metaclass_MachineState_Request.__constants['MACHINE_STATE_ACTIVE']

    @property
    def MACHINE_STATE_PROTECT(self):
        """Message constant 'MACHINE_STATE_PROTECT'."""
        return Metaclass_MachineState_Request.__constants['MACHINE_STATE_PROTECT']

    @property
    def MACHINE_STATE_LOWPOWER(self):
        """Message constant 'MACHINE_STATE_LOWPOWER'."""
        return Metaclass_MachineState_Request.__constants['MACHINE_STATE_LOWPOWER']

    @property
    def MACHINE_STATE_OTA(self):
        """Message constant 'MACHINE_STATE_OTA'."""
        return Metaclass_MachineState_Request.__constants['MACHINE_STATE_OTA']

    @property
    def MACHINE_STATE_SHUTDOWN(self):
        """Message constant 'MACHINE_STATE_SHUTDOWN'."""
        return Metaclass_MachineState_Request.__constants['MACHINE_STATE_SHUTDOWN']

    @property
    def MACHINE_STATE_SELFCHECK(self):
        """Message constant 'MACHINE_STATE_SELFCHECK'."""
        return Metaclass_MachineState_Request.__constants['MACHINE_STATE_SELFCHECK']

    @property
    def MACHINE_STATE_DEACTIVE(self):
        """Message constant 'MACHINE_STATE_DEACTIVE'."""
        return Metaclass_MachineState_Request.__constants['MACHINE_STATE_DEACTIVE']

    @property
    def MACHINE_STATE_ERROR(self):
        """Message constant 'MACHINE_STATE_ERROR'."""
        return Metaclass_MachineState_Request.__constants['MACHINE_STATE_ERROR']


class MachineState_Request(metaclass=Metaclass_MachineState_Request):
    """
    Message class 'MachineState_Request'.

    Constants:
      MACHINE_STATE_ACTIVE
      MACHINE_STATE_PROTECT
      MACHINE_STATE_LOWPOWER
      MACHINE_STATE_OTA
      MACHINE_STATE_SHUTDOWN
      MACHINE_STATE_SELFCHECK
      MACHINE_STATE_DEACTIVE
      MACHINE_STATE_ERROR
    """

    __slots__ = [
        '_state',
        '_ticks',
    ]

    _fields_and_field_types = {
        'state': 'uint8',
        'ticks': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())
        self.ticks = kwargs.get('ticks', int())

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
        if self.state != other.state:
            return False
        if self.ticks != other.ticks:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @property
    def ticks(self):
        """Message field 'ticks'."""
        return self._ticks

    @ticks.setter
    def ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ticks' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ticks' field must be an unsigned integer in [0, 65535]"
        self._ticks = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MachineState_Response(type):
    """Metaclass of message 'MachineState_Response'."""

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
                'protocol.srv.MachineState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__machine_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__machine_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__machine_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__machine_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__machine_state__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MachineState_Response(metaclass=Metaclass_MachineState_Response):
    """Message class 'MachineState_Response'."""

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


class Metaclass_MachineState(type):
    """Metaclass of service 'MachineState'."""

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
                'protocol.srv.MachineState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__machine_state

            from protocol.srv import _machine_state
            if _machine_state.Metaclass_MachineState_Request._TYPE_SUPPORT is None:
                _machine_state.Metaclass_MachineState_Request.__import_type_support__()
            if _machine_state.Metaclass_MachineState_Response._TYPE_SUPPORT is None:
                _machine_state.Metaclass_MachineState_Response.__import_type_support__()


class MachineState(metaclass=Metaclass_MachineState):
    from protocol.srv._machine_state import MachineState_Request as Request
    from protocol.srv._machine_state import MachineState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

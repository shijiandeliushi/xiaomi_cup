# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/NavMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavMode_Request(type):
    """Metaclass of message 'NavMode_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NULL_SUBMODE': 0,
        'EXPLR_MAP_UPDATE': 1,
        'EXPLR_MAP_NEW': 2,
        'EXPLR_NAV_AB': 3,
        'TRACK_F': 4,
        'TRACK_S': 5,
        'MODE_STOP': 6,
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
                'protocol.srv.NavMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__nav_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__nav_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__nav_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__nav_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__nav_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NULL_SUBMODE': cls.__constants['NULL_SUBMODE'],
            'EXPLR_MAP_UPDATE': cls.__constants['EXPLR_MAP_UPDATE'],
            'EXPLR_MAP_NEW': cls.__constants['EXPLR_MAP_NEW'],
            'EXPLR_NAV_AB': cls.__constants['EXPLR_NAV_AB'],
            'TRACK_F': cls.__constants['TRACK_F'],
            'TRACK_S': cls.__constants['TRACK_S'],
            'MODE_STOP': cls.__constants['MODE_STOP'],
        }

    @property
    def NULL_SUBMODE(self):
        """Message constant 'NULL_SUBMODE'."""
        return Metaclass_NavMode_Request.__constants['NULL_SUBMODE']

    @property
    def EXPLR_MAP_UPDATE(self):
        """Message constant 'EXPLR_MAP_UPDATE'."""
        return Metaclass_NavMode_Request.__constants['EXPLR_MAP_UPDATE']

    @property
    def EXPLR_MAP_NEW(self):
        """Message constant 'EXPLR_MAP_NEW'."""
        return Metaclass_NavMode_Request.__constants['EXPLR_MAP_NEW']

    @property
    def EXPLR_NAV_AB(self):
        """Message constant 'EXPLR_NAV_AB'."""
        return Metaclass_NavMode_Request.__constants['EXPLR_NAV_AB']

    @property
    def TRACK_F(self):
        """Message constant 'TRACK_F'."""
        return Metaclass_NavMode_Request.__constants['TRACK_F']

    @property
    def TRACK_S(self):
        """Message constant 'TRACK_S'."""
        return Metaclass_NavMode_Request.__constants['TRACK_S']

    @property
    def MODE_STOP(self):
        """Message constant 'MODE_STOP'."""
        return Metaclass_NavMode_Request.__constants['MODE_STOP']


class NavMode_Request(metaclass=Metaclass_NavMode_Request):
    """
    Message class 'NavMode_Request'.

    Constants:
      NULL_SUBMODE
      EXPLR_MAP_UPDATE
      EXPLR_MAP_NEW
      EXPLR_NAV_AB
      TRACK_F
      TRACK_S
      MODE_STOP
    """

    __slots__ = [
        '_sub_mode',
    ]

    _fields_and_field_types = {
        'sub_mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sub_mode = kwargs.get('sub_mode', int())

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
        if self.sub_mode != other.sub_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sub_mode(self):
        """Message field 'sub_mode'."""
        return self._sub_mode

    @sub_mode.setter
    def sub_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sub_mode' field must be an unsigned integer in [0, 255]"
        self._sub_mode = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_NavMode_Response(type):
    """Metaclass of message 'NavMode_Response'."""

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
                'protocol.srv.NavMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__nav_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__nav_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__nav_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__nav_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__nav_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavMode_Response(metaclass=Metaclass_NavMode_Response):
    """Message class 'NavMode_Response'."""

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


class Metaclass_NavMode(type):
    """Metaclass of service 'NavMode'."""

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
                'protocol.srv.NavMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__nav_mode

            from protocol.srv import _nav_mode
            if _nav_mode.Metaclass_NavMode_Request._TYPE_SUPPORT is None:
                _nav_mode.Metaclass_NavMode_Request.__import_type_support__()
            if _nav_mode.Metaclass_NavMode_Response._TYPE_SUPPORT is None:
                _nav_mode.Metaclass_NavMode_Response.__import_type_support__()


class NavMode(metaclass=Metaclass_NavMode):
    from protocol.srv._nav_mode import NavMode_Request as Request
    from protocol.srv._nav_mode import NavMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

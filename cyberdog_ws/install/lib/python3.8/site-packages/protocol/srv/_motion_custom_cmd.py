# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/MotionCustomCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionCustomCmd_Request(type):
    """Metaclass of message 'MotionCustomCmd_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEFINITION': 0,
        'EXECUTION': 1,
        'APP': 0,
        'AUDIO': 1,
        'VIS': 2,
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
                'protocol.srv.MotionCustomCmd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motion_custom_cmd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motion_custom_cmd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motion_custom_cmd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motion_custom_cmd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motion_custom_cmd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEFINITION': cls.__constants['DEFINITION'],
            'EXECUTION': cls.__constants['EXECUTION'],
            'APP': cls.__constants['APP'],
            'AUDIO': cls.__constants['AUDIO'],
            'VIS': cls.__constants['VIS'],
        }

    @property
    def DEFINITION(self):
        """Message constant 'DEFINITION'."""
        return Metaclass_MotionCustomCmd_Request.__constants['DEFINITION']

    @property
    def EXECUTION(self):
        """Message constant 'EXECUTION'."""
        return Metaclass_MotionCustomCmd_Request.__constants['EXECUTION']

    @property
    def APP(self):
        """Message constant 'APP'."""
        return Metaclass_MotionCustomCmd_Request.__constants['APP']

    @property
    def AUDIO(self):
        """Message constant 'AUDIO'."""
        return Metaclass_MotionCustomCmd_Request.__constants['AUDIO']

    @property
    def VIS(self):
        """Message constant 'VIS'."""
        return Metaclass_MotionCustomCmd_Request.__constants['VIS']


class MotionCustomCmd_Request(metaclass=Metaclass_MotionCustomCmd_Request):
    """
    Message class 'MotionCustomCmd_Request'.

    Constants:
      DEFINITION
      EXECUTION
      APP
      AUDIO
      VIS
    """

    __slots__ = [
        '_cmd_type',
        '_cmd_source',
        '_motion_id',
    ]

    _fields_and_field_types = {
        'cmd_type': 'int32',
        'cmd_source': 'int32',
        'motion_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd_type = kwargs.get('cmd_type', int())
        self.cmd_source = kwargs.get('cmd_source', int())
        self.motion_id = kwargs.get('motion_id', int())

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
        if self.cmd_type != other.cmd_type:
            return False
        if self.cmd_source != other.cmd_source:
            return False
        if self.motion_id != other.motion_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cmd_type(self):
        """Message field 'cmd_type'."""
        return self._cmd_type

    @cmd_type.setter
    def cmd_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmd_type' field must be an integer in [-2147483648, 2147483647]"
        self._cmd_type = value

    @property
    def cmd_source(self):
        """Message field 'cmd_source'."""
        return self._cmd_source

    @cmd_source.setter
    def cmd_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_source' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmd_source' field must be an integer in [-2147483648, 2147483647]"
        self._cmd_source = value

    @property
    def motion_id(self):
        """Message field 'motion_id'."""
        return self._motion_id

    @motion_id.setter
    def motion_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motion_id' field must be an integer in [-2147483648, 2147483647]"
        self._motion_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MotionCustomCmd_Response(type):
    """Metaclass of message 'MotionCustomCmd_Response'."""

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
                'protocol.srv.MotionCustomCmd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motion_custom_cmd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motion_custom_cmd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motion_custom_cmd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motion_custom_cmd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motion_custom_cmd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionCustomCmd_Response(metaclass=Metaclass_MotionCustomCmd_Response):
    """Message class 'MotionCustomCmd_Response'."""

    __slots__ = [
        '_motion_id',
        '_result',
        '_code',
    ]

    _fields_and_field_types = {
        'motion_id': 'int32',
        'result': 'boolean',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion_id = kwargs.get('motion_id', int())
        self.result = kwargs.get('result', bool())
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
        if self.motion_id != other.motion_id:
            return False
        if self.result != other.result:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motion_id(self):
        """Message field 'motion_id'."""
        return self._motion_id

    @motion_id.setter
    def motion_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motion_id' field must be an integer in [-2147483648, 2147483647]"
        self._motion_id = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value

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


class Metaclass_MotionCustomCmd(type):
    """Metaclass of service 'MotionCustomCmd'."""

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
                'protocol.srv.MotionCustomCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motion_custom_cmd

            from protocol.srv import _motion_custom_cmd
            if _motion_custom_cmd.Metaclass_MotionCustomCmd_Request._TYPE_SUPPORT is None:
                _motion_custom_cmd.Metaclass_MotionCustomCmd_Request.__import_type_support__()
            if _motion_custom_cmd.Metaclass_MotionCustomCmd_Response._TYPE_SUPPORT is None:
                _motion_custom_cmd.Metaclass_MotionCustomCmd_Response.__import_type_support__()


class MotionCustomCmd(metaclass=Metaclass_MotionCustomCmd):
    from protocol.srv._motion_custom_cmd import MotionCustomCmd_Request as Request
    from protocol.srv._motion_custom_cmd import MotionCustomCmd_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

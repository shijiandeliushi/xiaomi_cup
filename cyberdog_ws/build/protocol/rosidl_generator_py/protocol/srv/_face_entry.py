# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/FaceEntry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaceEntry_Request(type):
    """Metaclass of message 'FaceEntry_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ADD_FACE': 0,
        'CANCLE_ADD_FACE': 1,
        'CONFIRM_LAST_FACE': 2,
        'UPDATE_FACE_ID': 3,
        'DELETE_FACE': 4,
        'GET_ALL_FACES': 5,
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
                'protocol.srv.FaceEntry_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_entry__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_entry__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_entry__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_entry__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_entry__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ADD_FACE': cls.__constants['ADD_FACE'],
            'CANCLE_ADD_FACE': cls.__constants['CANCLE_ADD_FACE'],
            'CONFIRM_LAST_FACE': cls.__constants['CONFIRM_LAST_FACE'],
            'UPDATE_FACE_ID': cls.__constants['UPDATE_FACE_ID'],
            'DELETE_FACE': cls.__constants['DELETE_FACE'],
            'GET_ALL_FACES': cls.__constants['GET_ALL_FACES'],
        }

    @property
    def ADD_FACE(self):
        """Message constant 'ADD_FACE'."""
        return Metaclass_FaceEntry_Request.__constants['ADD_FACE']

    @property
    def CANCLE_ADD_FACE(self):
        """Message constant 'CANCLE_ADD_FACE'."""
        return Metaclass_FaceEntry_Request.__constants['CANCLE_ADD_FACE']

    @property
    def CONFIRM_LAST_FACE(self):
        """Message constant 'CONFIRM_LAST_FACE'."""
        return Metaclass_FaceEntry_Request.__constants['CONFIRM_LAST_FACE']

    @property
    def UPDATE_FACE_ID(self):
        """Message constant 'UPDATE_FACE_ID'."""
        return Metaclass_FaceEntry_Request.__constants['UPDATE_FACE_ID']

    @property
    def DELETE_FACE(self):
        """Message constant 'DELETE_FACE'."""
        return Metaclass_FaceEntry_Request.__constants['DELETE_FACE']

    @property
    def GET_ALL_FACES(self):
        """Message constant 'GET_ALL_FACES'."""
        return Metaclass_FaceEntry_Request.__constants['GET_ALL_FACES']


class FaceEntry_Request(metaclass=Metaclass_FaceEntry_Request):
    """
    Message class 'FaceEntry_Request'.

    Constants:
      ADD_FACE
      CANCLE_ADD_FACE
      CONFIRM_LAST_FACE
      UPDATE_FACE_ID
      DELETE_FACE
      GET_ALL_FACES
    """

    __slots__ = [
        '_command',
        '_username',
        '_oriname',
        '_ishost',
    ]

    _fields_and_field_types = {
        'command': 'int32',
        'username': 'string',
        'oriname': 'string',
        'ishost': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())
        self.username = kwargs.get('username', str())
        self.oriname = kwargs.get('oriname', str())
        self.ishost = kwargs.get('ishost', bool())

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
        if self.command != other.command:
            return False
        if self.username != other.username:
            return False
        if self.oriname != other.oriname:
            return False
        if self.ishost != other.ishost:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'command' field must be an integer in [-2147483648, 2147483647]"
        self._command = value

    @property
    def username(self):
        """Message field 'username'."""
        return self._username

    @username.setter
    def username(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'username' field must be of type 'str'"
        self._username = value

    @property
    def oriname(self):
        """Message field 'oriname'."""
        return self._oriname

    @oriname.setter
    def oriname(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'oriname' field must be of type 'str'"
        self._oriname = value

    @property
    def ishost(self):
        """Message field 'ishost'."""
        return self._ishost

    @ishost.setter
    def ishost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ishost' field must be of type 'bool'"
        self._ishost = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FaceEntry_Response(type):
    """Metaclass of message 'FaceEntry_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_SUCCESS': 0,
        'RESULT_INVALID_ARGS': 5910,
        'RESULT_UNSUPPORTED': 5908,
        'RESULT_TIMEOUT': 5907,
        'RESULT_BUSY': 5911,
        'RESULT_INVALID_STATE': 5903,
        'RESULT_INNER_ERROR': 5904,
        'RESULT_UNDEFINED_ERROR': 5901,
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
                'protocol.srv.FaceEntry_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_entry__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_entry__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_entry__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_entry__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_entry__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_INVALID_ARGS': cls.__constants['RESULT_INVALID_ARGS'],
            'RESULT_UNSUPPORTED': cls.__constants['RESULT_UNSUPPORTED'],
            'RESULT_TIMEOUT': cls.__constants['RESULT_TIMEOUT'],
            'RESULT_BUSY': cls.__constants['RESULT_BUSY'],
            'RESULT_INVALID_STATE': cls.__constants['RESULT_INVALID_STATE'],
            'RESULT_INNER_ERROR': cls.__constants['RESULT_INNER_ERROR'],
            'RESULT_UNDEFINED_ERROR': cls.__constants['RESULT_UNDEFINED_ERROR'],
        }

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_FaceEntry_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_INVALID_ARGS(self):
        """Message constant 'RESULT_INVALID_ARGS'."""
        return Metaclass_FaceEntry_Response.__constants['RESULT_INVALID_ARGS']

    @property
    def RESULT_UNSUPPORTED(self):
        """Message constant 'RESULT_UNSUPPORTED'."""
        return Metaclass_FaceEntry_Response.__constants['RESULT_UNSUPPORTED']

    @property
    def RESULT_TIMEOUT(self):
        """Message constant 'RESULT_TIMEOUT'."""
        return Metaclass_FaceEntry_Response.__constants['RESULT_TIMEOUT']

    @property
    def RESULT_BUSY(self):
        """Message constant 'RESULT_BUSY'."""
        return Metaclass_FaceEntry_Response.__constants['RESULT_BUSY']

    @property
    def RESULT_INVALID_STATE(self):
        """Message constant 'RESULT_INVALID_STATE'."""
        return Metaclass_FaceEntry_Response.__constants['RESULT_INVALID_STATE']

    @property
    def RESULT_INNER_ERROR(self):
        """Message constant 'RESULT_INNER_ERROR'."""
        return Metaclass_FaceEntry_Response.__constants['RESULT_INNER_ERROR']

    @property
    def RESULT_UNDEFINED_ERROR(self):
        """Message constant 'RESULT_UNDEFINED_ERROR'."""
        return Metaclass_FaceEntry_Response.__constants['RESULT_UNDEFINED_ERROR']


class FaceEntry_Response(metaclass=Metaclass_FaceEntry_Response):
    """
    Message class 'FaceEntry_Response'.

    Constants:
      RESULT_SUCCESS
      RESULT_INVALID_ARGS
      RESULT_UNSUPPORTED
      RESULT_TIMEOUT
      RESULT_BUSY
      RESULT_INVALID_STATE
      RESULT_INNER_ERROR
      RESULT_UNDEFINED_ERROR
    """

    __slots__ = [
        '_result',
        '_allfaces',
        '_code',
    ]

    _fields_and_field_types = {
        'result': 'int32',
        'allfaces': 'string',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
        self.allfaces = kwargs.get('allfaces', str())
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
        if self.result != other.result:
            return False
        if self.allfaces != other.allfaces:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'result' field must be an integer in [-2147483648, 2147483647]"
        self._result = value

    @property
    def allfaces(self):
        """Message field 'allfaces'."""
        return self._allfaces

    @allfaces.setter
    def allfaces(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'allfaces' field must be of type 'str'"
        self._allfaces = value

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


class Metaclass_FaceEntry(type):
    """Metaclass of service 'FaceEntry'."""

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
                'protocol.srv.FaceEntry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__face_entry

            from protocol.srv import _face_entry
            if _face_entry.Metaclass_FaceEntry_Request._TYPE_SUPPORT is None:
                _face_entry.Metaclass_FaceEntry_Request.__import_type_support__()
            if _face_entry.Metaclass_FaceEntry_Response._TYPE_SUPPORT is None:
                _face_entry.Metaclass_FaceEntry_Response.__import_type_support__()


class FaceEntry(metaclass=Metaclass_FaceEntry):
    from protocol.srv._face_entry import FaceEntry_Request as Request
    from protocol.srv._face_entry import FaceEntry_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

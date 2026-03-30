# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/FaceRec.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaceRec_Request(type):
    """Metaclass of message 'FaceRec_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COMMAND_RECOGNITION_ALL': 0,
        'COMMAND_RECOGNITION_SINGLE': 1,
        'COMMAND_RECOGNITION_CANCEL': 2,
        'MAX_TIMEOUT': 300,
        'MIN_TIMEOUT': 30,
        'DEFAULT_TIMEOUT': 60,
        'ALGORITHM_LOAD_DURATION': 100,
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
                'protocol.srv.FaceRec_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_rec__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_rec__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_rec__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_rec__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_rec__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COMMAND_RECOGNITION_ALL': cls.__constants['COMMAND_RECOGNITION_ALL'],
            'COMMAND_RECOGNITION_SINGLE': cls.__constants['COMMAND_RECOGNITION_SINGLE'],
            'COMMAND_RECOGNITION_CANCEL': cls.__constants['COMMAND_RECOGNITION_CANCEL'],
            'MAX_TIMEOUT': cls.__constants['MAX_TIMEOUT'],
            'MIN_TIMEOUT': cls.__constants['MIN_TIMEOUT'],
            'DEFAULT_TIMEOUT': cls.__constants['DEFAULT_TIMEOUT'],
            'ALGORITHM_LOAD_DURATION': cls.__constants['ALGORITHM_LOAD_DURATION'],
        }

    @property
    def COMMAND_RECOGNITION_ALL(self):
        """Message constant 'COMMAND_RECOGNITION_ALL'."""
        return Metaclass_FaceRec_Request.__constants['COMMAND_RECOGNITION_ALL']

    @property
    def COMMAND_RECOGNITION_SINGLE(self):
        """Message constant 'COMMAND_RECOGNITION_SINGLE'."""
        return Metaclass_FaceRec_Request.__constants['COMMAND_RECOGNITION_SINGLE']

    @property
    def COMMAND_RECOGNITION_CANCEL(self):
        """Message constant 'COMMAND_RECOGNITION_CANCEL'."""
        return Metaclass_FaceRec_Request.__constants['COMMAND_RECOGNITION_CANCEL']

    @property
    def MAX_TIMEOUT(self):
        """Message constant 'MAX_TIMEOUT'."""
        return Metaclass_FaceRec_Request.__constants['MAX_TIMEOUT']

    @property
    def MIN_TIMEOUT(self):
        """Message constant 'MIN_TIMEOUT'."""
        return Metaclass_FaceRec_Request.__constants['MIN_TIMEOUT']

    @property
    def DEFAULT_TIMEOUT(self):
        """Message constant 'DEFAULT_TIMEOUT'."""
        return Metaclass_FaceRec_Request.__constants['DEFAULT_TIMEOUT']

    @property
    def ALGORITHM_LOAD_DURATION(self):
        """Message constant 'ALGORITHM_LOAD_DURATION'."""
        return Metaclass_FaceRec_Request.__constants['ALGORITHM_LOAD_DURATION']


class FaceRec_Request(metaclass=Metaclass_FaceRec_Request):
    """
    Message class 'FaceRec_Request'.

    Constants:
      COMMAND_RECOGNITION_ALL
      COMMAND_RECOGNITION_SINGLE
      COMMAND_RECOGNITION_CANCEL
      MAX_TIMEOUT
      MIN_TIMEOUT
      DEFAULT_TIMEOUT
      ALGORITHM_LOAD_DURATION
    """

    __slots__ = [
        '_command',
        '_username',
        '_id',
        '_timeout',
    ]

    _fields_and_field_types = {
        'command': 'int32',
        'username': 'string',
        'id': 'string',
        'timeout': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())
        self.username = kwargs.get('username', str())
        self.id = kwargs.get('id', str())
        self.timeout = kwargs.get('timeout', int())

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
        if self.id != other.id:
            return False
        if self.timeout != other.timeout:
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

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeout' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'timeout' field must be an integer in [-2147483648, 2147483647]"
        self._timeout = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FaceRec_Response(type):
    """Metaclass of message 'FaceRec_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ENABLE_SUCCESS': 0,
        'ENABLE_FAIL': 5901,
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
                'protocol.srv.FaceRec_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_rec__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_rec__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_rec__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_rec__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_rec__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ENABLE_SUCCESS': cls.__constants['ENABLE_SUCCESS'],
            'ENABLE_FAIL': cls.__constants['ENABLE_FAIL'],
        }

    @property
    def ENABLE_SUCCESS(self):
        """Message constant 'ENABLE_SUCCESS'."""
        return Metaclass_FaceRec_Response.__constants['ENABLE_SUCCESS']

    @property
    def ENABLE_FAIL(self):
        """Message constant 'ENABLE_FAIL'."""
        return Metaclass_FaceRec_Response.__constants['ENABLE_FAIL']


class FaceRec_Response(metaclass=Metaclass_FaceRec_Response):
    """
    Message class 'FaceRec_Response'.

    Constants:
      ENABLE_SUCCESS
      ENABLE_FAIL
    """

    __slots__ = [
        '_result',
        '_code',
    ]

    _fields_and_field_types = {
        'result': 'int32',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
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


class Metaclass_FaceRec(type):
    """Metaclass of service 'FaceRec'."""

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
                'protocol.srv.FaceRec')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__face_rec

            from protocol.srv import _face_rec
            if _face_rec.Metaclass_FaceRec_Request._TYPE_SUPPORT is None:
                _face_rec.Metaclass_FaceRec_Request.__import_type_support__()
            if _face_rec.Metaclass_FaceRec_Response._TYPE_SUPPORT is None:
                _face_rec.Metaclass_FaceRec_Response.__import_type_support__()


class FaceRec(metaclass=Metaclass_FaceRec):
    from protocol.srv._face_rec import FaceRec_Request as Request
    from protocol.srv._face_rec import FaceRec_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/FaceManager.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaceManager_Request(type):
    """Metaclass of message 'FaceManager_Request'."""

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
        'SET_CURRENT_ACCOUNT': 6,
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
                'protocol.srv.FaceManager_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_manager__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_manager__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_manager__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_manager__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_manager__request

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
            'SET_CURRENT_ACCOUNT': cls.__constants['SET_CURRENT_ACCOUNT'],
        }

    @property
    def ADD_FACE(self):
        """Message constant 'ADD_FACE'."""
        return Metaclass_FaceManager_Request.__constants['ADD_FACE']

    @property
    def CANCLE_ADD_FACE(self):
        """Message constant 'CANCLE_ADD_FACE'."""
        return Metaclass_FaceManager_Request.__constants['CANCLE_ADD_FACE']

    @property
    def CONFIRM_LAST_FACE(self):
        """Message constant 'CONFIRM_LAST_FACE'."""
        return Metaclass_FaceManager_Request.__constants['CONFIRM_LAST_FACE']

    @property
    def UPDATE_FACE_ID(self):
        """Message constant 'UPDATE_FACE_ID'."""
        return Metaclass_FaceManager_Request.__constants['UPDATE_FACE_ID']

    @property
    def DELETE_FACE(self):
        """Message constant 'DELETE_FACE'."""
        return Metaclass_FaceManager_Request.__constants['DELETE_FACE']

    @property
    def GET_ALL_FACES(self):
        """Message constant 'GET_ALL_FACES'."""
        return Metaclass_FaceManager_Request.__constants['GET_ALL_FACES']

    @property
    def SET_CURRENT_ACCOUNT(self):
        """Message constant 'SET_CURRENT_ACCOUNT'."""
        return Metaclass_FaceManager_Request.__constants['SET_CURRENT_ACCOUNT']


class FaceManager_Request(metaclass=Metaclass_FaceManager_Request):
    """
    Message class 'FaceManager_Request'.

    Constants:
      ADD_FACE
      CANCLE_ADD_FACE
      CONFIRM_LAST_FACE
      UPDATE_FACE_ID
      DELETE_FACE
      GET_ALL_FACES
      SET_CURRENT_ACCOUNT
    """

    __slots__ = [
        '_command',
        '_args',
        '_username',
        '_oriname',
        '_ishost',
    ]

    _fields_and_field_types = {
        'command': 'uint8',
        'args': 'string',
        'username': 'string',
        'oriname': 'string',
        'ishost': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())
        self.args = kwargs.get('args', str())
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
        if self.args != other.args:
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
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @property
    def args(self):
        """Message field 'args'."""
        return self._args

    @args.setter
    def args(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'args' field must be of type 'str'"
        self._args = value

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


class Metaclass_FaceManager_Response(type):
    """Metaclass of message 'FaceManager_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_SUCCESS': 0,
        'RESULT_INVALID_ARGS': 1,
        'RESULT_UNSUPPORTED': 2,
        'RESULT_TIMEOUT': 3,
        'RESULT_BUSY': 4,
        'RESULT_INVALID_STATE': 5,
        'RESULT_INNER_ERROR': 6,
        'RESULT_UNDEFINED_ERROR': 255,
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
                'protocol.srv.FaceManager_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_manager__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_manager__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_manager__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_manager__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_manager__response

            from protocol.msg import CompressedImage
            if CompressedImage.__class__._TYPE_SUPPORT is None:
                CompressedImage.__class__.__import_type_support__()

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
        return Metaclass_FaceManager_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_INVALID_ARGS(self):
        """Message constant 'RESULT_INVALID_ARGS'."""
        return Metaclass_FaceManager_Response.__constants['RESULT_INVALID_ARGS']

    @property
    def RESULT_UNSUPPORTED(self):
        """Message constant 'RESULT_UNSUPPORTED'."""
        return Metaclass_FaceManager_Response.__constants['RESULT_UNSUPPORTED']

    @property
    def RESULT_TIMEOUT(self):
        """Message constant 'RESULT_TIMEOUT'."""
        return Metaclass_FaceManager_Response.__constants['RESULT_TIMEOUT']

    @property
    def RESULT_BUSY(self):
        """Message constant 'RESULT_BUSY'."""
        return Metaclass_FaceManager_Response.__constants['RESULT_BUSY']

    @property
    def RESULT_INVALID_STATE(self):
        """Message constant 'RESULT_INVALID_STATE'."""
        return Metaclass_FaceManager_Response.__constants['RESULT_INVALID_STATE']

    @property
    def RESULT_INNER_ERROR(self):
        """Message constant 'RESULT_INNER_ERROR'."""
        return Metaclass_FaceManager_Response.__constants['RESULT_INNER_ERROR']

    @property
    def RESULT_UNDEFINED_ERROR(self):
        """Message constant 'RESULT_UNDEFINED_ERROR'."""
        return Metaclass_FaceManager_Response.__constants['RESULT_UNDEFINED_ERROR']


class FaceManager_Response(metaclass=Metaclass_FaceManager_Response):
    """
    Message class 'FaceManager_Response'.

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
        '_msg',
        '_face_images',
        '_code',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
        'msg': 'string',
        'face_images': 'sequence<protocol/CompressedImage>',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'CompressedImage')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
        self.msg = kwargs.get('msg', str())
        self.face_images = kwargs.get('face_images', [])
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
        if self.msg != other.msg:
            return False
        if self.face_images != other.face_images:
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
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value

    @property
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'msg' field must be of type 'str'"
        self._msg = value

    @property
    def face_images(self):
        """Message field 'face_images'."""
        return self._face_images

    @face_images.setter
    def face_images(self, value):
        if __debug__:
            from protocol.msg import CompressedImage
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, CompressedImage) for v in value) and
                 True), \
                "The 'face_images' field must be a set or sequence and each value of type 'CompressedImage'"
        self._face_images = value

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


class Metaclass_FaceManager(type):
    """Metaclass of service 'FaceManager'."""

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
                'protocol.srv.FaceManager')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__face_manager

            from protocol.srv import _face_manager
            if _face_manager.Metaclass_FaceManager_Request._TYPE_SUPPORT is None:
                _face_manager.Metaclass_FaceManager_Request.__import_type_support__()
            if _face_manager.Metaclass_FaceManager_Response._TYPE_SUPPORT is None:
                _face_manager.Metaclass_FaceManager_Response.__import_type_support__()


class FaceManager(metaclass=Metaclass_FaceManager):
    from protocol.srv._face_manager import FaceManager_Request as Request
    from protocol.srv._face_manager import FaceManager_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

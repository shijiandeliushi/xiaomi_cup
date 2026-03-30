# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/CameraService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraService_Request(type):
    """Metaclass of message 'CameraService_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SET_PARAMETERS': 0,
        'TAKE_PICTURE': 1,
        'START_RECORDING': 2,
        'STOP_RECORDING': 3,
        'GET_STATE': 4,
        'DELETE_FILE': 5,
        'GET_ALL_FILES': 6,
        'START_LIVE_STREAM': 7,
        'STOP_LIVE_STREAM': 8,
        'START_IMAGE_PUBLISH': 9,
        'STOP_IMAGE_PUBLISH': 10,
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
                'protocol.srv.CameraService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SET_PARAMETERS': cls.__constants['SET_PARAMETERS'],
            'TAKE_PICTURE': cls.__constants['TAKE_PICTURE'],
            'START_RECORDING': cls.__constants['START_RECORDING'],
            'STOP_RECORDING': cls.__constants['STOP_RECORDING'],
            'GET_STATE': cls.__constants['GET_STATE'],
            'DELETE_FILE': cls.__constants['DELETE_FILE'],
            'GET_ALL_FILES': cls.__constants['GET_ALL_FILES'],
            'START_LIVE_STREAM': cls.__constants['START_LIVE_STREAM'],
            'STOP_LIVE_STREAM': cls.__constants['STOP_LIVE_STREAM'],
            'START_IMAGE_PUBLISH': cls.__constants['START_IMAGE_PUBLISH'],
            'STOP_IMAGE_PUBLISH': cls.__constants['STOP_IMAGE_PUBLISH'],
        }

    @property
    def SET_PARAMETERS(self):
        """Message constant 'SET_PARAMETERS'."""
        return Metaclass_CameraService_Request.__constants['SET_PARAMETERS']

    @property
    def TAKE_PICTURE(self):
        """Message constant 'TAKE_PICTURE'."""
        return Metaclass_CameraService_Request.__constants['TAKE_PICTURE']

    @property
    def START_RECORDING(self):
        """Message constant 'START_RECORDING'."""
        return Metaclass_CameraService_Request.__constants['START_RECORDING']

    @property
    def STOP_RECORDING(self):
        """Message constant 'STOP_RECORDING'."""
        return Metaclass_CameraService_Request.__constants['STOP_RECORDING']

    @property
    def GET_STATE(self):
        """Message constant 'GET_STATE'."""
        return Metaclass_CameraService_Request.__constants['GET_STATE']

    @property
    def DELETE_FILE(self):
        """Message constant 'DELETE_FILE'."""
        return Metaclass_CameraService_Request.__constants['DELETE_FILE']

    @property
    def GET_ALL_FILES(self):
        """Message constant 'GET_ALL_FILES'."""
        return Metaclass_CameraService_Request.__constants['GET_ALL_FILES']

    @property
    def START_LIVE_STREAM(self):
        """Message constant 'START_LIVE_STREAM'."""
        return Metaclass_CameraService_Request.__constants['START_LIVE_STREAM']

    @property
    def STOP_LIVE_STREAM(self):
        """Message constant 'STOP_LIVE_STREAM'."""
        return Metaclass_CameraService_Request.__constants['STOP_LIVE_STREAM']

    @property
    def START_IMAGE_PUBLISH(self):
        """Message constant 'START_IMAGE_PUBLISH'."""
        return Metaclass_CameraService_Request.__constants['START_IMAGE_PUBLISH']

    @property
    def STOP_IMAGE_PUBLISH(self):
        """Message constant 'STOP_IMAGE_PUBLISH'."""
        return Metaclass_CameraService_Request.__constants['STOP_IMAGE_PUBLISH']


class CameraService_Request(metaclass=Metaclass_CameraService_Request):
    """
    Message class 'CameraService_Request'.

    Constants:
      SET_PARAMETERS
      TAKE_PICTURE
      START_RECORDING
      STOP_RECORDING
      GET_STATE
      DELETE_FILE
      GET_ALL_FILES
      START_LIVE_STREAM
      STOP_LIVE_STREAM
      START_IMAGE_PUBLISH
      STOP_IMAGE_PUBLISH
    """

    __slots__ = [
        '_command',
        '_args',
        '_width',
        '_height',
        '_fps',
    ]

    _fields_and_field_types = {
        'command': 'uint8',
        'args': 'string',
        'width': 'uint16',
        'height': 'uint16',
        'fps': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())
        self.args = kwargs.get('args', str())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.fps = kwargs.get('fps', int())

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
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.fps != other.fps:
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
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'width' field must be an unsigned integer in [0, 65535]"
        self._width = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'height' field must be an unsigned integer in [0, 65535]"
        self._height = value

    @property
    def fps(self):
        """Message field 'fps'."""
        return self._fps

    @fps.setter
    def fps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fps' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'fps' field must be an unsigned integer in [0, 65535]"
        self._fps = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraService_Response(type):
    """Metaclass of message 'CameraService_Response'."""

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
                'protocol.srv.CameraService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera_service__response

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
        return Metaclass_CameraService_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_INVALID_ARGS(self):
        """Message constant 'RESULT_INVALID_ARGS'."""
        return Metaclass_CameraService_Response.__constants['RESULT_INVALID_ARGS']

    @property
    def RESULT_UNSUPPORTED(self):
        """Message constant 'RESULT_UNSUPPORTED'."""
        return Metaclass_CameraService_Response.__constants['RESULT_UNSUPPORTED']

    @property
    def RESULT_TIMEOUT(self):
        """Message constant 'RESULT_TIMEOUT'."""
        return Metaclass_CameraService_Response.__constants['RESULT_TIMEOUT']

    @property
    def RESULT_BUSY(self):
        """Message constant 'RESULT_BUSY'."""
        return Metaclass_CameraService_Response.__constants['RESULT_BUSY']

    @property
    def RESULT_INVALID_STATE(self):
        """Message constant 'RESULT_INVALID_STATE'."""
        return Metaclass_CameraService_Response.__constants['RESULT_INVALID_STATE']

    @property
    def RESULT_INNER_ERROR(self):
        """Message constant 'RESULT_INNER_ERROR'."""
        return Metaclass_CameraService_Response.__constants['RESULT_INNER_ERROR']

    @property
    def RESULT_UNDEFINED_ERROR(self):
        """Message constant 'RESULT_UNDEFINED_ERROR'."""
        return Metaclass_CameraService_Response.__constants['RESULT_UNDEFINED_ERROR']


class CameraService_Response(metaclass=Metaclass_CameraService_Response):
    """
    Message class 'CameraService_Response'.

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
        '_code',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
        'msg': 'string',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
        self.msg = kwargs.get('msg', str())
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


class Metaclass_CameraService(type):
    """Metaclass of service 'CameraService'."""

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
                'protocol.srv.CameraService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__camera_service

            from protocol.srv import _camera_service
            if _camera_service.Metaclass_CameraService_Request._TYPE_SUPPORT is None:
                _camera_service.Metaclass_CameraService_Request.__import_type_support__()
            if _camera_service.Metaclass_CameraService_Response._TYPE_SUPPORT is None:
                _camera_service.Metaclass_CameraService_Response.__import_type_support__()


class CameraService(metaclass=Metaclass_CameraService):
    from protocol.srv._camera_service import CameraService_Request as Request
    from protocol.srv._camera_service import CameraService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

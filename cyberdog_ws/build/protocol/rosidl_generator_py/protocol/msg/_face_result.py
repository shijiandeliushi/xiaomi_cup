# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/FaceResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaceResult(type):
    """Metaclass of message 'FaceResult'."""

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
        'RESULT_NO_FACE_FOUND': 7,
        'RESULT_MULTI_FACE_FOUND': 8,
        'RESULT_KEEP_STABLE': 9,
        'RESULT_DEGREE_NOT_SATISFIED': 10,
        'RESULT_DISTANCE_NOT_SATISFIED': 11,
        'RESULT_DEGREE_HEAD_LEFT': 12,
        'RESULT_DEGREE_HEAD_RIGHT': 13,
        'RESULT_DEGREE_HEAD_DOWN': 14,
        'RESULT_DEGREE_HEAD_UP': 15,
        'RESULT_DEGREE_HEAD_TILT': 16,
        'RESULT_FACE_ALREADY_EXIST': 17,
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
                'protocol.msg.FaceResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__face_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__face_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__face_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__face_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__face_result

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
            'RESULT_NO_FACE_FOUND': cls.__constants['RESULT_NO_FACE_FOUND'],
            'RESULT_MULTI_FACE_FOUND': cls.__constants['RESULT_MULTI_FACE_FOUND'],
            'RESULT_KEEP_STABLE': cls.__constants['RESULT_KEEP_STABLE'],
            'RESULT_DEGREE_NOT_SATISFIED': cls.__constants['RESULT_DEGREE_NOT_SATISFIED'],
            'RESULT_DISTANCE_NOT_SATISFIED': cls.__constants['RESULT_DISTANCE_NOT_SATISFIED'],
            'RESULT_DEGREE_HEAD_LEFT': cls.__constants['RESULT_DEGREE_HEAD_LEFT'],
            'RESULT_DEGREE_HEAD_RIGHT': cls.__constants['RESULT_DEGREE_HEAD_RIGHT'],
            'RESULT_DEGREE_HEAD_DOWN': cls.__constants['RESULT_DEGREE_HEAD_DOWN'],
            'RESULT_DEGREE_HEAD_UP': cls.__constants['RESULT_DEGREE_HEAD_UP'],
            'RESULT_DEGREE_HEAD_TILT': cls.__constants['RESULT_DEGREE_HEAD_TILT'],
            'RESULT_FACE_ALREADY_EXIST': cls.__constants['RESULT_FACE_ALREADY_EXIST'],
            'RESULT_UNDEFINED_ERROR': cls.__constants['RESULT_UNDEFINED_ERROR'],
        }

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_FaceResult.__constants['RESULT_SUCCESS']

    @property
    def RESULT_INVALID_ARGS(self):
        """Message constant 'RESULT_INVALID_ARGS'."""
        return Metaclass_FaceResult.__constants['RESULT_INVALID_ARGS']

    @property
    def RESULT_UNSUPPORTED(self):
        """Message constant 'RESULT_UNSUPPORTED'."""
        return Metaclass_FaceResult.__constants['RESULT_UNSUPPORTED']

    @property
    def RESULT_TIMEOUT(self):
        """Message constant 'RESULT_TIMEOUT'."""
        return Metaclass_FaceResult.__constants['RESULT_TIMEOUT']

    @property
    def RESULT_BUSY(self):
        """Message constant 'RESULT_BUSY'."""
        return Metaclass_FaceResult.__constants['RESULT_BUSY']

    @property
    def RESULT_INVALID_STATE(self):
        """Message constant 'RESULT_INVALID_STATE'."""
        return Metaclass_FaceResult.__constants['RESULT_INVALID_STATE']

    @property
    def RESULT_INNER_ERROR(self):
        """Message constant 'RESULT_INNER_ERROR'."""
        return Metaclass_FaceResult.__constants['RESULT_INNER_ERROR']

    @property
    def RESULT_NO_FACE_FOUND(self):
        """Message constant 'RESULT_NO_FACE_FOUND'."""
        return Metaclass_FaceResult.__constants['RESULT_NO_FACE_FOUND']

    @property
    def RESULT_MULTI_FACE_FOUND(self):
        """Message constant 'RESULT_MULTI_FACE_FOUND'."""
        return Metaclass_FaceResult.__constants['RESULT_MULTI_FACE_FOUND']

    @property
    def RESULT_KEEP_STABLE(self):
        """Message constant 'RESULT_KEEP_STABLE'."""
        return Metaclass_FaceResult.__constants['RESULT_KEEP_STABLE']

    @property
    def RESULT_DEGREE_NOT_SATISFIED(self):
        """Message constant 'RESULT_DEGREE_NOT_SATISFIED'."""
        return Metaclass_FaceResult.__constants['RESULT_DEGREE_NOT_SATISFIED']

    @property
    def RESULT_DISTANCE_NOT_SATISFIED(self):
        """Message constant 'RESULT_DISTANCE_NOT_SATISFIED'."""
        return Metaclass_FaceResult.__constants['RESULT_DISTANCE_NOT_SATISFIED']

    @property
    def RESULT_DEGREE_HEAD_LEFT(self):
        """Message constant 'RESULT_DEGREE_HEAD_LEFT'."""
        return Metaclass_FaceResult.__constants['RESULT_DEGREE_HEAD_LEFT']

    @property
    def RESULT_DEGREE_HEAD_RIGHT(self):
        """Message constant 'RESULT_DEGREE_HEAD_RIGHT'."""
        return Metaclass_FaceResult.__constants['RESULT_DEGREE_HEAD_RIGHT']

    @property
    def RESULT_DEGREE_HEAD_DOWN(self):
        """Message constant 'RESULT_DEGREE_HEAD_DOWN'."""
        return Metaclass_FaceResult.__constants['RESULT_DEGREE_HEAD_DOWN']

    @property
    def RESULT_DEGREE_HEAD_UP(self):
        """Message constant 'RESULT_DEGREE_HEAD_UP'."""
        return Metaclass_FaceResult.__constants['RESULT_DEGREE_HEAD_UP']

    @property
    def RESULT_DEGREE_HEAD_TILT(self):
        """Message constant 'RESULT_DEGREE_HEAD_TILT'."""
        return Metaclass_FaceResult.__constants['RESULT_DEGREE_HEAD_TILT']

    @property
    def RESULT_FACE_ALREADY_EXIST(self):
        """Message constant 'RESULT_FACE_ALREADY_EXIST'."""
        return Metaclass_FaceResult.__constants['RESULT_FACE_ALREADY_EXIST']

    @property
    def RESULT_UNDEFINED_ERROR(self):
        """Message constant 'RESULT_UNDEFINED_ERROR'."""
        return Metaclass_FaceResult.__constants['RESULT_UNDEFINED_ERROR']


class FaceResult(metaclass=Metaclass_FaceResult):
    """
    Message class 'FaceResult'.

    Constants:
      RESULT_SUCCESS
      RESULT_INVALID_ARGS
      RESULT_UNSUPPORTED
      RESULT_TIMEOUT
      RESULT_BUSY
      RESULT_INVALID_STATE
      RESULT_INNER_ERROR
      RESULT_NO_FACE_FOUND
      RESULT_MULTI_FACE_FOUND
      RESULT_KEEP_STABLE
      RESULT_DEGREE_NOT_SATISFIED
      RESULT_DISTANCE_NOT_SATISFIED
      RESULT_DEGREE_HEAD_LEFT
      RESULT_DEGREE_HEAD_RIGHT
      RESULT_DEGREE_HEAD_DOWN
      RESULT_DEGREE_HEAD_UP
      RESULT_DEGREE_HEAD_TILT
      RESULT_FACE_ALREADY_EXIST
      RESULT_UNDEFINED_ERROR
    """

    __slots__ = [
        '_result',
        '_msg',
        '_face_images',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
        'msg': 'string',
        'face_images': 'sequence<protocol/CompressedImage>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'CompressedImage')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
        self.msg = kwargs.get('msg', str())
        self.face_images = kwargs.get('face_images', [])

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

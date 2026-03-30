# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/FaceRecognitionResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaceRecognitionResult(type):
    """Metaclass of message 'FaceRecognitionResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_SUCCESS': 0,
        'RESULT_TIMEOUT': 5907,
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
                'protocol.msg.FaceRecognitionResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__face_recognition_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__face_recognition_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__face_recognition_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__face_recognition_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__face_recognition_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_TIMEOUT': cls.__constants['RESULT_TIMEOUT'],
        }

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_FaceRecognitionResult.__constants['RESULT_SUCCESS']

    @property
    def RESULT_TIMEOUT(self):
        """Message constant 'RESULT_TIMEOUT'."""
        return Metaclass_FaceRecognitionResult.__constants['RESULT_TIMEOUT']


class FaceRecognitionResult(metaclass=Metaclass_FaceRecognitionResult):
    """
    Message class 'FaceRecognitionResult'.

    Constants:
      RESULT_SUCCESS
      RESULT_TIMEOUT
    """

    __slots__ = [
        '_username',
        '_result',
        '_id',
        '_age',
        '_emotion',
    ]

    _fields_and_field_types = {
        'username': 'string',
        'result': 'int32',
        'id': 'string',
        'age': 'float',
        'emotion': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.username = kwargs.get('username', str())
        self.result = kwargs.get('result', int())
        self.id = kwargs.get('id', str())
        self.age = kwargs.get('age', float())
        self.emotion = kwargs.get('emotion', float())

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
        if self.username != other.username:
            return False
        if self.result != other.result:
            return False
        if self.id != other.id:
            return False
        if self.age != other.age:
            return False
        if self.emotion != other.emotion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'age' field must be of type 'float'"
        self._age = value

    @property
    def emotion(self):
        """Message field 'emotion'."""
        return self._emotion

    @emotion.setter
    def emotion(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'emotion' field must be of type 'float'"
        self._emotion = value

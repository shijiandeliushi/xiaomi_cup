# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cyberdog_msg:msg/YamlParam.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'vecxd_value'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_YamlParam(type):
    """Metaclass of message 'YamlParam'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DOUBLE': 1,
        'S64': 2,
        'VEC_X_DOUBLE': 3,
        'MAT_X_DOUBLE': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cyberdog_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cyberdog_msg.msg.YamlParam')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__yaml_param
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__yaml_param
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__yaml_param
            cls._TYPE_SUPPORT = module.type_support_msg__msg__yaml_param
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__yaml_param

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DOUBLE': cls.__constants['DOUBLE'],
            'S64': cls.__constants['S64'],
            'VEC_X_DOUBLE': cls.__constants['VEC_X_DOUBLE'],
            'MAT_X_DOUBLE': cls.__constants['MAT_X_DOUBLE'],
        }

    @property
    def DOUBLE(self):
        """Message constant 'DOUBLE'."""
        return Metaclass_YamlParam.__constants['DOUBLE']

    @property
    def S64(self):
        """Message constant 'S64'."""
        return Metaclass_YamlParam.__constants['S64']

    @property
    def VEC_X_DOUBLE(self):
        """Message constant 'VEC_X_DOUBLE'."""
        return Metaclass_YamlParam.__constants['VEC_X_DOUBLE']

    @property
    def MAT_X_DOUBLE(self):
        """Message constant 'MAT_X_DOUBLE'."""
        return Metaclass_YamlParam.__constants['MAT_X_DOUBLE']


class YamlParam(metaclass=Metaclass_YamlParam):
    """
    Message class 'YamlParam'.

    Constants:
      DOUBLE
      S64
      VEC_X_DOUBLE
      MAT_X_DOUBLE
    """

    __slots__ = [
        '_name',
        '_kind',
        '_s64_value',
        '_double_value',
        '_vecxd_value',
        '_is_user',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'kind': 'uint64',
        's64_value': 'int64',
        'double_value': 'double',
        'vecxd_value': 'double[12]',
        'is_user': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 12),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.kind = kwargs.get('kind', int())
        self.s64_value = kwargs.get('s64_value', int())
        self.double_value = kwargs.get('double_value', float())
        if 'vecxd_value' not in kwargs:
            self.vecxd_value = numpy.zeros(12, dtype=numpy.float64)
        else:
            self.vecxd_value = numpy.array(kwargs.get('vecxd_value'), dtype=numpy.float64)
            assert self.vecxd_value.shape == (12, )
        self.is_user = kwargs.get('is_user', int())

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
        if self.name != other.name:
            return False
        if self.kind != other.kind:
            return False
        if self.s64_value != other.s64_value:
            return False
        if self.double_value != other.double_value:
            return False
        if all(self.vecxd_value != other.vecxd_value):
            return False
        if self.is_user != other.is_user:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def kind(self):
        """Message field 'kind'."""
        return self._kind

    @kind.setter
    def kind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kind' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'kind' field must be an unsigned integer in [0, 18446744073709551615]"
        self._kind = value

    @property
    def s64_value(self):
        """Message field 's64_value'."""
        return self._s64_value

    @s64_value.setter
    def s64_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 's64_value' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 's64_value' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._s64_value = value

    @property
    def double_value(self):
        """Message field 'double_value'."""
        return self._double_value

    @double_value.setter
    def double_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'double_value' field must be of type 'float'"
        self._double_value = value

    @property
    def vecxd_value(self):
        """Message field 'vecxd_value'."""
        return self._vecxd_value

    @vecxd_value.setter
    def vecxd_value(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'vecxd_value' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 12, \
                "The 'vecxd_value' numpy.ndarray() must have a size of 12"
            self._vecxd_value = value
            return
        if __debug__:
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
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'vecxd_value' field must be a set or sequence with length 12 and each value of type 'float'"
        self._vecxd_value = numpy.array(value, dtype=numpy.float64)

    @property
    def is_user(self):
        """Message field 'is_user'."""
        return self._is_user

    @is_user.setter
    def is_user(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_user' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'is_user' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._is_user = value

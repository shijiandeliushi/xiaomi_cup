# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cyberdog_msg:msg/ApplyForce.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'force'
# Member 'rel_pos'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApplyForce(type):
    """Metaclass of message 'ApplyForce'."""

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
            module = import_type_support('cyberdog_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cyberdog_msg.msg.ApplyForce')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__apply_force
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__apply_force
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__apply_force
            cls._TYPE_SUPPORT = module.type_support_msg__msg__apply_force
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__apply_force

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyForce(metaclass=Metaclass_ApplyForce):
    """Message class 'ApplyForce'."""

    __slots__ = [
        '_link_name',
        '_time',
        '_force',
        '_rel_pos',
    ]

    _fields_and_field_types = {
        'link_name': 'string',
        'time': 'double',
        'force': 'double[3]',
        'rel_pos': 'double[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.link_name = kwargs.get('link_name', str())
        self.time = kwargs.get('time', float())
        if 'force' not in kwargs:
            self.force = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.force = numpy.array(kwargs.get('force'), dtype=numpy.float64)
            assert self.force.shape == (3, )
        if 'rel_pos' not in kwargs:
            self.rel_pos = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.rel_pos = numpy.array(kwargs.get('rel_pos'), dtype=numpy.float64)
            assert self.rel_pos.shape == (3, )

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
        if self.link_name != other.link_name:
            return False
        if self.time != other.time:
            return False
        if all(self.force != other.force):
            return False
        if all(self.rel_pos != other.rel_pos):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def link_name(self):
        """Message field 'link_name'."""
        return self._link_name

    @link_name.setter
    def link_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link_name' field must be of type 'str'"
        self._link_name = value

    @property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
        self._time = value

    @property
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'force' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'force' numpy.ndarray() must have a size of 3"
            self._force = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'force' field must be a set or sequence with length 3 and each value of type 'float'"
        self._force = numpy.array(value, dtype=numpy.float64)

    @property
    def rel_pos(self):
        """Message field 'rel_pos'."""
        return self._rel_pos

    @rel_pos.setter
    def rel_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rel_pos' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'rel_pos' numpy.ndarray() must have a size of 3"
            self._rel_pos = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'rel_pos' field must be a set or sequence with length 3 and each value of type 'float'"
        self._rel_pos = numpy.array(value, dtype=numpy.float64)

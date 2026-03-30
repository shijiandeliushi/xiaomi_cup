# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/SingleTofPayload.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
# Member 'intensity'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SingleTofPayload(type):
    """Metaclass of message 'SingleTofPayload'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LEFT_HEAD': 0,
        'RIGHT_HEAD': 1,
        'LEFT_REAR': 2,
        'RIGHT_REAR': 3,
        'HEAD': 4,
        'REAR': 5,
        'TOF_DATA_NUM': 64,
        'SCALE_FACTOR': 0.001,
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
                'protocol.msg.SingleTofPayload')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__single_tof_payload
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__single_tof_payload
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__single_tof_payload
            cls._TYPE_SUPPORT = module.type_support_msg__msg__single_tof_payload
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__single_tof_payload

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LEFT_HEAD': cls.__constants['LEFT_HEAD'],
            'RIGHT_HEAD': cls.__constants['RIGHT_HEAD'],
            'LEFT_REAR': cls.__constants['LEFT_REAR'],
            'RIGHT_REAR': cls.__constants['RIGHT_REAR'],
            'HEAD': cls.__constants['HEAD'],
            'REAR': cls.__constants['REAR'],
            'TOF_DATA_NUM': cls.__constants['TOF_DATA_NUM'],
            'SCALE_FACTOR': cls.__constants['SCALE_FACTOR'],
        }

    @property
    def LEFT_HEAD(self):
        """Message constant 'LEFT_HEAD'."""
        return Metaclass_SingleTofPayload.__constants['LEFT_HEAD']

    @property
    def RIGHT_HEAD(self):
        """Message constant 'RIGHT_HEAD'."""
        return Metaclass_SingleTofPayload.__constants['RIGHT_HEAD']

    @property
    def LEFT_REAR(self):
        """Message constant 'LEFT_REAR'."""
        return Metaclass_SingleTofPayload.__constants['LEFT_REAR']

    @property
    def RIGHT_REAR(self):
        """Message constant 'RIGHT_REAR'."""
        return Metaclass_SingleTofPayload.__constants['RIGHT_REAR']

    @property
    def HEAD(self):
        """Message constant 'HEAD'."""
        return Metaclass_SingleTofPayload.__constants['HEAD']

    @property
    def REAR(self):
        """Message constant 'REAR'."""
        return Metaclass_SingleTofPayload.__constants['REAR']

    @property
    def TOF_DATA_NUM(self):
        """Message constant 'TOF_DATA_NUM'."""
        return Metaclass_SingleTofPayload.__constants['TOF_DATA_NUM']

    @property
    def SCALE_FACTOR(self):
        """Message constant 'SCALE_FACTOR'."""
        return Metaclass_SingleTofPayload.__constants['SCALE_FACTOR']


class SingleTofPayload(metaclass=Metaclass_SingleTofPayload):
    """
    Message class 'SingleTofPayload'.

    Constants:
      LEFT_HEAD
      RIGHT_HEAD
      LEFT_REAR
      RIGHT_REAR
      HEAD
      REAR
      TOF_DATA_NUM
      SCALE_FACTOR
    """

    __slots__ = [
        '_header',
        '_data_available',
        '_tof_position',
        '_data',
        '_intensity',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'data_available': 'boolean',
        'tof_position': 'uint8',
        'data': 'sequence<float>',
        'intensity': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.data_available = kwargs.get('data_available', bool())
        self.tof_position = kwargs.get('tof_position', int())
        self.data = array.array('f', kwargs.get('data', []))
        self.intensity = array.array('f', kwargs.get('intensity', []))

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
        if self.header != other.header:
            return False
        if self.data_available != other.data_available:
            return False
        if self.tof_position != other.tof_position:
            return False
        if self.data != other.data:
            return False
        if self.intensity != other.intensity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def data_available(self):
        """Message field 'data_available'."""
        return self._data_available

    @data_available.setter
    def data_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'data_available' field must be of type 'bool'"
        self._data_available = value

    @property
    def tof_position(self):
        """Message field 'tof_position'."""
        return self._tof_position

    @tof_position.setter
    def tof_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tof_position' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tof_position' field must be an unsigned integer in [0, 255]"
        self._tof_position = value

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'data' array.array() must have the type code of 'f'"
            self._data = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'data' field must be a set or sequence and each value of type 'float'"
        self._data = array.array('f', value)

    @property
    def intensity(self):
        """Message field 'intensity'."""
        return self._intensity

    @intensity.setter
    def intensity(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'intensity' array.array() must have the type code of 'f'"
            self._intensity = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'intensity' field must be a set or sequence and each value of type 'float'"
        self._intensity = array.array('f', value)

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/MotionSequenceGait.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionSequenceGait(type):
    """Metaclass of message 'MotionSequenceGait'."""

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
                'protocol.msg.MotionSequenceGait')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_sequence_gait
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_sequence_gait
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_sequence_gait
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_sequence_gait
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_sequence_gait

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionSequenceGait(metaclass=Metaclass_MotionSequenceGait):
    """Message class 'MotionSequenceGait'."""

    __slots__ = [
        '_right_forefoot',
        '_left_forefoot',
        '_right_hindfoot',
        '_left_hindfoot',
        '_duration',
    ]

    _fields_and_field_types = {
        'right_forefoot': 'boolean',
        'left_forefoot': 'boolean',
        'right_hindfoot': 'boolean',
        'left_hindfoot': 'boolean',
        'duration': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.right_forefoot = kwargs.get('right_forefoot', bool())
        self.left_forefoot = kwargs.get('left_forefoot', bool())
        self.right_hindfoot = kwargs.get('right_hindfoot', bool())
        self.left_hindfoot = kwargs.get('left_hindfoot', bool())
        self.duration = kwargs.get('duration', int())

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
        if self.right_forefoot != other.right_forefoot:
            return False
        if self.left_forefoot != other.left_forefoot:
            return False
        if self.right_hindfoot != other.right_hindfoot:
            return False
        if self.left_hindfoot != other.left_hindfoot:
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def right_forefoot(self):
        """Message field 'right_forefoot'."""
        return self._right_forefoot

    @right_forefoot.setter
    def right_forefoot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_forefoot' field must be of type 'bool'"
        self._right_forefoot = value

    @property
    def left_forefoot(self):
        """Message field 'left_forefoot'."""
        return self._left_forefoot

    @left_forefoot.setter
    def left_forefoot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_forefoot' field must be of type 'bool'"
        self._left_forefoot = value

    @property
    def right_hindfoot(self):
        """Message field 'right_hindfoot'."""
        return self._right_hindfoot

    @right_hindfoot.setter
    def right_hindfoot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_hindfoot' field must be of type 'bool'"
        self._right_hindfoot = value

    @property
    def left_hindfoot(self):
        """Message field 'left_hindfoot'."""
        return self._left_hindfoot

    @left_hindfoot.setter
    def left_hindfoot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_hindfoot' field must be of type 'bool'"
        self._left_hindfoot = value

    @property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'duration' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'duration' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._duration = value

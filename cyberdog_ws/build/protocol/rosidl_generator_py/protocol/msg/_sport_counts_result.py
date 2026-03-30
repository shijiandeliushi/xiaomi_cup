# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/SportCountsResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SportCountsResult(type):
    """Metaclass of message 'SportCountsResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALGO_OPEN': 0,
        'COUNT_COMPLETE_CLOSE': 1,
        'TIMEOUT_CLOSE': 2,
        'REQUEST_CLOSE': 3,
        'SPORT_SQUAT': 1,
        'SPORT_HIGHKNEES': 2,
        'SPORT_SITUP': 3,
        'SPORT_PRESSUP': 4,
        'SPORT_PLANK': 5,
        'SPORT_JUMPJACK': 6,
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
                'protocol.msg.SportCountsResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sport_counts_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sport_counts_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sport_counts_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sport_counts_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sport_counts_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALGO_OPEN': cls.__constants['ALGO_OPEN'],
            'COUNT_COMPLETE_CLOSE': cls.__constants['COUNT_COMPLETE_CLOSE'],
            'TIMEOUT_CLOSE': cls.__constants['TIMEOUT_CLOSE'],
            'REQUEST_CLOSE': cls.__constants['REQUEST_CLOSE'],
            'SPORT_SQUAT': cls.__constants['SPORT_SQUAT'],
            'SPORT_HIGHKNEES': cls.__constants['SPORT_HIGHKNEES'],
            'SPORT_SITUP': cls.__constants['SPORT_SITUP'],
            'SPORT_PRESSUP': cls.__constants['SPORT_PRESSUP'],
            'SPORT_PLANK': cls.__constants['SPORT_PLANK'],
            'SPORT_JUMPJACK': cls.__constants['SPORT_JUMPJACK'],
        }

    @property
    def ALGO_OPEN(self):
        """Message constant 'ALGO_OPEN'."""
        return Metaclass_SportCountsResult.__constants['ALGO_OPEN']

    @property
    def COUNT_COMPLETE_CLOSE(self):
        """Message constant 'COUNT_COMPLETE_CLOSE'."""
        return Metaclass_SportCountsResult.__constants['COUNT_COMPLETE_CLOSE']

    @property
    def TIMEOUT_CLOSE(self):
        """Message constant 'TIMEOUT_CLOSE'."""
        return Metaclass_SportCountsResult.__constants['TIMEOUT_CLOSE']

    @property
    def REQUEST_CLOSE(self):
        """Message constant 'REQUEST_CLOSE'."""
        return Metaclass_SportCountsResult.__constants['REQUEST_CLOSE']

    @property
    def SPORT_SQUAT(self):
        """Message constant 'SPORT_SQUAT'."""
        return Metaclass_SportCountsResult.__constants['SPORT_SQUAT']

    @property
    def SPORT_HIGHKNEES(self):
        """Message constant 'SPORT_HIGHKNEES'."""
        return Metaclass_SportCountsResult.__constants['SPORT_HIGHKNEES']

    @property
    def SPORT_SITUP(self):
        """Message constant 'SPORT_SITUP'."""
        return Metaclass_SportCountsResult.__constants['SPORT_SITUP']

    @property
    def SPORT_PRESSUP(self):
        """Message constant 'SPORT_PRESSUP'."""
        return Metaclass_SportCountsResult.__constants['SPORT_PRESSUP']

    @property
    def SPORT_PLANK(self):
        """Message constant 'SPORT_PLANK'."""
        return Metaclass_SportCountsResult.__constants['SPORT_PLANK']

    @property
    def SPORT_JUMPJACK(self):
        """Message constant 'SPORT_JUMPJACK'."""
        return Metaclass_SportCountsResult.__constants['SPORT_JUMPJACK']


class SportCountsResult(metaclass=Metaclass_SportCountsResult):
    """
    Message class 'SportCountsResult'.

    Constants:
      ALGO_OPEN
      COUNT_COMPLETE_CLOSE
      TIMEOUT_CLOSE
      REQUEST_CLOSE
      SPORT_SQUAT
      SPORT_HIGHKNEES
      SPORT_SITUP
      SPORT_PRESSUP
      SPORT_PLANK
      SPORT_JUMPJACK
    """

    __slots__ = [
        '_algo_switch',
        '_sport_type',
        '_counts',
        '_duration',
    ]

    _fields_and_field_types = {
        'algo_switch': 'uint8',
        'sport_type': 'int32',
        'counts': 'int32',
        'duration': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.algo_switch = kwargs.get('algo_switch', int())
        self.sport_type = kwargs.get('sport_type', int())
        self.counts = kwargs.get('counts', int())
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
        if self.algo_switch != other.algo_switch:
            return False
        if self.sport_type != other.sport_type:
            return False
        if self.counts != other.counts:
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def algo_switch(self):
        """Message field 'algo_switch'."""
        return self._algo_switch

    @algo_switch.setter
    def algo_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'algo_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'algo_switch' field must be an unsigned integer in [0, 255]"
        self._algo_switch = value

    @property
    def sport_type(self):
        """Message field 'sport_type'."""
        return self._sport_type

    @sport_type.setter
    def sport_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sport_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sport_type' field must be an integer in [-2147483648, 2147483647]"
        self._sport_type = value

    @property
    def counts(self):
        """Message field 'counts'."""
        return self._counts

    @counts.setter
    def counts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'counts' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'counts' field must be an integer in [-2147483648, 2147483647]"
        self._counts = value

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'duration' field must be an integer in [-2147483648, 2147483647]"
        self._duration = value

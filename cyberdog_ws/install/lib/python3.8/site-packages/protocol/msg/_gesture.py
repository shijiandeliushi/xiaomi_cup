# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/Gesture.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gesture(type):
    """Metaclass of message 'Gesture'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GESTURE_OK': 0,
        'GESTURE_FAST_BACKWARD': 1,
        'GESTURE_FAST_FORWARD': 2,
        'GESTURE_STOP_LEFT': 3,
        'GESTURE_STOP_RIGHT': 4,
        'GESTURE_THUMBS_UP': 5,
        'GESTURE_SHHH': 6,
        'GESTURE_FIST': 7,
        'GESTURE_PALM2FIST': 8,
        'GESTURE_INVALID': 9,
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
                'protocol.msg.Gesture')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gesture
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gesture
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gesture
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gesture
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gesture

            from sensor_msgs.msg import RegionOfInterest
            if RegionOfInterest.__class__._TYPE_SUPPORT is None:
                RegionOfInterest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GESTURE_OK': cls.__constants['GESTURE_OK'],
            'GESTURE_FAST_BACKWARD': cls.__constants['GESTURE_FAST_BACKWARD'],
            'GESTURE_FAST_FORWARD': cls.__constants['GESTURE_FAST_FORWARD'],
            'GESTURE_STOP_LEFT': cls.__constants['GESTURE_STOP_LEFT'],
            'GESTURE_STOP_RIGHT': cls.__constants['GESTURE_STOP_RIGHT'],
            'GESTURE_THUMBS_UP': cls.__constants['GESTURE_THUMBS_UP'],
            'GESTURE_SHHH': cls.__constants['GESTURE_SHHH'],
            'GESTURE_FIST': cls.__constants['GESTURE_FIST'],
            'GESTURE_PALM2FIST': cls.__constants['GESTURE_PALM2FIST'],
            'GESTURE_INVALID': cls.__constants['GESTURE_INVALID'],
        }

    @property
    def GESTURE_OK(self):
        """Message constant 'GESTURE_OK'."""
        return Metaclass_Gesture.__constants['GESTURE_OK']

    @property
    def GESTURE_FAST_BACKWARD(self):
        """Message constant 'GESTURE_FAST_BACKWARD'."""
        return Metaclass_Gesture.__constants['GESTURE_FAST_BACKWARD']

    @property
    def GESTURE_FAST_FORWARD(self):
        """Message constant 'GESTURE_FAST_FORWARD'."""
        return Metaclass_Gesture.__constants['GESTURE_FAST_FORWARD']

    @property
    def GESTURE_STOP_LEFT(self):
        """Message constant 'GESTURE_STOP_LEFT'."""
        return Metaclass_Gesture.__constants['GESTURE_STOP_LEFT']

    @property
    def GESTURE_STOP_RIGHT(self):
        """Message constant 'GESTURE_STOP_RIGHT'."""
        return Metaclass_Gesture.__constants['GESTURE_STOP_RIGHT']

    @property
    def GESTURE_THUMBS_UP(self):
        """Message constant 'GESTURE_THUMBS_UP'."""
        return Metaclass_Gesture.__constants['GESTURE_THUMBS_UP']

    @property
    def GESTURE_SHHH(self):
        """Message constant 'GESTURE_SHHH'."""
        return Metaclass_Gesture.__constants['GESTURE_SHHH']

    @property
    def GESTURE_FIST(self):
        """Message constant 'GESTURE_FIST'."""
        return Metaclass_Gesture.__constants['GESTURE_FIST']

    @property
    def GESTURE_PALM2FIST(self):
        """Message constant 'GESTURE_PALM2FIST'."""
        return Metaclass_Gesture.__constants['GESTURE_PALM2FIST']

    @property
    def GESTURE_INVALID(self):
        """Message constant 'GESTURE_INVALID'."""
        return Metaclass_Gesture.__constants['GESTURE_INVALID']


class Gesture(metaclass=Metaclass_Gesture):
    """
    Message class 'Gesture'.

    Constants:
      GESTURE_OK
      GESTURE_FAST_BACKWARD
      GESTURE_FAST_FORWARD
      GESTURE_STOP_LEFT
      GESTURE_STOP_RIGHT
      GESTURE_THUMBS_UP
      GESTURE_SHHH
      GESTURE_FIST
      GESTURE_PALM2FIST
      GESTURE_INVALID
    """

    __slots__ = [
        '_roi',
        '_cls',
    ]

    _fields_and_field_types = {
        'roi': 'sensor_msgs/RegionOfInterest',
        'cls': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import RegionOfInterest
        self.roi = kwargs.get('roi', RegionOfInterest())
        self.cls = kwargs.get('cls', int())

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
        if self.roi != other.roi:
            return False
        if self.cls != other.cls:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def roi(self):
        """Message field 'roi'."""
        return self._roi

    @roi.setter
    def roi(self, value):
        if __debug__:
            from sensor_msgs.msg import RegionOfInterest
            assert \
                isinstance(value, RegionOfInterest), \
                "The 'roi' field must be a sub message of type 'RegionOfInterest'"
        self._roi = value

    @property
    def cls(self):
        """Message field 'cls'."""
        return self._cls

    @cls.setter
    def cls(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cls' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cls' field must be an integer in [-2147483648, 2147483647]"
        self._cls = value

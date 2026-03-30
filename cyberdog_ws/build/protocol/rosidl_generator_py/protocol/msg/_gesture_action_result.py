# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/GestureActionResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GestureActionResult(type):
    """Metaclass of message 'GestureActionResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_GESTURE': 0,
        'PULLING_HAND_OR_TWO_FINGERS_IN': 1,
        'PUSHING_HAND_OR_TWO_FINGERS_AWAY': 2,
        'SLIDING_HAND_OR_TWO_FINGERS_UP': 3,
        'SLIDING_HAND_OR_TWO_FINGERS_DOWN': 4,
        'SLIDING_HAND_OR_TWO_FINGERS_LEFT': 5,
        'SLIDING_HAND_OR_TWO_FINGERS_RIGHT': 6,
        'STOP_SIGN': 7,
        'THUMB_UP': 8,
        'ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS': 9,
        'ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS': 10,
        'THUMB_DOWN': 11,
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
                'protocol.msg.GestureActionResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gesture_action_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gesture_action_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gesture_action_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gesture_action_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gesture_action_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_GESTURE': cls.__constants['NO_GESTURE'],
            'PULLING_HAND_OR_TWO_FINGERS_IN': cls.__constants['PULLING_HAND_OR_TWO_FINGERS_IN'],
            'PUSHING_HAND_OR_TWO_FINGERS_AWAY': cls.__constants['PUSHING_HAND_OR_TWO_FINGERS_AWAY'],
            'SLIDING_HAND_OR_TWO_FINGERS_UP': cls.__constants['SLIDING_HAND_OR_TWO_FINGERS_UP'],
            'SLIDING_HAND_OR_TWO_FINGERS_DOWN': cls.__constants['SLIDING_HAND_OR_TWO_FINGERS_DOWN'],
            'SLIDING_HAND_OR_TWO_FINGERS_LEFT': cls.__constants['SLIDING_HAND_OR_TWO_FINGERS_LEFT'],
            'SLIDING_HAND_OR_TWO_FINGERS_RIGHT': cls.__constants['SLIDING_HAND_OR_TWO_FINGERS_RIGHT'],
            'STOP_SIGN': cls.__constants['STOP_SIGN'],
            'THUMB_UP': cls.__constants['THUMB_UP'],
            'ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS': cls.__constants['ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS'],
            'ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS': cls.__constants['ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS'],
            'THUMB_DOWN': cls.__constants['THUMB_DOWN'],
        }

    @property
    def NO_GESTURE(self):
        """Message constant 'NO_GESTURE'."""
        return Metaclass_GestureActionResult.__constants['NO_GESTURE']

    @property
    def PULLING_HAND_OR_TWO_FINGERS_IN(self):
        """Message constant 'PULLING_HAND_OR_TWO_FINGERS_IN'."""
        return Metaclass_GestureActionResult.__constants['PULLING_HAND_OR_TWO_FINGERS_IN']

    @property
    def PUSHING_HAND_OR_TWO_FINGERS_AWAY(self):
        """Message constant 'PUSHING_HAND_OR_TWO_FINGERS_AWAY'."""
        return Metaclass_GestureActionResult.__constants['PUSHING_HAND_OR_TWO_FINGERS_AWAY']

    @property
    def SLIDING_HAND_OR_TWO_FINGERS_UP(self):
        """Message constant 'SLIDING_HAND_OR_TWO_FINGERS_UP'."""
        return Metaclass_GestureActionResult.__constants['SLIDING_HAND_OR_TWO_FINGERS_UP']

    @property
    def SLIDING_HAND_OR_TWO_FINGERS_DOWN(self):
        """Message constant 'SLIDING_HAND_OR_TWO_FINGERS_DOWN'."""
        return Metaclass_GestureActionResult.__constants['SLIDING_HAND_OR_TWO_FINGERS_DOWN']

    @property
    def SLIDING_HAND_OR_TWO_FINGERS_LEFT(self):
        """Message constant 'SLIDING_HAND_OR_TWO_FINGERS_LEFT'."""
        return Metaclass_GestureActionResult.__constants['SLIDING_HAND_OR_TWO_FINGERS_LEFT']

    @property
    def SLIDING_HAND_OR_TWO_FINGERS_RIGHT(self):
        """Message constant 'SLIDING_HAND_OR_TWO_FINGERS_RIGHT'."""
        return Metaclass_GestureActionResult.__constants['SLIDING_HAND_OR_TWO_FINGERS_RIGHT']

    @property
    def STOP_SIGN(self):
        """Message constant 'STOP_SIGN'."""
        return Metaclass_GestureActionResult.__constants['STOP_SIGN']

    @property
    def THUMB_UP(self):
        """Message constant 'THUMB_UP'."""
        return Metaclass_GestureActionResult.__constants['THUMB_UP']

    @property
    def ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS(self):
        """Message constant 'ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS'."""
        return Metaclass_GestureActionResult.__constants['ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS']

    @property
    def ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS(self):
        """Message constant 'ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS'."""
        return Metaclass_GestureActionResult.__constants['ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS']

    @property
    def THUMB_DOWN(self):
        """Message constant 'THUMB_DOWN'."""
        return Metaclass_GestureActionResult.__constants['THUMB_DOWN']


class GestureActionResult(metaclass=Metaclass_GestureActionResult):
    """
    Message class 'GestureActionResult'.

    Constants:
      NO_GESTURE
      PULLING_HAND_OR_TWO_FINGERS_IN
      PUSHING_HAND_OR_TWO_FINGERS_AWAY
      SLIDING_HAND_OR_TWO_FINGERS_UP
      SLIDING_HAND_OR_TWO_FINGERS_DOWN
      SLIDING_HAND_OR_TWO_FINGERS_LEFT
      SLIDING_HAND_OR_TWO_FINGERS_RIGHT
      STOP_SIGN
      THUMB_UP
      ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS
      ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS
      THUMB_DOWN
    """

    __slots__ = [
        '_id',
    ]

    _fields_and_field_types = {
        'id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())

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
        if self.id != other.id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

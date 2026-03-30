# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/MotionSequenceParam.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionSequenceParam(type):
    """Metaclass of message 'MotionSequenceParam'."""

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
                'protocol.msg.MotionSequenceParam')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_sequence_param
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_sequence_param
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_sequence_param
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_sequence_param
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_sequence_param

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionSequenceParam(metaclass=Metaclass_MotionSequenceParam):
    """Message class 'MotionSequenceParam'."""

    __slots__ = [
        '_twist',
        '_centroid_height',
        '_right_forefoot',
        '_left_forefoot',
        '_right_hindfoot',
        '_left_hindfoot',
        '_forefoot_height',
        '_hindfoot_height',
        '_friction_coefficient',
        '_duration_ms',
    ]

    _fields_and_field_types = {
        'twist': 'geometry_msgs/Twist',
        'centroid_height': 'geometry_msgs/Point',
        'right_forefoot': 'geometry_msgs/Point',
        'left_forefoot': 'geometry_msgs/Point',
        'right_hindfoot': 'geometry_msgs/Point',
        'left_hindfoot': 'geometry_msgs/Point',
        'forefoot_height': 'float',
        'hindfoot_height': 'float',
        'friction_coefficient': 'float',
        'duration_ms': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Twist
        self.twist = kwargs.get('twist', Twist())
        from geometry_msgs.msg import Point
        self.centroid_height = kwargs.get('centroid_height', Point())
        from geometry_msgs.msg import Point
        self.right_forefoot = kwargs.get('right_forefoot', Point())
        from geometry_msgs.msg import Point
        self.left_forefoot = kwargs.get('left_forefoot', Point())
        from geometry_msgs.msg import Point
        self.right_hindfoot = kwargs.get('right_hindfoot', Point())
        from geometry_msgs.msg import Point
        self.left_hindfoot = kwargs.get('left_hindfoot', Point())
        self.forefoot_height = kwargs.get('forefoot_height', float())
        self.hindfoot_height = kwargs.get('hindfoot_height', float())
        self.friction_coefficient = kwargs.get('friction_coefficient', float())
        self.duration_ms = kwargs.get('duration_ms', int())

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
        if self.twist != other.twist:
            return False
        if self.centroid_height != other.centroid_height:
            return False
        if self.right_forefoot != other.right_forefoot:
            return False
        if self.left_forefoot != other.left_forefoot:
            return False
        if self.right_hindfoot != other.right_hindfoot:
            return False
        if self.left_hindfoot != other.left_hindfoot:
            return False
        if self.forefoot_height != other.forefoot_height:
            return False
        if self.hindfoot_height != other.hindfoot_height:
            return False
        if self.friction_coefficient != other.friction_coefficient:
            return False
        if self.duration_ms != other.duration_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'twist' field must be a sub message of type 'Twist'"
        self._twist = value

    @property
    def centroid_height(self):
        """Message field 'centroid_height'."""
        return self._centroid_height

    @centroid_height.setter
    def centroid_height(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'centroid_height' field must be a sub message of type 'Point'"
        self._centroid_height = value

    @property
    def right_forefoot(self):
        """Message field 'right_forefoot'."""
        return self._right_forefoot

    @right_forefoot.setter
    def right_forefoot(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'right_forefoot' field must be a sub message of type 'Point'"
        self._right_forefoot = value

    @property
    def left_forefoot(self):
        """Message field 'left_forefoot'."""
        return self._left_forefoot

    @left_forefoot.setter
    def left_forefoot(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'left_forefoot' field must be a sub message of type 'Point'"
        self._left_forefoot = value

    @property
    def right_hindfoot(self):
        """Message field 'right_hindfoot'."""
        return self._right_hindfoot

    @right_hindfoot.setter
    def right_hindfoot(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'right_hindfoot' field must be a sub message of type 'Point'"
        self._right_hindfoot = value

    @property
    def left_hindfoot(self):
        """Message field 'left_hindfoot'."""
        return self._left_hindfoot

    @left_hindfoot.setter
    def left_hindfoot(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'left_hindfoot' field must be a sub message of type 'Point'"
        self._left_hindfoot = value

    @property
    def forefoot_height(self):
        """Message field 'forefoot_height'."""
        return self._forefoot_height

    @forefoot_height.setter
    def forefoot_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forefoot_height' field must be of type 'float'"
        self._forefoot_height = value

    @property
    def hindfoot_height(self):
        """Message field 'hindfoot_height'."""
        return self._hindfoot_height

    @hindfoot_height.setter
    def hindfoot_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hindfoot_height' field must be of type 'float'"
        self._hindfoot_height = value

    @property
    def friction_coefficient(self):
        """Message field 'friction_coefficient'."""
        return self._friction_coefficient

    @friction_coefficient.setter
    def friction_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'friction_coefficient' field must be of type 'float'"
        self._friction_coefficient = value

    @property
    def duration_ms(self):
        """Message field 'duration_ms'."""
        return self._duration_ms

    @duration_ms.setter
    def duration_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'duration_ms' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'duration_ms' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._duration_ms = value

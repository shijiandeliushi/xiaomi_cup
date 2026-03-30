# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/MotionSequencePace.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionSequencePace(type):
    """Metaclass of message 'MotionSequencePace'."""

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
                'protocol.msg.MotionSequencePace')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_sequence_pace
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_sequence_pace
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_sequence_pace
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_sequence_pace
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_sequence_pace

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

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


class MotionSequencePace(metaclass=Metaclass_MotionSequencePace):
    """Message class 'MotionSequencePace'."""

    __slots__ = [
        '_twist',
        '_centroid',
        '_weight',
        '_right_forefoot',
        '_left_forefoot',
        '_right_hindfoot',
        '_left_hindfoot',
        '_friction_coefficient',
        '_landing_gain',
        '_use_mpc_track',
        '_duration',
    ]

    _fields_and_field_types = {
        'twist': 'geometry_msgs/Twist',
        'centroid': 'geometry_msgs/Pose',
        'weight': 'geometry_msgs/Twist',
        'right_forefoot': 'geometry_msgs/Quaternion',
        'left_forefoot': 'geometry_msgs/Quaternion',
        'right_hindfoot': 'geometry_msgs/Quaternion',
        'left_hindfoot': 'geometry_msgs/Quaternion',
        'friction_coefficient': 'float',
        'landing_gain': 'float',
        'use_mpc_track': 'boolean',
        'duration': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Twist
        self.twist = kwargs.get('twist', Twist())
        from geometry_msgs.msg import Pose
        self.centroid = kwargs.get('centroid', Pose())
        from geometry_msgs.msg import Twist
        self.weight = kwargs.get('weight', Twist())
        from geometry_msgs.msg import Quaternion
        self.right_forefoot = kwargs.get('right_forefoot', Quaternion())
        from geometry_msgs.msg import Quaternion
        self.left_forefoot = kwargs.get('left_forefoot', Quaternion())
        from geometry_msgs.msg import Quaternion
        self.right_hindfoot = kwargs.get('right_hindfoot', Quaternion())
        from geometry_msgs.msg import Quaternion
        self.left_hindfoot = kwargs.get('left_hindfoot', Quaternion())
        self.friction_coefficient = kwargs.get('friction_coefficient', float())
        self.landing_gain = kwargs.get('landing_gain', float())
        self.use_mpc_track = kwargs.get('use_mpc_track', bool())
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
        if self.twist != other.twist:
            return False
        if self.centroid != other.centroid:
            return False
        if self.weight != other.weight:
            return False
        if self.right_forefoot != other.right_forefoot:
            return False
        if self.left_forefoot != other.left_forefoot:
            return False
        if self.right_hindfoot != other.right_hindfoot:
            return False
        if self.left_hindfoot != other.left_hindfoot:
            return False
        if self.friction_coefficient != other.friction_coefficient:
            return False
        if self.landing_gain != other.landing_gain:
            return False
        if self.use_mpc_track != other.use_mpc_track:
            return False
        if self.duration != other.duration:
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
    def centroid(self):
        """Message field 'centroid'."""
        return self._centroid

    @centroid.setter
    def centroid(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'centroid' field must be a sub message of type 'Pose'"
        self._centroid = value

    @property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'weight' field must be a sub message of type 'Twist'"
        self._weight = value

    @property
    def right_forefoot(self):
        """Message field 'right_forefoot'."""
        return self._right_forefoot

    @right_forefoot.setter
    def right_forefoot(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'right_forefoot' field must be a sub message of type 'Quaternion'"
        self._right_forefoot = value

    @property
    def left_forefoot(self):
        """Message field 'left_forefoot'."""
        return self._left_forefoot

    @left_forefoot.setter
    def left_forefoot(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'left_forefoot' field must be a sub message of type 'Quaternion'"
        self._left_forefoot = value

    @property
    def right_hindfoot(self):
        """Message field 'right_hindfoot'."""
        return self._right_hindfoot

    @right_hindfoot.setter
    def right_hindfoot(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'right_hindfoot' field must be a sub message of type 'Quaternion'"
        self._right_hindfoot = value

    @property
    def left_hindfoot(self):
        """Message field 'left_hindfoot'."""
        return self._left_hindfoot

    @left_hindfoot.setter
    def left_hindfoot(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'left_hindfoot' field must be a sub message of type 'Quaternion'"
        self._left_hindfoot = value

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
    def landing_gain(self):
        """Message field 'landing_gain'."""
        return self._landing_gain

    @landing_gain.setter
    def landing_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'landing_gain' field must be of type 'float'"
        self._landing_gain = value

    @property
    def use_mpc_track(self):
        """Message field 'use_mpc_track'."""
        return self._use_mpc_track

    @use_mpc_track.setter
    def use_mpc_track(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_mpc_track' field must be of type 'bool'"
        self._use_mpc_track = value

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

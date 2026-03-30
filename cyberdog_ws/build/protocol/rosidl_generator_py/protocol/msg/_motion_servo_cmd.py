# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/MotionServoCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'vel_des'
# Member 'rpy_des'
# Member 'pos_des'
# Member 'acc_des'
# Member 'ctrl_point'
# Member 'foot_pose'
# Member 'step_height'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionServoCmd(type):
    """Metaclass of message 'MotionServoCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SERVO_START': 0,
        'SERVO_DATA': 1,
        'SERVO_END': 2,
        'APP': 0,
        'AUDIO': 1,
        'VIS': 2,
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
                'protocol.msg.MotionServoCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_servo_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_servo_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_servo_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_servo_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_servo_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SERVO_START': cls.__constants['SERVO_START'],
            'SERVO_DATA': cls.__constants['SERVO_DATA'],
            'SERVO_END': cls.__constants['SERVO_END'],
            'APP': cls.__constants['APP'],
            'AUDIO': cls.__constants['AUDIO'],
            'VIS': cls.__constants['VIS'],
        }

    @property
    def SERVO_START(self):
        """Message constant 'SERVO_START'."""
        return Metaclass_MotionServoCmd.__constants['SERVO_START']

    @property
    def SERVO_DATA(self):
        """Message constant 'SERVO_DATA'."""
        return Metaclass_MotionServoCmd.__constants['SERVO_DATA']

    @property
    def SERVO_END(self):
        """Message constant 'SERVO_END'."""
        return Metaclass_MotionServoCmd.__constants['SERVO_END']

    @property
    def APP(self):
        """Message constant 'APP'."""
        return Metaclass_MotionServoCmd.__constants['APP']

    @property
    def AUDIO(self):
        """Message constant 'AUDIO'."""
        return Metaclass_MotionServoCmd.__constants['AUDIO']

    @property
    def VIS(self):
        """Message constant 'VIS'."""
        return Metaclass_MotionServoCmd.__constants['VIS']


class MotionServoCmd(metaclass=Metaclass_MotionServoCmd):
    """
    Message class 'MotionServoCmd'.

    Constants:
      SERVO_START
      SERVO_DATA
      SERVO_END
      APP
      AUDIO
      VIS
    """

    __slots__ = [
        '_motion_id',
        '_cmd_type',
        '_cmd_source',
        '_value',
        '_vel_des',
        '_rpy_des',
        '_pos_des',
        '_acc_des',
        '_ctrl_point',
        '_foot_pose',
        '_step_height',
    ]

    _fields_and_field_types = {
        'motion_id': 'int32',
        'cmd_type': 'int32',
        'cmd_source': 'int32',
        'value': 'int32',
        'vel_des': 'sequence<float>',
        'rpy_des': 'sequence<float>',
        'pos_des': 'sequence<float>',
        'acc_des': 'sequence<float>',
        'ctrl_point': 'sequence<float>',
        'foot_pose': 'sequence<float>',
        'step_height': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion_id = kwargs.get('motion_id', int())
        self.cmd_type = kwargs.get('cmd_type', int())
        self.cmd_source = kwargs.get('cmd_source', int())
        self.value = kwargs.get('value', int())
        self.vel_des = array.array('f', kwargs.get('vel_des', []))
        self.rpy_des = array.array('f', kwargs.get('rpy_des', []))
        self.pos_des = array.array('f', kwargs.get('pos_des', []))
        self.acc_des = array.array('f', kwargs.get('acc_des', []))
        self.ctrl_point = array.array('f', kwargs.get('ctrl_point', []))
        self.foot_pose = array.array('f', kwargs.get('foot_pose', []))
        self.step_height = array.array('f', kwargs.get('step_height', []))

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
        if self.motion_id != other.motion_id:
            return False
        if self.cmd_type != other.cmd_type:
            return False
        if self.cmd_source != other.cmd_source:
            return False
        if self.value != other.value:
            return False
        if self.vel_des != other.vel_des:
            return False
        if self.rpy_des != other.rpy_des:
            return False
        if self.pos_des != other.pos_des:
            return False
        if self.acc_des != other.acc_des:
            return False
        if self.ctrl_point != other.ctrl_point:
            return False
        if self.foot_pose != other.foot_pose:
            return False
        if self.step_height != other.step_height:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motion_id(self):
        """Message field 'motion_id'."""
        return self._motion_id

    @motion_id.setter
    def motion_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motion_id' field must be an integer in [-2147483648, 2147483647]"
        self._motion_id = value

    @property
    def cmd_type(self):
        """Message field 'cmd_type'."""
        return self._cmd_type

    @cmd_type.setter
    def cmd_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmd_type' field must be an integer in [-2147483648, 2147483647]"
        self._cmd_type = value

    @property
    def cmd_source(self):
        """Message field 'cmd_source'."""
        return self._cmd_source

    @cmd_source.setter
    def cmd_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_source' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmd_source' field must be an integer in [-2147483648, 2147483647]"
        self._cmd_source = value

    @property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value' field must be an integer in [-2147483648, 2147483647]"
        self._value = value

    @property
    def vel_des(self):
        """Message field 'vel_des'."""
        return self._vel_des

    @vel_des.setter
    def vel_des(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'vel_des' array.array() must have the type code of 'f'"
            self._vel_des = value
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
                "The 'vel_des' field must be a set or sequence and each value of type 'float'"
        self._vel_des = array.array('f', value)

    @property
    def rpy_des(self):
        """Message field 'rpy_des'."""
        return self._rpy_des

    @rpy_des.setter
    def rpy_des(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'rpy_des' array.array() must have the type code of 'f'"
            self._rpy_des = value
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
                "The 'rpy_des' field must be a set or sequence and each value of type 'float'"
        self._rpy_des = array.array('f', value)

    @property
    def pos_des(self):
        """Message field 'pos_des'."""
        return self._pos_des

    @pos_des.setter
    def pos_des(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'pos_des' array.array() must have the type code of 'f'"
            self._pos_des = value
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
                "The 'pos_des' field must be a set or sequence and each value of type 'float'"
        self._pos_des = array.array('f', value)

    @property
    def acc_des(self):
        """Message field 'acc_des'."""
        return self._acc_des

    @acc_des.setter
    def acc_des(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'acc_des' array.array() must have the type code of 'f'"
            self._acc_des = value
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
                "The 'acc_des' field must be a set or sequence and each value of type 'float'"
        self._acc_des = array.array('f', value)

    @property
    def ctrl_point(self):
        """Message field 'ctrl_point'."""
        return self._ctrl_point

    @ctrl_point.setter
    def ctrl_point(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ctrl_point' array.array() must have the type code of 'f'"
            self._ctrl_point = value
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
                "The 'ctrl_point' field must be a set or sequence and each value of type 'float'"
        self._ctrl_point = array.array('f', value)

    @property
    def foot_pose(self):
        """Message field 'foot_pose'."""
        return self._foot_pose

    @foot_pose.setter
    def foot_pose(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'foot_pose' array.array() must have the type code of 'f'"
            self._foot_pose = value
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
                "The 'foot_pose' field must be a set or sequence and each value of type 'float'"
        self._foot_pose = array.array('f', value)

    @property
    def step_height(self):
        """Message field 'step_height'."""
        return self._step_height

    @step_height.setter
    def step_height(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'step_height' array.array() must have the type code of 'f'"
            self._step_height = value
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
                "The 'step_height' field must be a set or sequence and each value of type 'float'"
        self._step_height = array.array('f', value)

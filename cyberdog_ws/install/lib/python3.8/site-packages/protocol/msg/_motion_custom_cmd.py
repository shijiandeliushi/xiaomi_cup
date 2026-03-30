# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/MotionCustomCmd.idl
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


class Metaclass_MotionCustomCmd(type):
    """Metaclass of message 'MotionCustomCmd'."""

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
                'protocol.msg.MotionCustomCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_custom_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_custom_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_custom_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_custom_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_custom_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionCustomCmd(metaclass=Metaclass_MotionCustomCmd):
    """Message class 'MotionCustomCmd'."""

    __slots__ = [
        '_mode',
        '_gait_id',
        '_contact',
        '_life_count',
        '_vel_des',
        '_rpy_des',
        '_pos_des',
        '_acc_des',
        '_ctrl_point',
        '_foot_pose',
        '_step_height',
        '_value',
        '_duration',
    ]

    _fields_and_field_types = {
        'mode': 'int8',
        'gait_id': 'int8',
        'contact': 'int8',
        'life_count': 'int8',
        'vel_des': 'sequence<float>',
        'rpy_des': 'sequence<float>',
        'pos_des': 'sequence<float>',
        'acc_des': 'sequence<float>',
        'ctrl_point': 'sequence<float>',
        'foot_pose': 'sequence<float>',
        'step_height': 'sequence<float>',
        'value': 'int32',
        'duration': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())
        self.gait_id = kwargs.get('gait_id', int())
        self.contact = kwargs.get('contact', int())
        self.life_count = kwargs.get('life_count', int())
        self.vel_des = array.array('f', kwargs.get('vel_des', []))
        self.rpy_des = array.array('f', kwargs.get('rpy_des', []))
        self.pos_des = array.array('f', kwargs.get('pos_des', []))
        self.acc_des = array.array('f', kwargs.get('acc_des', []))
        self.ctrl_point = array.array('f', kwargs.get('ctrl_point', []))
        self.foot_pose = array.array('f', kwargs.get('foot_pose', []))
        self.step_height = array.array('f', kwargs.get('step_height', []))
        self.value = kwargs.get('value', int())
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
        if self.mode != other.mode:
            return False
        if self.gait_id != other.gait_id:
            return False
        if self.contact != other.contact:
            return False
        if self.life_count != other.life_count:
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
        if self.value != other.value:
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mode' field must be an integer in [-128, 127]"
        self._mode = value

    @property
    def gait_id(self):
        """Message field 'gait_id'."""
        return self._gait_id

    @gait_id.setter
    def gait_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gait_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gait_id' field must be an integer in [-128, 127]"
        self._gait_id = value

    @property
    def contact(self):
        """Message field 'contact'."""
        return self._contact

    @contact.setter
    def contact(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'contact' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'contact' field must be an integer in [-128, 127]"
        self._contact = value

    @property
    def life_count(self):
        """Message field 'life_count'."""
        return self._life_count

    @life_count.setter
    def life_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'life_count' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'life_count' field must be an integer in [-128, 127]"
        self._life_count = value

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

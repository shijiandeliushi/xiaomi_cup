# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/MotionID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionID(type):
    """Metaclass of message 'MotionID'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ESTOP': 0,
        'GETDOWN': 101,
        'RECOVERYSTAND': 111,
        'WALK_STAND': 112,
        'BACK_FLIP': 121,
        'TWO_LEG_STAND': 123,
        'ROLL_OVER': 124,
        'PASSIVE_TROT': 125,
        'JUMP_STAIR': 126,
        'JUMP_UPSTAIR': 126,
        'JUMP_DOWNSTAIR': 137,
        'JUMP3D_LEFT90DEG': 130,
        'JUMP3D_RIGHT90DEG': 131,
        'JUMP3D_FORWARD60CM': 132,
        'JUMP3D_FORWARD30CM': 133,
        'JUMP3D_LEFT20CM': 134,
        'JUMP3D_RIGHT20CM': 135,
        'JUMP3D_UP30CM': 136,
        'FORCECONTROL_DEFINITIVELY': 201,
        'FORCECONTROL_RELATIVEYLY': 202,
        'POSECONTROL_DEFINITIVELY': 211,
        'POSECONTROL_RELATIVEYLY': 212,
        'JUMP_BOUND': 301,
        'JUMP_PRONK': 302,
        'WALK_USERTROT': 303,
        'WALK_ADAPTIVELY': 304,
        'WALK_FLYTROT': 305,
        'SEQUENCE_CUSTOM': 400,
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
                'protocol.msg.MotionID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_id

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ESTOP': cls.__constants['ESTOP'],
            'GETDOWN': cls.__constants['GETDOWN'],
            'RECOVERYSTAND': cls.__constants['RECOVERYSTAND'],
            'WALK_STAND': cls.__constants['WALK_STAND'],
            'BACK_FLIP': cls.__constants['BACK_FLIP'],
            'TWO_LEG_STAND': cls.__constants['TWO_LEG_STAND'],
            'ROLL_OVER': cls.__constants['ROLL_OVER'],
            'PASSIVE_TROT': cls.__constants['PASSIVE_TROT'],
            'JUMP_STAIR': cls.__constants['JUMP_STAIR'],
            'JUMP_UPSTAIR': cls.__constants['JUMP_UPSTAIR'],
            'JUMP_DOWNSTAIR': cls.__constants['JUMP_DOWNSTAIR'],
            'JUMP3D_LEFT90DEG': cls.__constants['JUMP3D_LEFT90DEG'],
            'JUMP3D_RIGHT90DEG': cls.__constants['JUMP3D_RIGHT90DEG'],
            'JUMP3D_FORWARD60CM': cls.__constants['JUMP3D_FORWARD60CM'],
            'JUMP3D_FORWARD30CM': cls.__constants['JUMP3D_FORWARD30CM'],
            'JUMP3D_LEFT20CM': cls.__constants['JUMP3D_LEFT20CM'],
            'JUMP3D_RIGHT20CM': cls.__constants['JUMP3D_RIGHT20CM'],
            'JUMP3D_UP30CM': cls.__constants['JUMP3D_UP30CM'],
            'FORCECONTROL_DEFINITIVELY': cls.__constants['FORCECONTROL_DEFINITIVELY'],
            'FORCECONTROL_RELATIVEYLY': cls.__constants['FORCECONTROL_RELATIVEYLY'],
            'POSECONTROL_DEFINITIVELY': cls.__constants['POSECONTROL_DEFINITIVELY'],
            'POSECONTROL_RELATIVEYLY': cls.__constants['POSECONTROL_RELATIVEYLY'],
            'JUMP_BOUND': cls.__constants['JUMP_BOUND'],
            'JUMP_PRONK': cls.__constants['JUMP_PRONK'],
            'WALK_USERTROT': cls.__constants['WALK_USERTROT'],
            'WALK_ADAPTIVELY': cls.__constants['WALK_ADAPTIVELY'],
            'WALK_FLYTROT': cls.__constants['WALK_FLYTROT'],
            'SEQUENCE_CUSTOM': cls.__constants['SEQUENCE_CUSTOM'],
        }

    @property
    def ESTOP(self):
        """Message constant 'ESTOP'."""
        return Metaclass_MotionID.__constants['ESTOP']

    @property
    def GETDOWN(self):
        """Message constant 'GETDOWN'."""
        return Metaclass_MotionID.__constants['GETDOWN']

    @property
    def RECOVERYSTAND(self):
        """Message constant 'RECOVERYSTAND'."""
        return Metaclass_MotionID.__constants['RECOVERYSTAND']

    @property
    def WALK_STAND(self):
        """Message constant 'WALK_STAND'."""
        return Metaclass_MotionID.__constants['WALK_STAND']

    @property
    def BACK_FLIP(self):
        """Message constant 'BACK_FLIP'."""
        return Metaclass_MotionID.__constants['BACK_FLIP']

    @property
    def TWO_LEG_STAND(self):
        """Message constant 'TWO_LEG_STAND'."""
        return Metaclass_MotionID.__constants['TWO_LEG_STAND']

    @property
    def ROLL_OVER(self):
        """Message constant 'ROLL_OVER'."""
        return Metaclass_MotionID.__constants['ROLL_OVER']

    @property
    def PASSIVE_TROT(self):
        """Message constant 'PASSIVE_TROT'."""
        return Metaclass_MotionID.__constants['PASSIVE_TROT']

    @property
    def JUMP_STAIR(self):
        """Message constant 'JUMP_STAIR'."""
        return Metaclass_MotionID.__constants['JUMP_STAIR']

    @property
    def JUMP_UPSTAIR(self):
        """Message constant 'JUMP_UPSTAIR'."""
        return Metaclass_MotionID.__constants['JUMP_UPSTAIR']

    @property
    def JUMP_DOWNSTAIR(self):
        """Message constant 'JUMP_DOWNSTAIR'."""
        return Metaclass_MotionID.__constants['JUMP_DOWNSTAIR']

    @property
    def JUMP3D_LEFT90DEG(self):
        """Message constant 'JUMP3D_LEFT90DEG'."""
        return Metaclass_MotionID.__constants['JUMP3D_LEFT90DEG']

    @property
    def JUMP3D_RIGHT90DEG(self):
        """Message constant 'JUMP3D_RIGHT90DEG'."""
        return Metaclass_MotionID.__constants['JUMP3D_RIGHT90DEG']

    @property
    def JUMP3D_FORWARD60CM(self):
        """Message constant 'JUMP3D_FORWARD60CM'."""
        return Metaclass_MotionID.__constants['JUMP3D_FORWARD60CM']

    @property
    def JUMP3D_FORWARD30CM(self):
        """Message constant 'JUMP3D_FORWARD30CM'."""
        return Metaclass_MotionID.__constants['JUMP3D_FORWARD30CM']

    @property
    def JUMP3D_LEFT20CM(self):
        """Message constant 'JUMP3D_LEFT20CM'."""
        return Metaclass_MotionID.__constants['JUMP3D_LEFT20CM']

    @property
    def JUMP3D_RIGHT20CM(self):
        """Message constant 'JUMP3D_RIGHT20CM'."""
        return Metaclass_MotionID.__constants['JUMP3D_RIGHT20CM']

    @property
    def JUMP3D_UP30CM(self):
        """Message constant 'JUMP3D_UP30CM'."""
        return Metaclass_MotionID.__constants['JUMP3D_UP30CM']

    @property
    def FORCECONTROL_DEFINITIVELY(self):
        """Message constant 'FORCECONTROL_DEFINITIVELY'."""
        return Metaclass_MotionID.__constants['FORCECONTROL_DEFINITIVELY']

    @property
    def FORCECONTROL_RELATIVEYLY(self):
        """Message constant 'FORCECONTROL_RELATIVEYLY'."""
        return Metaclass_MotionID.__constants['FORCECONTROL_RELATIVEYLY']

    @property
    def POSECONTROL_DEFINITIVELY(self):
        """Message constant 'POSECONTROL_DEFINITIVELY'."""
        return Metaclass_MotionID.__constants['POSECONTROL_DEFINITIVELY']

    @property
    def POSECONTROL_RELATIVEYLY(self):
        """Message constant 'POSECONTROL_RELATIVEYLY'."""
        return Metaclass_MotionID.__constants['POSECONTROL_RELATIVEYLY']

    @property
    def JUMP_BOUND(self):
        """Message constant 'JUMP_BOUND'."""
        return Metaclass_MotionID.__constants['JUMP_BOUND']

    @property
    def JUMP_PRONK(self):
        """Message constant 'JUMP_PRONK'."""
        return Metaclass_MotionID.__constants['JUMP_PRONK']

    @property
    def WALK_USERTROT(self):
        """Message constant 'WALK_USERTROT'."""
        return Metaclass_MotionID.__constants['WALK_USERTROT']

    @property
    def WALK_ADAPTIVELY(self):
        """Message constant 'WALK_ADAPTIVELY'."""
        return Metaclass_MotionID.__constants['WALK_ADAPTIVELY']

    @property
    def WALK_FLYTROT(self):
        """Message constant 'WALK_FLYTROT'."""
        return Metaclass_MotionID.__constants['WALK_FLYTROT']

    @property
    def SEQUENCE_CUSTOM(self):
        """Message constant 'SEQUENCE_CUSTOM'."""
        return Metaclass_MotionID.__constants['SEQUENCE_CUSTOM']


class MotionID(metaclass=Metaclass_MotionID):
    """
    Message class 'MotionID'.

    Constants:
      ESTOP
      GETDOWN
      RECOVERYSTAND
      WALK_STAND
      BACK_FLIP
      TWO_LEG_STAND
      ROLL_OVER
      PASSIVE_TROT
      JUMP_STAIR
      JUMP_UPSTAIR
      JUMP_DOWNSTAIR
      JUMP3D_LEFT90DEG
      JUMP3D_RIGHT90DEG
      JUMP3D_FORWARD60CM
      JUMP3D_FORWARD30CM
      JUMP3D_LEFT20CM
      JUMP3D_RIGHT20CM
      JUMP3D_UP30CM
      FORCECONTROL_DEFINITIVELY
      FORCECONTROL_RELATIVEYLY
      POSECONTROL_DEFINITIVELY
      POSECONTROL_RELATIVEYLY
      JUMP_BOUND
      JUMP_PRONK
      WALK_USERTROT
      WALK_ADAPTIVELY
      WALK_FLYTROT
      SEQUENCE_CUSTOM
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

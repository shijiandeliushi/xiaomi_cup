# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/MotionCode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionCode(type):
    """Metaclass of message 'MotionCode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 0,
        'HW_LOW_BATTERY': 300,
        'HW_MOTOR_OFFLINE': 301,
        'COM_LCM_TIMEOUT': 310,
        'MOTION_SWITCH_ERROR': 320,
        'MOTION_TRANSITION_TIMEOUT': 321,
        'MOTION_EXECUTE_TIMEOUT': 322,
        'MOTION_EXECUTE_ERROR': 323,
        'COMMAND_INVALID': 330,
        'TASK_STATE_ERROR': 340,
        'TASK_MODE_ERROR': 341,
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
                'protocol.msg.MotionCode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_code
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_code
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_code
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_code
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_code

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'HW_LOW_BATTERY': cls.__constants['HW_LOW_BATTERY'],
            'HW_MOTOR_OFFLINE': cls.__constants['HW_MOTOR_OFFLINE'],
            'COM_LCM_TIMEOUT': cls.__constants['COM_LCM_TIMEOUT'],
            'MOTION_SWITCH_ERROR': cls.__constants['MOTION_SWITCH_ERROR'],
            'MOTION_TRANSITION_TIMEOUT': cls.__constants['MOTION_TRANSITION_TIMEOUT'],
            'MOTION_EXECUTE_TIMEOUT': cls.__constants['MOTION_EXECUTE_TIMEOUT'],
            'MOTION_EXECUTE_ERROR': cls.__constants['MOTION_EXECUTE_ERROR'],
            'COMMAND_INVALID': cls.__constants['COMMAND_INVALID'],
            'TASK_STATE_ERROR': cls.__constants['TASK_STATE_ERROR'],
            'TASK_MODE_ERROR': cls.__constants['TASK_MODE_ERROR'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_MotionCode.__constants['OK']

    @property
    def HW_LOW_BATTERY(self):
        """Message constant 'HW_LOW_BATTERY'."""
        return Metaclass_MotionCode.__constants['HW_LOW_BATTERY']

    @property
    def HW_MOTOR_OFFLINE(self):
        """Message constant 'HW_MOTOR_OFFLINE'."""
        return Metaclass_MotionCode.__constants['HW_MOTOR_OFFLINE']

    @property
    def COM_LCM_TIMEOUT(self):
        """Message constant 'COM_LCM_TIMEOUT'."""
        return Metaclass_MotionCode.__constants['COM_LCM_TIMEOUT']

    @property
    def MOTION_SWITCH_ERROR(self):
        """Message constant 'MOTION_SWITCH_ERROR'."""
        return Metaclass_MotionCode.__constants['MOTION_SWITCH_ERROR']

    @property
    def MOTION_TRANSITION_TIMEOUT(self):
        """Message constant 'MOTION_TRANSITION_TIMEOUT'."""
        return Metaclass_MotionCode.__constants['MOTION_TRANSITION_TIMEOUT']

    @property
    def MOTION_EXECUTE_TIMEOUT(self):
        """Message constant 'MOTION_EXECUTE_TIMEOUT'."""
        return Metaclass_MotionCode.__constants['MOTION_EXECUTE_TIMEOUT']

    @property
    def MOTION_EXECUTE_ERROR(self):
        """Message constant 'MOTION_EXECUTE_ERROR'."""
        return Metaclass_MotionCode.__constants['MOTION_EXECUTE_ERROR']

    @property
    def COMMAND_INVALID(self):
        """Message constant 'COMMAND_INVALID'."""
        return Metaclass_MotionCode.__constants['COMMAND_INVALID']

    @property
    def TASK_STATE_ERROR(self):
        """Message constant 'TASK_STATE_ERROR'."""
        return Metaclass_MotionCode.__constants['TASK_STATE_ERROR']

    @property
    def TASK_MODE_ERROR(self):
        """Message constant 'TASK_MODE_ERROR'."""
        return Metaclass_MotionCode.__constants['TASK_MODE_ERROR']


class MotionCode(metaclass=Metaclass_MotionCode):
    """
    Message class 'MotionCode'.

    Constants:
      OK
      HW_LOW_BATTERY
      HW_MOTOR_OFFLINE
      COM_LCM_TIMEOUT
      MOTION_SWITCH_ERROR
      MOTION_TRANSITION_TIMEOUT
      MOTION_EXECUTE_TIMEOUT
      MOTION_EXECUTE_ERROR
      COMMAND_INVALID
      TASK_STATE_ERROR
      TASK_MODE_ERROR
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

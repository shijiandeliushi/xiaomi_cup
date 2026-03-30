# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/MotionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'motor_error'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionStatus(type):
    """Metaclass of message 'MotionStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NORMAL': 0,
        'TRANSITIONING': 1,
        'ESTOP': 2,
        'EDAMP': 3,
        'LIFTED': 4,
        'BAN_TRANS': 5,
        'OVER_HEAT': 6,
        'LOW_BAT': 7,
        'ORI_ERR': 8,
        'FOOTPOS_ERR': 9,
        'STAND_STUCK': 10,
        'MOTOR_OVER_HEAT': 11,
        'MOTOR_OVER_CURR': 12,
        'MOTOR_ERR': 13,
        'CHARGING': 14,
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
                'protocol.msg.MotionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NORMAL': cls.__constants['NORMAL'],
            'TRANSITIONING': cls.__constants['TRANSITIONING'],
            'ESTOP': cls.__constants['ESTOP'],
            'EDAMP': cls.__constants['EDAMP'],
            'LIFTED': cls.__constants['LIFTED'],
            'BAN_TRANS': cls.__constants['BAN_TRANS'],
            'OVER_HEAT': cls.__constants['OVER_HEAT'],
            'LOW_BAT': cls.__constants['LOW_BAT'],
            'ORI_ERR': cls.__constants['ORI_ERR'],
            'FOOTPOS_ERR': cls.__constants['FOOTPOS_ERR'],
            'STAND_STUCK': cls.__constants['STAND_STUCK'],
            'MOTOR_OVER_HEAT': cls.__constants['MOTOR_OVER_HEAT'],
            'MOTOR_OVER_CURR': cls.__constants['MOTOR_OVER_CURR'],
            'MOTOR_ERR': cls.__constants['MOTOR_ERR'],
            'CHARGING': cls.__constants['CHARGING'],
        }

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_MotionStatus.__constants['NORMAL']

    @property
    def TRANSITIONING(self):
        """Message constant 'TRANSITIONING'."""
        return Metaclass_MotionStatus.__constants['TRANSITIONING']

    @property
    def ESTOP(self):
        """Message constant 'ESTOP'."""
        return Metaclass_MotionStatus.__constants['ESTOP']

    @property
    def EDAMP(self):
        """Message constant 'EDAMP'."""
        return Metaclass_MotionStatus.__constants['EDAMP']

    @property
    def LIFTED(self):
        """Message constant 'LIFTED'."""
        return Metaclass_MotionStatus.__constants['LIFTED']

    @property
    def BAN_TRANS(self):
        """Message constant 'BAN_TRANS'."""
        return Metaclass_MotionStatus.__constants['BAN_TRANS']

    @property
    def OVER_HEAT(self):
        """Message constant 'OVER_HEAT'."""
        return Metaclass_MotionStatus.__constants['OVER_HEAT']

    @property
    def LOW_BAT(self):
        """Message constant 'LOW_BAT'."""
        return Metaclass_MotionStatus.__constants['LOW_BAT']

    @property
    def ORI_ERR(self):
        """Message constant 'ORI_ERR'."""
        return Metaclass_MotionStatus.__constants['ORI_ERR']

    @property
    def FOOTPOS_ERR(self):
        """Message constant 'FOOTPOS_ERR'."""
        return Metaclass_MotionStatus.__constants['FOOTPOS_ERR']

    @property
    def STAND_STUCK(self):
        """Message constant 'STAND_STUCK'."""
        return Metaclass_MotionStatus.__constants['STAND_STUCK']

    @property
    def MOTOR_OVER_HEAT(self):
        """Message constant 'MOTOR_OVER_HEAT'."""
        return Metaclass_MotionStatus.__constants['MOTOR_OVER_HEAT']

    @property
    def MOTOR_OVER_CURR(self):
        """Message constant 'MOTOR_OVER_CURR'."""
        return Metaclass_MotionStatus.__constants['MOTOR_OVER_CURR']

    @property
    def MOTOR_ERR(self):
        """Message constant 'MOTOR_ERR'."""
        return Metaclass_MotionStatus.__constants['MOTOR_ERR']

    @property
    def CHARGING(self):
        """Message constant 'CHARGING'."""
        return Metaclass_MotionStatus.__constants['CHARGING']


class MotionStatus(metaclass=Metaclass_MotionStatus):
    """
    Message class 'MotionStatus'.

    Constants:
      NORMAL
      TRANSITIONING
      ESTOP
      EDAMP
      LIFTED
      BAN_TRANS
      OVER_HEAT
      LOW_BAT
      ORI_ERR
      FOOTPOS_ERR
      STAND_STUCK
      MOTOR_OVER_HEAT
      MOTOR_OVER_CURR
      MOTOR_ERR
      CHARGING
    """

    __slots__ = [
        '_motion_id',
        '_contact',
        '_order_process_bar',
        '_switch_status',
        '_ori_error',
        '_footpos_error',
        '_motor_error',
    ]

    _fields_and_field_types = {
        'motion_id': 'int32',
        'contact': 'int8',
        'order_process_bar': 'int8',
        'switch_status': 'int8',
        'ori_error': 'int8',
        'footpos_error': 'int16',
        'motor_error': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion_id = kwargs.get('motion_id', int())
        self.contact = kwargs.get('contact', int())
        self.order_process_bar = kwargs.get('order_process_bar', int())
        self.switch_status = kwargs.get('switch_status', int())
        self.ori_error = kwargs.get('ori_error', int())
        self.footpos_error = kwargs.get('footpos_error', int())
        self.motor_error = array.array('i', kwargs.get('motor_error', []))

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
        if self.contact != other.contact:
            return False
        if self.order_process_bar != other.order_process_bar:
            return False
        if self.switch_status != other.switch_status:
            return False
        if self.ori_error != other.ori_error:
            return False
        if self.footpos_error != other.footpos_error:
            return False
        if self.motor_error != other.motor_error:
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
    def order_process_bar(self):
        """Message field 'order_process_bar'."""
        return self._order_process_bar

    @order_process_bar.setter
    def order_process_bar(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'order_process_bar' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'order_process_bar' field must be an integer in [-128, 127]"
        self._order_process_bar = value

    @property
    def switch_status(self):
        """Message field 'switch_status'."""
        return self._switch_status

    @switch_status.setter
    def switch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'switch_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'switch_status' field must be an integer in [-128, 127]"
        self._switch_status = value

    @property
    def ori_error(self):
        """Message field 'ori_error'."""
        return self._ori_error

    @ori_error.setter
    def ori_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ori_error' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'ori_error' field must be an integer in [-128, 127]"
        self._ori_error = value

    @property
    def footpos_error(self):
        """Message field 'footpos_error'."""
        return self._footpos_error

    @footpos_error.setter
    def footpos_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'footpos_error' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'footpos_error' field must be an integer in [-32768, 32767]"
        self._footpos_error = value

    @property
    def motor_error(self):
        """Message field 'motor_error'."""
        return self._motor_error

    @motor_error.setter
    def motor_error(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'motor_error' array.array() must have the type code of 'i'"
            self._motor_error = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'motor_error' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._motor_error = array.array('i', value)

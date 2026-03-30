# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/LedExecute.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedExecute_Request(type):
    """Metaclass of message 'LedExecute_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LOWPOWER': 'lowpower',
        'BMS': 'bms',
        'CONNECTOR': 'connector',
        'VP': 'vp',
        'TRACKING': 'tracking',
        'SYSTEM': 'system',
        'HEAD_LED': 1,
        'TAIL_LED': 2,
        'MINI_LED': 3,
        'SYSTEM_PREDEFINED': 1,
        'USER_DEFINED': 2,
        'RGB_ON': 1,
        'BLINK': 2,
        'BLINK_FAST': 3,
        'BREATH': 4,
        'BREATH_FAST': 5,
        'ONE_BY_ONE': 6,
        'ONE_BY_ONE_FAST': 7,
        'BACK_AND_FORTH': 8,
        'TRAILING_RACE': 9,
        'RGB_OFF': 160,
        'RED_ON': 161,
        'RED_BLINK': 162,
        'RED_BLINK_FAST': 163,
        'RED_BREATH': 164,
        'RED_BREATH_FAST': 165,
        'RED_ONE_BY_ONE': 166,
        'RED_ONE_BY_ONE_FAST': 167,
        'BLUE_ON': 168,
        'BLUE_BLINK': 169,
        'BLUE_BLINK_FAST': 170,
        'BLUE_BREATH': 171,
        'BLUE_BREATH_FAST': 172,
        'BLUE_ONE_BY_ONE': 173,
        'BLUE_ONE_BY_ONE_FAST': 174,
        'YELLOW_ON': 175,
        'YELLOW_BLINK': 176,
        'YELLOW_BLINK_FAST': 177,
        'YELLOW_BREATH': 178,
        'YELLOW_BREATH_FAST': 179,
        'YELLOW_ONE_BY_ONE': 180,
        'YELLOW_ONE_BY_ONE_FAST': 181,
        'CIRCULAR_BREATH': 48,
        'CIRCULAR_RING': 49,
        'MINI_OFF': 50,
        'RECTANGLE_COLOR': 51,
        'CENTRE_COLOR': 52,
        'THREE_CIRCULAR': 53,
        'COLOR_ONE_BY_ONE': 54,
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
                'protocol.srv.LedExecute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_execute__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_execute__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_execute__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_execute__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_execute__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LOWPOWER': cls.__constants['LOWPOWER'],
            'BMS': cls.__constants['BMS'],
            'CONNECTOR': cls.__constants['CONNECTOR'],
            'VP': cls.__constants['VP'],
            'TRACKING': cls.__constants['TRACKING'],
            'SYSTEM': cls.__constants['SYSTEM'],
            'HEAD_LED': cls.__constants['HEAD_LED'],
            'TAIL_LED': cls.__constants['TAIL_LED'],
            'MINI_LED': cls.__constants['MINI_LED'],
            'SYSTEM_PREDEFINED': cls.__constants['SYSTEM_PREDEFINED'],
            'USER_DEFINED': cls.__constants['USER_DEFINED'],
            'RGB_ON': cls.__constants['RGB_ON'],
            'BLINK': cls.__constants['BLINK'],
            'BLINK_FAST': cls.__constants['BLINK_FAST'],
            'BREATH': cls.__constants['BREATH'],
            'BREATH_FAST': cls.__constants['BREATH_FAST'],
            'ONE_BY_ONE': cls.__constants['ONE_BY_ONE'],
            'ONE_BY_ONE_FAST': cls.__constants['ONE_BY_ONE_FAST'],
            'BACK_AND_FORTH': cls.__constants['BACK_AND_FORTH'],
            'TRAILING_RACE': cls.__constants['TRAILING_RACE'],
            'RGB_OFF': cls.__constants['RGB_OFF'],
            'RED_ON': cls.__constants['RED_ON'],
            'RED_BLINK': cls.__constants['RED_BLINK'],
            'RED_BLINK_FAST': cls.__constants['RED_BLINK_FAST'],
            'RED_BREATH': cls.__constants['RED_BREATH'],
            'RED_BREATH_FAST': cls.__constants['RED_BREATH_FAST'],
            'RED_ONE_BY_ONE': cls.__constants['RED_ONE_BY_ONE'],
            'RED_ONE_BY_ONE_FAST': cls.__constants['RED_ONE_BY_ONE_FAST'],
            'BLUE_ON': cls.__constants['BLUE_ON'],
            'BLUE_BLINK': cls.__constants['BLUE_BLINK'],
            'BLUE_BLINK_FAST': cls.__constants['BLUE_BLINK_FAST'],
            'BLUE_BREATH': cls.__constants['BLUE_BREATH'],
            'BLUE_BREATH_FAST': cls.__constants['BLUE_BREATH_FAST'],
            'BLUE_ONE_BY_ONE': cls.__constants['BLUE_ONE_BY_ONE'],
            'BLUE_ONE_BY_ONE_FAST': cls.__constants['BLUE_ONE_BY_ONE_FAST'],
            'YELLOW_ON': cls.__constants['YELLOW_ON'],
            'YELLOW_BLINK': cls.__constants['YELLOW_BLINK'],
            'YELLOW_BLINK_FAST': cls.__constants['YELLOW_BLINK_FAST'],
            'YELLOW_BREATH': cls.__constants['YELLOW_BREATH'],
            'YELLOW_BREATH_FAST': cls.__constants['YELLOW_BREATH_FAST'],
            'YELLOW_ONE_BY_ONE': cls.__constants['YELLOW_ONE_BY_ONE'],
            'YELLOW_ONE_BY_ONE_FAST': cls.__constants['YELLOW_ONE_BY_ONE_FAST'],
            'CIRCULAR_BREATH': cls.__constants['CIRCULAR_BREATH'],
            'CIRCULAR_RING': cls.__constants['CIRCULAR_RING'],
            'MINI_OFF': cls.__constants['MINI_OFF'],
            'RECTANGLE_COLOR': cls.__constants['RECTANGLE_COLOR'],
            'CENTRE_COLOR': cls.__constants['CENTRE_COLOR'],
            'THREE_CIRCULAR': cls.__constants['THREE_CIRCULAR'],
            'COLOR_ONE_BY_ONE': cls.__constants['COLOR_ONE_BY_ONE'],
        }

    @property
    def LOWPOWER(self):
        """Message constant 'LOWPOWER'."""
        return Metaclass_LedExecute_Request.__constants['LOWPOWER']

    @property
    def BMS(self):
        """Message constant 'BMS'."""
        return Metaclass_LedExecute_Request.__constants['BMS']

    @property
    def CONNECTOR(self):
        """Message constant 'CONNECTOR'."""
        return Metaclass_LedExecute_Request.__constants['CONNECTOR']

    @property
    def VP(self):
        """Message constant 'VP'."""
        return Metaclass_LedExecute_Request.__constants['VP']

    @property
    def TRACKING(self):
        """Message constant 'TRACKING'."""
        return Metaclass_LedExecute_Request.__constants['TRACKING']

    @property
    def SYSTEM(self):
        """Message constant 'SYSTEM'."""
        return Metaclass_LedExecute_Request.__constants['SYSTEM']

    @property
    def HEAD_LED(self):
        """Message constant 'HEAD_LED'."""
        return Metaclass_LedExecute_Request.__constants['HEAD_LED']

    @property
    def TAIL_LED(self):
        """Message constant 'TAIL_LED'."""
        return Metaclass_LedExecute_Request.__constants['TAIL_LED']

    @property
    def MINI_LED(self):
        """Message constant 'MINI_LED'."""
        return Metaclass_LedExecute_Request.__constants['MINI_LED']

    @property
    def SYSTEM_PREDEFINED(self):
        """Message constant 'SYSTEM_PREDEFINED'."""
        return Metaclass_LedExecute_Request.__constants['SYSTEM_PREDEFINED']

    @property
    def USER_DEFINED(self):
        """Message constant 'USER_DEFINED'."""
        return Metaclass_LedExecute_Request.__constants['USER_DEFINED']

    @property
    def RGB_ON(self):
        """Message constant 'RGB_ON'."""
        return Metaclass_LedExecute_Request.__constants['RGB_ON']

    @property
    def BLINK(self):
        """Message constant 'BLINK'."""
        return Metaclass_LedExecute_Request.__constants['BLINK']

    @property
    def BLINK_FAST(self):
        """Message constant 'BLINK_FAST'."""
        return Metaclass_LedExecute_Request.__constants['BLINK_FAST']

    @property
    def BREATH(self):
        """Message constant 'BREATH'."""
        return Metaclass_LedExecute_Request.__constants['BREATH']

    @property
    def BREATH_FAST(self):
        """Message constant 'BREATH_FAST'."""
        return Metaclass_LedExecute_Request.__constants['BREATH_FAST']

    @property
    def ONE_BY_ONE(self):
        """Message constant 'ONE_BY_ONE'."""
        return Metaclass_LedExecute_Request.__constants['ONE_BY_ONE']

    @property
    def ONE_BY_ONE_FAST(self):
        """Message constant 'ONE_BY_ONE_FAST'."""
        return Metaclass_LedExecute_Request.__constants['ONE_BY_ONE_FAST']

    @property
    def BACK_AND_FORTH(self):
        """Message constant 'BACK_AND_FORTH'."""
        return Metaclass_LedExecute_Request.__constants['BACK_AND_FORTH']

    @property
    def TRAILING_RACE(self):
        """Message constant 'TRAILING_RACE'."""
        return Metaclass_LedExecute_Request.__constants['TRAILING_RACE']

    @property
    def RGB_OFF(self):
        """Message constant 'RGB_OFF'."""
        return Metaclass_LedExecute_Request.__constants['RGB_OFF']

    @property
    def RED_ON(self):
        """Message constant 'RED_ON'."""
        return Metaclass_LedExecute_Request.__constants['RED_ON']

    @property
    def RED_BLINK(self):
        """Message constant 'RED_BLINK'."""
        return Metaclass_LedExecute_Request.__constants['RED_BLINK']

    @property
    def RED_BLINK_FAST(self):
        """Message constant 'RED_BLINK_FAST'."""
        return Metaclass_LedExecute_Request.__constants['RED_BLINK_FAST']

    @property
    def RED_BREATH(self):
        """Message constant 'RED_BREATH'."""
        return Metaclass_LedExecute_Request.__constants['RED_BREATH']

    @property
    def RED_BREATH_FAST(self):
        """Message constant 'RED_BREATH_FAST'."""
        return Metaclass_LedExecute_Request.__constants['RED_BREATH_FAST']

    @property
    def RED_ONE_BY_ONE(self):
        """Message constant 'RED_ONE_BY_ONE'."""
        return Metaclass_LedExecute_Request.__constants['RED_ONE_BY_ONE']

    @property
    def RED_ONE_BY_ONE_FAST(self):
        """Message constant 'RED_ONE_BY_ONE_FAST'."""
        return Metaclass_LedExecute_Request.__constants['RED_ONE_BY_ONE_FAST']

    @property
    def BLUE_ON(self):
        """Message constant 'BLUE_ON'."""
        return Metaclass_LedExecute_Request.__constants['BLUE_ON']

    @property
    def BLUE_BLINK(self):
        """Message constant 'BLUE_BLINK'."""
        return Metaclass_LedExecute_Request.__constants['BLUE_BLINK']

    @property
    def BLUE_BLINK_FAST(self):
        """Message constant 'BLUE_BLINK_FAST'."""
        return Metaclass_LedExecute_Request.__constants['BLUE_BLINK_FAST']

    @property
    def BLUE_BREATH(self):
        """Message constant 'BLUE_BREATH'."""
        return Metaclass_LedExecute_Request.__constants['BLUE_BREATH']

    @property
    def BLUE_BREATH_FAST(self):
        """Message constant 'BLUE_BREATH_FAST'."""
        return Metaclass_LedExecute_Request.__constants['BLUE_BREATH_FAST']

    @property
    def BLUE_ONE_BY_ONE(self):
        """Message constant 'BLUE_ONE_BY_ONE'."""
        return Metaclass_LedExecute_Request.__constants['BLUE_ONE_BY_ONE']

    @property
    def BLUE_ONE_BY_ONE_FAST(self):
        """Message constant 'BLUE_ONE_BY_ONE_FAST'."""
        return Metaclass_LedExecute_Request.__constants['BLUE_ONE_BY_ONE_FAST']

    @property
    def YELLOW_ON(self):
        """Message constant 'YELLOW_ON'."""
        return Metaclass_LedExecute_Request.__constants['YELLOW_ON']

    @property
    def YELLOW_BLINK(self):
        """Message constant 'YELLOW_BLINK'."""
        return Metaclass_LedExecute_Request.__constants['YELLOW_BLINK']

    @property
    def YELLOW_BLINK_FAST(self):
        """Message constant 'YELLOW_BLINK_FAST'."""
        return Metaclass_LedExecute_Request.__constants['YELLOW_BLINK_FAST']

    @property
    def YELLOW_BREATH(self):
        """Message constant 'YELLOW_BREATH'."""
        return Metaclass_LedExecute_Request.__constants['YELLOW_BREATH']

    @property
    def YELLOW_BREATH_FAST(self):
        """Message constant 'YELLOW_BREATH_FAST'."""
        return Metaclass_LedExecute_Request.__constants['YELLOW_BREATH_FAST']

    @property
    def YELLOW_ONE_BY_ONE(self):
        """Message constant 'YELLOW_ONE_BY_ONE'."""
        return Metaclass_LedExecute_Request.__constants['YELLOW_ONE_BY_ONE']

    @property
    def YELLOW_ONE_BY_ONE_FAST(self):
        """Message constant 'YELLOW_ONE_BY_ONE_FAST'."""
        return Metaclass_LedExecute_Request.__constants['YELLOW_ONE_BY_ONE_FAST']

    @property
    def CIRCULAR_BREATH(self):
        """Message constant 'CIRCULAR_BREATH'."""
        return Metaclass_LedExecute_Request.__constants['CIRCULAR_BREATH']

    @property
    def CIRCULAR_RING(self):
        """Message constant 'CIRCULAR_RING'."""
        return Metaclass_LedExecute_Request.__constants['CIRCULAR_RING']

    @property
    def MINI_OFF(self):
        """Message constant 'MINI_OFF'."""
        return Metaclass_LedExecute_Request.__constants['MINI_OFF']

    @property
    def RECTANGLE_COLOR(self):
        """Message constant 'RECTANGLE_COLOR'."""
        return Metaclass_LedExecute_Request.__constants['RECTANGLE_COLOR']

    @property
    def CENTRE_COLOR(self):
        """Message constant 'CENTRE_COLOR'."""
        return Metaclass_LedExecute_Request.__constants['CENTRE_COLOR']

    @property
    def THREE_CIRCULAR(self):
        """Message constant 'THREE_CIRCULAR'."""
        return Metaclass_LedExecute_Request.__constants['THREE_CIRCULAR']

    @property
    def COLOR_ONE_BY_ONE(self):
        """Message constant 'COLOR_ONE_BY_ONE'."""
        return Metaclass_LedExecute_Request.__constants['COLOR_ONE_BY_ONE']


class LedExecute_Request(metaclass=Metaclass_LedExecute_Request):
    """
    Message class 'LedExecute_Request'.

    Constants:
      LOWPOWER
      BMS
      CONNECTOR
      VP
      TRACKING
      SYSTEM
      HEAD_LED
      TAIL_LED
      MINI_LED
      SYSTEM_PREDEFINED
      USER_DEFINED
      RGB_ON
      BLINK
      BLINK_FAST
      BREATH
      BREATH_FAST
      ONE_BY_ONE
      ONE_BY_ONE_FAST
      BACK_AND_FORTH
      TRAILING_RACE
      RGB_OFF
      RED_ON
      RED_BLINK
      RED_BLINK_FAST
      RED_BREATH
      RED_BREATH_FAST
      RED_ONE_BY_ONE
      RED_ONE_BY_ONE_FAST
      BLUE_ON
      BLUE_BLINK
      BLUE_BLINK_FAST
      BLUE_BREATH
      BLUE_BREATH_FAST
      BLUE_ONE_BY_ONE
      BLUE_ONE_BY_ONE_FAST
      YELLOW_ON
      YELLOW_BLINK
      YELLOW_BLINK_FAST
      YELLOW_BREATH
      YELLOW_BREATH_FAST
      YELLOW_ONE_BY_ONE
      YELLOW_ONE_BY_ONE_FAST
      CIRCULAR_BREATH
      CIRCULAR_RING
      MINI_OFF
      RECTANGLE_COLOR
      CENTRE_COLOR
      THREE_CIRCULAR
      COLOR_ONE_BY_ONE
    """

    __slots__ = [
        '_occupation',
        '_client',
        '_target',
        '_mode',
        '_effect',
        '_r_value',
        '_g_value',
        '_b_value',
    ]

    _fields_and_field_types = {
        'occupation': 'boolean',
        'client': 'string',
        'target': 'uint8',
        'mode': 'uint8',
        'effect': 'uint8',
        'r_value': 'uint8',
        'g_value': 'uint8',
        'b_value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.occupation = kwargs.get('occupation', bool())
        self.client = kwargs.get('client', str())
        self.target = kwargs.get('target', int())
        self.mode = kwargs.get('mode', int())
        self.effect = kwargs.get('effect', int())
        self.r_value = kwargs.get('r_value', int())
        self.g_value = kwargs.get('g_value', int())
        self.b_value = kwargs.get('b_value', int())

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
        if self.occupation != other.occupation:
            return False
        if self.client != other.client:
            return False
        if self.target != other.target:
            return False
        if self.mode != other.mode:
            return False
        if self.effect != other.effect:
            return False
        if self.r_value != other.r_value:
            return False
        if self.g_value != other.g_value:
            return False
        if self.b_value != other.b_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def occupation(self):
        """Message field 'occupation'."""
        return self._occupation

    @occupation.setter
    def occupation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'occupation' field must be of type 'bool'"
        self._occupation = value

    @property
    def client(self):
        """Message field 'client'."""
        return self._client

    @client.setter
    def client(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'client' field must be of type 'str'"
        self._client = value

    @property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target' field must be an unsigned integer in [0, 255]"
        self._target = value

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
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @property
    def effect(self):
        """Message field 'effect'."""
        return self._effect

    @effect.setter
    def effect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'effect' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'effect' field must be an unsigned integer in [0, 255]"
        self._effect = value

    @property
    def r_value(self):
        """Message field 'r_value'."""
        return self._r_value

    @r_value.setter
    def r_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'r_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'r_value' field must be an unsigned integer in [0, 255]"
        self._r_value = value

    @property
    def g_value(self):
        """Message field 'g_value'."""
        return self._g_value

    @g_value.setter
    def g_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'g_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'g_value' field must be an unsigned integer in [0, 255]"
        self._g_value = value

    @property
    def b_value(self):
        """Message field 'b_value'."""
        return self._b_value

    @b_value.setter
    def b_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_value' field must be an unsigned integer in [0, 255]"
        self._b_value = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_LedExecute_Response(type):
    """Metaclass of message 'LedExecute_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCEED': 0,
        'TIMEOUT': 1107,
        'TARGET_ERROR': 1121,
        'PRIORITY_ERROR': 1122,
        'MODE_ERROR': 1123,
        'EFFECT_ERROR': 1124,
        'LOW_PRIORITY': 1125,
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
                'protocol.srv.LedExecute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_execute__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_execute__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_execute__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_execute__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_execute__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCEED': cls.__constants['SUCCEED'],
            'TIMEOUT': cls.__constants['TIMEOUT'],
            'TARGET_ERROR': cls.__constants['TARGET_ERROR'],
            'PRIORITY_ERROR': cls.__constants['PRIORITY_ERROR'],
            'MODE_ERROR': cls.__constants['MODE_ERROR'],
            'EFFECT_ERROR': cls.__constants['EFFECT_ERROR'],
            'LOW_PRIORITY': cls.__constants['LOW_PRIORITY'],
        }

    @property
    def SUCCEED(self):
        """Message constant 'SUCCEED'."""
        return Metaclass_LedExecute_Response.__constants['SUCCEED']

    @property
    def TIMEOUT(self):
        """Message constant 'TIMEOUT'."""
        return Metaclass_LedExecute_Response.__constants['TIMEOUT']

    @property
    def TARGET_ERROR(self):
        """Message constant 'TARGET_ERROR'."""
        return Metaclass_LedExecute_Response.__constants['TARGET_ERROR']

    @property
    def PRIORITY_ERROR(self):
        """Message constant 'PRIORITY_ERROR'."""
        return Metaclass_LedExecute_Response.__constants['PRIORITY_ERROR']

    @property
    def MODE_ERROR(self):
        """Message constant 'MODE_ERROR'."""
        return Metaclass_LedExecute_Response.__constants['MODE_ERROR']

    @property
    def EFFECT_ERROR(self):
        """Message constant 'EFFECT_ERROR'."""
        return Metaclass_LedExecute_Response.__constants['EFFECT_ERROR']

    @property
    def LOW_PRIORITY(self):
        """Message constant 'LOW_PRIORITY'."""
        return Metaclass_LedExecute_Response.__constants['LOW_PRIORITY']


class LedExecute_Response(metaclass=Metaclass_LedExecute_Response):
    """
    Message class 'LedExecute_Response'.

    Constants:
      SUCCEED
      TIMEOUT
      TARGET_ERROR
      PRIORITY_ERROR
      MODE_ERROR
      EFFECT_ERROR
      LOW_PRIORITY
    """

    __slots__ = [
        '_code',
    ]

    _fields_and_field_types = {
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.code = kwargs.get('code', int())

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
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'code' field must be an integer in [-2147483648, 2147483647]"
        self._code = value


class Metaclass_LedExecute(type):
    """Metaclass of service 'LedExecute'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('protocol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'protocol.srv.LedExecute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__led_execute

            from protocol.srv import _led_execute
            if _led_execute.Metaclass_LedExecute_Request._TYPE_SUPPORT is None:
                _led_execute.Metaclass_LedExecute_Request.__import_type_support__()
            if _led_execute.Metaclass_LedExecute_Response._TYPE_SUPPORT is None:
                _led_execute.Metaclass_LedExecute_Response.__import_type_support__()


class LedExecute(metaclass=Metaclass_LedExecute):
    from protocol.srv._led_execute import LedExecute_Request as Request
    from protocol.srv._led_execute import LedExecute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/AudioPlayExtend.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioPlayExtend(type):
    """Metaclass of message 'AudioPlayExtend'."""

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
                'protocol.msg.AudioPlayExtend')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__audio_play_extend
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__audio_play_extend
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__audio_play_extend
            cls._TYPE_SUPPORT = module.type_support_msg__msg__audio_play_extend
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__audio_play_extend

            from protocol.msg import AudioPlay
            if AudioPlay.__class__._TYPE_SUPPORT is None:
                AudioPlay.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioPlayExtend(metaclass=Metaclass_AudioPlayExtend):
    """Message class 'AudioPlayExtend'."""

    __slots__ = [
        '_module_name',
        '_is_online',
        '_speech',
        '_text',
    ]

    _fields_and_field_types = {
        'module_name': 'string',
        'is_online': 'boolean',
        'speech': 'protocol/AudioPlay',
        'text': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'AudioPlay'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.module_name = kwargs.get('module_name', str())
        self.is_online = kwargs.get('is_online', bool())
        from protocol.msg import AudioPlay
        self.speech = kwargs.get('speech', AudioPlay())
        self.text = kwargs.get('text', str())

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
        if self.module_name != other.module_name:
            return False
        if self.is_online != other.is_online:
            return False
        if self.speech != other.speech:
            return False
        if self.text != other.text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def module_name(self):
        """Message field 'module_name'."""
        return self._module_name

    @module_name.setter
    def module_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'module_name' field must be of type 'str'"
        self._module_name = value

    @property
    def is_online(self):
        """Message field 'is_online'."""
        return self._is_online

    @is_online.setter
    def is_online(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_online' field must be of type 'bool'"
        self._is_online = value

    @property
    def speech(self):
        """Message field 'speech'."""
        return self._speech

    @speech.setter
    def speech(self, value):
        if __debug__:
            from protocol.msg import AudioPlay
            assert \
                isinstance(value, AudioPlay), \
                "The 'speech' field must be a sub message of type 'AudioPlay'"
        self._speech = value

    @property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value

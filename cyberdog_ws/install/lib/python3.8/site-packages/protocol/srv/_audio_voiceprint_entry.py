# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/AudioVoiceprintEntry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioVoiceprintEntry_Request(type):
    """Metaclass of message 'AudioVoiceprintEntry_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'AVE_DELETE_VOICEPRINT': 4,
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
                'protocol.srv.AudioVoiceprintEntry_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__audio_voiceprint_entry__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__audio_voiceprint_entry__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__audio_voiceprint_entry__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__audio_voiceprint_entry__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__audio_voiceprint_entry__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'AVE_DELETE_VOICEPRINT': cls.__constants['AVE_DELETE_VOICEPRINT'],
        }

    @property
    def AVE_DELETE_VOICEPRINT(self):
        """Message constant 'AVE_DELETE_VOICEPRINT'."""
        return Metaclass_AudioVoiceprintEntry_Request.__constants['AVE_DELETE_VOICEPRINT']


class AudioVoiceprintEntry_Request(metaclass=Metaclass_AudioVoiceprintEntry_Request):
    """
    Message class 'AudioVoiceprintEntry_Request'.

    Constants:
      AVE_DELETE_VOICEPRINT
    """

    __slots__ = [
        '_command',
        '_username',
    ]

    _fields_and_field_types = {
        'command': 'uint8',
        'username': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())
        self.username = kwargs.get('username', str())

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
        if self.command != other.command:
            return False
        if self.username != other.username:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @property
    def username(self):
        """Message field 'username'."""
        return self._username

    @username.setter
    def username(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'username' field must be of type 'str'"
        self._username = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AudioVoiceprintEntry_Response(type):
    """Metaclass of message 'AudioVoiceprintEntry_Response'."""

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
                'protocol.srv.AudioVoiceprintEntry_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__audio_voiceprint_entry__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__audio_voiceprint_entry__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__audio_voiceprint_entry__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__audio_voiceprint_entry__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__audio_voiceprint_entry__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioVoiceprintEntry_Response(metaclass=Metaclass_AudioVoiceprintEntry_Response):
    """Message class 'AudioVoiceprintEntry_Response'."""

    __slots__ = [
        '_success',
        '_code',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
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
        if self.success != other.success:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

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


class Metaclass_AudioVoiceprintEntry(type):
    """Metaclass of service 'AudioVoiceprintEntry'."""

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
                'protocol.srv.AudioVoiceprintEntry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__audio_voiceprint_entry

            from protocol.srv import _audio_voiceprint_entry
            if _audio_voiceprint_entry.Metaclass_AudioVoiceprintEntry_Request._TYPE_SUPPORT is None:
                _audio_voiceprint_entry.Metaclass_AudioVoiceprintEntry_Request.__import_type_support__()
            if _audio_voiceprint_entry.Metaclass_AudioVoiceprintEntry_Response._TYPE_SUPPORT is None:
                _audio_voiceprint_entry.Metaclass_AudioVoiceprintEntry_Response.__import_type_support__()


class AudioVoiceprintEntry(metaclass=Metaclass_AudioVoiceprintEntry):
    from protocol.srv._audio_voiceprint_entry import AudioVoiceprintEntry_Request as Request
    from protocol.srv._audio_voiceprint_entry import AudioVoiceprintEntry_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/AudioVoiceprintTrain.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioVoiceprintTrain_Request(type):
    """Metaclass of message 'AudioVoiceprintTrain_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TID_START': 1,
        'TID_CANCEL': 2,
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
                'protocol.srv.AudioVoiceprintTrain_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__audio_voiceprint_train__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__audio_voiceprint_train__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__audio_voiceprint_train__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__audio_voiceprint_train__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__audio_voiceprint_train__request

            from protocol.msg import VoicePrint
            if VoicePrint.__class__._TYPE_SUPPORT is None:
                VoicePrint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TID_START': cls.__constants['TID_START'],
            'TID_CANCEL': cls.__constants['TID_CANCEL'],
        }

    @property
    def TID_START(self):
        """Message constant 'TID_START'."""
        return Metaclass_AudioVoiceprintTrain_Request.__constants['TID_START']

    @property
    def TID_CANCEL(self):
        """Message constant 'TID_CANCEL'."""
        return Metaclass_AudioVoiceprintTrain_Request.__constants['TID_CANCEL']


class AudioVoiceprintTrain_Request(metaclass=Metaclass_AudioVoiceprintTrain_Request):
    """
    Message class 'AudioVoiceprintTrain_Request'.

    Constants:
      TID_START
      TID_CANCEL
    """

    __slots__ = [
        '_train_id',
        '_voice_print',
    ]

    _fields_and_field_types = {
        'train_id': 'uint8',
        'voice_print': 'protocol/VoicePrint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'VoicePrint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.train_id = kwargs.get('train_id', int())
        from protocol.msg import VoicePrint
        self.voice_print = kwargs.get('voice_print', VoicePrint())

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
        if self.train_id != other.train_id:
            return False
        if self.voice_print != other.voice_print:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def train_id(self):
        """Message field 'train_id'."""
        return self._train_id

    @train_id.setter
    def train_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'train_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'train_id' field must be an unsigned integer in [0, 255]"
        self._train_id = value

    @property
    def voice_print(self):
        """Message field 'voice_print'."""
        return self._voice_print

    @voice_print.setter
    def voice_print(self, value):
        if __debug__:
            from protocol.msg import VoicePrint
            assert \
                isinstance(value, VoicePrint), \
                "The 'voice_print' field must be a sub message of type 'VoicePrint'"
        self._voice_print = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AudioVoiceprintTrain_Response(type):
    """Metaclass of message 'AudioVoiceprintTrain_Response'."""

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
                'protocol.srv.AudioVoiceprintTrain_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__audio_voiceprint_train__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__audio_voiceprint_train__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__audio_voiceprint_train__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__audio_voiceprint_train__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__audio_voiceprint_train__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioVoiceprintTrain_Response(metaclass=Metaclass_AudioVoiceprintTrain_Response):
    """Message class 'AudioVoiceprintTrain_Response'."""

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


class Metaclass_AudioVoiceprintTrain(type):
    """Metaclass of service 'AudioVoiceprintTrain'."""

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
                'protocol.srv.AudioVoiceprintTrain')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__audio_voiceprint_train

            from protocol.srv import _audio_voiceprint_train
            if _audio_voiceprint_train.Metaclass_AudioVoiceprintTrain_Request._TYPE_SUPPORT is None:
                _audio_voiceprint_train.Metaclass_AudioVoiceprintTrain_Request.__import_type_support__()
            if _audio_voiceprint_train.Metaclass_AudioVoiceprintTrain_Response._TYPE_SUPPORT is None:
                _audio_voiceprint_train.Metaclass_AudioVoiceprintTrain_Response.__import_type_support__()


class AudioVoiceprintTrain(metaclass=Metaclass_AudioVoiceprintTrain):
    from protocol.srv._audio_voiceprint_train import AudioVoiceprintTrain_Request as Request
    from protocol.srv._audio_voiceprint_train import AudioVoiceprintTrain_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

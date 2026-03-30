# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/AudioAuthToken.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioAuthToken_Request(type):
    """Metaclass of message 'AudioAuthToken_Request'."""

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
                'protocol.srv.AudioAuthToken_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__audio_auth_token__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__audio_auth_token__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__audio_auth_token__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__audio_auth_token__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__audio_auth_token__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioAuthToken_Request(metaclass=Metaclass_AudioAuthToken_Request):
    """Message class 'AudioAuthToken_Request'."""

    __slots__ = [
        '_uid',
        '_token_access',
        '_token_fresh',
        '_token_expirein',
    ]

    _fields_and_field_types = {
        'uid': 'string',
        'token_access': 'string',
        'token_fresh': 'string',
        'token_expirein': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.uid = kwargs.get('uid', str())
        self.token_access = kwargs.get('token_access', str())
        self.token_fresh = kwargs.get('token_fresh', str())
        self.token_expirein = kwargs.get('token_expirein', int())

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
        if self.uid != other.uid:
            return False
        if self.token_access != other.token_access:
            return False
        if self.token_fresh != other.token_fresh:
            return False
        if self.token_expirein != other.token_expirein:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def uid(self):
        """Message field 'uid'."""
        return self._uid

    @uid.setter
    def uid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'uid' field must be of type 'str'"
        self._uid = value

    @property
    def token_access(self):
        """Message field 'token_access'."""
        return self._token_access

    @token_access.setter
    def token_access(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'token_access' field must be of type 'str'"
        self._token_access = value

    @property
    def token_fresh(self):
        """Message field 'token_fresh'."""
        return self._token_fresh

    @token_fresh.setter
    def token_fresh(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'token_fresh' field must be of type 'str'"
        self._token_fresh = value

    @property
    def token_expirein(self):
        """Message field 'token_expirein'."""
        return self._token_expirein

    @token_expirein.setter
    def token_expirein(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'token_expirein' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'token_expirein' field must be an unsigned integer in [0, 18446744073709551615]"
        self._token_expirein = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AudioAuthToken_Response(type):
    """Metaclass of message 'AudioAuthToken_Response'."""

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
                'protocol.srv.AudioAuthToken_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__audio_auth_token__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__audio_auth_token__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__audio_auth_token__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__audio_auth_token__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__audio_auth_token__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioAuthToken_Response(metaclass=Metaclass_AudioAuthToken_Response):
    """Message class 'AudioAuthToken_Response'."""

    __slots__ = [
        '_result',
        '_code',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
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
        self.result = kwargs.get('result', bool())
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
        if self.result != other.result:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value

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


class Metaclass_AudioAuthToken(type):
    """Metaclass of service 'AudioAuthToken'."""

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
                'protocol.srv.AudioAuthToken')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__audio_auth_token

            from protocol.srv import _audio_auth_token
            if _audio_auth_token.Metaclass_AudioAuthToken_Request._TYPE_SUPPORT is None:
                _audio_auth_token.Metaclass_AudioAuthToken_Request.__import_type_support__()
            if _audio_auth_token.Metaclass_AudioAuthToken_Response._TYPE_SUPPORT is None:
                _audio_auth_token.Metaclass_AudioAuthToken_Response.__import_type_support__()


class AudioAuthToken(metaclass=Metaclass_AudioAuthToken):
    from protocol.srv._audio_auth_token import AudioAuthToken_Request as Request
    from protocol.srv._audio_auth_token import AudioAuthToken_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

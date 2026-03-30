# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/BesHttpSendFile.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BesHttpSendFile_Request(type):
    """Metaclass of message 'BesHttpSendFile_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HTTP_METHOD_POST': 1,
        'HTTP_METHOD_PUT': 2,
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
                'protocol.srv.BesHttpSendFile_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bes_http_send_file__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bes_http_send_file__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bes_http_send_file__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bes_http_send_file__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bes_http_send_file__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HTTP_METHOD_POST': cls.__constants['HTTP_METHOD_POST'],
            'HTTP_METHOD_PUT': cls.__constants['HTTP_METHOD_PUT'],
        }

    @property
    def HTTP_METHOD_POST(self):
        """Message constant 'HTTP_METHOD_POST'."""
        return Metaclass_BesHttpSendFile_Request.__constants['HTTP_METHOD_POST']

    @property
    def HTTP_METHOD_PUT(self):
        """Message constant 'HTTP_METHOD_PUT'."""
        return Metaclass_BesHttpSendFile_Request.__constants['HTTP_METHOD_PUT']


class BesHttpSendFile_Request(metaclass=Metaclass_BesHttpSendFile_Request):
    """
    Message class 'BesHttpSendFile_Request'.

    Constants:
      HTTP_METHOD_POST
      HTTP_METHOD_PUT
    """

    __slots__ = [
        '_method',
        '_url',
        '_file_name',
        '_content_type',
        '_info',
        '_milsecs',
    ]

    _fields_and_field_types = {
        'method': 'uint8',
        'url': 'string',
        'file_name': 'string',
        'content_type': 'string',
        'info': 'string',
        'milsecs': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.method = kwargs.get('method', int())
        self.url = kwargs.get('url', str())
        self.file_name = kwargs.get('file_name', str())
        self.content_type = kwargs.get('content_type', str())
        self.info = kwargs.get('info', str())
        self.milsecs = kwargs.get('milsecs', int())

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
        if self.method != other.method:
            return False
        if self.url != other.url:
            return False
        if self.file_name != other.file_name:
            return False
        if self.content_type != other.content_type:
            return False
        if self.info != other.info:
            return False
        if self.milsecs != other.milsecs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def method(self):
        """Message field 'method'."""
        return self._method

    @method.setter
    def method(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'method' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'method' field must be an unsigned integer in [0, 255]"
        self._method = value

    @property
    def url(self):
        """Message field 'url'."""
        return self._url

    @url.setter
    def url(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'url' field must be of type 'str'"
        self._url = value

    @property
    def file_name(self):
        """Message field 'file_name'."""
        return self._file_name

    @file_name.setter
    def file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file_name' field must be of type 'str'"
        self._file_name = value

    @property
    def content_type(self):
        """Message field 'content_type'."""
        return self._content_type

    @content_type.setter
    def content_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'content_type' field must be of type 'str'"
        self._content_type = value

    @property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'info' field must be of type 'str'"
        self._info = value

    @property
    def milsecs(self):
        """Message field 'milsecs'."""
        return self._milsecs

    @milsecs.setter
    def milsecs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'milsecs' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'milsecs' field must be an unsigned integer in [0, 65535]"
        self._milsecs = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_BesHttpSendFile_Response(type):
    """Metaclass of message 'BesHttpSendFile_Response'."""

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
                'protocol.srv.BesHttpSendFile_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bes_http_send_file__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bes_http_send_file__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bes_http_send_file__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bes_http_send_file__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bes_http_send_file__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BesHttpSendFile_Response(metaclass=Metaclass_BesHttpSendFile_Response):
    """Message class 'BesHttpSendFile_Response'."""

    __slots__ = [
        '_data',
        '_code',
    ]

    _fields_and_field_types = {
        'data': 'string',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data = kwargs.get('data', str())
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
        if self.data != other.data:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data' field must be of type 'str'"
        self._data = value

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


class Metaclass_BesHttpSendFile(type):
    """Metaclass of service 'BesHttpSendFile'."""

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
                'protocol.srv.BesHttpSendFile')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__bes_http_send_file

            from protocol.srv import _bes_http_send_file
            if _bes_http_send_file.Metaclass_BesHttpSendFile_Request._TYPE_SUPPORT is None:
                _bes_http_send_file.Metaclass_BesHttpSendFile_Request.__import_type_support__()
            if _bes_http_send_file.Metaclass_BesHttpSendFile_Response._TYPE_SUPPORT is None:
                _bes_http_send_file.Metaclass_BesHttpSendFile_Response.__import_type_support__()


class BesHttpSendFile(metaclass=Metaclass_BesHttpSendFile):
    from protocol.srv._bes_http_send_file import BesHttpSendFile_Request as Request
    from protocol.srv._bes_http_send_file import BesHttpSendFile_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

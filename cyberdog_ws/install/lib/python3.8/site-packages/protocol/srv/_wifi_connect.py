# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/WifiConnect.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WifiConnect_Request(type):
    """Metaclass of message 'WifiConnect_Request'."""

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
                'protocol.srv.WifiConnect_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__wifi_connect__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__wifi_connect__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__wifi_connect__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__wifi_connect__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__wifi_connect__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WifiConnect_Request(metaclass=Metaclass_WifiConnect_Request):
    """Message class 'WifiConnect_Request'."""

    __slots__ = [
        '_ssid',
        '_pwd',
    ]

    _fields_and_field_types = {
        'ssid': 'string',
        'pwd': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ssid = kwargs.get('ssid', str())
        self.pwd = kwargs.get('pwd', str())

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
        if self.ssid != other.ssid:
            return False
        if self.pwd != other.pwd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ssid(self):
        """Message field 'ssid'."""
        return self._ssid

    @ssid.setter
    def ssid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ssid' field must be of type 'str'"
        self._ssid = value

    @property
    def pwd(self):
        """Message field 'pwd'."""
        return self._pwd

    @pwd.setter
    def pwd(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pwd' field must be of type 'str'"
        self._pwd = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_WifiConnect_Response(type):
    """Metaclass of message 'WifiConnect_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_NO_SSID': 4,
        'RESULT_ERR_PWD': 5,
        'RESULT_OTHER': 6,
        'RESULT_SUCCESS': 7,
        'RESULT_INTERRUPT': 14,
        'RESULT_TIMEOUT': 15,
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
                'protocol.srv.WifiConnect_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__wifi_connect__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__wifi_connect__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__wifi_connect__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__wifi_connect__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__wifi_connect__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_NO_SSID': cls.__constants['RESULT_NO_SSID'],
            'RESULT_ERR_PWD': cls.__constants['RESULT_ERR_PWD'],
            'RESULT_OTHER': cls.__constants['RESULT_OTHER'],
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_INTERRUPT': cls.__constants['RESULT_INTERRUPT'],
            'RESULT_TIMEOUT': cls.__constants['RESULT_TIMEOUT'],
        }

    @property
    def RESULT_NO_SSID(self):
        """Message constant 'RESULT_NO_SSID'."""
        return Metaclass_WifiConnect_Response.__constants['RESULT_NO_SSID']

    @property
    def RESULT_ERR_PWD(self):
        """Message constant 'RESULT_ERR_PWD'."""
        return Metaclass_WifiConnect_Response.__constants['RESULT_ERR_PWD']

    @property
    def RESULT_OTHER(self):
        """Message constant 'RESULT_OTHER'."""
        return Metaclass_WifiConnect_Response.__constants['RESULT_OTHER']

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_WifiConnect_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_INTERRUPT(self):
        """Message constant 'RESULT_INTERRUPT'."""
        return Metaclass_WifiConnect_Response.__constants['RESULT_INTERRUPT']

    @property
    def RESULT_TIMEOUT(self):
        """Message constant 'RESULT_TIMEOUT'."""
        return Metaclass_WifiConnect_Response.__constants['RESULT_TIMEOUT']


class WifiConnect_Response(metaclass=Metaclass_WifiConnect_Response):
    """
    Message class 'WifiConnect_Response'.

    Constants:
      RESULT_NO_SSID
      RESULT_ERR_PWD
      RESULT_OTHER
      RESULT_SUCCESS
      RESULT_INTERRUPT
      RESULT_TIMEOUT
    """

    __slots__ = [
        '_result',
        '_code',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
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
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
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


class Metaclass_WifiConnect(type):
    """Metaclass of service 'WifiConnect'."""

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
                'protocol.srv.WifiConnect')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__wifi_connect

            from protocol.srv import _wifi_connect
            if _wifi_connect.Metaclass_WifiConnect_Request._TYPE_SUPPORT is None:
                _wifi_connect.Metaclass_WifiConnect_Request.__import_type_support__()
            if _wifi_connect.Metaclass_WifiConnect_Response._TYPE_SUPPORT is None:
                _wifi_connect.Metaclass_WifiConnect_Response.__import_type_support__()


class WifiConnect(metaclass=Metaclass_WifiConnect):
    from protocol.srv._wifi_connect import WifiConnect_Request as Request
    from protocol.srv._wifi_connect import WifiConnect_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/Connector.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Connector_Request(type):
    """Metaclass of message 'Connector_Request'."""

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
                'protocol.srv.Connector_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__connector__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__connector__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__connector__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__connector__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__connector__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Connector_Request(metaclass=Metaclass_Connector_Request):
    """Message class 'Connector_Request'."""

    __slots__ = [
        '_wifi_name',
        '_wifi_password',
        '_provider_ip',
    ]

    _fields_and_field_types = {
        'wifi_name': 'string',
        'wifi_password': 'string',
        'provider_ip': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wifi_name = kwargs.get('wifi_name', str())
        self.wifi_password = kwargs.get('wifi_password', str())
        self.provider_ip = kwargs.get('provider_ip', str())

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
        if self.wifi_name != other.wifi_name:
            return False
        if self.wifi_password != other.wifi_password:
            return False
        if self.provider_ip != other.provider_ip:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def wifi_name(self):
        """Message field 'wifi_name'."""
        return self._wifi_name

    @wifi_name.setter
    def wifi_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wifi_name' field must be of type 'str'"
        self._wifi_name = value

    @property
    def wifi_password(self):
        """Message field 'wifi_password'."""
        return self._wifi_password

    @wifi_password.setter
    def wifi_password(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wifi_password' field must be of type 'str'"
        self._wifi_password = value

    @property
    def provider_ip(self):
        """Message field 'provider_ip'."""
        return self._provider_ip

    @provider_ip.setter
    def provider_ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'provider_ip' field must be of type 'str'"
        self._provider_ip = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Connector_Response(type):
    """Metaclass of message 'Connector_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CODE_SUCCESS': 0,
        'CODE_WIFI_NAME_FAIL': 8121,
        'CODE_WIFI_PASSWORD_FAIL': 8122,
        'CODE_WIFI_PROVIDER_IP_FAIL': 8123,
        'CODE_CONNECTION_TIMEOUT_FAIL': 8124,
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
                'protocol.srv.Connector_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__connector__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__connector__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__connector__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__connector__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__connector__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CODE_SUCCESS': cls.__constants['CODE_SUCCESS'],
            'CODE_WIFI_NAME_FAIL': cls.__constants['CODE_WIFI_NAME_FAIL'],
            'CODE_WIFI_PASSWORD_FAIL': cls.__constants['CODE_WIFI_PASSWORD_FAIL'],
            'CODE_WIFI_PROVIDER_IP_FAIL': cls.__constants['CODE_WIFI_PROVIDER_IP_FAIL'],
            'CODE_CONNECTION_TIMEOUT_FAIL': cls.__constants['CODE_CONNECTION_TIMEOUT_FAIL'],
        }

    @property
    def CODE_SUCCESS(self):
        """Message constant 'CODE_SUCCESS'."""
        return Metaclass_Connector_Response.__constants['CODE_SUCCESS']

    @property
    def CODE_WIFI_NAME_FAIL(self):
        """Message constant 'CODE_WIFI_NAME_FAIL'."""
        return Metaclass_Connector_Response.__constants['CODE_WIFI_NAME_FAIL']

    @property
    def CODE_WIFI_PASSWORD_FAIL(self):
        """Message constant 'CODE_WIFI_PASSWORD_FAIL'."""
        return Metaclass_Connector_Response.__constants['CODE_WIFI_PASSWORD_FAIL']

    @property
    def CODE_WIFI_PROVIDER_IP_FAIL(self):
        """Message constant 'CODE_WIFI_PROVIDER_IP_FAIL'."""
        return Metaclass_Connector_Response.__constants['CODE_WIFI_PROVIDER_IP_FAIL']

    @property
    def CODE_CONNECTION_TIMEOUT_FAIL(self):
        """Message constant 'CODE_CONNECTION_TIMEOUT_FAIL'."""
        return Metaclass_Connector_Response.__constants['CODE_CONNECTION_TIMEOUT_FAIL']


class Connector_Response(metaclass=Metaclass_Connector_Response):
    """
    Message class 'Connector_Response'.

    Constants:
      CODE_SUCCESS
      CODE_WIFI_NAME_FAIL
      CODE_WIFI_PASSWORD_FAIL
      CODE_WIFI_PROVIDER_IP_FAIL
      CODE_CONNECTION_TIMEOUT_FAIL
    """

    __slots__ = [
        '_connected',
        '_code',
    ]

    _fields_and_field_types = {
        'connected': 'boolean',
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
        self.connected = kwargs.get('connected', bool())
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
        if self.connected != other.connected:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

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


class Metaclass_Connector(type):
    """Metaclass of service 'Connector'."""

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
                'protocol.srv.Connector')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__connector

            from protocol.srv import _connector
            if _connector.Metaclass_Connector_Request._TYPE_SUPPORT is None:
                _connector.Metaclass_Connector_Request.__import_type_support__()
            if _connector.Metaclass_Connector_Response._TYPE_SUPPORT is None:
                _connector.Metaclass_Connector_Response.__import_type_support__()


class Connector(metaclass=Metaclass_Connector):
    from protocol.srv._connector import Connector_Request as Request
    from protocol.srv._connector import Connector_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

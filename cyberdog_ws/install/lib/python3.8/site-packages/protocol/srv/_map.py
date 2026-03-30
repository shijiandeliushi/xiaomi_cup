# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/Map.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Map_Request(type):
    """Metaclass of message 'Map_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAP_COMMAND_TYPE_UNKNOWN': 0,
        'MAP_COMMAND_TYPE_INSERT': 1,
        'MAP_COMMAND_TYPE_DELETE': 2,
        'MAP_COMMAND_TYPE_UPDATE': 3,
        'MAP_COMMAND_TYPE_QUERY': 4,
        'MAP_COMMAND_TYPE_LOAD': 5,
        'MAP_BUILD_TYPE_UNKNOWN': 0,
        'MAP_BUILD_TYPE_LIDAR': 1,
        'MAP_BUILD_TYPE_VISION': 2,
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
                'protocol.srv.Map_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__map__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__map__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__map__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__map__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__map__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAP_COMMAND_TYPE_UNKNOWN': cls.__constants['MAP_COMMAND_TYPE_UNKNOWN'],
            'MAP_COMMAND_TYPE_INSERT': cls.__constants['MAP_COMMAND_TYPE_INSERT'],
            'MAP_COMMAND_TYPE_DELETE': cls.__constants['MAP_COMMAND_TYPE_DELETE'],
            'MAP_COMMAND_TYPE_UPDATE': cls.__constants['MAP_COMMAND_TYPE_UPDATE'],
            'MAP_COMMAND_TYPE_QUERY': cls.__constants['MAP_COMMAND_TYPE_QUERY'],
            'MAP_COMMAND_TYPE_LOAD': cls.__constants['MAP_COMMAND_TYPE_LOAD'],
            'MAP_BUILD_TYPE_UNKNOWN': cls.__constants['MAP_BUILD_TYPE_UNKNOWN'],
            'MAP_BUILD_TYPE_LIDAR': cls.__constants['MAP_BUILD_TYPE_LIDAR'],
            'MAP_BUILD_TYPE_VISION': cls.__constants['MAP_BUILD_TYPE_VISION'],
        }

    @property
    def MAP_COMMAND_TYPE_UNKNOWN(self):
        """Message constant 'MAP_COMMAND_TYPE_UNKNOWN'."""
        return Metaclass_Map_Request.__constants['MAP_COMMAND_TYPE_UNKNOWN']

    @property
    def MAP_COMMAND_TYPE_INSERT(self):
        """Message constant 'MAP_COMMAND_TYPE_INSERT'."""
        return Metaclass_Map_Request.__constants['MAP_COMMAND_TYPE_INSERT']

    @property
    def MAP_COMMAND_TYPE_DELETE(self):
        """Message constant 'MAP_COMMAND_TYPE_DELETE'."""
        return Metaclass_Map_Request.__constants['MAP_COMMAND_TYPE_DELETE']

    @property
    def MAP_COMMAND_TYPE_UPDATE(self):
        """Message constant 'MAP_COMMAND_TYPE_UPDATE'."""
        return Metaclass_Map_Request.__constants['MAP_COMMAND_TYPE_UPDATE']

    @property
    def MAP_COMMAND_TYPE_QUERY(self):
        """Message constant 'MAP_COMMAND_TYPE_QUERY'."""
        return Metaclass_Map_Request.__constants['MAP_COMMAND_TYPE_QUERY']

    @property
    def MAP_COMMAND_TYPE_LOAD(self):
        """Message constant 'MAP_COMMAND_TYPE_LOAD'."""
        return Metaclass_Map_Request.__constants['MAP_COMMAND_TYPE_LOAD']

    @property
    def MAP_BUILD_TYPE_UNKNOWN(self):
        """Message constant 'MAP_BUILD_TYPE_UNKNOWN'."""
        return Metaclass_Map_Request.__constants['MAP_BUILD_TYPE_UNKNOWN']

    @property
    def MAP_BUILD_TYPE_LIDAR(self):
        """Message constant 'MAP_BUILD_TYPE_LIDAR'."""
        return Metaclass_Map_Request.__constants['MAP_BUILD_TYPE_LIDAR']

    @property
    def MAP_BUILD_TYPE_VISION(self):
        """Message constant 'MAP_BUILD_TYPE_VISION'."""
        return Metaclass_Map_Request.__constants['MAP_BUILD_TYPE_VISION']


class Map_Request(metaclass=Metaclass_Map_Request):
    """
    Message class 'Map_Request'.

    Constants:
      MAP_COMMAND_TYPE_UNKNOWN
      MAP_COMMAND_TYPE_INSERT
      MAP_COMMAND_TYPE_DELETE
      MAP_COMMAND_TYPE_UPDATE
      MAP_COMMAND_TYPE_QUERY
      MAP_COMMAND_TYPE_LOAD
      MAP_BUILD_TYPE_UNKNOWN
      MAP_BUILD_TYPE_LIDAR
      MAP_BUILD_TYPE_VISION
    """

    __slots__ = [
        '_command',
        '_map_build_type',
        '_request',
    ]

    _fields_and_field_types = {
        'command': 'uint8',
        'map_build_type': 'uint8',
        'request': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())
        self.map_build_type = kwargs.get('map_build_type', int())
        self.request = kwargs.get('request', str())

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
        if self.map_build_type != other.map_build_type:
            return False
        if self.request != other.request:
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
    def map_build_type(self):
        """Message field 'map_build_type'."""
        return self._map_build_type

    @map_build_type.setter
    def map_build_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_build_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'map_build_type' field must be an unsigned integer in [0, 255]"
        self._map_build_type = value

    @property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'request' field must be of type 'str'"
        self._request = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Map_Response(type):
    """Metaclass of message 'Map_Response'."""

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
                'protocol.srv.Map_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__map__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__map__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__map__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__map__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__map__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Map_Response(metaclass=Metaclass_Map_Response):
    """Message class 'Map_Response'."""

    __slots__ = [
        '_response',
        '_code',
    ]

    _fields_and_field_types = {
        'response': 'string',
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
        self.response = kwargs.get('response', str())
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
        if self.response != other.response:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response' field must be of type 'str'"
        self._response = value

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


class Metaclass_Map(type):
    """Metaclass of service 'Map'."""

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
                'protocol.srv.Map')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__map

            from protocol.srv import _map
            if _map.Metaclass_Map_Request._TYPE_SUPPORT is None:
                _map.Metaclass_Map_Request.__import_type_support__()
            if _map.Metaclass_Map_Response._TYPE_SUPPORT is None:
                _map.Metaclass_Map_Response.__import_type_support__()


class Map(metaclass=Metaclass_Map):
    from protocol.srv._map import Map_Request as Request
    from protocol.srv._map import Map_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

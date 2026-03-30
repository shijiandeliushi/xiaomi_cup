# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/GetUWBMacSessionID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetUWBMacSessionID_Request(type):
    """Metaclass of message 'GetUWBMacSessionID_Request'."""

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
                'protocol.srv.GetUWBMacSessionID_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_uwb_mac_session_id__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_uwb_mac_session_id__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_uwb_mac_session_id__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_uwb_mac_session_id__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_uwb_mac_session_id__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetUWBMacSessionID_Request(metaclass=Metaclass_GetUWBMacSessionID_Request):
    """Message class 'GetUWBMacSessionID_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetUWBMacSessionID_Response(type):
    """Metaclass of message 'GetUWBMacSessionID_Response'."""

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
                'protocol.srv.GetUWBMacSessionID_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_uwb_mac_session_id__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_uwb_mac_session_id__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_uwb_mac_session_id__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_uwb_mac_session_id__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_uwb_mac_session_id__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetUWBMacSessionID_Response(metaclass=Metaclass_GetUWBMacSessionID_Response):
    """Message class 'GetUWBMacSessionID_Response'."""

    __slots__ = [
        '_session_id',
        '_master',
        '_slave1',
        '_slave2',
        '_slave3',
        '_slave4',
        '_code',
    ]

    _fields_and_field_types = {
        'session_id': 'uint32',
        'master': 'uint16',
        'slave1': 'uint16',
        'slave2': 'uint16',
        'slave3': 'uint16',
        'slave4': 'uint16',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.session_id = kwargs.get('session_id', int())
        self.master = kwargs.get('master', int())
        self.slave1 = kwargs.get('slave1', int())
        self.slave2 = kwargs.get('slave2', int())
        self.slave3 = kwargs.get('slave3', int())
        self.slave4 = kwargs.get('slave4', int())
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
        if self.session_id != other.session_id:
            return False
        if self.master != other.master:
            return False
        if self.slave1 != other.slave1:
            return False
        if self.slave2 != other.slave2:
            return False
        if self.slave3 != other.slave3:
            return False
        if self.slave4 != other.slave4:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def session_id(self):
        """Message field 'session_id'."""
        return self._session_id

    @session_id.setter
    def session_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'session_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'session_id' field must be an unsigned integer in [0, 4294967295]"
        self._session_id = value

    @property
    def master(self):
        """Message field 'master'."""
        return self._master

    @master.setter
    def master(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'master' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'master' field must be an unsigned integer in [0, 65535]"
        self._master = value

    @property
    def slave1(self):
        """Message field 'slave1'."""
        return self._slave1

    @slave1.setter
    def slave1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slave1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'slave1' field must be an unsigned integer in [0, 65535]"
        self._slave1 = value

    @property
    def slave2(self):
        """Message field 'slave2'."""
        return self._slave2

    @slave2.setter
    def slave2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slave2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'slave2' field must be an unsigned integer in [0, 65535]"
        self._slave2 = value

    @property
    def slave3(self):
        """Message field 'slave3'."""
        return self._slave3

    @slave3.setter
    def slave3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slave3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'slave3' field must be an unsigned integer in [0, 65535]"
        self._slave3 = value

    @property
    def slave4(self):
        """Message field 'slave4'."""
        return self._slave4

    @slave4.setter
    def slave4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slave4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'slave4' field must be an unsigned integer in [0, 65535]"
        self._slave4 = value

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


class Metaclass_GetUWBMacSessionID(type):
    """Metaclass of service 'GetUWBMacSessionID'."""

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
                'protocol.srv.GetUWBMacSessionID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_uwb_mac_session_id

            from protocol.srv import _get_uwb_mac_session_id
            if _get_uwb_mac_session_id.Metaclass_GetUWBMacSessionID_Request._TYPE_SUPPORT is None:
                _get_uwb_mac_session_id.Metaclass_GetUWBMacSessionID_Request.__import_type_support__()
            if _get_uwb_mac_session_id.Metaclass_GetUWBMacSessionID_Response._TYPE_SUPPORT is None:
                _get_uwb_mac_session_id.Metaclass_GetUWBMacSessionID_Response.__import_type_support__()


class GetUWBMacSessionID(metaclass=Metaclass_GetUWBMacSessionID):
    from protocol.srv._get_uwb_mac_session_id import GetUWBMacSessionID_Request as Request
    from protocol.srv._get_uwb_mac_session_id import GetUWBMacSessionID_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

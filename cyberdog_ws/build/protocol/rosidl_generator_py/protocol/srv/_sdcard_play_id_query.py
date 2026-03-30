# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/SdcardPlayIdQuery.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SdcardPlayIdQuery_Request(type):
    """Metaclass of message 'SdcardPlayIdQuery_Request'."""

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
                'protocol.srv.SdcardPlayIdQuery_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sdcard_play_id_query__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sdcard_play_id_query__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sdcard_play_id_query__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sdcard_play_id_query__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sdcard_play_id_query__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SdcardPlayIdQuery_Request(metaclass=Metaclass_SdcardPlayIdQuery_Request):
    """Message class 'SdcardPlayIdQuery_Request'."""

    __slots__ = [
        '_play_id',
    ]

    _fields_and_field_types = {
        'play_id': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.play_id = kwargs.get('play_id', int())

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
        if self.play_id != other.play_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def play_id(self):
        """Message field 'play_id'."""
        return self._play_id

    @play_id.setter
    def play_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'play_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'play_id' field must be an unsigned integer in [0, 65535]"
        self._play_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SdcardPlayIdQuery_Response(type):
    """Metaclass of message 'SdcardPlayIdQuery_Response'."""

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
                'protocol.srv.SdcardPlayIdQuery_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sdcard_play_id_query__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sdcard_play_id_query__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sdcard_play_id_query__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sdcard_play_id_query__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sdcard_play_id_query__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SdcardPlayIdQuery_Response(metaclass=Metaclass_SdcardPlayIdQuery_Response):
    """Message class 'SdcardPlayIdQuery_Response'."""

    __slots__ = [
        '_exist',
        '_code',
    ]

    _fields_and_field_types = {
        'exist': 'boolean',
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
        self.exist = kwargs.get('exist', bool())
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
        if self.exist != other.exist:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def exist(self):
        """Message field 'exist'."""
        return self._exist

    @exist.setter
    def exist(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'exist' field must be of type 'bool'"
        self._exist = value

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


class Metaclass_SdcardPlayIdQuery(type):
    """Metaclass of service 'SdcardPlayIdQuery'."""

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
                'protocol.srv.SdcardPlayIdQuery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__sdcard_play_id_query

            from protocol.srv import _sdcard_play_id_query
            if _sdcard_play_id_query.Metaclass_SdcardPlayIdQuery_Request._TYPE_SUPPORT is None:
                _sdcard_play_id_query.Metaclass_SdcardPlayIdQuery_Request.__import_type_support__()
            if _sdcard_play_id_query.Metaclass_SdcardPlayIdQuery_Response._TYPE_SUPPORT is None:
                _sdcard_play_id_query.Metaclass_SdcardPlayIdQuery_Response.__import_type_support__()


class SdcardPlayIdQuery(metaclass=Metaclass_SdcardPlayIdQuery):
    from protocol.srv._sdcard_play_id_query import SdcardPlayIdQuery_Request as Request
    from protocol.srv._sdcard_play_id_query import SdcardPlayIdQuery_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

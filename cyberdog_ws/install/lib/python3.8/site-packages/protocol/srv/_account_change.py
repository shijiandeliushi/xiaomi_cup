# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/AccountChange.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AccountChange_Request(type):
    """Metaclass of message 'AccountChange_Request'."""

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
                'protocol.srv.AccountChange_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__account_change__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__account_change__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__account_change__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__account_change__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__account_change__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AccountChange_Request(metaclass=Metaclass_AccountChange_Request):
    """Message class 'AccountChange_Request'."""

    __slots__ = [
        '_pre_name',
        '_new_name',
    ]

    _fields_and_field_types = {
        'pre_name': 'string',
        'new_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pre_name = kwargs.get('pre_name', str())
        self.new_name = kwargs.get('new_name', str())

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
        if self.pre_name != other.pre_name:
            return False
        if self.new_name != other.new_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pre_name(self):
        """Message field 'pre_name'."""
        return self._pre_name

    @pre_name.setter
    def pre_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pre_name' field must be of type 'str'"
        self._pre_name = value

    @property
    def new_name(self):
        """Message field 'new_name'."""
        return self._new_name

    @new_name.setter
    def new_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'new_name' field must be of type 'str'"
        self._new_name = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AccountChange_Response(type):
    """Metaclass of message 'AccountChange_Response'."""

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
                'protocol.srv.AccountChange_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__account_change__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__account_change__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__account_change__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__account_change__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__account_change__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AccountChange_Response(metaclass=Metaclass_AccountChange_Response):
    """Message class 'AccountChange_Response'."""

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


class Metaclass_AccountChange(type):
    """Metaclass of service 'AccountChange'."""

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
                'protocol.srv.AccountChange')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__account_change

            from protocol.srv import _account_change
            if _account_change.Metaclass_AccountChange_Request._TYPE_SUPPORT is None:
                _account_change.Metaclass_AccountChange_Request.__import_type_support__()
            if _account_change.Metaclass_AccountChange_Response._TYPE_SUPPORT is None:
                _account_change.Metaclass_AccountChange_Response.__import_type_support__()


class AccountChange(metaclass=Metaclass_AccountChange):
    from protocol.srv._account_change import AccountChange_Request as Request
    from protocol.srv._account_change import AccountChange_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

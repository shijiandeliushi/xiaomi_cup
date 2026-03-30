# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/AlgoManager.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AlgoManager_Request(type):
    """Metaclass of message 'AlgoManager_Request'."""

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
                'protocol.srv.AlgoManager_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__algo_manager__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__algo_manager__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__algo_manager__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__algo_manager__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__algo_manager__request

            from protocol.msg import AlgoList
            if AlgoList.__class__._TYPE_SUPPORT is None:
                AlgoList.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AlgoManager_Request(metaclass=Metaclass_AlgoManager_Request):
    """Message class 'AlgoManager_Request'."""

    __slots__ = [
        '_algo_enable',
        '_algo_disable',
        '_open_age',
        '_open_emotion',
    ]

    _fields_and_field_types = {
        'algo_enable': 'sequence<protocol/AlgoList>',
        'algo_disable': 'sequence<protocol/AlgoList>',
        'open_age': 'boolean',
        'open_emotion': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'AlgoList')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'AlgoList')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.algo_enable = kwargs.get('algo_enable', [])
        self.algo_disable = kwargs.get('algo_disable', [])
        self.open_age = kwargs.get('open_age', bool())
        self.open_emotion = kwargs.get('open_emotion', bool())

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
        if self.algo_enable != other.algo_enable:
            return False
        if self.algo_disable != other.algo_disable:
            return False
        if self.open_age != other.open_age:
            return False
        if self.open_emotion != other.open_emotion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def algo_enable(self):
        """Message field 'algo_enable'."""
        return self._algo_enable

    @algo_enable.setter
    def algo_enable(self, value):
        if __debug__:
            from protocol.msg import AlgoList
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, AlgoList) for v in value) and
                 True), \
                "The 'algo_enable' field must be a set or sequence and each value of type 'AlgoList'"
        self._algo_enable = value

    @property
    def algo_disable(self):
        """Message field 'algo_disable'."""
        return self._algo_disable

    @algo_disable.setter
    def algo_disable(self, value):
        if __debug__:
            from protocol.msg import AlgoList
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, AlgoList) for v in value) and
                 True), \
                "The 'algo_disable' field must be a set or sequence and each value of type 'AlgoList'"
        self._algo_disable = value

    @property
    def open_age(self):
        """Message field 'open_age'."""
        return self._open_age

    @open_age.setter
    def open_age(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'open_age' field must be of type 'bool'"
        self._open_age = value

    @property
    def open_emotion(self):
        """Message field 'open_emotion'."""
        return self._open_emotion

    @open_emotion.setter
    def open_emotion(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'open_emotion' field must be of type 'bool'"
        self._open_emotion = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AlgoManager_Response(type):
    """Metaclass of message 'AlgoManager_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ENABLE_SUCCESS': 0,
        'ENABLE_FAIL': 1,
        'DISABLE_SUCCESS': 0,
        'DISABLE_FAIL': 1,
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
                'protocol.srv.AlgoManager_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__algo_manager__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__algo_manager__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__algo_manager__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__algo_manager__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__algo_manager__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ENABLE_SUCCESS': cls.__constants['ENABLE_SUCCESS'],
            'ENABLE_FAIL': cls.__constants['ENABLE_FAIL'],
            'DISABLE_SUCCESS': cls.__constants['DISABLE_SUCCESS'],
            'DISABLE_FAIL': cls.__constants['DISABLE_FAIL'],
        }

    @property
    def ENABLE_SUCCESS(self):
        """Message constant 'ENABLE_SUCCESS'."""
        return Metaclass_AlgoManager_Response.__constants['ENABLE_SUCCESS']

    @property
    def ENABLE_FAIL(self):
        """Message constant 'ENABLE_FAIL'."""
        return Metaclass_AlgoManager_Response.__constants['ENABLE_FAIL']

    @property
    def DISABLE_SUCCESS(self):
        """Message constant 'DISABLE_SUCCESS'."""
        return Metaclass_AlgoManager_Response.__constants['DISABLE_SUCCESS']

    @property
    def DISABLE_FAIL(self):
        """Message constant 'DISABLE_FAIL'."""
        return Metaclass_AlgoManager_Response.__constants['DISABLE_FAIL']


class AlgoManager_Response(metaclass=Metaclass_AlgoManager_Response):
    """
    Message class 'AlgoManager_Response'.

    Constants:
      ENABLE_SUCCESS
      ENABLE_FAIL
      DISABLE_SUCCESS
      DISABLE_FAIL
    """

    __slots__ = [
        '_result_enable',
        '_result_disable',
        '_code',
    ]

    _fields_and_field_types = {
        'result_enable': 'uint8',
        'result_disable': 'uint8',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result_enable = kwargs.get('result_enable', int())
        self.result_disable = kwargs.get('result_disable', int())
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
        if self.result_enable != other.result_enable:
            return False
        if self.result_disable != other.result_disable:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result_enable(self):
        """Message field 'result_enable'."""
        return self._result_enable

    @result_enable.setter
    def result_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result_enable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result_enable' field must be an unsigned integer in [0, 255]"
        self._result_enable = value

    @property
    def result_disable(self):
        """Message field 'result_disable'."""
        return self._result_disable

    @result_disable.setter
    def result_disable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result_disable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result_disable' field must be an unsigned integer in [0, 255]"
        self._result_disable = value

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


class Metaclass_AlgoManager(type):
    """Metaclass of service 'AlgoManager'."""

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
                'protocol.srv.AlgoManager')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__algo_manager

            from protocol.srv import _algo_manager
            if _algo_manager.Metaclass_AlgoManager_Request._TYPE_SUPPORT is None:
                _algo_manager.Metaclass_AlgoManager_Request.__import_type_support__()
            if _algo_manager.Metaclass_AlgoManager_Response._TYPE_SUPPORT is None:
                _algo_manager.Metaclass_AlgoManager_Response.__import_type_support__()


class AlgoManager(metaclass=Metaclass_AlgoManager):
    from protocol.srv._algo_manager import AlgoManager_Request as Request
    from protocol.srv._algo_manager import AlgoManager_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

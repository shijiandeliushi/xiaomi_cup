# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/SportManager.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SportManager_Request(type):
    """Metaclass of message 'SportManager_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SPORT_SQUAT': 1,
        'SPORT_HIGHKNEES': 2,
        'SPORT_SITUP': 3,
        'SPORT_PRESSUP': 4,
        'SPORT_PLANK': 5,
        'SPORT_JUMPJACK': 6,
        'DEFAULT_TIMEOUT': 100,
        'MAX_TIMEOUT': 300,
        'MIN_TIMEOUT': 5,
        'ALGORITHM_LOAD_DURATION': 100,
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
                'protocol.srv.SportManager_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sport_manager__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sport_manager__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sport_manager__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sport_manager__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sport_manager__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SPORT_SQUAT': cls.__constants['SPORT_SQUAT'],
            'SPORT_HIGHKNEES': cls.__constants['SPORT_HIGHKNEES'],
            'SPORT_SITUP': cls.__constants['SPORT_SITUP'],
            'SPORT_PRESSUP': cls.__constants['SPORT_PRESSUP'],
            'SPORT_PLANK': cls.__constants['SPORT_PLANK'],
            'SPORT_JUMPJACK': cls.__constants['SPORT_JUMPJACK'],
            'DEFAULT_TIMEOUT': cls.__constants['DEFAULT_TIMEOUT'],
            'MAX_TIMEOUT': cls.__constants['MAX_TIMEOUT'],
            'MIN_TIMEOUT': cls.__constants['MIN_TIMEOUT'],
            'ALGORITHM_LOAD_DURATION': cls.__constants['ALGORITHM_LOAD_DURATION'],
        }

    @property
    def SPORT_SQUAT(self):
        """Message constant 'SPORT_SQUAT'."""
        return Metaclass_SportManager_Request.__constants['SPORT_SQUAT']

    @property
    def SPORT_HIGHKNEES(self):
        """Message constant 'SPORT_HIGHKNEES'."""
        return Metaclass_SportManager_Request.__constants['SPORT_HIGHKNEES']

    @property
    def SPORT_SITUP(self):
        """Message constant 'SPORT_SITUP'."""
        return Metaclass_SportManager_Request.__constants['SPORT_SITUP']

    @property
    def SPORT_PRESSUP(self):
        """Message constant 'SPORT_PRESSUP'."""
        return Metaclass_SportManager_Request.__constants['SPORT_PRESSUP']

    @property
    def SPORT_PLANK(self):
        """Message constant 'SPORT_PLANK'."""
        return Metaclass_SportManager_Request.__constants['SPORT_PLANK']

    @property
    def SPORT_JUMPJACK(self):
        """Message constant 'SPORT_JUMPJACK'."""
        return Metaclass_SportManager_Request.__constants['SPORT_JUMPJACK']

    @property
    def DEFAULT_TIMEOUT(self):
        """Message constant 'DEFAULT_TIMEOUT'."""
        return Metaclass_SportManager_Request.__constants['DEFAULT_TIMEOUT']

    @property
    def MAX_TIMEOUT(self):
        """Message constant 'MAX_TIMEOUT'."""
        return Metaclass_SportManager_Request.__constants['MAX_TIMEOUT']

    @property
    def MIN_TIMEOUT(self):
        """Message constant 'MIN_TIMEOUT'."""
        return Metaclass_SportManager_Request.__constants['MIN_TIMEOUT']

    @property
    def ALGORITHM_LOAD_DURATION(self):
        """Message constant 'ALGORITHM_LOAD_DURATION'."""
        return Metaclass_SportManager_Request.__constants['ALGORITHM_LOAD_DURATION']


class SportManager_Request(metaclass=Metaclass_SportManager_Request):
    """
    Message class 'SportManager_Request'.

    Constants:
      SPORT_SQUAT
      SPORT_HIGHKNEES
      SPORT_SITUP
      SPORT_PRESSUP
      SPORT_PLANK
      SPORT_JUMPJACK
      DEFAULT_TIMEOUT
      MAX_TIMEOUT
      MIN_TIMEOUT
      ALGORITHM_LOAD_DURATION
    """

    __slots__ = [
        '_sport_type',
        '_id',
        '_command',
        '_counts',
        '_timeout',
    ]

    _fields_and_field_types = {
        'sport_type': 'uint8',
        'id': 'string',
        'command': 'boolean',
        'counts': 'int32',
        'timeout': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sport_type = kwargs.get('sport_type', int())
        self.id = kwargs.get('id', str())
        self.command = kwargs.get('command', bool())
        self.counts = kwargs.get('counts', int())
        self.timeout = kwargs.get('timeout', int())

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
        if self.sport_type != other.sport_type:
            return False
        if self.id != other.id:
            return False
        if self.command != other.command:
            return False
        if self.counts != other.counts:
            return False
        if self.timeout != other.timeout:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sport_type(self):
        """Message field 'sport_type'."""
        return self._sport_type

    @sport_type.setter
    def sport_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sport_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sport_type' field must be an unsigned integer in [0, 255]"
        self._sport_type = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'command' field must be of type 'bool'"
        self._command = value

    @property
    def counts(self):
        """Message field 'counts'."""
        return self._counts

    @counts.setter
    def counts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'counts' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'counts' field must be an integer in [-2147483648, 2147483647]"
        self._counts = value

    @property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeout' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'timeout' field must be an integer in [-2147483648, 2147483647]"
        self._timeout = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SportManager_Response(type):
    """Metaclass of message 'SportManager_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ENABLE_SUCCESS': 0,
        'ENABLE_FAIL': 7001,
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
                'protocol.srv.SportManager_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sport_manager__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sport_manager__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sport_manager__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sport_manager__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sport_manager__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ENABLE_SUCCESS': cls.__constants['ENABLE_SUCCESS'],
            'ENABLE_FAIL': cls.__constants['ENABLE_FAIL'],
        }

    @property
    def ENABLE_SUCCESS(self):
        """Message constant 'ENABLE_SUCCESS'."""
        return Metaclass_SportManager_Response.__constants['ENABLE_SUCCESS']

    @property
    def ENABLE_FAIL(self):
        """Message constant 'ENABLE_FAIL'."""
        return Metaclass_SportManager_Response.__constants['ENABLE_FAIL']


class SportManager_Response(metaclass=Metaclass_SportManager_Response):
    """
    Message class 'SportManager_Response'.

    Constants:
      ENABLE_SUCCESS
      ENABLE_FAIL
    """

    __slots__ = [
        '_result',
        '_code',
    ]

    _fields_and_field_types = {
        'result': 'int32',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'result' field must be an integer in [-2147483648, 2147483647]"
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


class Metaclass_SportManager(type):
    """Metaclass of service 'SportManager'."""

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
                'protocol.srv.SportManager')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__sport_manager

            from protocol.srv import _sport_manager
            if _sport_manager.Metaclass_SportManager_Request._TYPE_SUPPORT is None:
                _sport_manager.Metaclass_SportManager_Request.__import_type_support__()
            if _sport_manager.Metaclass_SportManager_Response._TYPE_SUPPORT is None:
                _sport_manager.Metaclass_SportManager_Response.__import_type_support__()


class SportManager(metaclass=Metaclass_SportManager):
    from protocol.srv._sport_manager import SportManager_Request as Request
    from protocol.srv._sport_manager import SportManager_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/AlgoTaskStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AlgoTaskStatus_Request(type):
    """Metaclass of message 'AlgoTaskStatus_Request'."""

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
                'protocol.srv.AlgoTaskStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__algo_task_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__algo_task_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__algo_task_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__algo_task_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__algo_task_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AlgoTaskStatus_Request(metaclass=Metaclass_AlgoTaskStatus_Request):
    """Message class 'AlgoTaskStatus_Request'."""

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


class Metaclass_AlgoTaskStatus_Response(type):
    """Metaclass of message 'AlgoTaskStatus_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALGO_TASK_AB': 1,
        'ALGO_TASK_MAPPING': 5,
        'ALGO_TASK_LOCALIZATION': 7,
        'ALGO_TASK_AUTO_DOCKING': 9,
        'ALGO_TASK_UWB_TRACKING': 11,
        'ALGO_TASK_VISION_TRACKING': 13,
        'UNINITIALIZED': 100,
        'IDLE': 101,
        'STOPPINGTASK': 103,
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
                'protocol.srv.AlgoTaskStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__algo_task_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__algo_task_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__algo_task_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__algo_task_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__algo_task_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALGO_TASK_AB': cls.__constants['ALGO_TASK_AB'],
            'ALGO_TASK_MAPPING': cls.__constants['ALGO_TASK_MAPPING'],
            'ALGO_TASK_LOCALIZATION': cls.__constants['ALGO_TASK_LOCALIZATION'],
            'ALGO_TASK_AUTO_DOCKING': cls.__constants['ALGO_TASK_AUTO_DOCKING'],
            'ALGO_TASK_UWB_TRACKING': cls.__constants['ALGO_TASK_UWB_TRACKING'],
            'ALGO_TASK_VISION_TRACKING': cls.__constants['ALGO_TASK_VISION_TRACKING'],
            'UNINITIALIZED': cls.__constants['UNINITIALIZED'],
            'IDLE': cls.__constants['IDLE'],
            'STOPPINGTASK': cls.__constants['STOPPINGTASK'],
        }

    @property
    def ALGO_TASK_AB(self):
        """Message constant 'ALGO_TASK_AB'."""
        return Metaclass_AlgoTaskStatus_Response.__constants['ALGO_TASK_AB']

    @property
    def ALGO_TASK_MAPPING(self):
        """Message constant 'ALGO_TASK_MAPPING'."""
        return Metaclass_AlgoTaskStatus_Response.__constants['ALGO_TASK_MAPPING']

    @property
    def ALGO_TASK_LOCALIZATION(self):
        """Message constant 'ALGO_TASK_LOCALIZATION'."""
        return Metaclass_AlgoTaskStatus_Response.__constants['ALGO_TASK_LOCALIZATION']

    @property
    def ALGO_TASK_AUTO_DOCKING(self):
        """Message constant 'ALGO_TASK_AUTO_DOCKING'."""
        return Metaclass_AlgoTaskStatus_Response.__constants['ALGO_TASK_AUTO_DOCKING']

    @property
    def ALGO_TASK_UWB_TRACKING(self):
        """Message constant 'ALGO_TASK_UWB_TRACKING'."""
        return Metaclass_AlgoTaskStatus_Response.__constants['ALGO_TASK_UWB_TRACKING']

    @property
    def ALGO_TASK_VISION_TRACKING(self):
        """Message constant 'ALGO_TASK_VISION_TRACKING'."""
        return Metaclass_AlgoTaskStatus_Response.__constants['ALGO_TASK_VISION_TRACKING']

    @property
    def UNINITIALIZED(self):
        """Message constant 'UNINITIALIZED'."""
        return Metaclass_AlgoTaskStatus_Response.__constants['UNINITIALIZED']

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_AlgoTaskStatus_Response.__constants['IDLE']

    @property
    def STOPPINGTASK(self):
        """Message constant 'STOPPINGTASK'."""
        return Metaclass_AlgoTaskStatus_Response.__constants['STOPPINGTASK']


class AlgoTaskStatus_Response(metaclass=Metaclass_AlgoTaskStatus_Response):
    """
    Message class 'AlgoTaskStatus_Response'.

    Constants:
      ALGO_TASK_AB
      ALGO_TASK_MAPPING
      ALGO_TASK_LOCALIZATION
      ALGO_TASK_AUTO_DOCKING
      ALGO_TASK_UWB_TRACKING
      ALGO_TASK_VISION_TRACKING
      UNINITIALIZED
      IDLE
      STOPPINGTASK
    """

    __slots__ = [
        '_status',
        '_code',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
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
        self.status = kwargs.get('status', int())
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
        if self.status != other.status:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

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


class Metaclass_AlgoTaskStatus(type):
    """Metaclass of service 'AlgoTaskStatus'."""

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
                'protocol.srv.AlgoTaskStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__algo_task_status

            from protocol.srv import _algo_task_status
            if _algo_task_status.Metaclass_AlgoTaskStatus_Request._TYPE_SUPPORT is None:
                _algo_task_status.Metaclass_AlgoTaskStatus_Request.__import_type_support__()
            if _algo_task_status.Metaclass_AlgoTaskStatus_Response._TYPE_SUPPORT is None:
                _algo_task_status.Metaclass_AlgoTaskStatus_Response.__import_type_support__()


class AlgoTaskStatus(metaclass=Metaclass_AlgoTaskStatus):
    from protocol.srv._algo_task_status import AlgoTaskStatus_Request as Request
    from protocol.srv._algo_task_status import AlgoTaskStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

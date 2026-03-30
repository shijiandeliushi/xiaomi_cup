# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/StopAlgoTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StopAlgoTask_Request(type):
    """Metaclass of message 'StopAlgoTask_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALGO_TASK_ALL': 0,
        'ALGO_TASK_AB': 1,
        'ALGO_TASK_FOLLOW': 3,
        'ALGO_TASK_MAPPING': 5,
        'ALGO_TASK_LOCALIZATION': 7,
        'ALGO_TASK_AUTO_DOCKING': 9,
        'ALGO_TASK_UWB_TRACKING': 11,
        'ALGO_TASK_HUMAN_TRACKING': 13,
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
                'protocol.srv.StopAlgoTask_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__stop_algo_task__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__stop_algo_task__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__stop_algo_task__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__stop_algo_task__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__stop_algo_task__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALGO_TASK_ALL': cls.__constants['ALGO_TASK_ALL'],
            'ALGO_TASK_AB': cls.__constants['ALGO_TASK_AB'],
            'ALGO_TASK_FOLLOW': cls.__constants['ALGO_TASK_FOLLOW'],
            'ALGO_TASK_MAPPING': cls.__constants['ALGO_TASK_MAPPING'],
            'ALGO_TASK_LOCALIZATION': cls.__constants['ALGO_TASK_LOCALIZATION'],
            'ALGO_TASK_AUTO_DOCKING': cls.__constants['ALGO_TASK_AUTO_DOCKING'],
            'ALGO_TASK_UWB_TRACKING': cls.__constants['ALGO_TASK_UWB_TRACKING'],
            'ALGO_TASK_HUMAN_TRACKING': cls.__constants['ALGO_TASK_HUMAN_TRACKING'],
        }

    @property
    def ALGO_TASK_ALL(self):
        """Message constant 'ALGO_TASK_ALL'."""
        return Metaclass_StopAlgoTask_Request.__constants['ALGO_TASK_ALL']

    @property
    def ALGO_TASK_AB(self):
        """Message constant 'ALGO_TASK_AB'."""
        return Metaclass_StopAlgoTask_Request.__constants['ALGO_TASK_AB']

    @property
    def ALGO_TASK_FOLLOW(self):
        """Message constant 'ALGO_TASK_FOLLOW'."""
        return Metaclass_StopAlgoTask_Request.__constants['ALGO_TASK_FOLLOW']

    @property
    def ALGO_TASK_MAPPING(self):
        """Message constant 'ALGO_TASK_MAPPING'."""
        return Metaclass_StopAlgoTask_Request.__constants['ALGO_TASK_MAPPING']

    @property
    def ALGO_TASK_LOCALIZATION(self):
        """Message constant 'ALGO_TASK_LOCALIZATION'."""
        return Metaclass_StopAlgoTask_Request.__constants['ALGO_TASK_LOCALIZATION']

    @property
    def ALGO_TASK_AUTO_DOCKING(self):
        """Message constant 'ALGO_TASK_AUTO_DOCKING'."""
        return Metaclass_StopAlgoTask_Request.__constants['ALGO_TASK_AUTO_DOCKING']

    @property
    def ALGO_TASK_UWB_TRACKING(self):
        """Message constant 'ALGO_TASK_UWB_TRACKING'."""
        return Metaclass_StopAlgoTask_Request.__constants['ALGO_TASK_UWB_TRACKING']

    @property
    def ALGO_TASK_HUMAN_TRACKING(self):
        """Message constant 'ALGO_TASK_HUMAN_TRACKING'."""
        return Metaclass_StopAlgoTask_Request.__constants['ALGO_TASK_HUMAN_TRACKING']


class StopAlgoTask_Request(metaclass=Metaclass_StopAlgoTask_Request):
    """
    Message class 'StopAlgoTask_Request'.

    Constants:
      ALGO_TASK_ALL
      ALGO_TASK_AB
      ALGO_TASK_FOLLOW
      ALGO_TASK_MAPPING
      ALGO_TASK_LOCALIZATION
      ALGO_TASK_AUTO_DOCKING
      ALGO_TASK_UWB_TRACKING
      ALGO_TASK_HUMAN_TRACKING
    """

    __slots__ = [
        '_task_id',
        '_map_name',
    ]

    _fields_and_field_types = {
        'task_id': 'uint8',
        'map_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', int())
        self.map_name = kwargs.get('map_name', str())

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
        if self.task_id != other.task_id:
            return False
        if self.map_name != other.map_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task_id' field must be an unsigned integer in [0, 255]"
        self._task_id = value

    @property
    def map_name(self):
        """Message field 'map_name'."""
        return self._map_name

    @map_name.setter
    def map_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_name' field must be of type 'str'"
        self._map_name = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_StopAlgoTask_Response(type):
    """Metaclass of message 'StopAlgoTask_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': 0,
        'FAILED': 1,
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
                'protocol.srv.StopAlgoTask_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__stop_algo_task__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__stop_algo_task__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__stop_algo_task__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__stop_algo_task__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__stop_algo_task__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILED': cls.__constants['FAILED'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_StopAlgoTask_Response.__constants['SUCCESS']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_StopAlgoTask_Response.__constants['FAILED']


class StopAlgoTask_Response(metaclass=Metaclass_StopAlgoTask_Response):
    """
    Message class 'StopAlgoTask_Response'.

    Constants:
      SUCCESS
      FAILED
    """

    __slots__ = [
        '_result',
        '_code',
    ]

    _fields_and_field_types = {
        'result': 'int8',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
            assert value >= -128 and value < 128, \
                "The 'result' field must be an integer in [-128, 127]"
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


class Metaclass_StopAlgoTask(type):
    """Metaclass of service 'StopAlgoTask'."""

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
                'protocol.srv.StopAlgoTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__stop_algo_task

            from protocol.srv import _stop_algo_task
            if _stop_algo_task.Metaclass_StopAlgoTask_Request._TYPE_SUPPORT is None:
                _stop_algo_task.Metaclass_StopAlgoTask_Request.__import_type_support__()
            if _stop_algo_task.Metaclass_StopAlgoTask_Response._TYPE_SUPPORT is None:
                _stop_algo_task.Metaclass_StopAlgoTask_Response.__import_type_support__()


class StopAlgoTask(metaclass=Metaclass_StopAlgoTask):
    from protocol.srv._stop_algo_task import StopAlgoTask_Request as Request
    from protocol.srv._stop_algo_task import StopAlgoTask_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

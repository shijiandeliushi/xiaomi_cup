# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/TaskProcessor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskProcessor_Request(type):
    """Metaclass of message 'TaskProcessor_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PROCESSOR_TASK': 1,
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
                'protocol.srv.TaskProcessor_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__task_processor__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__task_processor__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__task_processor__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__task_processor__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__task_processor__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PROCESSOR_TASK': cls.__constants['PROCESSOR_TASK'],
        }

    @property
    def PROCESSOR_TASK(self):
        """Message constant 'PROCESSOR_TASK'."""
        return Metaclass_TaskProcessor_Request.__constants['PROCESSOR_TASK']


class TaskProcessor_Request(metaclass=Metaclass_TaskProcessor_Request):
    """
    Message class 'TaskProcessor_Request'.

    Constants:
      PROCESSOR_TASK
    """

    __slots__ = [
        '_processor',
    ]

    _fields_and_field_types = {
        'processor': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.processor = kwargs.get('processor', int())

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
        if self.processor != other.processor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def processor(self):
        """Message field 'processor'."""
        return self._processor

    @processor.setter
    def processor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'processor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'processor' field must be an unsigned integer in [0, 255]"
        self._processor = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TaskProcessor_Response(type):
    """Metaclass of message 'TaskProcessor_Response'."""

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
                'protocol.srv.TaskProcessor_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__task_processor__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__task_processor__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__task_processor__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__task_processor__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__task_processor__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskProcessor_Response(metaclass=Metaclass_TaskProcessor_Response):
    """Message class 'TaskProcessor_Response'."""

    __slots__ = [
        '_purview',
        '_code',
    ]

    _fields_and_field_types = {
        'purview': 'boolean',
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
        self.purview = kwargs.get('purview', bool())
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
        if self.purview != other.purview:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def purview(self):
        """Message field 'purview'."""
        return self._purview

    @purview.setter
    def purview(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'purview' field must be of type 'bool'"
        self._purview = value

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


class Metaclass_TaskProcessor(type):
    """Metaclass of service 'TaskProcessor'."""

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
                'protocol.srv.TaskProcessor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__task_processor

            from protocol.srv import _task_processor
            if _task_processor.Metaclass_TaskProcessor_Request._TYPE_SUPPORT is None:
                _task_processor.Metaclass_TaskProcessor_Request.__import_type_support__()
            if _task_processor.Metaclass_TaskProcessor_Response._TYPE_SUPPORT is None:
                _task_processor.Metaclass_TaskProcessor_Response.__import_type_support__()


class TaskProcessor(metaclass=Metaclass_TaskProcessor):
    from protocol.srv._task_processor import TaskProcessor_Request as Request
    from protocol.srv._task_processor import TaskProcessor_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

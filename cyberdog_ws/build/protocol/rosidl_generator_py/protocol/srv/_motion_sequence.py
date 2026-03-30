# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/MotionSequence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionSequence_Request(type):
    """Metaclass of message 'MotionSequence_Request'."""

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
                'protocol.srv.MotionSequence_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motion_sequence__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motion_sequence__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motion_sequence__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motion_sequence__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motion_sequence__request

            from protocol.msg import MotionSequenceParam
            if MotionSequenceParam.__class__._TYPE_SUPPORT is None:
                MotionSequenceParam.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionSequence_Request(metaclass=Metaclass_MotionSequence_Request):
    """Message class 'MotionSequence_Request'."""

    __slots__ = [
        '_motion_id',
        '_duration',
        '_toml_data',
        '_params',
    ]

    _fields_and_field_types = {
        'motion_id': 'int32',
        'duration': 'int32',
        'toml_data': 'string',
        'params': 'sequence<protocol/MotionSequenceParam>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'MotionSequenceParam')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion_id = kwargs.get('motion_id', int())
        self.duration = kwargs.get('duration', int())
        self.toml_data = kwargs.get('toml_data', str())
        self.params = kwargs.get('params', [])

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
        if self.motion_id != other.motion_id:
            return False
        if self.duration != other.duration:
            return False
        if self.toml_data != other.toml_data:
            return False
        if self.params != other.params:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motion_id(self):
        """Message field 'motion_id'."""
        return self._motion_id

    @motion_id.setter
    def motion_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motion_id' field must be an integer in [-2147483648, 2147483647]"
        self._motion_id = value

    @property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'duration' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'duration' field must be an integer in [-2147483648, 2147483647]"
        self._duration = value

    @property
    def toml_data(self):
        """Message field 'toml_data'."""
        return self._toml_data

    @toml_data.setter
    def toml_data(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'toml_data' field must be of type 'str'"
        self._toml_data = value

    @property
    def params(self):
        """Message field 'params'."""
        return self._params

    @params.setter
    def params(self, value):
        if __debug__:
            from protocol.msg import MotionSequenceParam
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
                 all(isinstance(v, MotionSequenceParam) for v in value) and
                 True), \
                "The 'params' field must be a set or sequence and each value of type 'MotionSequenceParam'"
        self._params = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MotionSequence_Response(type):
    """Metaclass of message 'MotionSequence_Response'."""

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
                'protocol.srv.MotionSequence_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motion_sequence__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motion_sequence__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motion_sequence__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motion_sequence__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motion_sequence__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionSequence_Response(metaclass=Metaclass_MotionSequence_Response):
    """Message class 'MotionSequence_Response'."""

    __slots__ = [
        '_result',
        '_code',
        '_describe',
        '_motion_id',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
        'code': 'int32',
        'describe': 'string',
        'motion_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())
        self.code = kwargs.get('code', int())
        self.describe = kwargs.get('describe', str())
        self.motion_id = kwargs.get('motion_id', int())

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
        if self.describe != other.describe:
            return False
        if self.motion_id != other.motion_id:
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
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
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

    @property
    def describe(self):
        """Message field 'describe'."""
        return self._describe

    @describe.setter
    def describe(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'describe' field must be of type 'str'"
        self._describe = value

    @property
    def motion_id(self):
        """Message field 'motion_id'."""
        return self._motion_id

    @motion_id.setter
    def motion_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motion_id' field must be an integer in [-2147483648, 2147483647]"
        self._motion_id = value


class Metaclass_MotionSequence(type):
    """Metaclass of service 'MotionSequence'."""

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
                'protocol.srv.MotionSequence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motion_sequence

            from protocol.srv import _motion_sequence
            if _motion_sequence.Metaclass_MotionSequence_Request._TYPE_SUPPORT is None:
                _motion_sequence.Metaclass_MotionSequence_Request.__import_type_support__()
            if _motion_sequence.Metaclass_MotionSequence_Response._TYPE_SUPPORT is None:
                _motion_sequence.Metaclass_MotionSequence_Response.__import_type_support__()


class MotionSequence(metaclass=Metaclass_MotionSequence):
    from protocol.srv._motion_sequence import MotionSequence_Request as Request
    from protocol.srv._motion_sequence import MotionSequence_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

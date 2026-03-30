# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/MotionSequenceShow.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionSequenceShow_Request(type):
    """Metaclass of message 'MotionSequenceShow_Request'."""

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
                'protocol.srv.MotionSequenceShow_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motion_sequence_show__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motion_sequence_show__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motion_sequence_show__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motion_sequence_show__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motion_sequence_show__request

            from protocol.msg import MotionSequenceGait
            if MotionSequenceGait.__class__._TYPE_SUPPORT is None:
                MotionSequenceGait.__class__.__import_type_support__()

            from protocol.msg import MotionSequencePace
            if MotionSequencePace.__class__._TYPE_SUPPORT is None:
                MotionSequencePace.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionSequenceShow_Request(metaclass=Metaclass_MotionSequenceShow_Request):
    """Message class 'MotionSequenceShow_Request'."""

    __slots__ = [
        '_motion_id',
        '_cmd_source',
        '_duration',
        '_gait_list',
        '_pace_list',
        '_gait_toml_list',
        '_pace_toml_list',
        '_gait_toml',
        '_pace_toml',
    ]

    _fields_and_field_types = {
        'motion_id': 'int32',
        'cmd_source': 'int32',
        'duration': 'int64',
        'gait_list': 'sequence<protocol/MotionSequenceGait>',
        'pace_list': 'sequence<protocol/MotionSequencePace>',
        'gait_toml_list': 'sequence<string>',
        'pace_toml_list': 'sequence<string>',
        'gait_toml': 'string',
        'pace_toml': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'MotionSequenceGait')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'MotionSequencePace')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion_id = kwargs.get('motion_id', int())
        self.cmd_source = kwargs.get('cmd_source', int())
        self.duration = kwargs.get('duration', int())
        self.gait_list = kwargs.get('gait_list', [])
        self.pace_list = kwargs.get('pace_list', [])
        self.gait_toml_list = kwargs.get('gait_toml_list', [])
        self.pace_toml_list = kwargs.get('pace_toml_list', [])
        self.gait_toml = kwargs.get('gait_toml', str())
        self.pace_toml = kwargs.get('pace_toml', str())

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
        if self.cmd_source != other.cmd_source:
            return False
        if self.duration != other.duration:
            return False
        if self.gait_list != other.gait_list:
            return False
        if self.pace_list != other.pace_list:
            return False
        if self.gait_toml_list != other.gait_toml_list:
            return False
        if self.pace_toml_list != other.pace_toml_list:
            return False
        if self.gait_toml != other.gait_toml:
            return False
        if self.pace_toml != other.pace_toml:
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
    def cmd_source(self):
        """Message field 'cmd_source'."""
        return self._cmd_source

    @cmd_source.setter
    def cmd_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_source' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmd_source' field must be an integer in [-2147483648, 2147483647]"
        self._cmd_source = value

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
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'duration' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._duration = value

    @property
    def gait_list(self):
        """Message field 'gait_list'."""
        return self._gait_list

    @gait_list.setter
    def gait_list(self, value):
        if __debug__:
            from protocol.msg import MotionSequenceGait
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
                 all(isinstance(v, MotionSequenceGait) for v in value) and
                 True), \
                "The 'gait_list' field must be a set or sequence and each value of type 'MotionSequenceGait'"
        self._gait_list = value

    @property
    def pace_list(self):
        """Message field 'pace_list'."""
        return self._pace_list

    @pace_list.setter
    def pace_list(self, value):
        if __debug__:
            from protocol.msg import MotionSequencePace
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
                 all(isinstance(v, MotionSequencePace) for v in value) and
                 True), \
                "The 'pace_list' field must be a set or sequence and each value of type 'MotionSequencePace'"
        self._pace_list = value

    @property
    def gait_toml_list(self):
        """Message field 'gait_toml_list'."""
        return self._gait_toml_list

    @gait_toml_list.setter
    def gait_toml_list(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'gait_toml_list' field must be a set or sequence and each value of type 'str'"
        self._gait_toml_list = value

    @property
    def pace_toml_list(self):
        """Message field 'pace_toml_list'."""
        return self._pace_toml_list

    @pace_toml_list.setter
    def pace_toml_list(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'pace_toml_list' field must be a set or sequence and each value of type 'str'"
        self._pace_toml_list = value

    @property
    def gait_toml(self):
        """Message field 'gait_toml'."""
        return self._gait_toml

    @gait_toml.setter
    def gait_toml(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gait_toml' field must be of type 'str'"
        self._gait_toml = value

    @property
    def pace_toml(self):
        """Message field 'pace_toml'."""
        return self._pace_toml

    @pace_toml.setter
    def pace_toml(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pace_toml' field must be of type 'str'"
        self._pace_toml = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MotionSequenceShow_Response(type):
    """Metaclass of message 'MotionSequenceShow_Response'."""

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
                'protocol.srv.MotionSequenceShow_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motion_sequence_show__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motion_sequence_show__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motion_sequence_show__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motion_sequence_show__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motion_sequence_show__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionSequenceShow_Response(metaclass=Metaclass_MotionSequenceShow_Response):
    """Message class 'MotionSequenceShow_Response'."""

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


class Metaclass_MotionSequenceShow(type):
    """Metaclass of service 'MotionSequenceShow'."""

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
                'protocol.srv.MotionSequenceShow')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motion_sequence_show

            from protocol.srv import _motion_sequence_show
            if _motion_sequence_show.Metaclass_MotionSequenceShow_Request._TYPE_SUPPORT is None:
                _motion_sequence_show.Metaclass_MotionSequenceShow_Request.__import_type_support__()
            if _motion_sequence_show.Metaclass_MotionSequenceShow_Response._TYPE_SUPPORT is None:
                _motion_sequence_show.Metaclass_MotionSequenceShow_Response.__import_type_support__()


class MotionSequenceShow(metaclass=Metaclass_MotionSequenceShow):
    from protocol.srv._motion_sequence_show import MotionSequenceShow_Request as Request
    from protocol.srv._motion_sequence_show import MotionSequenceShow_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

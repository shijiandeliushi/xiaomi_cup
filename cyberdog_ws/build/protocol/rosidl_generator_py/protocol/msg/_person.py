# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/Person.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Person(type):
    """Metaclass of message 'Person'."""

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
                'protocol.msg.Person')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__person
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__person
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__person
            cls._TYPE_SUPPORT = module.type_support_msg__msg__person
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__person

            from protocol.msg import BodyInfo
            if BodyInfo.__class__._TYPE_SUPPORT is None:
                BodyInfo.__class__.__import_type_support__()

            from protocol.msg import FaceInfo
            if FaceInfo.__class__._TYPE_SUPPORT is None:
                FaceInfo.__class__.__import_type_support__()

            from protocol.msg import TrackResult
            if TrackResult.__class__._TYPE_SUPPORT is None:
                TrackResult.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Person(metaclass=Metaclass_Person):
    """Message class 'Person'."""

    __slots__ = [
        '_header',
        '_face_info',
        '_body_info',
        '_track_res',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'face_info': 'protocol/FaceInfo',
        'body_info': 'protocol/BodyInfo',
        'track_res': 'protocol/TrackResult',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'FaceInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'BodyInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'TrackResult'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from protocol.msg import FaceInfo
        self.face_info = kwargs.get('face_info', FaceInfo())
        from protocol.msg import BodyInfo
        self.body_info = kwargs.get('body_info', BodyInfo())
        from protocol.msg import TrackResult
        self.track_res = kwargs.get('track_res', TrackResult())

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
        if self.header != other.header:
            return False
        if self.face_info != other.face_info:
            return False
        if self.body_info != other.body_info:
            return False
        if self.track_res != other.track_res:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def face_info(self):
        """Message field 'face_info'."""
        return self._face_info

    @face_info.setter
    def face_info(self, value):
        if __debug__:
            from protocol.msg import FaceInfo
            assert \
                isinstance(value, FaceInfo), \
                "The 'face_info' field must be a sub message of type 'FaceInfo'"
        self._face_info = value

    @property
    def body_info(self):
        """Message field 'body_info'."""
        return self._body_info

    @body_info.setter
    def body_info(self, value):
        if __debug__:
            from protocol.msg import BodyInfo
            assert \
                isinstance(value, BodyInfo), \
                "The 'body_info' field must be a sub message of type 'BodyInfo'"
        self._body_info = value

    @property
    def track_res(self):
        """Message field 'track_res'."""
        return self._track_res

    @track_res.setter
    def track_res(self, value):
        if __debug__:
            from protocol.msg import TrackResult
            assert \
                isinstance(value, TrackResult), \
                "The 'track_res' field must be a sub message of type 'TrackResult'"
        self._track_res = value

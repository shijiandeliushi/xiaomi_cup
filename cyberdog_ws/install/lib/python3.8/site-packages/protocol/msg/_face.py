# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/Face.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Face(type):
    """Metaclass of message 'Face'."""

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
                'protocol.msg.Face')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__face
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__face
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__face
            cls._TYPE_SUPPORT = module.type_support_msg__msg__face
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__face

            from sensor_msgs.msg import RegionOfInterest
            if RegionOfInterest.__class__._TYPE_SUPPORT is None:
                RegionOfInterest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Face(metaclass=Metaclass_Face):
    """Message class 'Face'."""

    __slots__ = [
        '_roi',
        '_id',
        '_score',
        '_match',
        '_yaw',
        '_pitch',
        '_row',
        '_is_host',
        '_age',
        '_emotion',
    ]

    _fields_and_field_types = {
        'roi': 'sensor_msgs/RegionOfInterest',
        'id': 'string',
        'score': 'float',
        'match': 'float',
        'yaw': 'float',
        'pitch': 'float',
        'row': 'float',
        'is_host': 'boolean',
        'age': 'float',
        'emotion': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import RegionOfInterest
        self.roi = kwargs.get('roi', RegionOfInterest())
        self.id = kwargs.get('id', str())
        self.score = kwargs.get('score', float())
        self.match = kwargs.get('match', float())
        self.yaw = kwargs.get('yaw', float())
        self.pitch = kwargs.get('pitch', float())
        self.row = kwargs.get('row', float())
        self.is_host = kwargs.get('is_host', bool())
        self.age = kwargs.get('age', float())
        self.emotion = kwargs.get('emotion', float())

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
        if self.roi != other.roi:
            return False
        if self.id != other.id:
            return False
        if self.score != other.score:
            return False
        if self.match != other.match:
            return False
        if self.yaw != other.yaw:
            return False
        if self.pitch != other.pitch:
            return False
        if self.row != other.row:
            return False
        if self.is_host != other.is_host:
            return False
        if self.age != other.age:
            return False
        if self.emotion != other.emotion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def roi(self):
        """Message field 'roi'."""
        return self._roi

    @roi.setter
    def roi(self, value):
        if __debug__:
            from sensor_msgs.msg import RegionOfInterest
            assert \
                isinstance(value, RegionOfInterest), \
                "The 'roi' field must be a sub message of type 'RegionOfInterest'"
        self._roi = value

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
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'score' field must be of type 'float'"
        self._score = value

    @property
    def match(self):
        """Message field 'match'."""
        return self._match

    @match.setter
    def match(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'match' field must be of type 'float'"
        self._match = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
        self._yaw = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
        self._pitch = value

    @property
    def row(self):
        """Message field 'row'."""
        return self._row

    @row.setter
    def row(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'row' field must be of type 'float'"
        self._row = value

    @property
    def is_host(self):
        """Message field 'is_host'."""
        return self._is_host

    @is_host.setter
    def is_host(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_host' field must be of type 'bool'"
        self._is_host = value

    @property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'age' field must be of type 'float'"
        self._age = value

    @property
    def emotion(self):
        """Message field 'emotion'."""
        return self._emotion

    @emotion.setter
    def emotion(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'emotion' field must be of type 'float'"
        self._emotion = value

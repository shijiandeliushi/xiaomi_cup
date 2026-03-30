# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/MapLabel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapLabel(type):
    """Metaclass of message 'MapLabel'."""

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
                'protocol.msg.MapLabel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_label
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_label
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_label
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_label
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_label

            from protocol.msg import Label
            if Label.__class__._TYPE_SUPPORT is None:
                Label.__class__.__import_type_support__()

            from protocol.msg import OccupancyGrid
            if OccupancyGrid.__class__._TYPE_SUPPORT is None:
                OccupancyGrid.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapLabel(metaclass=Metaclass_MapLabel):
    """Message class 'MapLabel'."""

    __slots__ = [
        '_map_name',
        '_map_id',
        '_is_outdoor',
        '_map',
        '_labels',
    ]

    _fields_and_field_types = {
        'map_name': 'string',
        'map_id': 'uint64',
        'is_outdoor': 'boolean',
        'map': 'protocol/OccupancyGrid',
        'labels': 'sequence<protocol/Label>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'OccupancyGrid'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'Label')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.map_name = kwargs.get('map_name', str())
        self.map_id = kwargs.get('map_id', int())
        self.is_outdoor = kwargs.get('is_outdoor', bool())
        from protocol.msg import OccupancyGrid
        self.map = kwargs.get('map', OccupancyGrid())
        self.labels = kwargs.get('labels', [])

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
        if self.map_name != other.map_name:
            return False
        if self.map_id != other.map_id:
            return False
        if self.is_outdoor != other.is_outdoor:
            return False
        if self.map != other.map:
            return False
        if self.labels != other.labels:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @property
    def map_id(self):
        """Message field 'map_id'."""
        return self._map_id

    @map_id.setter
    def map_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'map_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._map_id = value

    @property
    def is_outdoor(self):
        """Message field 'is_outdoor'."""
        return self._is_outdoor

    @is_outdoor.setter
    def is_outdoor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_outdoor' field must be of type 'bool'"
        self._is_outdoor = value

    @property  # noqa: A003
    def map(self):  # noqa: A003
        """Message field 'map'."""
        return self._map

    @map.setter  # noqa: A003
    def map(self, value):  # noqa: A003
        if __debug__:
            from protocol.msg import OccupancyGrid
            assert \
                isinstance(value, OccupancyGrid), \
                "The 'map' field must be a sub message of type 'OccupancyGrid'"
        self._map = value

    @property
    def labels(self):
        """Message field 'labels'."""
        return self._labels

    @labels.setter
    def labels(self, value):
        if __debug__:
            from protocol.msg import Label
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
                 all(isinstance(v, Label) for v in value) and
                 True), \
                "The 'labels' field must be a set or sequence and each value of type 'Label'"
        self._labels = value

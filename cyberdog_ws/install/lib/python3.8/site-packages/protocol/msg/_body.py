# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/Body.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'feats'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Body(type):
    """Metaclass of message 'Body'."""

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
                'protocol.msg.Body')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__body
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__body
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__body
            cls._TYPE_SUPPORT = module.type_support_msg__msg__body
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__body

            from protocol.msg import Gesture
            if Gesture.__class__._TYPE_SUPPORT is None:
                Gesture.__class__.__import_type_support__()

            from protocol.msg import Keypoint
            if Keypoint.__class__._TYPE_SUPPORT is None:
                Keypoint.__class__.__import_type_support__()

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


class Body(metaclass=Metaclass_Body):
    """Message class 'Body'."""

    __slots__ = [
        '_roi',
        '_reid',
        '_feats',
        '_keypoints',
        '_gesture',
    ]

    _fields_and_field_types = {
        'roi': 'sensor_msgs/RegionOfInterest',
        'reid': 'string',
        'feats': 'sequence<float>',
        'keypoints': 'sequence<protocol/Keypoint>',
        'gesture': 'protocol/Gesture',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'Keypoint')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'Gesture'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import RegionOfInterest
        self.roi = kwargs.get('roi', RegionOfInterest())
        self.reid = kwargs.get('reid', str())
        self.feats = array.array('f', kwargs.get('feats', []))
        self.keypoints = kwargs.get('keypoints', [])
        from protocol.msg import Gesture
        self.gesture = kwargs.get('gesture', Gesture())

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
        if self.reid != other.reid:
            return False
        if self.feats != other.feats:
            return False
        if self.keypoints != other.keypoints:
            return False
        if self.gesture != other.gesture:
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

    @property
    def reid(self):
        """Message field 'reid'."""
        return self._reid

    @reid.setter
    def reid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reid' field must be of type 'str'"
        self._reid = value

    @property
    def feats(self):
        """Message field 'feats'."""
        return self._feats

    @feats.setter
    def feats(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'feats' array.array() must have the type code of 'f'"
            self._feats = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'feats' field must be a set or sequence and each value of type 'float'"
        self._feats = array.array('f', value)

    @property
    def keypoints(self):
        """Message field 'keypoints'."""
        return self._keypoints

    @keypoints.setter
    def keypoints(self, value):
        if __debug__:
            from protocol.msg import Keypoint
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
                 all(isinstance(v, Keypoint) for v in value) and
                 True), \
                "The 'keypoints' field must be a set or sequence and each value of type 'Keypoint'"
        self._keypoints = value

    @property
    def gesture(self):
        """Message field 'gesture'."""
        return self._gesture

    @gesture.setter
    def gesture(self, value):
        if __debug__:
            from protocol.msg import Gesture
            assert \
                isinstance(value, Gesture), \
                "The 'gesture' field must be a sub message of type 'Gesture'"
        self._gesture = value

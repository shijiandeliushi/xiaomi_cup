# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:action/Navigation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Navigation_Goal(type):
    """Metaclass of message 'Navigation_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAVIGATION_TYPE_UNKNWON': 0,
        'NAVIGATION_TYPE_START_AB': 1,
        'NAVIGATION_TYPE_STOP_AB': 2,
        'NAVIGATION_TYPE_START_FOLLOW': 3,
        'NAVIGATION_TYPE_STOP_FOLLOW': 4,
        'NAVIGATION_TYPE_START_MAPPING': 5,
        'NAVIGATION_TYPE_STOP_MAPPING': 6,
        'NAVIGATION_TYPE_START_LOCALIZATION': 7,
        'NAVIGATION_TYPE_STOP_LOCALIZATION': 8,
        'NAVIGATION_TYPE_START_AUTO_DOCKING': 9,
        'NAVIGATION_TYPE_STOP_AUTO_DOCKING': 10,
        'NAVIGATION_TYPE_START_UWB_TRACKING': 11,
        'NAVIGATION_TYPE_STOP_UWB_TRACKING': 12,
        'NAVIGATION_TYPE_START_HUMAN_TRACKING': 13,
        'NAVIGATION_TYPE_STOP_HUMAN_TRACKING': 14,
        'NAVIGATION_GOAL_TYPE_AB': 101,
        'NAVIGATION_GOAL_TYPE_FOLLOW': 102,
        'TRACING_AUTO': 200,
        'TRACING_BEHIND': 201,
        'TRACING_LEFT': 202,
        'TRACING_RIGHT': 203,
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
                'protocol.action.Navigation_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigation__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigation__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigation__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigation__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigation__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from sensor_msgs.msg import RegionOfInterest
            if RegionOfInterest.__class__._TYPE_SUPPORT is None:
                RegionOfInterest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAVIGATION_TYPE_UNKNWON': cls.__constants['NAVIGATION_TYPE_UNKNWON'],
            'NAVIGATION_TYPE_START_AB': cls.__constants['NAVIGATION_TYPE_START_AB'],
            'NAVIGATION_TYPE_STOP_AB': cls.__constants['NAVIGATION_TYPE_STOP_AB'],
            'NAVIGATION_TYPE_START_FOLLOW': cls.__constants['NAVIGATION_TYPE_START_FOLLOW'],
            'NAVIGATION_TYPE_STOP_FOLLOW': cls.__constants['NAVIGATION_TYPE_STOP_FOLLOW'],
            'NAVIGATION_TYPE_START_MAPPING': cls.__constants['NAVIGATION_TYPE_START_MAPPING'],
            'NAVIGATION_TYPE_STOP_MAPPING': cls.__constants['NAVIGATION_TYPE_STOP_MAPPING'],
            'NAVIGATION_TYPE_START_LOCALIZATION': cls.__constants['NAVIGATION_TYPE_START_LOCALIZATION'],
            'NAVIGATION_TYPE_STOP_LOCALIZATION': cls.__constants['NAVIGATION_TYPE_STOP_LOCALIZATION'],
            'NAVIGATION_TYPE_START_AUTO_DOCKING': cls.__constants['NAVIGATION_TYPE_START_AUTO_DOCKING'],
            'NAVIGATION_TYPE_STOP_AUTO_DOCKING': cls.__constants['NAVIGATION_TYPE_STOP_AUTO_DOCKING'],
            'NAVIGATION_TYPE_START_UWB_TRACKING': cls.__constants['NAVIGATION_TYPE_START_UWB_TRACKING'],
            'NAVIGATION_TYPE_STOP_UWB_TRACKING': cls.__constants['NAVIGATION_TYPE_STOP_UWB_TRACKING'],
            'NAVIGATION_TYPE_START_HUMAN_TRACKING': cls.__constants['NAVIGATION_TYPE_START_HUMAN_TRACKING'],
            'NAVIGATION_TYPE_STOP_HUMAN_TRACKING': cls.__constants['NAVIGATION_TYPE_STOP_HUMAN_TRACKING'],
            'NAVIGATION_GOAL_TYPE_AB': cls.__constants['NAVIGATION_GOAL_TYPE_AB'],
            'NAVIGATION_GOAL_TYPE_FOLLOW': cls.__constants['NAVIGATION_GOAL_TYPE_FOLLOW'],
            'TRACING_AUTO': cls.__constants['TRACING_AUTO'],
            'TRACING_BEHIND': cls.__constants['TRACING_BEHIND'],
            'TRACING_LEFT': cls.__constants['TRACING_LEFT'],
            'TRACING_RIGHT': cls.__constants['TRACING_RIGHT'],
        }

    @property
    def NAVIGATION_TYPE_UNKNWON(self):
        """Message constant 'NAVIGATION_TYPE_UNKNWON'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_UNKNWON']

    @property
    def NAVIGATION_TYPE_START_AB(self):
        """Message constant 'NAVIGATION_TYPE_START_AB'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_START_AB']

    @property
    def NAVIGATION_TYPE_STOP_AB(self):
        """Message constant 'NAVIGATION_TYPE_STOP_AB'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_STOP_AB']

    @property
    def NAVIGATION_TYPE_START_FOLLOW(self):
        """Message constant 'NAVIGATION_TYPE_START_FOLLOW'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_START_FOLLOW']

    @property
    def NAVIGATION_TYPE_STOP_FOLLOW(self):
        """Message constant 'NAVIGATION_TYPE_STOP_FOLLOW'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_STOP_FOLLOW']

    @property
    def NAVIGATION_TYPE_START_MAPPING(self):
        """Message constant 'NAVIGATION_TYPE_START_MAPPING'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_START_MAPPING']

    @property
    def NAVIGATION_TYPE_STOP_MAPPING(self):
        """Message constant 'NAVIGATION_TYPE_STOP_MAPPING'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_STOP_MAPPING']

    @property
    def NAVIGATION_TYPE_START_LOCALIZATION(self):
        """Message constant 'NAVIGATION_TYPE_START_LOCALIZATION'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_START_LOCALIZATION']

    @property
    def NAVIGATION_TYPE_STOP_LOCALIZATION(self):
        """Message constant 'NAVIGATION_TYPE_STOP_LOCALIZATION'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_STOP_LOCALIZATION']

    @property
    def NAVIGATION_TYPE_START_AUTO_DOCKING(self):
        """Message constant 'NAVIGATION_TYPE_START_AUTO_DOCKING'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_START_AUTO_DOCKING']

    @property
    def NAVIGATION_TYPE_STOP_AUTO_DOCKING(self):
        """Message constant 'NAVIGATION_TYPE_STOP_AUTO_DOCKING'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_STOP_AUTO_DOCKING']

    @property
    def NAVIGATION_TYPE_START_UWB_TRACKING(self):
        """Message constant 'NAVIGATION_TYPE_START_UWB_TRACKING'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_START_UWB_TRACKING']

    @property
    def NAVIGATION_TYPE_STOP_UWB_TRACKING(self):
        """Message constant 'NAVIGATION_TYPE_STOP_UWB_TRACKING'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_STOP_UWB_TRACKING']

    @property
    def NAVIGATION_TYPE_START_HUMAN_TRACKING(self):
        """Message constant 'NAVIGATION_TYPE_START_HUMAN_TRACKING'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_START_HUMAN_TRACKING']

    @property
    def NAVIGATION_TYPE_STOP_HUMAN_TRACKING(self):
        """Message constant 'NAVIGATION_TYPE_STOP_HUMAN_TRACKING'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_TYPE_STOP_HUMAN_TRACKING']

    @property
    def NAVIGATION_GOAL_TYPE_AB(self):
        """Message constant 'NAVIGATION_GOAL_TYPE_AB'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_GOAL_TYPE_AB']

    @property
    def NAVIGATION_GOAL_TYPE_FOLLOW(self):
        """Message constant 'NAVIGATION_GOAL_TYPE_FOLLOW'."""
        return Metaclass_Navigation_Goal.__constants['NAVIGATION_GOAL_TYPE_FOLLOW']

    @property
    def TRACING_AUTO(self):
        """Message constant 'TRACING_AUTO'."""
        return Metaclass_Navigation_Goal.__constants['TRACING_AUTO']

    @property
    def TRACING_BEHIND(self):
        """Message constant 'TRACING_BEHIND'."""
        return Metaclass_Navigation_Goal.__constants['TRACING_BEHIND']

    @property
    def TRACING_LEFT(self):
        """Message constant 'TRACING_LEFT'."""
        return Metaclass_Navigation_Goal.__constants['TRACING_LEFT']

    @property
    def TRACING_RIGHT(self):
        """Message constant 'TRACING_RIGHT'."""
        return Metaclass_Navigation_Goal.__constants['TRACING_RIGHT']


class Navigation_Goal(metaclass=Metaclass_Navigation_Goal):
    """
    Message class 'Navigation_Goal'.

    Constants:
      NAVIGATION_TYPE_UNKNWON
      NAVIGATION_TYPE_START_AB
      NAVIGATION_TYPE_STOP_AB
      NAVIGATION_TYPE_START_FOLLOW
      NAVIGATION_TYPE_STOP_FOLLOW
      NAVIGATION_TYPE_START_MAPPING
      NAVIGATION_TYPE_STOP_MAPPING
      NAVIGATION_TYPE_START_LOCALIZATION
      NAVIGATION_TYPE_STOP_LOCALIZATION
      NAVIGATION_TYPE_START_AUTO_DOCKING
      NAVIGATION_TYPE_STOP_AUTO_DOCKING
      NAVIGATION_TYPE_START_UWB_TRACKING
      NAVIGATION_TYPE_STOP_UWB_TRACKING
      NAVIGATION_TYPE_START_HUMAN_TRACKING
      NAVIGATION_TYPE_STOP_HUMAN_TRACKING
      NAVIGATION_GOAL_TYPE_AB
      NAVIGATION_GOAL_TYPE_FOLLOW
      TRACING_AUTO
      TRACING_BEHIND
      TRACING_LEFT
      TRACING_RIGHT
    """

    __slots__ = [
        '_nav_type',
        '_poses',
        '_label_id',
        '_map_name',
        '_tracking_roi',
        '_relative_pos',
        '_keep_distance',
        '_outdoor',
        '_object_tracking',
    ]

    _fields_and_field_types = {
        'nav_type': 'uint8',
        'poses': 'sequence<geometry_msgs/PoseStamped>',
        'label_id': 'string',
        'map_name': 'string',
        'tracking_roi': 'sensor_msgs/RegionOfInterest',
        'relative_pos': 'uint8',
        'keep_distance': 'float',
        'outdoor': 'boolean',
        'object_tracking': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.nav_type = kwargs.get('nav_type', int())
        self.poses = kwargs.get('poses', [])
        self.label_id = kwargs.get('label_id', str())
        self.map_name = kwargs.get('map_name', str())
        from sensor_msgs.msg import RegionOfInterest
        self.tracking_roi = kwargs.get('tracking_roi', RegionOfInterest())
        self.relative_pos = kwargs.get('relative_pos', int())
        self.keep_distance = kwargs.get('keep_distance', float())
        self.outdoor = kwargs.get('outdoor', bool())
        self.object_tracking = kwargs.get('object_tracking', bool())

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
        if self.nav_type != other.nav_type:
            return False
        if self.poses != other.poses:
            return False
        if self.label_id != other.label_id:
            return False
        if self.map_name != other.map_name:
            return False
        if self.tracking_roi != other.tracking_roi:
            return False
        if self.relative_pos != other.relative_pos:
            return False
        if self.keep_distance != other.keep_distance:
            return False
        if self.outdoor != other.outdoor:
            return False
        if self.object_tracking != other.object_tracking:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def nav_type(self):
        """Message field 'nav_type'."""
        return self._nav_type

    @nav_type.setter
    def nav_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nav_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nav_type' field must be an unsigned integer in [0, 255]"
        self._nav_type = value

    @property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
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
                 all(isinstance(v, PoseStamped) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'PoseStamped'"
        self._poses = value

    @property
    def label_id(self):
        """Message field 'label_id'."""
        return self._label_id

    @label_id.setter
    def label_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label_id' field must be of type 'str'"
        self._label_id = value

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
    def tracking_roi(self):
        """Message field 'tracking_roi'."""
        return self._tracking_roi

    @tracking_roi.setter
    def tracking_roi(self, value):
        if __debug__:
            from sensor_msgs.msg import RegionOfInterest
            assert \
                isinstance(value, RegionOfInterest), \
                "The 'tracking_roi' field must be a sub message of type 'RegionOfInterest'"
        self._tracking_roi = value

    @property
    def relative_pos(self):
        """Message field 'relative_pos'."""
        return self._relative_pos

    @relative_pos.setter
    def relative_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_pos' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'relative_pos' field must be an unsigned integer in [0, 255]"
        self._relative_pos = value

    @property
    def keep_distance(self):
        """Message field 'keep_distance'."""
        return self._keep_distance

    @keep_distance.setter
    def keep_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'keep_distance' field must be of type 'float'"
        self._keep_distance = value

    @property
    def outdoor(self):
        """Message field 'outdoor'."""
        return self._outdoor

    @outdoor.setter
    def outdoor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'outdoor' field must be of type 'bool'"
        self._outdoor = value

    @property
    def object_tracking(self):
        """Message field 'object_tracking'."""
        return self._object_tracking

    @object_tracking.setter
    def object_tracking(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'object_tracking' field must be of type 'bool'"
        self._object_tracking = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigation_Result(type):
    """Metaclass of message 'Navigation_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAVIGATION_RESULT_TYPE_SUCCESS': 0,
        'NAVIGATION_RESULT_TYPE_ACCEPT': 1,
        'NAVIGATION_RESULT_TYPE_UNAVALIBLE': 2,
        'NAVIGATION_RESULT_TYPE_FAILED': 3,
        'NAVIGATION_RESULT_TYPE_REJECT': 4,
        'NAVIGATION_RESULT_TYPE_CANCEL': 5,
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
                'protocol.action.Navigation_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigation__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigation__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigation__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigation__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigation__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAVIGATION_RESULT_TYPE_SUCCESS': cls.__constants['NAVIGATION_RESULT_TYPE_SUCCESS'],
            'NAVIGATION_RESULT_TYPE_ACCEPT': cls.__constants['NAVIGATION_RESULT_TYPE_ACCEPT'],
            'NAVIGATION_RESULT_TYPE_UNAVALIBLE': cls.__constants['NAVIGATION_RESULT_TYPE_UNAVALIBLE'],
            'NAVIGATION_RESULT_TYPE_FAILED': cls.__constants['NAVIGATION_RESULT_TYPE_FAILED'],
            'NAVIGATION_RESULT_TYPE_REJECT': cls.__constants['NAVIGATION_RESULT_TYPE_REJECT'],
            'NAVIGATION_RESULT_TYPE_CANCEL': cls.__constants['NAVIGATION_RESULT_TYPE_CANCEL'],
        }

    @property
    def NAVIGATION_RESULT_TYPE_SUCCESS(self):
        """Message constant 'NAVIGATION_RESULT_TYPE_SUCCESS'."""
        return Metaclass_Navigation_Result.__constants['NAVIGATION_RESULT_TYPE_SUCCESS']

    @property
    def NAVIGATION_RESULT_TYPE_ACCEPT(self):
        """Message constant 'NAVIGATION_RESULT_TYPE_ACCEPT'."""
        return Metaclass_Navigation_Result.__constants['NAVIGATION_RESULT_TYPE_ACCEPT']

    @property
    def NAVIGATION_RESULT_TYPE_UNAVALIBLE(self):
        """Message constant 'NAVIGATION_RESULT_TYPE_UNAVALIBLE'."""
        return Metaclass_Navigation_Result.__constants['NAVIGATION_RESULT_TYPE_UNAVALIBLE']

    @property
    def NAVIGATION_RESULT_TYPE_FAILED(self):
        """Message constant 'NAVIGATION_RESULT_TYPE_FAILED'."""
        return Metaclass_Navigation_Result.__constants['NAVIGATION_RESULT_TYPE_FAILED']

    @property
    def NAVIGATION_RESULT_TYPE_REJECT(self):
        """Message constant 'NAVIGATION_RESULT_TYPE_REJECT'."""
        return Metaclass_Navigation_Result.__constants['NAVIGATION_RESULT_TYPE_REJECT']

    @property
    def NAVIGATION_RESULT_TYPE_CANCEL(self):
        """Message constant 'NAVIGATION_RESULT_TYPE_CANCEL'."""
        return Metaclass_Navigation_Result.__constants['NAVIGATION_RESULT_TYPE_CANCEL']


class Navigation_Result(metaclass=Metaclass_Navigation_Result):
    """
    Message class 'Navigation_Result'.

    Constants:
      NAVIGATION_RESULT_TYPE_SUCCESS
      NAVIGATION_RESULT_TYPE_ACCEPT
      NAVIGATION_RESULT_TYPE_UNAVALIBLE
      NAVIGATION_RESULT_TYPE_FAILED
      NAVIGATION_RESULT_TYPE_REJECT
      NAVIGATION_RESULT_TYPE_CANCEL
    """

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

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
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigation_Feedback(type):
    """Metaclass of message 'Navigation_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAVIGATION_FEEDBACK_RELOCING_SUCCESS': 0,
        'NAVIGATION_FEEDBACK_RELOCING_RETRYING': 100,
        'NAVIGATION_FEEDBACK_RELOCING_FAILED': 200,
        'NAVIGATION_FEEDBACK_NAVIGATING_AB': 1,
        'NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS': 2,
        'NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE': 3,
        'NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS': 4,
        'NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE': 5,
        'NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING': 20,
        'NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS': 6,
        'NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE': 7,
        'NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS': 8,
        'NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE': 9,
        'NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION': 10,
        'NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION': 11,
        'NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION': 12,
        'NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION': 13,
        'NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION': 14,
        'NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET': 15,
        'NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING': 16,
        'NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING': 17,
        'NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM': 18,
        'TASK_PREPARATION_EXECUTING': 1000,
        'TASK_PREPARATION_SUCCESS': 1001,
        'TASK_PREPARATION_FAILED': 1002,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING': 500,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_READY': 501,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED': 502,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING': 503,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR': 504,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE': 505,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED': 506,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED': 507,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED': 508,
        'NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY': 509,
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
                'protocol.action.Navigation_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigation__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigation__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigation__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigation__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigation__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAVIGATION_FEEDBACK_RELOCING_SUCCESS': cls.__constants['NAVIGATION_FEEDBACK_RELOCING_SUCCESS'],
            'NAVIGATION_FEEDBACK_RELOCING_RETRYING': cls.__constants['NAVIGATION_FEEDBACK_RELOCING_RETRYING'],
            'NAVIGATION_FEEDBACK_RELOCING_FAILED': cls.__constants['NAVIGATION_FEEDBACK_RELOCING_FAILED'],
            'NAVIGATION_FEEDBACK_NAVIGATING_AB': cls.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB'],
            'NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS': cls.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS'],
            'NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE': cls.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE'],
            'NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS': cls.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS'],
            'NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE': cls.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE'],
            'NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING': cls.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING'],
            'NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS': cls.__constants['NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS'],
            'NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE': cls.__constants['NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE'],
            'NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS': cls.__constants['NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS'],
            'NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE': cls.__constants['NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE'],
            'NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION': cls.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION'],
            'NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION': cls.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION'],
            'NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION': cls.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION'],
            'NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION': cls.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION'],
            'NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION': cls.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION'],
            'NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET': cls.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET'],
            'NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING': cls.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING'],
            'NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING': cls.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING'],
            'NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM': cls.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM'],
            'TASK_PREPARATION_EXECUTING': cls.__constants['TASK_PREPARATION_EXECUTING'],
            'TASK_PREPARATION_SUCCESS': cls.__constants['TASK_PREPARATION_SUCCESS'],
            'TASK_PREPARATION_FAILED': cls.__constants['TASK_PREPARATION_FAILED'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_READY': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_READY'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED'],
            'NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY': cls.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY'],
        }

    @property
    def NAVIGATION_FEEDBACK_RELOCING_SUCCESS(self):
        """Message constant 'NAVIGATION_FEEDBACK_RELOCING_SUCCESS'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_RELOCING_SUCCESS']

    @property
    def NAVIGATION_FEEDBACK_RELOCING_RETRYING(self):
        """Message constant 'NAVIGATION_FEEDBACK_RELOCING_RETRYING'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_RELOCING_RETRYING']

    @property
    def NAVIGATION_FEEDBACK_RELOCING_FAILED(self):
        """Message constant 'NAVIGATION_FEEDBACK_RELOCING_FAILED'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_RELOCING_FAILED']

    @property
    def NAVIGATION_FEEDBACK_NAVIGATING_AB(self):
        """Message constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB']

    @property
    def NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS(self):
        """Message constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS']

    @property
    def NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE(self):
        """Message constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE']

    @property
    def NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS(self):
        """Message constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS']

    @property
    def NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE(self):
        """Message constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE']

    @property
    def NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING(self):
        """Message constant 'NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING']

    @property
    def NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS(self):
        """Message constant 'NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS']

    @property
    def NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE(self):
        """Message constant 'NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE']

    @property
    def NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS(self):
        """Message constant 'NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS']

    @property
    def NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE(self):
        """Message constant 'NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE']

    @property
    def NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION(self):
        """Message constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION']

    @property
    def NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION(self):
        """Message constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION']

    @property
    def NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION(self):
        """Message constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION']

    @property
    def NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION(self):
        """Message constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION']

    @property
    def NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION(self):
        """Message constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION']

    @property
    def NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET(self):
        """Message constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET']

    @property
    def NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING(self):
        """Message constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING']

    @property
    def NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING(self):
        """Message constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING']

    @property
    def NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM(self):
        """Message constant 'NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM']

    @property
    def TASK_PREPARATION_EXECUTING(self):
        """Message constant 'TASK_PREPARATION_EXECUTING'."""
        return Metaclass_Navigation_Feedback.__constants['TASK_PREPARATION_EXECUTING']

    @property
    def TASK_PREPARATION_SUCCESS(self):
        """Message constant 'TASK_PREPARATION_SUCCESS'."""
        return Metaclass_Navigation_Feedback.__constants['TASK_PREPARATION_SUCCESS']

    @property
    def TASK_PREPARATION_FAILED(self):
        """Message constant 'TASK_PREPARATION_FAILED'."""
        return Metaclass_Navigation_Feedback.__constants['TASK_PREPARATION_FAILED']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_READY(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_READY'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_READY']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED']

    @property
    def NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY(self):
        """Message constant 'NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY'."""
        return Metaclass_Navigation_Feedback.__constants['NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY']


class Navigation_Feedback(metaclass=Metaclass_Navigation_Feedback):
    """
    Message class 'Navigation_Feedback'.

    Constants:
      NAVIGATION_FEEDBACK_RELOCING_SUCCESS
      NAVIGATION_FEEDBACK_RELOCING_RETRYING
      NAVIGATION_FEEDBACK_RELOCING_FAILED
      NAVIGATION_FEEDBACK_NAVIGATING_AB
      NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS
      NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE
      NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS
      NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE
      NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING
      NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS
      NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE
      NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS
      NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE
      NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION
      NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION
      NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION
      NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION
      NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION
      NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET
      NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING
      NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING
      NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM
      TASK_PREPARATION_EXECUTING
      TASK_PREPARATION_SUCCESS
      TASK_PREPARATION_FAILED
      NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING
      NAVIGATION_FEEDBACK_VISION_TRACKING_READY
      NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED
      NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING
      NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR
      NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE
      NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED
      NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED
      NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED
      NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY
    """

    __slots__ = [
        '_feedback_code',
        '_feedback_msg',
    ]

    _fields_and_field_types = {
        'feedback_code': 'int32',
        'feedback_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.feedback_code = kwargs.get('feedback_code', int())
        self.feedback_msg = kwargs.get('feedback_msg', str())

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
        if self.feedback_code != other.feedback_code:
            return False
        if self.feedback_msg != other.feedback_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def feedback_code(self):
        """Message field 'feedback_code'."""
        return self._feedback_code

    @feedback_code.setter
    def feedback_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'feedback_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'feedback_code' field must be an integer in [-2147483648, 2147483647]"
        self._feedback_code = value

    @property
    def feedback_msg(self):
        """Message field 'feedback_msg'."""
        return self._feedback_msg

    @feedback_msg.setter
    def feedback_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'feedback_msg' field must be of type 'str'"
        self._feedback_msg = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigation_SendGoal_Request(type):
    """Metaclass of message 'Navigation_SendGoal_Request'."""

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
                'protocol.action.Navigation_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigation__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigation__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigation__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigation__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigation__send_goal__request

            from protocol.action import Navigation
            if Navigation.Goal.__class__._TYPE_SUPPORT is None:
                Navigation.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Navigation_SendGoal_Request(metaclass=Metaclass_Navigation_SendGoal_Request):
    """Message class 'Navigation_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'protocol/Navigation_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'action'], 'Navigation_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from protocol.action._navigation import Navigation_Goal
        self.goal = kwargs.get('goal', Navigation_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from protocol.action._navigation import Navigation_Goal
            assert \
                isinstance(value, Navigation_Goal), \
                "The 'goal' field must be a sub message of type 'Navigation_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigation_SendGoal_Response(type):
    """Metaclass of message 'Navigation_SendGoal_Response'."""

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
                'protocol.action.Navigation_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigation__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigation__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigation__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigation__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigation__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Navigation_SendGoal_Response(metaclass=Metaclass_Navigation_SendGoal_Response):
    """Message class 'Navigation_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_Navigation_SendGoal(type):
    """Metaclass of service 'Navigation_SendGoal'."""

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
                'protocol.action.Navigation_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__navigation__send_goal

            from protocol.action import _navigation
            if _navigation.Metaclass_Navigation_SendGoal_Request._TYPE_SUPPORT is None:
                _navigation.Metaclass_Navigation_SendGoal_Request.__import_type_support__()
            if _navigation.Metaclass_Navigation_SendGoal_Response._TYPE_SUPPORT is None:
                _navigation.Metaclass_Navigation_SendGoal_Response.__import_type_support__()


class Navigation_SendGoal(metaclass=Metaclass_Navigation_SendGoal):
    from protocol.action._navigation import Navigation_SendGoal_Request as Request
    from protocol.action._navigation import Navigation_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigation_GetResult_Request(type):
    """Metaclass of message 'Navigation_GetResult_Request'."""

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
                'protocol.action.Navigation_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigation__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigation__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigation__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigation__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigation__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Navigation_GetResult_Request(metaclass=Metaclass_Navigation_GetResult_Request):
    """Message class 'Navigation_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigation_GetResult_Response(type):
    """Metaclass of message 'Navigation_GetResult_Response'."""

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
                'protocol.action.Navigation_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigation__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigation__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigation__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigation__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigation__get_result__response

            from protocol.action import Navigation
            if Navigation.Result.__class__._TYPE_SUPPORT is None:
                Navigation.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Navigation_GetResult_Response(metaclass=Metaclass_Navigation_GetResult_Response):
    """Message class 'Navigation_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'protocol/Navigation_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'action'], 'Navigation_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from protocol.action._navigation import Navigation_Result
        self.result = kwargs.get('result', Navigation_Result())

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
        if self.result != other.result:
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
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from protocol.action._navigation import Navigation_Result
            assert \
                isinstance(value, Navigation_Result), \
                "The 'result' field must be a sub message of type 'Navigation_Result'"
        self._result = value


class Metaclass_Navigation_GetResult(type):
    """Metaclass of service 'Navigation_GetResult'."""

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
                'protocol.action.Navigation_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__navigation__get_result

            from protocol.action import _navigation
            if _navigation.Metaclass_Navigation_GetResult_Request._TYPE_SUPPORT is None:
                _navigation.Metaclass_Navigation_GetResult_Request.__import_type_support__()
            if _navigation.Metaclass_Navigation_GetResult_Response._TYPE_SUPPORT is None:
                _navigation.Metaclass_Navigation_GetResult_Response.__import_type_support__()


class Navigation_GetResult(metaclass=Metaclass_Navigation_GetResult):
    from protocol.action._navigation import Navigation_GetResult_Request as Request
    from protocol.action._navigation import Navigation_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigation_FeedbackMessage(type):
    """Metaclass of message 'Navigation_FeedbackMessage'."""

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
                'protocol.action.Navigation_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigation__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigation__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigation__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigation__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigation__feedback_message

            from protocol.action import Navigation
            if Navigation.Feedback.__class__._TYPE_SUPPORT is None:
                Navigation.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Navigation_FeedbackMessage(metaclass=Metaclass_Navigation_FeedbackMessage):
    """Message class 'Navigation_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'protocol/Navigation_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'action'], 'Navigation_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from protocol.action._navigation import Navigation_Feedback
        self.feedback = kwargs.get('feedback', Navigation_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from protocol.action._navigation import Navigation_Feedback
            assert \
                isinstance(value, Navigation_Feedback), \
                "The 'feedback' field must be a sub message of type 'Navigation_Feedback'"
        self._feedback = value


class Metaclass_Navigation(type):
    """Metaclass of action 'Navigation'."""

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
                'protocol.action.Navigation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__navigation

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from protocol.action import _navigation
            if _navigation.Metaclass_Navigation_SendGoal._TYPE_SUPPORT is None:
                _navigation.Metaclass_Navigation_SendGoal.__import_type_support__()
            if _navigation.Metaclass_Navigation_GetResult._TYPE_SUPPORT is None:
                _navigation.Metaclass_Navigation_GetResult.__import_type_support__()
            if _navigation.Metaclass_Navigation_FeedbackMessage._TYPE_SUPPORT is None:
                _navigation.Metaclass_Navigation_FeedbackMessage.__import_type_support__()


class Navigation(metaclass=Metaclass_Navigation):

    # The goal message defined in the action definition.
    from protocol.action._navigation import Navigation_Goal as Goal
    # The result message defined in the action definition.
    from protocol.action._navigation import Navigation_Result as Result
    # The feedback message defined in the action definition.
    from protocol.action._navigation import Navigation_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from protocol.action._navigation import Navigation_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from protocol.action._navigation import Navigation_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from protocol.action._navigation import Navigation_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')

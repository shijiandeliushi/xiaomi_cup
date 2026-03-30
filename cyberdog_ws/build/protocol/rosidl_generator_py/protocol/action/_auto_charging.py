# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:action/AutoCharging.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutoCharging_Goal(type):
    """Metaclass of message 'AutoCharging_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'AUTOCHARGING_GOAL_TYPE_STOP': 0,
        'AUTOCHARGING_GOAL_TYPE_START': 1,
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
                'protocol.action.AutoCharging_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__auto_charging__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__auto_charging__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__auto_charging__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__auto_charging__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__auto_charging__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'AUTOCHARGING_GOAL_TYPE_STOP': cls.__constants['AUTOCHARGING_GOAL_TYPE_STOP'],
            'AUTOCHARGING_GOAL_TYPE_START': cls.__constants['AUTOCHARGING_GOAL_TYPE_START'],
        }

    @property
    def AUTOCHARGING_GOAL_TYPE_STOP(self):
        """Message constant 'AUTOCHARGING_GOAL_TYPE_STOP'."""
        return Metaclass_AutoCharging_Goal.__constants['AUTOCHARGING_GOAL_TYPE_STOP']

    @property
    def AUTOCHARGING_GOAL_TYPE_START(self):
        """Message constant 'AUTOCHARGING_GOAL_TYPE_START'."""
        return Metaclass_AutoCharging_Goal.__constants['AUTOCHARGING_GOAL_TYPE_START']


class AutoCharging_Goal(metaclass=Metaclass_AutoCharging_Goal):
    """
    Message class 'AutoCharging_Goal'.

    Constants:
      AUTOCHARGING_GOAL_TYPE_STOP
      AUTOCHARGING_GOAL_TYPE_START
    """

    __slots__ = [
        '_pose',
        '_start',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/PoseStamped',
        'start': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.pose = kwargs.get('pose', PoseStamped())
        self.start = kwargs.get('start', int())

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
        if self.pose != other.pose:
            return False
        if self.start != other.start:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pose' field must be a sub message of type 'PoseStamped'"
        self._pose = value

    @property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'start' field must be an unsigned integer in [0, 255]"
        self._start = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AutoCharging_Result(type):
    """Metaclass of message 'AutoCharging_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'AUTOCHARGING_RESULT_TYPE_SUCCESS': 0,
        'AUTOCHARGING_RESULT_TYPE_ACCEPT': 1,
        'AUTOCHARGING_RESULT_TYPE_UNAVALIBLE': 2,
        'AUTOCHARGING_RESULT_TYPE_FAILED': 3,
        'AUTOCHARGING_RESULT_TYPE_REJECT': 4,
        'AUTOCHARGING_RESULT_TYPE_CANCEL': 5,
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
                'protocol.action.AutoCharging_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__auto_charging__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__auto_charging__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__auto_charging__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__auto_charging__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__auto_charging__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'AUTOCHARGING_RESULT_TYPE_SUCCESS': cls.__constants['AUTOCHARGING_RESULT_TYPE_SUCCESS'],
            'AUTOCHARGING_RESULT_TYPE_ACCEPT': cls.__constants['AUTOCHARGING_RESULT_TYPE_ACCEPT'],
            'AUTOCHARGING_RESULT_TYPE_UNAVALIBLE': cls.__constants['AUTOCHARGING_RESULT_TYPE_UNAVALIBLE'],
            'AUTOCHARGING_RESULT_TYPE_FAILED': cls.__constants['AUTOCHARGING_RESULT_TYPE_FAILED'],
            'AUTOCHARGING_RESULT_TYPE_REJECT': cls.__constants['AUTOCHARGING_RESULT_TYPE_REJECT'],
            'AUTOCHARGING_RESULT_TYPE_CANCEL': cls.__constants['AUTOCHARGING_RESULT_TYPE_CANCEL'],
        }

    @property
    def AUTOCHARGING_RESULT_TYPE_SUCCESS(self):
        """Message constant 'AUTOCHARGING_RESULT_TYPE_SUCCESS'."""
        return Metaclass_AutoCharging_Result.__constants['AUTOCHARGING_RESULT_TYPE_SUCCESS']

    @property
    def AUTOCHARGING_RESULT_TYPE_ACCEPT(self):
        """Message constant 'AUTOCHARGING_RESULT_TYPE_ACCEPT'."""
        return Metaclass_AutoCharging_Result.__constants['AUTOCHARGING_RESULT_TYPE_ACCEPT']

    @property
    def AUTOCHARGING_RESULT_TYPE_UNAVALIBLE(self):
        """Message constant 'AUTOCHARGING_RESULT_TYPE_UNAVALIBLE'."""
        return Metaclass_AutoCharging_Result.__constants['AUTOCHARGING_RESULT_TYPE_UNAVALIBLE']

    @property
    def AUTOCHARGING_RESULT_TYPE_FAILED(self):
        """Message constant 'AUTOCHARGING_RESULT_TYPE_FAILED'."""
        return Metaclass_AutoCharging_Result.__constants['AUTOCHARGING_RESULT_TYPE_FAILED']

    @property
    def AUTOCHARGING_RESULT_TYPE_REJECT(self):
        """Message constant 'AUTOCHARGING_RESULT_TYPE_REJECT'."""
        return Metaclass_AutoCharging_Result.__constants['AUTOCHARGING_RESULT_TYPE_REJECT']

    @property
    def AUTOCHARGING_RESULT_TYPE_CANCEL(self):
        """Message constant 'AUTOCHARGING_RESULT_TYPE_CANCEL'."""
        return Metaclass_AutoCharging_Result.__constants['AUTOCHARGING_RESULT_TYPE_CANCEL']


class AutoCharging_Result(metaclass=Metaclass_AutoCharging_Result):
    """
    Message class 'AutoCharging_Result'.

    Constants:
      AUTOCHARGING_RESULT_TYPE_SUCCESS
      AUTOCHARGING_RESULT_TYPE_ACCEPT
      AUTOCHARGING_RESULT_TYPE_UNAVALIBLE
      AUTOCHARGING_RESULT_TYPE_FAILED
      AUTOCHARGING_RESULT_TYPE_REJECT
      AUTOCHARGING_RESULT_TYPE_CANCEL
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


class Metaclass_AutoCharging_Feedback(type):
    """Metaclass of message 'AutoCharging_Feedback'."""

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
                'protocol.action.AutoCharging_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__auto_charging__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__auto_charging__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__auto_charging__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__auto_charging__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__auto_charging__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AutoCharging_Feedback(metaclass=Metaclass_AutoCharging_Feedback):
    """Message class 'AutoCharging_Feedback'."""

    __slots__ = [
        '_charging_stage',
    ]

    _fields_and_field_types = {
        'charging_stage': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.charging_stage = kwargs.get('charging_stage', int())

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
        if self.charging_stage != other.charging_stage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def charging_stage(self):
        """Message field 'charging_stage'."""
        return self._charging_stage

    @charging_stage.setter
    def charging_stage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charging_stage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'charging_stage' field must be an unsigned integer in [0, 255]"
        self._charging_stage = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AutoCharging_SendGoal_Request(type):
    """Metaclass of message 'AutoCharging_SendGoal_Request'."""

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
                'protocol.action.AutoCharging_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__auto_charging__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__auto_charging__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__auto_charging__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__auto_charging__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__auto_charging__send_goal__request

            from protocol.action import AutoCharging
            if AutoCharging.Goal.__class__._TYPE_SUPPORT is None:
                AutoCharging.Goal.__class__.__import_type_support__()

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


class AutoCharging_SendGoal_Request(metaclass=Metaclass_AutoCharging_SendGoal_Request):
    """Message class 'AutoCharging_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'protocol/AutoCharging_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'action'], 'AutoCharging_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from protocol.action._auto_charging import AutoCharging_Goal
        self.goal = kwargs.get('goal', AutoCharging_Goal())

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
            from protocol.action._auto_charging import AutoCharging_Goal
            assert \
                isinstance(value, AutoCharging_Goal), \
                "The 'goal' field must be a sub message of type 'AutoCharging_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AutoCharging_SendGoal_Response(type):
    """Metaclass of message 'AutoCharging_SendGoal_Response'."""

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
                'protocol.action.AutoCharging_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__auto_charging__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__auto_charging__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__auto_charging__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__auto_charging__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__auto_charging__send_goal__response

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


class AutoCharging_SendGoal_Response(metaclass=Metaclass_AutoCharging_SendGoal_Response):
    """Message class 'AutoCharging_SendGoal_Response'."""

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


class Metaclass_AutoCharging_SendGoal(type):
    """Metaclass of service 'AutoCharging_SendGoal'."""

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
                'protocol.action.AutoCharging_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__auto_charging__send_goal

            from protocol.action import _auto_charging
            if _auto_charging.Metaclass_AutoCharging_SendGoal_Request._TYPE_SUPPORT is None:
                _auto_charging.Metaclass_AutoCharging_SendGoal_Request.__import_type_support__()
            if _auto_charging.Metaclass_AutoCharging_SendGoal_Response._TYPE_SUPPORT is None:
                _auto_charging.Metaclass_AutoCharging_SendGoal_Response.__import_type_support__()


class AutoCharging_SendGoal(metaclass=Metaclass_AutoCharging_SendGoal):
    from protocol.action._auto_charging import AutoCharging_SendGoal_Request as Request
    from protocol.action._auto_charging import AutoCharging_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AutoCharging_GetResult_Request(type):
    """Metaclass of message 'AutoCharging_GetResult_Request'."""

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
                'protocol.action.AutoCharging_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__auto_charging__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__auto_charging__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__auto_charging__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__auto_charging__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__auto_charging__get_result__request

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


class AutoCharging_GetResult_Request(metaclass=Metaclass_AutoCharging_GetResult_Request):
    """Message class 'AutoCharging_GetResult_Request'."""

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


class Metaclass_AutoCharging_GetResult_Response(type):
    """Metaclass of message 'AutoCharging_GetResult_Response'."""

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
                'protocol.action.AutoCharging_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__auto_charging__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__auto_charging__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__auto_charging__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__auto_charging__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__auto_charging__get_result__response

            from protocol.action import AutoCharging
            if AutoCharging.Result.__class__._TYPE_SUPPORT is None:
                AutoCharging.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AutoCharging_GetResult_Response(metaclass=Metaclass_AutoCharging_GetResult_Response):
    """Message class 'AutoCharging_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'protocol/AutoCharging_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'action'], 'AutoCharging_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from protocol.action._auto_charging import AutoCharging_Result
        self.result = kwargs.get('result', AutoCharging_Result())

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
            from protocol.action._auto_charging import AutoCharging_Result
            assert \
                isinstance(value, AutoCharging_Result), \
                "The 'result' field must be a sub message of type 'AutoCharging_Result'"
        self._result = value


class Metaclass_AutoCharging_GetResult(type):
    """Metaclass of service 'AutoCharging_GetResult'."""

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
                'protocol.action.AutoCharging_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__auto_charging__get_result

            from protocol.action import _auto_charging
            if _auto_charging.Metaclass_AutoCharging_GetResult_Request._TYPE_SUPPORT is None:
                _auto_charging.Metaclass_AutoCharging_GetResult_Request.__import_type_support__()
            if _auto_charging.Metaclass_AutoCharging_GetResult_Response._TYPE_SUPPORT is None:
                _auto_charging.Metaclass_AutoCharging_GetResult_Response.__import_type_support__()


class AutoCharging_GetResult(metaclass=Metaclass_AutoCharging_GetResult):
    from protocol.action._auto_charging import AutoCharging_GetResult_Request as Request
    from protocol.action._auto_charging import AutoCharging_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AutoCharging_FeedbackMessage(type):
    """Metaclass of message 'AutoCharging_FeedbackMessage'."""

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
                'protocol.action.AutoCharging_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__auto_charging__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__auto_charging__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__auto_charging__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__auto_charging__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__auto_charging__feedback_message

            from protocol.action import AutoCharging
            if AutoCharging.Feedback.__class__._TYPE_SUPPORT is None:
                AutoCharging.Feedback.__class__.__import_type_support__()

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


class AutoCharging_FeedbackMessage(metaclass=Metaclass_AutoCharging_FeedbackMessage):
    """Message class 'AutoCharging_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'protocol/AutoCharging_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'action'], 'AutoCharging_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from protocol.action._auto_charging import AutoCharging_Feedback
        self.feedback = kwargs.get('feedback', AutoCharging_Feedback())

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
            from protocol.action._auto_charging import AutoCharging_Feedback
            assert \
                isinstance(value, AutoCharging_Feedback), \
                "The 'feedback' field must be a sub message of type 'AutoCharging_Feedback'"
        self._feedback = value


class Metaclass_AutoCharging(type):
    """Metaclass of action 'AutoCharging'."""

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
                'protocol.action.AutoCharging')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__auto_charging

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from protocol.action import _auto_charging
            if _auto_charging.Metaclass_AutoCharging_SendGoal._TYPE_SUPPORT is None:
                _auto_charging.Metaclass_AutoCharging_SendGoal.__import_type_support__()
            if _auto_charging.Metaclass_AutoCharging_GetResult._TYPE_SUPPORT is None:
                _auto_charging.Metaclass_AutoCharging_GetResult.__import_type_support__()
            if _auto_charging.Metaclass_AutoCharging_FeedbackMessage._TYPE_SUPPORT is None:
                _auto_charging.Metaclass_AutoCharging_FeedbackMessage.__import_type_support__()


class AutoCharging(metaclass=Metaclass_AutoCharging):

    # The goal message defined in the action definition.
    from protocol.action._auto_charging import AutoCharging_Goal as Goal
    # The result message defined in the action definition.
    from protocol.action._auto_charging import AutoCharging_Result as Result
    # The feedback message defined in the action definition.
    from protocol.action._auto_charging import AutoCharging_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from protocol.action._auto_charging import AutoCharging_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from protocol.action._auto_charging import AutoCharging_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from protocol.action._auto_charging import AutoCharging_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')

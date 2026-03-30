# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/TrainPlanAll.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrainPlanAll_Request(type):
    """Metaclass of message 'TrainPlanAll_Request'."""

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
                'protocol.srv.TrainPlanAll_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__train_plan_all__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__train_plan_all__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__train_plan_all__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__train_plan_all__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__train_plan_all__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrainPlanAll_Request(metaclass=Metaclass_TrainPlanAll_Request):
    """Message class 'TrainPlanAll_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrainPlanAll_Response(type):
    """Metaclass of message 'TrainPlanAll_Response'."""

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
                'protocol.srv.TrainPlanAll_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__train_plan_all__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__train_plan_all__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__train_plan_all__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__train_plan_all__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__train_plan_all__response

            from protocol.msg import TrainPlan
            if TrainPlan.__class__._TYPE_SUPPORT is None:
                TrainPlan.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrainPlanAll_Response(metaclass=Metaclass_TrainPlanAll_Response):
    """Message class 'TrainPlanAll_Response'."""

    __slots__ = [
        '_training_set',
        '_code',
    ]

    _fields_and_field_types = {
        'training_set': 'sequence<protocol/TrainPlan>',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'TrainPlan')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.training_set = kwargs.get('training_set', [])
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
        if self.training_set != other.training_set:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def training_set(self):
        """Message field 'training_set'."""
        return self._training_set

    @training_set.setter
    def training_set(self, value):
        if __debug__:
            from protocol.msg import TrainPlan
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
                 all(isinstance(v, TrainPlan) for v in value) and
                 True), \
                "The 'training_set' field must be a set or sequence and each value of type 'TrainPlan'"
        self._training_set = value

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


class Metaclass_TrainPlanAll(type):
    """Metaclass of service 'TrainPlanAll'."""

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
                'protocol.srv.TrainPlanAll')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__train_plan_all

            from protocol.srv import _train_plan_all
            if _train_plan_all.Metaclass_TrainPlanAll_Request._TYPE_SUPPORT is None:
                _train_plan_all.Metaclass_TrainPlanAll_Request.__import_type_support__()
            if _train_plan_all.Metaclass_TrainPlanAll_Response._TYPE_SUPPORT is None:
                _train_plan_all.Metaclass_TrainPlanAll_Response.__import_type_support__()


class TrainPlanAll(metaclass=Metaclass_TrainPlanAll):
    from protocol.srv._train_plan_all import TrainPlanAll_Request as Request
    from protocol.srv._train_plan_all import TrainPlanAll_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

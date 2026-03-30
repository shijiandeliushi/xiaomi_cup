# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/TrackingStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackingStatus(type):
    """Metaclass of message 'TrackingStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OBJECT_FAR': 0,
        'OBJECT_NEAR': 1,
        'OBJECT_LOST': 2,
        'OBJECT_EDGE': 3,
        'START_SUCCESS': 4,
        'START_FAIL': 5,
        'OBJECT_INVISIBLE': 6,
        'STATUS_SELECTING': 7,
        'STATUS_RECOGNIZING': 8,
        'STATUS_TRACKING': 9,
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
                'protocol.msg.TrackingStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracking_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracking_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracking_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracking_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracking_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OBJECT_FAR': cls.__constants['OBJECT_FAR'],
            'OBJECT_NEAR': cls.__constants['OBJECT_NEAR'],
            'OBJECT_LOST': cls.__constants['OBJECT_LOST'],
            'OBJECT_EDGE': cls.__constants['OBJECT_EDGE'],
            'START_SUCCESS': cls.__constants['START_SUCCESS'],
            'START_FAIL': cls.__constants['START_FAIL'],
            'OBJECT_INVISIBLE': cls.__constants['OBJECT_INVISIBLE'],
            'STATUS_SELECTING': cls.__constants['STATUS_SELECTING'],
            'STATUS_RECOGNIZING': cls.__constants['STATUS_RECOGNIZING'],
            'STATUS_TRACKING': cls.__constants['STATUS_TRACKING'],
        }

    @property
    def OBJECT_FAR(self):
        """Message constant 'OBJECT_FAR'."""
        return Metaclass_TrackingStatus.__constants['OBJECT_FAR']

    @property
    def OBJECT_NEAR(self):
        """Message constant 'OBJECT_NEAR'."""
        return Metaclass_TrackingStatus.__constants['OBJECT_NEAR']

    @property
    def OBJECT_LOST(self):
        """Message constant 'OBJECT_LOST'."""
        return Metaclass_TrackingStatus.__constants['OBJECT_LOST']

    @property
    def OBJECT_EDGE(self):
        """Message constant 'OBJECT_EDGE'."""
        return Metaclass_TrackingStatus.__constants['OBJECT_EDGE']

    @property
    def START_SUCCESS(self):
        """Message constant 'START_SUCCESS'."""
        return Metaclass_TrackingStatus.__constants['START_SUCCESS']

    @property
    def START_FAIL(self):
        """Message constant 'START_FAIL'."""
        return Metaclass_TrackingStatus.__constants['START_FAIL']

    @property
    def OBJECT_INVISIBLE(self):
        """Message constant 'OBJECT_INVISIBLE'."""
        return Metaclass_TrackingStatus.__constants['OBJECT_INVISIBLE']

    @property
    def STATUS_SELECTING(self):
        """Message constant 'STATUS_SELECTING'."""
        return Metaclass_TrackingStatus.__constants['STATUS_SELECTING']

    @property
    def STATUS_RECOGNIZING(self):
        """Message constant 'STATUS_RECOGNIZING'."""
        return Metaclass_TrackingStatus.__constants['STATUS_RECOGNIZING']

    @property
    def STATUS_TRACKING(self):
        """Message constant 'STATUS_TRACKING'."""
        return Metaclass_TrackingStatus.__constants['STATUS_TRACKING']


class TrackingStatus(metaclass=Metaclass_TrackingStatus):
    """
    Message class 'TrackingStatus'.

    Constants:
      OBJECT_FAR
      OBJECT_NEAR
      OBJECT_LOST
      OBJECT_EDGE
      START_SUCCESS
      START_FAIL
      OBJECT_INVISIBLE
      STATUS_SELECTING
      STATUS_RECOGNIZING
      STATUS_TRACKING
    """

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

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
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

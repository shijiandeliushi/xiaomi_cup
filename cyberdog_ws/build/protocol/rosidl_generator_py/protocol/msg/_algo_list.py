# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/AlgoList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AlgoList(type):
    """Metaclass of message 'AlgoList'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALGO_FACE': 0,
        'ALGO_BODY': 1,
        'ALGO_GESTURE': 2,
        'ALGO_KEYPOINTS': 3,
        'ALGO_REID': 4,
        'ALGO_FOCUS': 5,
        'FACE_MANAGER': 6,
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
                'protocol.msg.AlgoList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__algo_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__algo_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__algo_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__algo_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__algo_list

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALGO_FACE': cls.__constants['ALGO_FACE'],
            'ALGO_BODY': cls.__constants['ALGO_BODY'],
            'ALGO_GESTURE': cls.__constants['ALGO_GESTURE'],
            'ALGO_KEYPOINTS': cls.__constants['ALGO_KEYPOINTS'],
            'ALGO_REID': cls.__constants['ALGO_REID'],
            'ALGO_FOCUS': cls.__constants['ALGO_FOCUS'],
            'FACE_MANAGER': cls.__constants['FACE_MANAGER'],
        }

    @property
    def ALGO_FACE(self):
        """Message constant 'ALGO_FACE'."""
        return Metaclass_AlgoList.__constants['ALGO_FACE']

    @property
    def ALGO_BODY(self):
        """Message constant 'ALGO_BODY'."""
        return Metaclass_AlgoList.__constants['ALGO_BODY']

    @property
    def ALGO_GESTURE(self):
        """Message constant 'ALGO_GESTURE'."""
        return Metaclass_AlgoList.__constants['ALGO_GESTURE']

    @property
    def ALGO_KEYPOINTS(self):
        """Message constant 'ALGO_KEYPOINTS'."""
        return Metaclass_AlgoList.__constants['ALGO_KEYPOINTS']

    @property
    def ALGO_REID(self):
        """Message constant 'ALGO_REID'."""
        return Metaclass_AlgoList.__constants['ALGO_REID']

    @property
    def ALGO_FOCUS(self):
        """Message constant 'ALGO_FOCUS'."""
        return Metaclass_AlgoList.__constants['ALGO_FOCUS']

    @property
    def FACE_MANAGER(self):
        """Message constant 'FACE_MANAGER'."""
        return Metaclass_AlgoList.__constants['FACE_MANAGER']


class AlgoList(metaclass=Metaclass_AlgoList):
    """
    Message class 'AlgoList'.

    Constants:
      ALGO_FACE
      ALGO_BODY
      ALGO_GESTURE
      ALGO_KEYPOINTS
      ALGO_REID
      ALGO_FOCUS
      FACE_MANAGER
    """

    __slots__ = [
        '_algo_module',
    ]

    _fields_and_field_types = {
        'algo_module': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.algo_module = kwargs.get('algo_module', int())

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
        if self.algo_module != other.algo_module:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def algo_module(self):
        """Message field 'algo_module'."""
        return self._algo_module

    @algo_module.setter
    def algo_module(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'algo_module' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'algo_module' field must be an unsigned integer in [0, 255]"
        self._algo_module = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/Label.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Label(type):
    """Metaclass of message 'Label'."""

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
                'protocol.msg.Label')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__label
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__label
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__label
            cls._TYPE_SUPPORT = module.type_support_msg__msg__label
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__label

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Label(metaclass=Metaclass_Label):
    """Message class 'Label'."""

    __slots__ = [
        '_label_name',
        '_physic_x',
        '_physic_y',
    ]

    _fields_and_field_types = {
        'label_name': 'string',
        'physic_x': 'float',
        'physic_y': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.label_name = kwargs.get('label_name', str())
        self.physic_x = kwargs.get('physic_x', float())
        self.physic_y = kwargs.get('physic_y', float())

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
        if self.label_name != other.label_name:
            return False
        if self.physic_x != other.physic_x:
            return False
        if self.physic_y != other.physic_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def label_name(self):
        """Message field 'label_name'."""
        return self._label_name

    @label_name.setter
    def label_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label_name' field must be of type 'str'"
        self._label_name = value

    @property
    def physic_x(self):
        """Message field 'physic_x'."""
        return self._physic_x

    @physic_x.setter
    def physic_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'physic_x' field must be of type 'float'"
        self._physic_x = value

    @property
    def physic_y(self):
        """Message field 'physic_y'."""
        return self._physic_y

    @physic_y.setter
    def physic_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'physic_y' field must be of type 'float'"
        self._physic_y = value

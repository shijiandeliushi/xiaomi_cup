# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/SetMapLabel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMapLabel_Request(type):
    """Metaclass of message 'SetMapLabel_Request'."""

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
                'protocol.srv.SetMapLabel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_map_label__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_map_label__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_map_label__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_map_label__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_map_label__request

            from protocol.msg import MapLabel
            if MapLabel.__class__._TYPE_SUPPORT is None:
                MapLabel.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMapLabel_Request(metaclass=Metaclass_SetMapLabel_Request):
    """Message class 'SetMapLabel_Request'."""

    __slots__ = [
        '_label',
        '_only_delete',
    ]

    _fields_and_field_types = {
        'label': 'protocol/MapLabel',
        'only_delete': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'MapLabel'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from protocol.msg import MapLabel
        self.label = kwargs.get('label', MapLabel())
        self.only_delete = kwargs.get('only_delete', bool())

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
        if self.label != other.label:
            return False
        if self.only_delete != other.only_delete:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            from protocol.msg import MapLabel
            assert \
                isinstance(value, MapLabel), \
                "The 'label' field must be a sub message of type 'MapLabel'"
        self._label = value

    @property
    def only_delete(self):
        """Message field 'only_delete'."""
        return self._only_delete

    @only_delete.setter
    def only_delete(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'only_delete' field must be of type 'bool'"
        self._only_delete = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMapLabel_Response(type):
    """Metaclass of message 'SetMapLabel_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_FAILED': 1,
        'RESULT_SUCCESS': 0,
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
                'protocol.srv.SetMapLabel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_map_label__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_map_label__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_map_label__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_map_label__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_map_label__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_FAILED': cls.__constants['RESULT_FAILED'],
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
        }

    @property
    def RESULT_FAILED(self):
        """Message constant 'RESULT_FAILED'."""
        return Metaclass_SetMapLabel_Response.__constants['RESULT_FAILED']

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_SetMapLabel_Response.__constants['RESULT_SUCCESS']


class SetMapLabel_Response(metaclass=Metaclass_SetMapLabel_Response):
    """
    Message class 'SetMapLabel_Response'.

    Constants:
      RESULT_FAILED
      RESULT_SUCCESS
    """

    __slots__ = [
        '_success',
        '_code',
    ]

    _fields_and_field_types = {
        'success': 'uint8',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', int())
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
        if self.success != other.success:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'success' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'success' field must be an unsigned integer in [0, 255]"
        self._success = value

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


class Metaclass_SetMapLabel(type):
    """Metaclass of service 'SetMapLabel'."""

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
                'protocol.srv.SetMapLabel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_map_label

            from protocol.srv import _set_map_label
            if _set_map_label.Metaclass_SetMapLabel_Request._TYPE_SUPPORT is None:
                _set_map_label.Metaclass_SetMapLabel_Request.__import_type_support__()
            if _set_map_label.Metaclass_SetMapLabel_Response._TYPE_SUPPORT is None:
                _set_map_label.Metaclass_SetMapLabel_Response.__import_type_support__()


class SetMapLabel(metaclass=Metaclass_SetMapLabel):
    from protocol.srv._set_map_label import SetMapLabel_Request as Request
    from protocol.srv._set_map_label import SetMapLabel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

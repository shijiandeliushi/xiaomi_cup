# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/SensorOperation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorOperation_Request(type):
    """Metaclass of message 'SensorOperation_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ID_ALL': 0,
        'ID_LIDAR': 1,
        'ID_ULTRA': 2,
        'ID_TOF': 3,
        'ID_GPS': 4,
        'OPR_OPEN': 1,
        'OPR_START': 2,
        'OPR_STOP': 3,
        'OPR_CLOSE': 4,
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
                'protocol.srv.SensorOperation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sensor_operation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sensor_operation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sensor_operation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sensor_operation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sensor_operation__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ID_ALL': cls.__constants['ID_ALL'],
            'ID_LIDAR': cls.__constants['ID_LIDAR'],
            'ID_ULTRA': cls.__constants['ID_ULTRA'],
            'ID_TOF': cls.__constants['ID_TOF'],
            'ID_GPS': cls.__constants['ID_GPS'],
            'OPR_OPEN': cls.__constants['OPR_OPEN'],
            'OPR_START': cls.__constants['OPR_START'],
            'OPR_STOP': cls.__constants['OPR_STOP'],
            'OPR_CLOSE': cls.__constants['OPR_CLOSE'],
        }

    @property
    def ID_ALL(self):
        """Message constant 'ID_ALL'."""
        return Metaclass_SensorOperation_Request.__constants['ID_ALL']

    @property
    def ID_LIDAR(self):
        """Message constant 'ID_LIDAR'."""
        return Metaclass_SensorOperation_Request.__constants['ID_LIDAR']

    @property
    def ID_ULTRA(self):
        """Message constant 'ID_ULTRA'."""
        return Metaclass_SensorOperation_Request.__constants['ID_ULTRA']

    @property
    def ID_TOF(self):
        """Message constant 'ID_TOF'."""
        return Metaclass_SensorOperation_Request.__constants['ID_TOF']

    @property
    def ID_GPS(self):
        """Message constant 'ID_GPS'."""
        return Metaclass_SensorOperation_Request.__constants['ID_GPS']

    @property
    def OPR_OPEN(self):
        """Message constant 'OPR_OPEN'."""
        return Metaclass_SensorOperation_Request.__constants['OPR_OPEN']

    @property
    def OPR_START(self):
        """Message constant 'OPR_START'."""
        return Metaclass_SensorOperation_Request.__constants['OPR_START']

    @property
    def OPR_STOP(self):
        """Message constant 'OPR_STOP'."""
        return Metaclass_SensorOperation_Request.__constants['OPR_STOP']

    @property
    def OPR_CLOSE(self):
        """Message constant 'OPR_CLOSE'."""
        return Metaclass_SensorOperation_Request.__constants['OPR_CLOSE']


class SensorOperation_Request(metaclass=Metaclass_SensorOperation_Request):
    """
    Message class 'SensorOperation_Request'.

    Constants:
      ID_ALL
      ID_LIDAR
      ID_ULTRA
      ID_TOF
      ID_GPS
      OPR_OPEN
      OPR_START
      OPR_STOP
      OPR_CLOSE
    """

    __slots__ = [
        '_sensor_id',
        '_operation',
    ]

    _fields_and_field_types = {
        'sensor_id': 'uint16',
        'operation': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor_id = kwargs.get('sensor_id', int())
        self.operation = kwargs.get('operation', int())

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
        if self.sensor_id != other.sensor_id:
            return False
        if self.operation != other.operation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sensor_id' field must be an unsigned integer in [0, 65535]"
        self._sensor_id = value

    @property
    def operation(self):
        """Message field 'operation'."""
        return self._operation

    @operation.setter
    def operation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'operation' field must be an unsigned integer in [0, 255]"
        self._operation = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SensorOperation_Response(type):
    """Metaclass of message 'SensorOperation_Response'."""

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
                'protocol.srv.SensorOperation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sensor_operation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sensor_operation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sensor_operation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sensor_operation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sensor_operation__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorOperation_Response(metaclass=Metaclass_SensorOperation_Response):
    """Message class 'SensorOperation_Response'."""

    __slots__ = [
        '_success',
        '_code',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
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
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
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


class Metaclass_SensorOperation(type):
    """Metaclass of service 'SensorOperation'."""

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
                'protocol.srv.SensorOperation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__sensor_operation

            from protocol.srv import _sensor_operation
            if _sensor_operation.Metaclass_SensorOperation_Request._TYPE_SUPPORT is None:
                _sensor_operation.Metaclass_SensorOperation_Request.__import_type_support__()
            if _sensor_operation.Metaclass_SensorOperation_Response._TYPE_SUPPORT is None:
                _sensor_operation.Metaclass_SensorOperation_Response.__import_type_support__()


class SensorOperation(metaclass=Metaclass_SensorOperation):
    from protocol.srv._sensor_operation import SensorOperation_Request as Request
    from protocol.srv._sensor_operation import SensorOperation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:srv/BLEScan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BLEScan_Request(type):
    """Metaclass of message 'BLEScan_Request'."""

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
                'protocol.srv.BLEScan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ble_scan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ble_scan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ble_scan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ble_scan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ble_scan__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BLEScan_Request(metaclass=Metaclass_BLEScan_Request):
    """Message class 'BLEScan_Request'."""

    __slots__ = [
        '_scan_seconds',
    ]

    _fields_and_field_types = {
        'scan_seconds': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.scan_seconds = kwargs.get('scan_seconds', float())

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
        if self.scan_seconds != other.scan_seconds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def scan_seconds(self):
        """Message field 'scan_seconds'."""
        return self._scan_seconds

    @scan_seconds.setter
    def scan_seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scan_seconds' field must be of type 'float'"
        self._scan_seconds = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_BLEScan_Response(type):
    """Metaclass of message 'BLEScan_Response'."""

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
                'protocol.srv.BLEScan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ble_scan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ble_scan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ble_scan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ble_scan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ble_scan__response

            from protocol.msg import BLEInfo
            if BLEInfo.__class__._TYPE_SUPPORT is None:
                BLEInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BLEScan_Response(metaclass=Metaclass_BLEScan_Response):
    """Message class 'BLEScan_Response'."""

    __slots__ = [
        '_device_info_list',
        '_code',
    ]

    _fields_and_field_types = {
        'device_info_list': 'sequence<protocol/BLEInfo>',
        'code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['protocol', 'msg'], 'BLEInfo')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_info_list = kwargs.get('device_info_list', [])
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
        if self.device_info_list != other.device_info_list:
            return False
        if self.code != other.code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def device_info_list(self):
        """Message field 'device_info_list'."""
        return self._device_info_list

    @device_info_list.setter
    def device_info_list(self, value):
        if __debug__:
            from protocol.msg import BLEInfo
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
                 all(isinstance(v, BLEInfo) for v in value) and
                 True), \
                "The 'device_info_list' field must be a set or sequence and each value of type 'BLEInfo'"
        self._device_info_list = value

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


class Metaclass_BLEScan(type):
    """Metaclass of service 'BLEScan'."""

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
                'protocol.srv.BLEScan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ble_scan

            from protocol.srv import _ble_scan
            if _ble_scan.Metaclass_BLEScan_Request._TYPE_SUPPORT is None:
                _ble_scan.Metaclass_BLEScan_Request.__import_type_support__()
            if _ble_scan.Metaclass_BLEScan_Response._TYPE_SUPPORT is None:
                _ble_scan.Metaclass_BLEScan_Response.__import_type_support__()


class BLEScan(metaclass=Metaclass_BLEScan):
    from protocol.srv._ble_scan import BLEScan_Request as Request
    from protocol.srv._ble_scan import BLEScan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

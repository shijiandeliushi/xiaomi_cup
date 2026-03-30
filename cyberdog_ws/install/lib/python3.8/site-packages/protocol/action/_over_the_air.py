# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:action/OverTheAir.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OverTheAir_Goal(type):
    """Metaclass of message 'OverTheAir_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'USER_APP': 'APP',
        'OPERATE_INQUIRE': 'inquire',
        'OPERATE_DOWNLOAD': 'download',
        'OPERATE_UPGRADE': 'upgrade',
        'OPERATE_UPGRADE_AND_ROBOOT': 'upgrade_and_reboot',
        'OPERATE_REMOVE': 'remove',
        'OPERATE_ROBOOT': 'reboot',
        'OPERATE_RESET': 'reset',
        'OPERATE_DISK': 'disk',
        'TYPE_FILE': 'file',
        'TYPE_DIRECTORY': 'directory',
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
                'protocol.action.OverTheAir_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__over_the_air__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__over_the_air__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__over_the_air__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__over_the_air__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__over_the_air__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'USER_APP': cls.__constants['USER_APP'],
            'OPERATE_INQUIRE': cls.__constants['OPERATE_INQUIRE'],
            'OPERATE_DOWNLOAD': cls.__constants['OPERATE_DOWNLOAD'],
            'OPERATE_UPGRADE': cls.__constants['OPERATE_UPGRADE'],
            'OPERATE_UPGRADE_AND_ROBOOT': cls.__constants['OPERATE_UPGRADE_AND_ROBOOT'],
            'OPERATE_REMOVE': cls.__constants['OPERATE_REMOVE'],
            'OPERATE_ROBOOT': cls.__constants['OPERATE_ROBOOT'],
            'OPERATE_RESET': cls.__constants['OPERATE_RESET'],
            'OPERATE_DISK': cls.__constants['OPERATE_DISK'],
            'TYPE_FILE': cls.__constants['TYPE_FILE'],
            'TYPE_DIRECTORY': cls.__constants['TYPE_DIRECTORY'],
        }

    @property
    def USER_APP(self):
        """Message constant 'USER_APP'."""
        return Metaclass_OverTheAir_Goal.__constants['USER_APP']

    @property
    def OPERATE_INQUIRE(self):
        """Message constant 'OPERATE_INQUIRE'."""
        return Metaclass_OverTheAir_Goal.__constants['OPERATE_INQUIRE']

    @property
    def OPERATE_DOWNLOAD(self):
        """Message constant 'OPERATE_DOWNLOAD'."""
        return Metaclass_OverTheAir_Goal.__constants['OPERATE_DOWNLOAD']

    @property
    def OPERATE_UPGRADE(self):
        """Message constant 'OPERATE_UPGRADE'."""
        return Metaclass_OverTheAir_Goal.__constants['OPERATE_UPGRADE']

    @property
    def OPERATE_UPGRADE_AND_ROBOOT(self):
        """Message constant 'OPERATE_UPGRADE_AND_ROBOOT'."""
        return Metaclass_OverTheAir_Goal.__constants['OPERATE_UPGRADE_AND_ROBOOT']

    @property
    def OPERATE_REMOVE(self):
        """Message constant 'OPERATE_REMOVE'."""
        return Metaclass_OverTheAir_Goal.__constants['OPERATE_REMOVE']

    @property
    def OPERATE_ROBOOT(self):
        """Message constant 'OPERATE_ROBOOT'."""
        return Metaclass_OverTheAir_Goal.__constants['OPERATE_ROBOOT']

    @property
    def OPERATE_RESET(self):
        """Message constant 'OPERATE_RESET'."""
        return Metaclass_OverTheAir_Goal.__constants['OPERATE_RESET']

    @property
    def OPERATE_DISK(self):
        """Message constant 'OPERATE_DISK'."""
        return Metaclass_OverTheAir_Goal.__constants['OPERATE_DISK']

    @property
    def TYPE_FILE(self):
        """Message constant 'TYPE_FILE'."""
        return Metaclass_OverTheAir_Goal.__constants['TYPE_FILE']

    @property
    def TYPE_DIRECTORY(self):
        """Message constant 'TYPE_DIRECTORY'."""
        return Metaclass_OverTheAir_Goal.__constants['TYPE_DIRECTORY']


class OverTheAir_Goal(metaclass=Metaclass_OverTheAir_Goal):
    """
    Message class 'OverTheAir_Goal'.

    Constants:
      USER_APP
      OPERATE_INQUIRE
      OPERATE_DOWNLOAD
      OPERATE_UPGRADE
      OPERATE_UPGRADE_AND_ROBOOT
      OPERATE_REMOVE
      OPERATE_ROBOOT
      OPERATE_RESET
      OPERATE_DISK
      TYPE_FILE
      TYPE_DIRECTORY
    """

    __slots__ = [
        '_goal_msg',
        '_id',
        '_user',
        '_operate',
        '_data',
        '_type',
        '_depth',
    ]

    _fields_and_field_types = {
        'goal_msg': 'string',
        'id': 'string',
        'user': 'string',
        'operate': 'string',
        'data': 'string',
        'type': 'string',
        'depth': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_msg = kwargs.get('goal_msg', str())
        self.id = kwargs.get('id', str())
        self.user = kwargs.get('user', str())
        self.operate = kwargs.get('operate', str())
        self.data = kwargs.get('data', str())
        self.type = kwargs.get('type', str())
        self.depth = kwargs.get('depth', str())

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
        if self.goal_msg != other.goal_msg:
            return False
        if self.id != other.id:
            return False
        if self.user != other.user:
            return False
        if self.operate != other.operate:
            return False
        if self.data != other.data:
            return False
        if self.type != other.type:
            return False
        if self.depth != other.depth:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_msg(self):
        """Message field 'goal_msg'."""
        return self._goal_msg

    @goal_msg.setter
    def goal_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'goal_msg' field must be of type 'str'"
        self._goal_msg = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @property
    def user(self):
        """Message field 'user'."""
        return self._user

    @user.setter
    def user(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'user' field must be of type 'str'"
        self._user = value

    @property
    def operate(self):
        """Message field 'operate'."""
        return self._operate

    @operate.setter
    def operate(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'operate' field must be of type 'str'"
        self._operate = value

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data' field must be of type 'str'"
        self._data = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'depth' field must be of type 'str'"
        self._depth = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OverTheAir_Result(type):
    """Metaclass of message 'OverTheAir_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE': 'result',
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
                'protocol.action.OverTheAir_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__over_the_air__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__over_the_air__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__over_the_air__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__over_the_air__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__over_the_air__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE': cls.__constants['TYPE'],
        }

    @property
    def TYPE(self):
        """Message constant 'TYPE'."""
        return Metaclass_OverTheAir_Result.__constants['TYPE']


class OverTheAir_Result(metaclass=Metaclass_OverTheAir_Result):
    """
    Message class 'OverTheAir_Result'.

    Constants:
      TYPE
    """

    __slots__ = [
        '_result_msg',
        '_id',
        '_type',
        '_operate',
        '_sn',
        '_not_unlocked',
        '_version_nx',
        '_version_nx_mini_led',
        '_version_nx_head_tof',
        '_version_nx_rear_tof',
        '_version_nx_head_uwb',
        '_version_nx_rear_uwb',
        '_version_nx_imu',
        '_version_nx_power',
        '_version_r329',
        '_version_mr813',
        '_version_mr813_spie1',
        '_version_mr813_spie2',
        '_version_motors',
        '_disk_name',
        '_disk_filesystem',
        '_disk_size',
        '_disk_used',
        '_disk_avail',
        '_disk_scale',
        '_disk_mounted',
        '_disk_meta_name',
        '_disk_meta_size',
        '_disk_meta_change_time',
        '_disk_meta_user_rights',
        '_reboot',
        '_state',
        '_code',
        '_result',
    ]

    _fields_and_field_types = {
        'result_msg': 'string',
        'id': 'string',
        'type': 'string',
        'operate': 'string',
        'sn': 'string',
        'not_unlocked': 'string',
        'version_nx': 'string',
        'version_nx_mini_led': 'string',
        'version_nx_head_tof': 'string',
        'version_nx_rear_tof': 'string',
        'version_nx_head_uwb': 'string',
        'version_nx_rear_uwb': 'string',
        'version_nx_imu': 'string',
        'version_nx_power': 'string',
        'version_r329': 'string',
        'version_mr813': 'string',
        'version_mr813_spie1': 'string',
        'version_mr813_spie2': 'string',
        'version_motors': 'sequence<string>',
        'disk_name': 'string',
        'disk_filesystem': 'string',
        'disk_size': 'string',
        'disk_used': 'string',
        'disk_avail': 'string',
        'disk_scale': 'string',
        'disk_mounted': 'string',
        'disk_meta_name': 'sequence<string>',
        'disk_meta_size': 'sequence<string>',
        'disk_meta_change_time': 'sequence<string>',
        'disk_meta_user_rights': 'sequence<string>',
        'reboot': 'string',
        'state': 'string',
        'code': 'int32',
        'result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result_msg = kwargs.get('result_msg', str())
        self.id = kwargs.get('id', str())
        self.type = kwargs.get('type', str())
        self.operate = kwargs.get('operate', str())
        self.sn = kwargs.get('sn', str())
        self.not_unlocked = kwargs.get('not_unlocked', str())
        self.version_nx = kwargs.get('version_nx', str())
        self.version_nx_mini_led = kwargs.get('version_nx_mini_led', str())
        self.version_nx_head_tof = kwargs.get('version_nx_head_tof', str())
        self.version_nx_rear_tof = kwargs.get('version_nx_rear_tof', str())
        self.version_nx_head_uwb = kwargs.get('version_nx_head_uwb', str())
        self.version_nx_rear_uwb = kwargs.get('version_nx_rear_uwb', str())
        self.version_nx_imu = kwargs.get('version_nx_imu', str())
        self.version_nx_power = kwargs.get('version_nx_power', str())
        self.version_r329 = kwargs.get('version_r329', str())
        self.version_mr813 = kwargs.get('version_mr813', str())
        self.version_mr813_spie1 = kwargs.get('version_mr813_spie1', str())
        self.version_mr813_spie2 = kwargs.get('version_mr813_spie2', str())
        self.version_motors = kwargs.get('version_motors', [])
        self.disk_name = kwargs.get('disk_name', str())
        self.disk_filesystem = kwargs.get('disk_filesystem', str())
        self.disk_size = kwargs.get('disk_size', str())
        self.disk_used = kwargs.get('disk_used', str())
        self.disk_avail = kwargs.get('disk_avail', str())
        self.disk_scale = kwargs.get('disk_scale', str())
        self.disk_mounted = kwargs.get('disk_mounted', str())
        self.disk_meta_name = kwargs.get('disk_meta_name', [])
        self.disk_meta_size = kwargs.get('disk_meta_size', [])
        self.disk_meta_change_time = kwargs.get('disk_meta_change_time', [])
        self.disk_meta_user_rights = kwargs.get('disk_meta_user_rights', [])
        self.reboot = kwargs.get('reboot', str())
        self.state = kwargs.get('state', str())
        self.code = kwargs.get('code', int())
        self.result = kwargs.get('result', str())

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
        if self.result_msg != other.result_msg:
            return False
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.operate != other.operate:
            return False
        if self.sn != other.sn:
            return False
        if self.not_unlocked != other.not_unlocked:
            return False
        if self.version_nx != other.version_nx:
            return False
        if self.version_nx_mini_led != other.version_nx_mini_led:
            return False
        if self.version_nx_head_tof != other.version_nx_head_tof:
            return False
        if self.version_nx_rear_tof != other.version_nx_rear_tof:
            return False
        if self.version_nx_head_uwb != other.version_nx_head_uwb:
            return False
        if self.version_nx_rear_uwb != other.version_nx_rear_uwb:
            return False
        if self.version_nx_imu != other.version_nx_imu:
            return False
        if self.version_nx_power != other.version_nx_power:
            return False
        if self.version_r329 != other.version_r329:
            return False
        if self.version_mr813 != other.version_mr813:
            return False
        if self.version_mr813_spie1 != other.version_mr813_spie1:
            return False
        if self.version_mr813_spie2 != other.version_mr813_spie2:
            return False
        if self.version_motors != other.version_motors:
            return False
        if self.disk_name != other.disk_name:
            return False
        if self.disk_filesystem != other.disk_filesystem:
            return False
        if self.disk_size != other.disk_size:
            return False
        if self.disk_used != other.disk_used:
            return False
        if self.disk_avail != other.disk_avail:
            return False
        if self.disk_scale != other.disk_scale:
            return False
        if self.disk_mounted != other.disk_mounted:
            return False
        if self.disk_meta_name != other.disk_meta_name:
            return False
        if self.disk_meta_size != other.disk_meta_size:
            return False
        if self.disk_meta_change_time != other.disk_meta_change_time:
            return False
        if self.disk_meta_user_rights != other.disk_meta_user_rights:
            return False
        if self.reboot != other.reboot:
            return False
        if self.state != other.state:
            return False
        if self.code != other.code:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result_msg(self):
        """Message field 'result_msg'."""
        return self._result_msg

    @result_msg.setter
    def result_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result_msg' field must be of type 'str'"
        self._result_msg = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @property
    def operate(self):
        """Message field 'operate'."""
        return self._operate

    @operate.setter
    def operate(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'operate' field must be of type 'str'"
        self._operate = value

    @property
    def sn(self):
        """Message field 'sn'."""
        return self._sn

    @sn.setter
    def sn(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sn' field must be of type 'str'"
        self._sn = value

    @property
    def not_unlocked(self):
        """Message field 'not_unlocked'."""
        return self._not_unlocked

    @not_unlocked.setter
    def not_unlocked(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'not_unlocked' field must be of type 'str'"
        self._not_unlocked = value

    @property
    def version_nx(self):
        """Message field 'version_nx'."""
        return self._version_nx

    @version_nx.setter
    def version_nx(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_nx' field must be of type 'str'"
        self._version_nx = value

    @property
    def version_nx_mini_led(self):
        """Message field 'version_nx_mini_led'."""
        return self._version_nx_mini_led

    @version_nx_mini_led.setter
    def version_nx_mini_led(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_nx_mini_led' field must be of type 'str'"
        self._version_nx_mini_led = value

    @property
    def version_nx_head_tof(self):
        """Message field 'version_nx_head_tof'."""
        return self._version_nx_head_tof

    @version_nx_head_tof.setter
    def version_nx_head_tof(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_nx_head_tof' field must be of type 'str'"
        self._version_nx_head_tof = value

    @property
    def version_nx_rear_tof(self):
        """Message field 'version_nx_rear_tof'."""
        return self._version_nx_rear_tof

    @version_nx_rear_tof.setter
    def version_nx_rear_tof(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_nx_rear_tof' field must be of type 'str'"
        self._version_nx_rear_tof = value

    @property
    def version_nx_head_uwb(self):
        """Message field 'version_nx_head_uwb'."""
        return self._version_nx_head_uwb

    @version_nx_head_uwb.setter
    def version_nx_head_uwb(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_nx_head_uwb' field must be of type 'str'"
        self._version_nx_head_uwb = value

    @property
    def version_nx_rear_uwb(self):
        """Message field 'version_nx_rear_uwb'."""
        return self._version_nx_rear_uwb

    @version_nx_rear_uwb.setter
    def version_nx_rear_uwb(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_nx_rear_uwb' field must be of type 'str'"
        self._version_nx_rear_uwb = value

    @property
    def version_nx_imu(self):
        """Message field 'version_nx_imu'."""
        return self._version_nx_imu

    @version_nx_imu.setter
    def version_nx_imu(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_nx_imu' field must be of type 'str'"
        self._version_nx_imu = value

    @property
    def version_nx_power(self):
        """Message field 'version_nx_power'."""
        return self._version_nx_power

    @version_nx_power.setter
    def version_nx_power(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_nx_power' field must be of type 'str'"
        self._version_nx_power = value

    @property
    def version_r329(self):
        """Message field 'version_r329'."""
        return self._version_r329

    @version_r329.setter
    def version_r329(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_r329' field must be of type 'str'"
        self._version_r329 = value

    @property
    def version_mr813(self):
        """Message field 'version_mr813'."""
        return self._version_mr813

    @version_mr813.setter
    def version_mr813(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_mr813' field must be of type 'str'"
        self._version_mr813 = value

    @property
    def version_mr813_spie1(self):
        """Message field 'version_mr813_spie1'."""
        return self._version_mr813_spie1

    @version_mr813_spie1.setter
    def version_mr813_spie1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_mr813_spie1' field must be of type 'str'"
        self._version_mr813_spie1 = value

    @property
    def version_mr813_spie2(self):
        """Message field 'version_mr813_spie2'."""
        return self._version_mr813_spie2

    @version_mr813_spie2.setter
    def version_mr813_spie2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_mr813_spie2' field must be of type 'str'"
        self._version_mr813_spie2 = value

    @property
    def version_motors(self):
        """Message field 'version_motors'."""
        return self._version_motors

    @version_motors.setter
    def version_motors(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'version_motors' field must be a set or sequence and each value of type 'str'"
        self._version_motors = value

    @property
    def disk_name(self):
        """Message field 'disk_name'."""
        return self._disk_name

    @disk_name.setter
    def disk_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'disk_name' field must be of type 'str'"
        self._disk_name = value

    @property
    def disk_filesystem(self):
        """Message field 'disk_filesystem'."""
        return self._disk_filesystem

    @disk_filesystem.setter
    def disk_filesystem(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'disk_filesystem' field must be of type 'str'"
        self._disk_filesystem = value

    @property
    def disk_size(self):
        """Message field 'disk_size'."""
        return self._disk_size

    @disk_size.setter
    def disk_size(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'disk_size' field must be of type 'str'"
        self._disk_size = value

    @property
    def disk_used(self):
        """Message field 'disk_used'."""
        return self._disk_used

    @disk_used.setter
    def disk_used(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'disk_used' field must be of type 'str'"
        self._disk_used = value

    @property
    def disk_avail(self):
        """Message field 'disk_avail'."""
        return self._disk_avail

    @disk_avail.setter
    def disk_avail(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'disk_avail' field must be of type 'str'"
        self._disk_avail = value

    @property
    def disk_scale(self):
        """Message field 'disk_scale'."""
        return self._disk_scale

    @disk_scale.setter
    def disk_scale(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'disk_scale' field must be of type 'str'"
        self._disk_scale = value

    @property
    def disk_mounted(self):
        """Message field 'disk_mounted'."""
        return self._disk_mounted

    @disk_mounted.setter
    def disk_mounted(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'disk_mounted' field must be of type 'str'"
        self._disk_mounted = value

    @property
    def disk_meta_name(self):
        """Message field 'disk_meta_name'."""
        return self._disk_meta_name

    @disk_meta_name.setter
    def disk_meta_name(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'disk_meta_name' field must be a set or sequence and each value of type 'str'"
        self._disk_meta_name = value

    @property
    def disk_meta_size(self):
        """Message field 'disk_meta_size'."""
        return self._disk_meta_size

    @disk_meta_size.setter
    def disk_meta_size(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'disk_meta_size' field must be a set or sequence and each value of type 'str'"
        self._disk_meta_size = value

    @property
    def disk_meta_change_time(self):
        """Message field 'disk_meta_change_time'."""
        return self._disk_meta_change_time

    @disk_meta_change_time.setter
    def disk_meta_change_time(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'disk_meta_change_time' field must be a set or sequence and each value of type 'str'"
        self._disk_meta_change_time = value

    @property
    def disk_meta_user_rights(self):
        """Message field 'disk_meta_user_rights'."""
        return self._disk_meta_user_rights

    @disk_meta_user_rights.setter
    def disk_meta_user_rights(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'disk_meta_user_rights' field must be a set or sequence and each value of type 'str'"
        self._disk_meta_user_rights = value

    @property
    def reboot(self):
        """Message field 'reboot'."""
        return self._reboot

    @reboot.setter
    def reboot(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reboot' field must be of type 'str'"
        self._reboot = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

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

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OverTheAir_Feedback(type):
    """Metaclass of message 'OverTheAir_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE': 'feedback',
        'TARGET_OTA': 'ota',
        'TARGET_DEB': 'deb',
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
                'protocol.action.OverTheAir_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__over_the_air__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__over_the_air__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__over_the_air__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__over_the_air__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__over_the_air__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE': cls.__constants['TYPE'],
            'TARGET_OTA': cls.__constants['TARGET_OTA'],
            'TARGET_DEB': cls.__constants['TARGET_DEB'],
        }

    @property
    def TYPE(self):
        """Message constant 'TYPE'."""
        return Metaclass_OverTheAir_Feedback.__constants['TYPE']

    @property
    def TARGET_OTA(self):
        """Message constant 'TARGET_OTA'."""
        return Metaclass_OverTheAir_Feedback.__constants['TARGET_OTA']

    @property
    def TARGET_DEB(self):
        """Message constant 'TARGET_DEB'."""
        return Metaclass_OverTheAir_Feedback.__constants['TARGET_DEB']


class OverTheAir_Feedback(metaclass=Metaclass_OverTheAir_Feedback):
    """
    Message class 'OverTheAir_Feedback'.

    Constants:
      TYPE
      TARGET_OTA
      TARGET_DEB
    """

    __slots__ = [
        '_feedback_msg',
        '_id',
        '_type',
        '_operate',
        '_now_version',
        '_ota_version',
        '_stage',
        '_target',
        '_target_stage',
        '_file',
        '_size',
        '_schedule',
        '_time_remaining',
        '_progress',
        '_speed',
        '_describe',
    ]

    _fields_and_field_types = {
        'feedback_msg': 'string',
        'id': 'string',
        'type': 'string',
        'operate': 'string',
        'now_version': 'string',
        'ota_version': 'string',
        'stage': 'string',
        'target': 'string',
        'target_stage': 'string',
        'file': 'string',
        'size': 'string',
        'schedule': 'string',
        'time_remaining': 'string',
        'progress': 'string',
        'speed': 'string',
        'describe': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.feedback_msg = kwargs.get('feedback_msg', str())
        self.id = kwargs.get('id', str())
        self.type = kwargs.get('type', str())
        self.operate = kwargs.get('operate', str())
        self.now_version = kwargs.get('now_version', str())
        self.ota_version = kwargs.get('ota_version', str())
        self.stage = kwargs.get('stage', str())
        self.target = kwargs.get('target', str())
        self.target_stage = kwargs.get('target_stage', str())
        self.file = kwargs.get('file', str())
        self.size = kwargs.get('size', str())
        self.schedule = kwargs.get('schedule', str())
        self.time_remaining = kwargs.get('time_remaining', str())
        self.progress = kwargs.get('progress', str())
        self.speed = kwargs.get('speed', str())
        self.describe = kwargs.get('describe', str())

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
        if self.feedback_msg != other.feedback_msg:
            return False
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.operate != other.operate:
            return False
        if self.now_version != other.now_version:
            return False
        if self.ota_version != other.ota_version:
            return False
        if self.stage != other.stage:
            return False
        if self.target != other.target:
            return False
        if self.target_stage != other.target_stage:
            return False
        if self.file != other.file:
            return False
        if self.size != other.size:
            return False
        if self.schedule != other.schedule:
            return False
        if self.time_remaining != other.time_remaining:
            return False
        if self.progress != other.progress:
            return False
        if self.speed != other.speed:
            return False
        if self.describe != other.describe:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @property
    def operate(self):
        """Message field 'operate'."""
        return self._operate

    @operate.setter
    def operate(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'operate' field must be of type 'str'"
        self._operate = value

    @property
    def now_version(self):
        """Message field 'now_version'."""
        return self._now_version

    @now_version.setter
    def now_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'now_version' field must be of type 'str'"
        self._now_version = value

    @property
    def ota_version(self):
        """Message field 'ota_version'."""
        return self._ota_version

    @ota_version.setter
    def ota_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ota_version' field must be of type 'str'"
        self._ota_version = value

    @property
    def stage(self):
        """Message field 'stage'."""
        return self._stage

    @stage.setter
    def stage(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'stage' field must be of type 'str'"
        self._stage = value

    @property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target' field must be of type 'str'"
        self._target = value

    @property
    def target_stage(self):
        """Message field 'target_stage'."""
        return self._target_stage

    @target_stage.setter
    def target_stage(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_stage' field must be of type 'str'"
        self._target_stage = value

    @property
    def file(self):
        """Message field 'file'."""
        return self._file

    @file.setter
    def file(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file' field must be of type 'str'"
        self._file = value

    @property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'size' field must be of type 'str'"
        self._size = value

    @property
    def schedule(self):
        """Message field 'schedule'."""
        return self._schedule

    @schedule.setter
    def schedule(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'schedule' field must be of type 'str'"
        self._schedule = value

    @property
    def time_remaining(self):
        """Message field 'time_remaining'."""
        return self._time_remaining

    @time_remaining.setter
    def time_remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'time_remaining' field must be of type 'str'"
        self._time_remaining = value

    @property
    def progress(self):
        """Message field 'progress'."""
        return self._progress

    @progress.setter
    def progress(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'progress' field must be of type 'str'"
        self._progress = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'speed' field must be of type 'str'"
        self._speed = value

    @property
    def describe(self):
        """Message field 'describe'."""
        return self._describe

    @describe.setter
    def describe(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'describe' field must be of type 'str'"
        self._describe = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OverTheAir_SendGoal_Request(type):
    """Metaclass of message 'OverTheAir_SendGoal_Request'."""

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
                'protocol.action.OverTheAir_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__over_the_air__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__over_the_air__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__over_the_air__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__over_the_air__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__over_the_air__send_goal__request

            from protocol.action import OverTheAir
            if OverTheAir.Goal.__class__._TYPE_SUPPORT is None:
                OverTheAir.Goal.__class__.__import_type_support__()

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


class OverTheAir_SendGoal_Request(metaclass=Metaclass_OverTheAir_SendGoal_Request):
    """Message class 'OverTheAir_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'protocol/OverTheAir_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'action'], 'OverTheAir_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from protocol.action._over_the_air import OverTheAir_Goal
        self.goal = kwargs.get('goal', OverTheAir_Goal())

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
            from protocol.action._over_the_air import OverTheAir_Goal
            assert \
                isinstance(value, OverTheAir_Goal), \
                "The 'goal' field must be a sub message of type 'OverTheAir_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OverTheAir_SendGoal_Response(type):
    """Metaclass of message 'OverTheAir_SendGoal_Response'."""

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
                'protocol.action.OverTheAir_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__over_the_air__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__over_the_air__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__over_the_air__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__over_the_air__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__over_the_air__send_goal__response

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


class OverTheAir_SendGoal_Response(metaclass=Metaclass_OverTheAir_SendGoal_Response):
    """Message class 'OverTheAir_SendGoal_Response'."""

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


class Metaclass_OverTheAir_SendGoal(type):
    """Metaclass of service 'OverTheAir_SendGoal'."""

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
                'protocol.action.OverTheAir_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__over_the_air__send_goal

            from protocol.action import _over_the_air
            if _over_the_air.Metaclass_OverTheAir_SendGoal_Request._TYPE_SUPPORT is None:
                _over_the_air.Metaclass_OverTheAir_SendGoal_Request.__import_type_support__()
            if _over_the_air.Metaclass_OverTheAir_SendGoal_Response._TYPE_SUPPORT is None:
                _over_the_air.Metaclass_OverTheAir_SendGoal_Response.__import_type_support__()


class OverTheAir_SendGoal(metaclass=Metaclass_OverTheAir_SendGoal):
    from protocol.action._over_the_air import OverTheAir_SendGoal_Request as Request
    from protocol.action._over_the_air import OverTheAir_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OverTheAir_GetResult_Request(type):
    """Metaclass of message 'OverTheAir_GetResult_Request'."""

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
                'protocol.action.OverTheAir_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__over_the_air__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__over_the_air__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__over_the_air__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__over_the_air__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__over_the_air__get_result__request

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


class OverTheAir_GetResult_Request(metaclass=Metaclass_OverTheAir_GetResult_Request):
    """Message class 'OverTheAir_GetResult_Request'."""

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


class Metaclass_OverTheAir_GetResult_Response(type):
    """Metaclass of message 'OverTheAir_GetResult_Response'."""

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
                'protocol.action.OverTheAir_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__over_the_air__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__over_the_air__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__over_the_air__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__over_the_air__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__over_the_air__get_result__response

            from protocol.action import OverTheAir
            if OverTheAir.Result.__class__._TYPE_SUPPORT is None:
                OverTheAir.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OverTheAir_GetResult_Response(metaclass=Metaclass_OverTheAir_GetResult_Response):
    """Message class 'OverTheAir_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'protocol/OverTheAir_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'action'], 'OverTheAir_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from protocol.action._over_the_air import OverTheAir_Result
        self.result = kwargs.get('result', OverTheAir_Result())

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
            from protocol.action._over_the_air import OverTheAir_Result
            assert \
                isinstance(value, OverTheAir_Result), \
                "The 'result' field must be a sub message of type 'OverTheAir_Result'"
        self._result = value


class Metaclass_OverTheAir_GetResult(type):
    """Metaclass of service 'OverTheAir_GetResult'."""

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
                'protocol.action.OverTheAir_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__over_the_air__get_result

            from protocol.action import _over_the_air
            if _over_the_air.Metaclass_OverTheAir_GetResult_Request._TYPE_SUPPORT is None:
                _over_the_air.Metaclass_OverTheAir_GetResult_Request.__import_type_support__()
            if _over_the_air.Metaclass_OverTheAir_GetResult_Response._TYPE_SUPPORT is None:
                _over_the_air.Metaclass_OverTheAir_GetResult_Response.__import_type_support__()


class OverTheAir_GetResult(metaclass=Metaclass_OverTheAir_GetResult):
    from protocol.action._over_the_air import OverTheAir_GetResult_Request as Request
    from protocol.action._over_the_air import OverTheAir_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OverTheAir_FeedbackMessage(type):
    """Metaclass of message 'OverTheAir_FeedbackMessage'."""

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
                'protocol.action.OverTheAir_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__over_the_air__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__over_the_air__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__over_the_air__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__over_the_air__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__over_the_air__feedback_message

            from protocol.action import OverTheAir
            if OverTheAir.Feedback.__class__._TYPE_SUPPORT is None:
                OverTheAir.Feedback.__class__.__import_type_support__()

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


class OverTheAir_FeedbackMessage(metaclass=Metaclass_OverTheAir_FeedbackMessage):
    """Message class 'OverTheAir_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'protocol/OverTheAir_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['protocol', 'action'], 'OverTheAir_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from protocol.action._over_the_air import OverTheAir_Feedback
        self.feedback = kwargs.get('feedback', OverTheAir_Feedback())

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
            from protocol.action._over_the_air import OverTheAir_Feedback
            assert \
                isinstance(value, OverTheAir_Feedback), \
                "The 'feedback' field must be a sub message of type 'OverTheAir_Feedback'"
        self._feedback = value


class Metaclass_OverTheAir(type):
    """Metaclass of action 'OverTheAir'."""

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
                'protocol.action.OverTheAir')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__over_the_air

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from protocol.action import _over_the_air
            if _over_the_air.Metaclass_OverTheAir_SendGoal._TYPE_SUPPORT is None:
                _over_the_air.Metaclass_OverTheAir_SendGoal.__import_type_support__()
            if _over_the_air.Metaclass_OverTheAir_GetResult._TYPE_SUPPORT is None:
                _over_the_air.Metaclass_OverTheAir_GetResult.__import_type_support__()
            if _over_the_air.Metaclass_OverTheAir_FeedbackMessage._TYPE_SUPPORT is None:
                _over_the_air.Metaclass_OverTheAir_FeedbackMessage.__import_type_support__()


class OverTheAir(metaclass=Metaclass_OverTheAir):

    # The goal message defined in the action definition.
    from protocol.action._over_the_air import OverTheAir_Goal as Goal
    # The result message defined in the action definition.
    from protocol.action._over_the_air import OverTheAir_Result as Result
    # The feedback message defined in the action definition.
    from protocol.action._over_the_air import OverTheAir_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from protocol.action._over_the_air import OverTheAir_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from protocol.action._over_the_air import OverTheAir_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from protocol.action._over_the_air import OverTheAir_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')

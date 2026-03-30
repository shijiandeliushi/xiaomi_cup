# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/VisualProgrammingOperate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VisualProgrammingOperate(type):
    """Metaclass of message 'VisualProgrammingOperate'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_TASK': 'task',
        'TYPE_MODULE': 'module',
        'TYPE_AI': 'AI',
        'TYPE_SLAM': 'SLAM',
        'MODE_FACTORY': 'factory',
        'MODE_USER': 'user',
        'MODE_SINGLE': 'single',
        'MODE_CYCLE': 'cycle',
        'MODE_COMMON': 'common',
        'MODE_SEQUENCE': 'sequence',
        'MODE_SINGLE_STEP': 'single_step',
        'MODE_ORIGINAL': 'original',
        'MODE_ALL': 'all',
        'MODE_PERSONNEL': 'personnel',
        'MODE_FACE': 'face',
        'MODE_VOICEPRINT': 'voiceprint',
        'MODE_TAAINING_WORDS': 'training_words',
        'MODE_MAP': 'map',
        'MODE_PRESET': 'preset',
        'OPERATE_INQUIRY': 'inquiry',
        'OPERATE_SAVE': 'save',
        'OPERATE_DELETE': 'delete',
        'OPERATE_DEBUG': 'debug',
        'OPERATE_RUN': 'run',
        'OPERATE_SUSPEND': 'suspend',
        'OPERATE_RECOVER': 'recover',
        'OPERATE_SHUTDOWN': 'shutdown',
        'OPERATE_START': 'start',
        'OPERATE_STOP': 'stop',
        'STATE_NULL': 'null',
        'STATE_ERROR': 'error',
        'STATE_WAIT_RUN': 'wait_run',
        'STATE_RUN_WAIT': 'run_wait',
        'STATE_RUN': 'run',
        'STATE_SUSPEND': 'suspend',
        'STATE_SHUTDOWN': 'shutdown',
        'STATE_NORMAL': 'normal',
        'STEP_PARSE': 'parse',
        'STEP_REGISTER': 'register',
        'STEP_BEGIN': 'begin',
        'STEP_END': 'end',
        'FSM_UNINITIALIZED': 'Uninitialized',
        'FSM_SET_UP': 'SetUp',
        'FSM_TEAR_DOWN': 'TearDown',
        'FSM_SELF_CHECK': 'SelfCheck',
        'FSM_ACTIVE': 'Active',
        'FSM_DE_ACTIVE': 'DeActive',
        'FSM_PROTECTED': 'Protected',
        'FSM_LOW_POWER': 'LowPower',
        'FSM_OTA': 'OTA',
        'FSM_ERROR': 'Error',
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
                'protocol.msg.VisualProgrammingOperate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__visual_programming_operate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__visual_programming_operate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__visual_programming_operate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__visual_programming_operate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__visual_programming_operate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_TASK': cls.__constants['TYPE_TASK'],
            'TYPE_MODULE': cls.__constants['TYPE_MODULE'],
            'TYPE_AI': cls.__constants['TYPE_AI'],
            'TYPE_SLAM': cls.__constants['TYPE_SLAM'],
            'MODE_FACTORY': cls.__constants['MODE_FACTORY'],
            'MODE_USER': cls.__constants['MODE_USER'],
            'MODE_SINGLE': cls.__constants['MODE_SINGLE'],
            'MODE_CYCLE': cls.__constants['MODE_CYCLE'],
            'MODE_COMMON': cls.__constants['MODE_COMMON'],
            'MODE_SEQUENCE': cls.__constants['MODE_SEQUENCE'],
            'MODE_SINGLE_STEP': cls.__constants['MODE_SINGLE_STEP'],
            'MODE_ORIGINAL': cls.__constants['MODE_ORIGINAL'],
            'MODE_ALL': cls.__constants['MODE_ALL'],
            'MODE_PERSONNEL': cls.__constants['MODE_PERSONNEL'],
            'MODE_FACE': cls.__constants['MODE_FACE'],
            'MODE_VOICEPRINT': cls.__constants['MODE_VOICEPRINT'],
            'MODE_TAAINING_WORDS': cls.__constants['MODE_TAAINING_WORDS'],
            'MODE_MAP': cls.__constants['MODE_MAP'],
            'MODE_PRESET': cls.__constants['MODE_PRESET'],
            'OPERATE_INQUIRY': cls.__constants['OPERATE_INQUIRY'],
            'OPERATE_SAVE': cls.__constants['OPERATE_SAVE'],
            'OPERATE_DELETE': cls.__constants['OPERATE_DELETE'],
            'OPERATE_DEBUG': cls.__constants['OPERATE_DEBUG'],
            'OPERATE_RUN': cls.__constants['OPERATE_RUN'],
            'OPERATE_SUSPEND': cls.__constants['OPERATE_SUSPEND'],
            'OPERATE_RECOVER': cls.__constants['OPERATE_RECOVER'],
            'OPERATE_SHUTDOWN': cls.__constants['OPERATE_SHUTDOWN'],
            'OPERATE_START': cls.__constants['OPERATE_START'],
            'OPERATE_STOP': cls.__constants['OPERATE_STOP'],
            'STATE_NULL': cls.__constants['STATE_NULL'],
            'STATE_ERROR': cls.__constants['STATE_ERROR'],
            'STATE_WAIT_RUN': cls.__constants['STATE_WAIT_RUN'],
            'STATE_RUN_WAIT': cls.__constants['STATE_RUN_WAIT'],
            'STATE_RUN': cls.__constants['STATE_RUN'],
            'STATE_SUSPEND': cls.__constants['STATE_SUSPEND'],
            'STATE_SHUTDOWN': cls.__constants['STATE_SHUTDOWN'],
            'STATE_NORMAL': cls.__constants['STATE_NORMAL'],
            'STEP_PARSE': cls.__constants['STEP_PARSE'],
            'STEP_REGISTER': cls.__constants['STEP_REGISTER'],
            'STEP_BEGIN': cls.__constants['STEP_BEGIN'],
            'STEP_END': cls.__constants['STEP_END'],
            'FSM_UNINITIALIZED': cls.__constants['FSM_UNINITIALIZED'],
            'FSM_SET_UP': cls.__constants['FSM_SET_UP'],
            'FSM_TEAR_DOWN': cls.__constants['FSM_TEAR_DOWN'],
            'FSM_SELF_CHECK': cls.__constants['FSM_SELF_CHECK'],
            'FSM_ACTIVE': cls.__constants['FSM_ACTIVE'],
            'FSM_DE_ACTIVE': cls.__constants['FSM_DE_ACTIVE'],
            'FSM_PROTECTED': cls.__constants['FSM_PROTECTED'],
            'FSM_LOW_POWER': cls.__constants['FSM_LOW_POWER'],
            'FSM_OTA': cls.__constants['FSM_OTA'],
            'FSM_ERROR': cls.__constants['FSM_ERROR'],
        }

    @property
    def TYPE_TASK(self):
        """Message constant 'TYPE_TASK'."""
        return Metaclass_VisualProgrammingOperate.__constants['TYPE_TASK']

    @property
    def TYPE_MODULE(self):
        """Message constant 'TYPE_MODULE'."""
        return Metaclass_VisualProgrammingOperate.__constants['TYPE_MODULE']

    @property
    def TYPE_AI(self):
        """Message constant 'TYPE_AI'."""
        return Metaclass_VisualProgrammingOperate.__constants['TYPE_AI']

    @property
    def TYPE_SLAM(self):
        """Message constant 'TYPE_SLAM'."""
        return Metaclass_VisualProgrammingOperate.__constants['TYPE_SLAM']

    @property
    def MODE_FACTORY(self):
        """Message constant 'MODE_FACTORY'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_FACTORY']

    @property
    def MODE_USER(self):
        """Message constant 'MODE_USER'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_USER']

    @property
    def MODE_SINGLE(self):
        """Message constant 'MODE_SINGLE'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_SINGLE']

    @property
    def MODE_CYCLE(self):
        """Message constant 'MODE_CYCLE'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_CYCLE']

    @property
    def MODE_COMMON(self):
        """Message constant 'MODE_COMMON'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_COMMON']

    @property
    def MODE_SEQUENCE(self):
        """Message constant 'MODE_SEQUENCE'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_SEQUENCE']

    @property
    def MODE_SINGLE_STEP(self):
        """Message constant 'MODE_SINGLE_STEP'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_SINGLE_STEP']

    @property
    def MODE_ORIGINAL(self):
        """Message constant 'MODE_ORIGINAL'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_ORIGINAL']

    @property
    def MODE_ALL(self):
        """Message constant 'MODE_ALL'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_ALL']

    @property
    def MODE_PERSONNEL(self):
        """Message constant 'MODE_PERSONNEL'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_PERSONNEL']

    @property
    def MODE_FACE(self):
        """Message constant 'MODE_FACE'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_FACE']

    @property
    def MODE_VOICEPRINT(self):
        """Message constant 'MODE_VOICEPRINT'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_VOICEPRINT']

    @property
    def MODE_TAAINING_WORDS(self):
        """Message constant 'MODE_TAAINING_WORDS'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_TAAINING_WORDS']

    @property
    def MODE_MAP(self):
        """Message constant 'MODE_MAP'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_MAP']

    @property
    def MODE_PRESET(self):
        """Message constant 'MODE_PRESET'."""
        return Metaclass_VisualProgrammingOperate.__constants['MODE_PRESET']

    @property
    def OPERATE_INQUIRY(self):
        """Message constant 'OPERATE_INQUIRY'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_INQUIRY']

    @property
    def OPERATE_SAVE(self):
        """Message constant 'OPERATE_SAVE'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_SAVE']

    @property
    def OPERATE_DELETE(self):
        """Message constant 'OPERATE_DELETE'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_DELETE']

    @property
    def OPERATE_DEBUG(self):
        """Message constant 'OPERATE_DEBUG'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_DEBUG']

    @property
    def OPERATE_RUN(self):
        """Message constant 'OPERATE_RUN'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_RUN']

    @property
    def OPERATE_SUSPEND(self):
        """Message constant 'OPERATE_SUSPEND'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_SUSPEND']

    @property
    def OPERATE_RECOVER(self):
        """Message constant 'OPERATE_RECOVER'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_RECOVER']

    @property
    def OPERATE_SHUTDOWN(self):
        """Message constant 'OPERATE_SHUTDOWN'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_SHUTDOWN']

    @property
    def OPERATE_START(self):
        """Message constant 'OPERATE_START'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_START']

    @property
    def OPERATE_STOP(self):
        """Message constant 'OPERATE_STOP'."""
        return Metaclass_VisualProgrammingOperate.__constants['OPERATE_STOP']

    @property
    def STATE_NULL(self):
        """Message constant 'STATE_NULL'."""
        return Metaclass_VisualProgrammingOperate.__constants['STATE_NULL']

    @property
    def STATE_ERROR(self):
        """Message constant 'STATE_ERROR'."""
        return Metaclass_VisualProgrammingOperate.__constants['STATE_ERROR']

    @property
    def STATE_WAIT_RUN(self):
        """Message constant 'STATE_WAIT_RUN'."""
        return Metaclass_VisualProgrammingOperate.__constants['STATE_WAIT_RUN']

    @property
    def STATE_RUN_WAIT(self):
        """Message constant 'STATE_RUN_WAIT'."""
        return Metaclass_VisualProgrammingOperate.__constants['STATE_RUN_WAIT']

    @property
    def STATE_RUN(self):
        """Message constant 'STATE_RUN'."""
        return Metaclass_VisualProgrammingOperate.__constants['STATE_RUN']

    @property
    def STATE_SUSPEND(self):
        """Message constant 'STATE_SUSPEND'."""
        return Metaclass_VisualProgrammingOperate.__constants['STATE_SUSPEND']

    @property
    def STATE_SHUTDOWN(self):
        """Message constant 'STATE_SHUTDOWN'."""
        return Metaclass_VisualProgrammingOperate.__constants['STATE_SHUTDOWN']

    @property
    def STATE_NORMAL(self):
        """Message constant 'STATE_NORMAL'."""
        return Metaclass_VisualProgrammingOperate.__constants['STATE_NORMAL']

    @property
    def STEP_PARSE(self):
        """Message constant 'STEP_PARSE'."""
        return Metaclass_VisualProgrammingOperate.__constants['STEP_PARSE']

    @property
    def STEP_REGISTER(self):
        """Message constant 'STEP_REGISTER'."""
        return Metaclass_VisualProgrammingOperate.__constants['STEP_REGISTER']

    @property
    def STEP_BEGIN(self):
        """Message constant 'STEP_BEGIN'."""
        return Metaclass_VisualProgrammingOperate.__constants['STEP_BEGIN']

    @property
    def STEP_END(self):
        """Message constant 'STEP_END'."""
        return Metaclass_VisualProgrammingOperate.__constants['STEP_END']

    @property
    def FSM_UNINITIALIZED(self):
        """Message constant 'FSM_UNINITIALIZED'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_UNINITIALIZED']

    @property
    def FSM_SET_UP(self):
        """Message constant 'FSM_SET_UP'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_SET_UP']

    @property
    def FSM_TEAR_DOWN(self):
        """Message constant 'FSM_TEAR_DOWN'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_TEAR_DOWN']

    @property
    def FSM_SELF_CHECK(self):
        """Message constant 'FSM_SELF_CHECK'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_SELF_CHECK']

    @property
    def FSM_ACTIVE(self):
        """Message constant 'FSM_ACTIVE'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_ACTIVE']

    @property
    def FSM_DE_ACTIVE(self):
        """Message constant 'FSM_DE_ACTIVE'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_DE_ACTIVE']

    @property
    def FSM_PROTECTED(self):
        """Message constant 'FSM_PROTECTED'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_PROTECTED']

    @property
    def FSM_LOW_POWER(self):
        """Message constant 'FSM_LOW_POWER'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_LOW_POWER']

    @property
    def FSM_OTA(self):
        """Message constant 'FSM_OTA'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_OTA']

    @property
    def FSM_ERROR(self):
        """Message constant 'FSM_ERROR'."""
        return Metaclass_VisualProgrammingOperate.__constants['FSM_ERROR']


class VisualProgrammingOperate(metaclass=Metaclass_VisualProgrammingOperate):
    """
    Message class 'VisualProgrammingOperate'.

    Constants:
      TYPE_TASK
      TYPE_MODULE
      TYPE_AI
      TYPE_SLAM
      MODE_FACTORY
      MODE_USER
      MODE_SINGLE
      MODE_CYCLE
      MODE_COMMON
      MODE_SEQUENCE
      MODE_SINGLE_STEP
      MODE_ORIGINAL
      MODE_ALL
      MODE_PERSONNEL
      MODE_FACE
      MODE_VOICEPRINT
      MODE_TAAINING_WORDS
      MODE_MAP
      MODE_PRESET
      OPERATE_INQUIRY
      OPERATE_SAVE
      OPERATE_DELETE
      OPERATE_DEBUG
      OPERATE_RUN
      OPERATE_SUSPEND
      OPERATE_RECOVER
      OPERATE_SHUTDOWN
      OPERATE_START
      OPERATE_STOP
      STATE_NULL
      STATE_ERROR
      STATE_WAIT_RUN
      STATE_RUN_WAIT
      STATE_RUN
      STATE_SUSPEND
      STATE_SHUTDOWN
      STATE_NORMAL
      STEP_PARSE
      STEP_REGISTER
      STEP_BEGIN
      STEP_END
      FSM_UNINITIALIZED
      FSM_SET_UP
      FSM_TEAR_DOWN
      FSM_SELF_CHECK
      FSM_ACTIVE
      FSM_DE_ACTIVE
      FSM_PROTECTED
      FSM_LOW_POWER
      FSM_OTA
      FSM_ERROR
    """

    __slots__ = [
        '_type',
        '_id',
        '_target_id',
        '_describe',
        '_style',
        '_operate',
        '_mode',
        '_condition',
        '_body',
        '_fsm',
        '_dependent',
        '_be_depended',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'id': 'string',
        'target_id': 'sequence<string>',
        'describe': 'string',
        'style': 'string',
        'operate': 'string',
        'mode': 'string',
        'condition': 'string',
        'body': 'string',
        'fsm': 'string',
        'dependent': 'sequence<string>',
        'be_depended': 'sequence<string>',
    }

    SLOT_TYPES = (
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.id = kwargs.get('id', str())
        self.target_id = kwargs.get('target_id', [])
        self.describe = kwargs.get('describe', str())
        self.style = kwargs.get('style', str())
        self.operate = kwargs.get('operate', str())
        self.mode = kwargs.get('mode', str())
        self.condition = kwargs.get('condition', str())
        self.body = kwargs.get('body', str())
        self.fsm = kwargs.get('fsm', str())
        self.dependent = kwargs.get('dependent', [])
        self.be_depended = kwargs.get('be_depended', [])

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
        if self.type != other.type:
            return False
        if self.id != other.id:
            return False
        if self.target_id != other.target_id:
            return False
        if self.describe != other.describe:
            return False
        if self.style != other.style:
            return False
        if self.operate != other.operate:
            return False
        if self.mode != other.mode:
            return False
        if self.condition != other.condition:
            return False
        if self.body != other.body:
            return False
        if self.fsm != other.fsm:
            return False
        if self.dependent != other.dependent:
            return False
        if self.be_depended != other.be_depended:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def target_id(self):
        """Message field 'target_id'."""
        return self._target_id

    @target_id.setter
    def target_id(self, value):
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
                "The 'target_id' field must be a set or sequence and each value of type 'str'"
        self._target_id = value

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

    @property
    def style(self):
        """Message field 'style'."""
        return self._style

    @style.setter
    def style(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'style' field must be of type 'str'"
        self._style = value

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
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @property
    def condition(self):
        """Message field 'condition'."""
        return self._condition

    @condition.setter
    def condition(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'condition' field must be of type 'str'"
        self._condition = value

    @property
    def body(self):
        """Message field 'body'."""
        return self._body

    @body.setter
    def body(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'body' field must be of type 'str'"
        self._body = value

    @property
    def fsm(self):
        """Message field 'fsm'."""
        return self._fsm

    @fsm.setter
    def fsm(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fsm' field must be of type 'str'"
        self._fsm = value

    @property
    def dependent(self):
        """Message field 'dependent'."""
        return self._dependent

    @dependent.setter
    def dependent(self, value):
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
                "The 'dependent' field must be a set or sequence and each value of type 'str'"
        self._dependent = value

    @property
    def be_depended(self):
        """Message field 'be_depended'."""
        return self._be_depended

    @be_depended.setter
    def be_depended(self, value):
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
                "The 'be_depended' field must be a set or sequence and each value of type 'str'"
        self._be_depended = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from protocol:msg/AudioPlay.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioPlay(type):
    """Metaclass of message 'AudioPlay'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PID_WIFI_ENTER_CONNECTION_MODE_0': 1,
        'PID_WIFI_ENTER_CONNECTION_MODE_1': 2,
        'PID_WIFI_WAIT_FOR_SCAN_CODE_0': 3,
        'PID_WIFI_SCAN_CODE_SUCCEEDED_0': 4,
        'PID_WIFI_CONNECTION_SUCCEEDED_0': 2001,
        'PID_WIFI_CONNECTION_SUCCEEDED_1': 6,
        'PID_WIFI_CONNECTION_FAILED_0': 7,
        'PID_WIFI_CONNECTION_FAILED_1': 8,
        'PID_WIFI_CONNECTION_FAILED_2': 9,
        'PID_WIFI_EXIT_CONNECTION_MODE_0': 10,
        'PID_WIFI_OFFLINE': 11,
        'PID_WIFI_COMMUNICATION': 12,
        'PID_WIFI_SCAN_CODE_IP_ERROR': 13,
        'PID_WIFI_SCAN_CODE_INFO_ERROR': 14,
        'PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS': 15,
        'PID_WIFI_REQUEST_OPEN_CAMERA_FAIL': 16,
        'PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS': 17,
        'PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL': 18,
        'PID_FACE_ENTRY_ADD_FACE': 21,
        'PID_FACE_ENTRY_CANCLE_ADD_FACE': 22,
        'PID_FACE_ENTRY_CONFIRM_LAST_FACE': 23,
        'PID_FACE_ENTRY_UPDATE_FACE_ID': 24,
        'PID_FACE_ENTRY_DELETE_FACE': 25,
        'PID_FACE_ENTRY_GET_ALL_FACES': 26,
        'PID_FACE_ENTRY_FIX_POSE': 27,
        'PID_FACE_ENTRY_FIX_POSE_LEFT': 28,
        'PID_FACE_ENTRY_FIX_POSE_RIGHT': 29,
        'PID_FACE_ENTRY_FIX_POSE_UP': 30,
        'PID_FACE_ENTRY_FIX_POSE_DOWN': 31,
        'PID_FACE_ENTRY_FIX_DISTANCE_CLOSE': 32,
        'PID_FACE_ENTRY_FIX_DISTANCE_NEAR': 33,
        'PID_FACE_ENTRY_FIX_STABLE': 34,
        'PID_FACE_ENTRY_MUTIPLE_FACES': 35,
        'PID_FACE_ENTRY_NONE_FACES': 36,
        'PID_FACE_ENTRY_TIMEOUT': 37,
        'PID_FACE_ENTRY_FINISH': 38,
        'PID_FACE_RECOGNITION_REQUEST': 39,
        'PID_FACE_DEGREE_HEAD_TILT': 40,
        'PID_FACE_RECGONITION_FINISH': 41,
        'PID_FACE_RECGONITION_TIMEOUT': 42,
        'PID_FACE_ALREADY_EXIST': 43,
        'PID_CAMERA_START_PIC_TRANSFER': 50,
        'PID_CAMERA_START_PHOTOS': 51,
        'PID_CAMERA_TAKE_VIDEOS': 52,
        'PID_CAMERA_VIDEO_RECORDING': 53,
        'PID_SELF_CHECK_SUCCESS': 60,
        'PID_SELF_CHECK_FAILED': 61,
        'PID_BATTERY_CAPICITY_LOW': 101,
        'PID_BATTERY_IN_CHARGING': 102,
        'PID_FACE_ENTRY_START': 103,
        'PID_BATTERY_CHARGE_COMPELETE': 104,
        'PID_AI_PLEASE_ENABLE': 124,
        'PID_AI_ENABLE_SUCCESS': 125,
        'PID_AI_SERVICE_EXPIRED': 127,
        'PID_TEST_HARDWARE_AUDIO': 3000,
        'PID_TEST_STAGE_ONE': 3001,
        'PID_TEST_STAGE_THREE': 3003,
        'PID_SOUND_EFFECT_READY': 9000,
        'PID_STOP_AUDIO_PLAY': 9999,
        'PID_FOLLOW_TAGS_START': 31000,
        'PID_FOLLOW_PERSON_START': 31001,
        'PID_FOLLOW_OBJECT_START': 31002,
        'PID_FOLLOW_TAGS_STOP': 31003,
        'PID_FOLLOW_PERSON_STOP': 31004,
        'PID_FOLLOW_OBJECT_STOP': 31005,
        'PID_GPS_SELF_CHECK_FAILED': 31006,
        'PID_LIDAR_SELF_CHECK_FAILED': 31007,
        'PID_TOF_SELF_CHECK_FAILED': 31008,
        'PID_ULTRASONIC_SELF_CHECK_FAILED': 31009,
        'PID_BMS_SELF_CHECK_FAILED': 31010,
        'PID_LED_SELF_CHECK_FAILED': 31011,
        'PID_TOUCH_SELF_CHECK_FAILED': 31012,
        'PID_UWB_SELF_CHECK_FAILED': 31013,
        'PID_AUDIO_SELF_CHECK_FAILED': 31014,
        'PID_MOTION_SELF_CHECK_FAILED': 31015,
        'PID_GPS_SWITCH_MODE_FAILED': 31016,
        'PID_LIDAR_SWITCH_MODE_FAILED': 31017,
        'PID_TOF_SWITCH_MODE_FAILED': 31018,
        'PID_ULTRASONIC_SWITCH_MODE_FAILED': 31019,
        'PID_BMS_SWITCH_MODE_FAILED': 31020,
        'PID_LED_SWITCH_MODE_FAILED': 31021,
        'PID_TOUCH_SWITCH_MODE_FAILED': 31022,
        'PID_UWB_SWITCH_MODE_FAILED': 31023,
        'PID_AUDIO_SWITCH_MODE_FAILED': 31024,
        'PID_MOTION_SWITCH_MODE_FAILED': 31025,
        'PID_SENSOR_SWITCH_MODE_FAILED': 31026,
        'PID_DEVICE_SWITCH_MODE_FAILED': 31027,
        'PID_BONE_POINT_START': 31028,
        'PID_BONE_POINT_DETECTING': 31029,
        'PID_BONE_POINT_BACK': 31030,
        'PID_BONE_POINT_LEFT': 31031,
        'PID_BONE_POINT_RIGHT': 31032,
        'PID_MODEL_LOADING_START': 31033,
        'PID_MODEL_LOADING_COMPLETE': 31034,
        'PID_WIFI_CONNECTED_UNKNOWN_NET': 31035,
        'PID_WIFI_FAILED_PLEASE_RETRY': 31036,
        'PID_FOLLOW_TAGS_LOST': 31037,
        'PID_SELF_CHECK_START': 31038,
        'PID_MODEL_VERSION_OLD': 31050,
        'PID_MODEL_VERSION_UPDATE_SUCCESS': 31051,
        'PID_MODEL_VERSION_UPDATE_FAIL': 31052,
        'PID_MOVE_FAILED': 31053,
        'PID_CAMERAR_SELF_CHECK_FAILED': 31054,
        'PID_POWER': 1000,
        'PID_PERCENT_0': 10000,
        'PID_PERCENT_5': 10005,
        'PID_PERCENT_20': 10020,
        'PID_PERCENT_30': 10030,
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
                'protocol.msg.AudioPlay')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__audio_play
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__audio_play
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__audio_play
            cls._TYPE_SUPPORT = module.type_support_msg__msg__audio_play
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__audio_play

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PID_WIFI_ENTER_CONNECTION_MODE_0': cls.__constants['PID_WIFI_ENTER_CONNECTION_MODE_0'],
            'PID_WIFI_ENTER_CONNECTION_MODE_1': cls.__constants['PID_WIFI_ENTER_CONNECTION_MODE_1'],
            'PID_WIFI_WAIT_FOR_SCAN_CODE_0': cls.__constants['PID_WIFI_WAIT_FOR_SCAN_CODE_0'],
            'PID_WIFI_SCAN_CODE_SUCCEEDED_0': cls.__constants['PID_WIFI_SCAN_CODE_SUCCEEDED_0'],
            'PID_WIFI_CONNECTION_SUCCEEDED_0': cls.__constants['PID_WIFI_CONNECTION_SUCCEEDED_0'],
            'PID_WIFI_CONNECTION_SUCCEEDED_1': cls.__constants['PID_WIFI_CONNECTION_SUCCEEDED_1'],
            'PID_WIFI_CONNECTION_FAILED_0': cls.__constants['PID_WIFI_CONNECTION_FAILED_0'],
            'PID_WIFI_CONNECTION_FAILED_1': cls.__constants['PID_WIFI_CONNECTION_FAILED_1'],
            'PID_WIFI_CONNECTION_FAILED_2': cls.__constants['PID_WIFI_CONNECTION_FAILED_2'],
            'PID_WIFI_EXIT_CONNECTION_MODE_0': cls.__constants['PID_WIFI_EXIT_CONNECTION_MODE_0'],
            'PID_WIFI_OFFLINE': cls.__constants['PID_WIFI_OFFLINE'],
            'PID_WIFI_COMMUNICATION': cls.__constants['PID_WIFI_COMMUNICATION'],
            'PID_WIFI_SCAN_CODE_IP_ERROR': cls.__constants['PID_WIFI_SCAN_CODE_IP_ERROR'],
            'PID_WIFI_SCAN_CODE_INFO_ERROR': cls.__constants['PID_WIFI_SCAN_CODE_INFO_ERROR'],
            'PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS': cls.__constants['PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS'],
            'PID_WIFI_REQUEST_OPEN_CAMERA_FAIL': cls.__constants['PID_WIFI_REQUEST_OPEN_CAMERA_FAIL'],
            'PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS': cls.__constants['PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS'],
            'PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL': cls.__constants['PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL'],
            'PID_FACE_ENTRY_ADD_FACE': cls.__constants['PID_FACE_ENTRY_ADD_FACE'],
            'PID_FACE_ENTRY_CANCLE_ADD_FACE': cls.__constants['PID_FACE_ENTRY_CANCLE_ADD_FACE'],
            'PID_FACE_ENTRY_CONFIRM_LAST_FACE': cls.__constants['PID_FACE_ENTRY_CONFIRM_LAST_FACE'],
            'PID_FACE_ENTRY_UPDATE_FACE_ID': cls.__constants['PID_FACE_ENTRY_UPDATE_FACE_ID'],
            'PID_FACE_ENTRY_DELETE_FACE': cls.__constants['PID_FACE_ENTRY_DELETE_FACE'],
            'PID_FACE_ENTRY_GET_ALL_FACES': cls.__constants['PID_FACE_ENTRY_GET_ALL_FACES'],
            'PID_FACE_ENTRY_FIX_POSE': cls.__constants['PID_FACE_ENTRY_FIX_POSE'],
            'PID_FACE_ENTRY_FIX_POSE_LEFT': cls.__constants['PID_FACE_ENTRY_FIX_POSE_LEFT'],
            'PID_FACE_ENTRY_FIX_POSE_RIGHT': cls.__constants['PID_FACE_ENTRY_FIX_POSE_RIGHT'],
            'PID_FACE_ENTRY_FIX_POSE_UP': cls.__constants['PID_FACE_ENTRY_FIX_POSE_UP'],
            'PID_FACE_ENTRY_FIX_POSE_DOWN': cls.__constants['PID_FACE_ENTRY_FIX_POSE_DOWN'],
            'PID_FACE_ENTRY_FIX_DISTANCE_CLOSE': cls.__constants['PID_FACE_ENTRY_FIX_DISTANCE_CLOSE'],
            'PID_FACE_ENTRY_FIX_DISTANCE_NEAR': cls.__constants['PID_FACE_ENTRY_FIX_DISTANCE_NEAR'],
            'PID_FACE_ENTRY_FIX_STABLE': cls.__constants['PID_FACE_ENTRY_FIX_STABLE'],
            'PID_FACE_ENTRY_MUTIPLE_FACES': cls.__constants['PID_FACE_ENTRY_MUTIPLE_FACES'],
            'PID_FACE_ENTRY_NONE_FACES': cls.__constants['PID_FACE_ENTRY_NONE_FACES'],
            'PID_FACE_ENTRY_TIMEOUT': cls.__constants['PID_FACE_ENTRY_TIMEOUT'],
            'PID_FACE_ENTRY_FINISH': cls.__constants['PID_FACE_ENTRY_FINISH'],
            'PID_FACE_RECOGNITION_REQUEST': cls.__constants['PID_FACE_RECOGNITION_REQUEST'],
            'PID_FACE_DEGREE_HEAD_TILT': cls.__constants['PID_FACE_DEGREE_HEAD_TILT'],
            'PID_FACE_RECGONITION_FINISH': cls.__constants['PID_FACE_RECGONITION_FINISH'],
            'PID_FACE_RECGONITION_TIMEOUT': cls.__constants['PID_FACE_RECGONITION_TIMEOUT'],
            'PID_FACE_ALREADY_EXIST': cls.__constants['PID_FACE_ALREADY_EXIST'],
            'PID_CAMERA_START_PIC_TRANSFER': cls.__constants['PID_CAMERA_START_PIC_TRANSFER'],
            'PID_CAMERA_START_PHOTOS': cls.__constants['PID_CAMERA_START_PHOTOS'],
            'PID_CAMERA_TAKE_VIDEOS': cls.__constants['PID_CAMERA_TAKE_VIDEOS'],
            'PID_CAMERA_VIDEO_RECORDING': cls.__constants['PID_CAMERA_VIDEO_RECORDING'],
            'PID_SELF_CHECK_SUCCESS': cls.__constants['PID_SELF_CHECK_SUCCESS'],
            'PID_SELF_CHECK_FAILED': cls.__constants['PID_SELF_CHECK_FAILED'],
            'PID_BATTERY_CAPICITY_LOW': cls.__constants['PID_BATTERY_CAPICITY_LOW'],
            'PID_BATTERY_IN_CHARGING': cls.__constants['PID_BATTERY_IN_CHARGING'],
            'PID_FACE_ENTRY_START': cls.__constants['PID_FACE_ENTRY_START'],
            'PID_BATTERY_CHARGE_COMPELETE': cls.__constants['PID_BATTERY_CHARGE_COMPELETE'],
            'PID_AI_PLEASE_ENABLE': cls.__constants['PID_AI_PLEASE_ENABLE'],
            'PID_AI_ENABLE_SUCCESS': cls.__constants['PID_AI_ENABLE_SUCCESS'],
            'PID_AI_SERVICE_EXPIRED': cls.__constants['PID_AI_SERVICE_EXPIRED'],
            'PID_TEST_HARDWARE_AUDIO': cls.__constants['PID_TEST_HARDWARE_AUDIO'],
            'PID_TEST_STAGE_ONE': cls.__constants['PID_TEST_STAGE_ONE'],
            'PID_TEST_STAGE_THREE': cls.__constants['PID_TEST_STAGE_THREE'],
            'PID_SOUND_EFFECT_READY': cls.__constants['PID_SOUND_EFFECT_READY'],
            'PID_STOP_AUDIO_PLAY': cls.__constants['PID_STOP_AUDIO_PLAY'],
            'PID_FOLLOW_TAGS_START': cls.__constants['PID_FOLLOW_TAGS_START'],
            'PID_FOLLOW_PERSON_START': cls.__constants['PID_FOLLOW_PERSON_START'],
            'PID_FOLLOW_OBJECT_START': cls.__constants['PID_FOLLOW_OBJECT_START'],
            'PID_FOLLOW_TAGS_STOP': cls.__constants['PID_FOLLOW_TAGS_STOP'],
            'PID_FOLLOW_PERSON_STOP': cls.__constants['PID_FOLLOW_PERSON_STOP'],
            'PID_FOLLOW_OBJECT_STOP': cls.__constants['PID_FOLLOW_OBJECT_STOP'],
            'PID_GPS_SELF_CHECK_FAILED': cls.__constants['PID_GPS_SELF_CHECK_FAILED'],
            'PID_LIDAR_SELF_CHECK_FAILED': cls.__constants['PID_LIDAR_SELF_CHECK_FAILED'],
            'PID_TOF_SELF_CHECK_FAILED': cls.__constants['PID_TOF_SELF_CHECK_FAILED'],
            'PID_ULTRASONIC_SELF_CHECK_FAILED': cls.__constants['PID_ULTRASONIC_SELF_CHECK_FAILED'],
            'PID_BMS_SELF_CHECK_FAILED': cls.__constants['PID_BMS_SELF_CHECK_FAILED'],
            'PID_LED_SELF_CHECK_FAILED': cls.__constants['PID_LED_SELF_CHECK_FAILED'],
            'PID_TOUCH_SELF_CHECK_FAILED': cls.__constants['PID_TOUCH_SELF_CHECK_FAILED'],
            'PID_UWB_SELF_CHECK_FAILED': cls.__constants['PID_UWB_SELF_CHECK_FAILED'],
            'PID_AUDIO_SELF_CHECK_FAILED': cls.__constants['PID_AUDIO_SELF_CHECK_FAILED'],
            'PID_MOTION_SELF_CHECK_FAILED': cls.__constants['PID_MOTION_SELF_CHECK_FAILED'],
            'PID_GPS_SWITCH_MODE_FAILED': cls.__constants['PID_GPS_SWITCH_MODE_FAILED'],
            'PID_LIDAR_SWITCH_MODE_FAILED': cls.__constants['PID_LIDAR_SWITCH_MODE_FAILED'],
            'PID_TOF_SWITCH_MODE_FAILED': cls.__constants['PID_TOF_SWITCH_MODE_FAILED'],
            'PID_ULTRASONIC_SWITCH_MODE_FAILED': cls.__constants['PID_ULTRASONIC_SWITCH_MODE_FAILED'],
            'PID_BMS_SWITCH_MODE_FAILED': cls.__constants['PID_BMS_SWITCH_MODE_FAILED'],
            'PID_LED_SWITCH_MODE_FAILED': cls.__constants['PID_LED_SWITCH_MODE_FAILED'],
            'PID_TOUCH_SWITCH_MODE_FAILED': cls.__constants['PID_TOUCH_SWITCH_MODE_FAILED'],
            'PID_UWB_SWITCH_MODE_FAILED': cls.__constants['PID_UWB_SWITCH_MODE_FAILED'],
            'PID_AUDIO_SWITCH_MODE_FAILED': cls.__constants['PID_AUDIO_SWITCH_MODE_FAILED'],
            'PID_MOTION_SWITCH_MODE_FAILED': cls.__constants['PID_MOTION_SWITCH_MODE_FAILED'],
            'PID_SENSOR_SWITCH_MODE_FAILED': cls.__constants['PID_SENSOR_SWITCH_MODE_FAILED'],
            'PID_DEVICE_SWITCH_MODE_FAILED': cls.__constants['PID_DEVICE_SWITCH_MODE_FAILED'],
            'PID_BONE_POINT_START': cls.__constants['PID_BONE_POINT_START'],
            'PID_BONE_POINT_DETECTING': cls.__constants['PID_BONE_POINT_DETECTING'],
            'PID_BONE_POINT_BACK': cls.__constants['PID_BONE_POINT_BACK'],
            'PID_BONE_POINT_LEFT': cls.__constants['PID_BONE_POINT_LEFT'],
            'PID_BONE_POINT_RIGHT': cls.__constants['PID_BONE_POINT_RIGHT'],
            'PID_MODEL_LOADING_START': cls.__constants['PID_MODEL_LOADING_START'],
            'PID_MODEL_LOADING_COMPLETE': cls.__constants['PID_MODEL_LOADING_COMPLETE'],
            'PID_WIFI_CONNECTED_UNKNOWN_NET': cls.__constants['PID_WIFI_CONNECTED_UNKNOWN_NET'],
            'PID_WIFI_FAILED_PLEASE_RETRY': cls.__constants['PID_WIFI_FAILED_PLEASE_RETRY'],
            'PID_FOLLOW_TAGS_LOST': cls.__constants['PID_FOLLOW_TAGS_LOST'],
            'PID_SELF_CHECK_START': cls.__constants['PID_SELF_CHECK_START'],
            'PID_MODEL_VERSION_OLD': cls.__constants['PID_MODEL_VERSION_OLD'],
            'PID_MODEL_VERSION_UPDATE_SUCCESS': cls.__constants['PID_MODEL_VERSION_UPDATE_SUCCESS'],
            'PID_MODEL_VERSION_UPDATE_FAIL': cls.__constants['PID_MODEL_VERSION_UPDATE_FAIL'],
            'PID_MOVE_FAILED': cls.__constants['PID_MOVE_FAILED'],
            'PID_CAMERAR_SELF_CHECK_FAILED': cls.__constants['PID_CAMERAR_SELF_CHECK_FAILED'],
            'PID_POWER': cls.__constants['PID_POWER'],
            'PID_PERCENT_0': cls.__constants['PID_PERCENT_0'],
            'PID_PERCENT_5': cls.__constants['PID_PERCENT_5'],
            'PID_PERCENT_20': cls.__constants['PID_PERCENT_20'],
            'PID_PERCENT_30': cls.__constants['PID_PERCENT_30'],
        }

    @property
    def PID_WIFI_ENTER_CONNECTION_MODE_0(self):
        """Message constant 'PID_WIFI_ENTER_CONNECTION_MODE_0'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_ENTER_CONNECTION_MODE_0']

    @property
    def PID_WIFI_ENTER_CONNECTION_MODE_1(self):
        """Message constant 'PID_WIFI_ENTER_CONNECTION_MODE_1'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_ENTER_CONNECTION_MODE_1']

    @property
    def PID_WIFI_WAIT_FOR_SCAN_CODE_0(self):
        """Message constant 'PID_WIFI_WAIT_FOR_SCAN_CODE_0'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_WAIT_FOR_SCAN_CODE_0']

    @property
    def PID_WIFI_SCAN_CODE_SUCCEEDED_0(self):
        """Message constant 'PID_WIFI_SCAN_CODE_SUCCEEDED_0'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_SCAN_CODE_SUCCEEDED_0']

    @property
    def PID_WIFI_CONNECTION_SUCCEEDED_0(self):
        """Message constant 'PID_WIFI_CONNECTION_SUCCEEDED_0'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_CONNECTION_SUCCEEDED_0']

    @property
    def PID_WIFI_CONNECTION_SUCCEEDED_1(self):
        """Message constant 'PID_WIFI_CONNECTION_SUCCEEDED_1'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_CONNECTION_SUCCEEDED_1']

    @property
    def PID_WIFI_CONNECTION_FAILED_0(self):
        """Message constant 'PID_WIFI_CONNECTION_FAILED_0'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_CONNECTION_FAILED_0']

    @property
    def PID_WIFI_CONNECTION_FAILED_1(self):
        """Message constant 'PID_WIFI_CONNECTION_FAILED_1'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_CONNECTION_FAILED_1']

    @property
    def PID_WIFI_CONNECTION_FAILED_2(self):
        """Message constant 'PID_WIFI_CONNECTION_FAILED_2'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_CONNECTION_FAILED_2']

    @property
    def PID_WIFI_EXIT_CONNECTION_MODE_0(self):
        """Message constant 'PID_WIFI_EXIT_CONNECTION_MODE_0'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_EXIT_CONNECTION_MODE_0']

    @property
    def PID_WIFI_OFFLINE(self):
        """Message constant 'PID_WIFI_OFFLINE'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_OFFLINE']

    @property
    def PID_WIFI_COMMUNICATION(self):
        """Message constant 'PID_WIFI_COMMUNICATION'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_COMMUNICATION']

    @property
    def PID_WIFI_SCAN_CODE_IP_ERROR(self):
        """Message constant 'PID_WIFI_SCAN_CODE_IP_ERROR'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_SCAN_CODE_IP_ERROR']

    @property
    def PID_WIFI_SCAN_CODE_INFO_ERROR(self):
        """Message constant 'PID_WIFI_SCAN_CODE_INFO_ERROR'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_SCAN_CODE_INFO_ERROR']

    @property
    def PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS(self):
        """Message constant 'PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS']

    @property
    def PID_WIFI_REQUEST_OPEN_CAMERA_FAIL(self):
        """Message constant 'PID_WIFI_REQUEST_OPEN_CAMERA_FAIL'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_REQUEST_OPEN_CAMERA_FAIL']

    @property
    def PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS(self):
        """Message constant 'PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS']

    @property
    def PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL(self):
        """Message constant 'PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL']

    @property
    def PID_FACE_ENTRY_ADD_FACE(self):
        """Message constant 'PID_FACE_ENTRY_ADD_FACE'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_ADD_FACE']

    @property
    def PID_FACE_ENTRY_CANCLE_ADD_FACE(self):
        """Message constant 'PID_FACE_ENTRY_CANCLE_ADD_FACE'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_CANCLE_ADD_FACE']

    @property
    def PID_FACE_ENTRY_CONFIRM_LAST_FACE(self):
        """Message constant 'PID_FACE_ENTRY_CONFIRM_LAST_FACE'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_CONFIRM_LAST_FACE']

    @property
    def PID_FACE_ENTRY_UPDATE_FACE_ID(self):
        """Message constant 'PID_FACE_ENTRY_UPDATE_FACE_ID'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_UPDATE_FACE_ID']

    @property
    def PID_FACE_ENTRY_DELETE_FACE(self):
        """Message constant 'PID_FACE_ENTRY_DELETE_FACE'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_DELETE_FACE']

    @property
    def PID_FACE_ENTRY_GET_ALL_FACES(self):
        """Message constant 'PID_FACE_ENTRY_GET_ALL_FACES'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_GET_ALL_FACES']

    @property
    def PID_FACE_ENTRY_FIX_POSE(self):
        """Message constant 'PID_FACE_ENTRY_FIX_POSE'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_FIX_POSE']

    @property
    def PID_FACE_ENTRY_FIX_POSE_LEFT(self):
        """Message constant 'PID_FACE_ENTRY_FIX_POSE_LEFT'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_FIX_POSE_LEFT']

    @property
    def PID_FACE_ENTRY_FIX_POSE_RIGHT(self):
        """Message constant 'PID_FACE_ENTRY_FIX_POSE_RIGHT'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_FIX_POSE_RIGHT']

    @property
    def PID_FACE_ENTRY_FIX_POSE_UP(self):
        """Message constant 'PID_FACE_ENTRY_FIX_POSE_UP'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_FIX_POSE_UP']

    @property
    def PID_FACE_ENTRY_FIX_POSE_DOWN(self):
        """Message constant 'PID_FACE_ENTRY_FIX_POSE_DOWN'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_FIX_POSE_DOWN']

    @property
    def PID_FACE_ENTRY_FIX_DISTANCE_CLOSE(self):
        """Message constant 'PID_FACE_ENTRY_FIX_DISTANCE_CLOSE'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_FIX_DISTANCE_CLOSE']

    @property
    def PID_FACE_ENTRY_FIX_DISTANCE_NEAR(self):
        """Message constant 'PID_FACE_ENTRY_FIX_DISTANCE_NEAR'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_FIX_DISTANCE_NEAR']

    @property
    def PID_FACE_ENTRY_FIX_STABLE(self):
        """Message constant 'PID_FACE_ENTRY_FIX_STABLE'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_FIX_STABLE']

    @property
    def PID_FACE_ENTRY_MUTIPLE_FACES(self):
        """Message constant 'PID_FACE_ENTRY_MUTIPLE_FACES'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_MUTIPLE_FACES']

    @property
    def PID_FACE_ENTRY_NONE_FACES(self):
        """Message constant 'PID_FACE_ENTRY_NONE_FACES'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_NONE_FACES']

    @property
    def PID_FACE_ENTRY_TIMEOUT(self):
        """Message constant 'PID_FACE_ENTRY_TIMEOUT'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_TIMEOUT']

    @property
    def PID_FACE_ENTRY_FINISH(self):
        """Message constant 'PID_FACE_ENTRY_FINISH'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_FINISH']

    @property
    def PID_FACE_RECOGNITION_REQUEST(self):
        """Message constant 'PID_FACE_RECOGNITION_REQUEST'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_RECOGNITION_REQUEST']

    @property
    def PID_FACE_DEGREE_HEAD_TILT(self):
        """Message constant 'PID_FACE_DEGREE_HEAD_TILT'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_DEGREE_HEAD_TILT']

    @property
    def PID_FACE_RECGONITION_FINISH(self):
        """Message constant 'PID_FACE_RECGONITION_FINISH'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_RECGONITION_FINISH']

    @property
    def PID_FACE_RECGONITION_TIMEOUT(self):
        """Message constant 'PID_FACE_RECGONITION_TIMEOUT'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_RECGONITION_TIMEOUT']

    @property
    def PID_FACE_ALREADY_EXIST(self):
        """Message constant 'PID_FACE_ALREADY_EXIST'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ALREADY_EXIST']

    @property
    def PID_CAMERA_START_PIC_TRANSFER(self):
        """Message constant 'PID_CAMERA_START_PIC_TRANSFER'."""
        return Metaclass_AudioPlay.__constants['PID_CAMERA_START_PIC_TRANSFER']

    @property
    def PID_CAMERA_START_PHOTOS(self):
        """Message constant 'PID_CAMERA_START_PHOTOS'."""
        return Metaclass_AudioPlay.__constants['PID_CAMERA_START_PHOTOS']

    @property
    def PID_CAMERA_TAKE_VIDEOS(self):
        """Message constant 'PID_CAMERA_TAKE_VIDEOS'."""
        return Metaclass_AudioPlay.__constants['PID_CAMERA_TAKE_VIDEOS']

    @property
    def PID_CAMERA_VIDEO_RECORDING(self):
        """Message constant 'PID_CAMERA_VIDEO_RECORDING'."""
        return Metaclass_AudioPlay.__constants['PID_CAMERA_VIDEO_RECORDING']

    @property
    def PID_SELF_CHECK_SUCCESS(self):
        """Message constant 'PID_SELF_CHECK_SUCCESS'."""
        return Metaclass_AudioPlay.__constants['PID_SELF_CHECK_SUCCESS']

    @property
    def PID_SELF_CHECK_FAILED(self):
        """Message constant 'PID_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_SELF_CHECK_FAILED']

    @property
    def PID_BATTERY_CAPICITY_LOW(self):
        """Message constant 'PID_BATTERY_CAPICITY_LOW'."""
        return Metaclass_AudioPlay.__constants['PID_BATTERY_CAPICITY_LOW']

    @property
    def PID_BATTERY_IN_CHARGING(self):
        """Message constant 'PID_BATTERY_IN_CHARGING'."""
        return Metaclass_AudioPlay.__constants['PID_BATTERY_IN_CHARGING']

    @property
    def PID_FACE_ENTRY_START(self):
        """Message constant 'PID_FACE_ENTRY_START'."""
        return Metaclass_AudioPlay.__constants['PID_FACE_ENTRY_START']

    @property
    def PID_BATTERY_CHARGE_COMPELETE(self):
        """Message constant 'PID_BATTERY_CHARGE_COMPELETE'."""
        return Metaclass_AudioPlay.__constants['PID_BATTERY_CHARGE_COMPELETE']

    @property
    def PID_AI_PLEASE_ENABLE(self):
        """Message constant 'PID_AI_PLEASE_ENABLE'."""
        return Metaclass_AudioPlay.__constants['PID_AI_PLEASE_ENABLE']

    @property
    def PID_AI_ENABLE_SUCCESS(self):
        """Message constant 'PID_AI_ENABLE_SUCCESS'."""
        return Metaclass_AudioPlay.__constants['PID_AI_ENABLE_SUCCESS']

    @property
    def PID_AI_SERVICE_EXPIRED(self):
        """Message constant 'PID_AI_SERVICE_EXPIRED'."""
        return Metaclass_AudioPlay.__constants['PID_AI_SERVICE_EXPIRED']

    @property
    def PID_TEST_HARDWARE_AUDIO(self):
        """Message constant 'PID_TEST_HARDWARE_AUDIO'."""
        return Metaclass_AudioPlay.__constants['PID_TEST_HARDWARE_AUDIO']

    @property
    def PID_TEST_STAGE_ONE(self):
        """Message constant 'PID_TEST_STAGE_ONE'."""
        return Metaclass_AudioPlay.__constants['PID_TEST_STAGE_ONE']

    @property
    def PID_TEST_STAGE_THREE(self):
        """Message constant 'PID_TEST_STAGE_THREE'."""
        return Metaclass_AudioPlay.__constants['PID_TEST_STAGE_THREE']

    @property
    def PID_SOUND_EFFECT_READY(self):
        """Message constant 'PID_SOUND_EFFECT_READY'."""
        return Metaclass_AudioPlay.__constants['PID_SOUND_EFFECT_READY']

    @property
    def PID_STOP_AUDIO_PLAY(self):
        """Message constant 'PID_STOP_AUDIO_PLAY'."""
        return Metaclass_AudioPlay.__constants['PID_STOP_AUDIO_PLAY']

    @property
    def PID_FOLLOW_TAGS_START(self):
        """Message constant 'PID_FOLLOW_TAGS_START'."""
        return Metaclass_AudioPlay.__constants['PID_FOLLOW_TAGS_START']

    @property
    def PID_FOLLOW_PERSON_START(self):
        """Message constant 'PID_FOLLOW_PERSON_START'."""
        return Metaclass_AudioPlay.__constants['PID_FOLLOW_PERSON_START']

    @property
    def PID_FOLLOW_OBJECT_START(self):
        """Message constant 'PID_FOLLOW_OBJECT_START'."""
        return Metaclass_AudioPlay.__constants['PID_FOLLOW_OBJECT_START']

    @property
    def PID_FOLLOW_TAGS_STOP(self):
        """Message constant 'PID_FOLLOW_TAGS_STOP'."""
        return Metaclass_AudioPlay.__constants['PID_FOLLOW_TAGS_STOP']

    @property
    def PID_FOLLOW_PERSON_STOP(self):
        """Message constant 'PID_FOLLOW_PERSON_STOP'."""
        return Metaclass_AudioPlay.__constants['PID_FOLLOW_PERSON_STOP']

    @property
    def PID_FOLLOW_OBJECT_STOP(self):
        """Message constant 'PID_FOLLOW_OBJECT_STOP'."""
        return Metaclass_AudioPlay.__constants['PID_FOLLOW_OBJECT_STOP']

    @property
    def PID_GPS_SELF_CHECK_FAILED(self):
        """Message constant 'PID_GPS_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_GPS_SELF_CHECK_FAILED']

    @property
    def PID_LIDAR_SELF_CHECK_FAILED(self):
        """Message constant 'PID_LIDAR_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_LIDAR_SELF_CHECK_FAILED']

    @property
    def PID_TOF_SELF_CHECK_FAILED(self):
        """Message constant 'PID_TOF_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_TOF_SELF_CHECK_FAILED']

    @property
    def PID_ULTRASONIC_SELF_CHECK_FAILED(self):
        """Message constant 'PID_ULTRASONIC_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_ULTRASONIC_SELF_CHECK_FAILED']

    @property
    def PID_BMS_SELF_CHECK_FAILED(self):
        """Message constant 'PID_BMS_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_BMS_SELF_CHECK_FAILED']

    @property
    def PID_LED_SELF_CHECK_FAILED(self):
        """Message constant 'PID_LED_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_LED_SELF_CHECK_FAILED']

    @property
    def PID_TOUCH_SELF_CHECK_FAILED(self):
        """Message constant 'PID_TOUCH_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_TOUCH_SELF_CHECK_FAILED']

    @property
    def PID_UWB_SELF_CHECK_FAILED(self):
        """Message constant 'PID_UWB_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_UWB_SELF_CHECK_FAILED']

    @property
    def PID_AUDIO_SELF_CHECK_FAILED(self):
        """Message constant 'PID_AUDIO_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_AUDIO_SELF_CHECK_FAILED']

    @property
    def PID_MOTION_SELF_CHECK_FAILED(self):
        """Message constant 'PID_MOTION_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_MOTION_SELF_CHECK_FAILED']

    @property
    def PID_GPS_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_GPS_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_GPS_SWITCH_MODE_FAILED']

    @property
    def PID_LIDAR_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_LIDAR_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_LIDAR_SWITCH_MODE_FAILED']

    @property
    def PID_TOF_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_TOF_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_TOF_SWITCH_MODE_FAILED']

    @property
    def PID_ULTRASONIC_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_ULTRASONIC_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_ULTRASONIC_SWITCH_MODE_FAILED']

    @property
    def PID_BMS_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_BMS_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_BMS_SWITCH_MODE_FAILED']

    @property
    def PID_LED_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_LED_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_LED_SWITCH_MODE_FAILED']

    @property
    def PID_TOUCH_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_TOUCH_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_TOUCH_SWITCH_MODE_FAILED']

    @property
    def PID_UWB_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_UWB_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_UWB_SWITCH_MODE_FAILED']

    @property
    def PID_AUDIO_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_AUDIO_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_AUDIO_SWITCH_MODE_FAILED']

    @property
    def PID_MOTION_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_MOTION_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_MOTION_SWITCH_MODE_FAILED']

    @property
    def PID_SENSOR_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_SENSOR_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_SENSOR_SWITCH_MODE_FAILED']

    @property
    def PID_DEVICE_SWITCH_MODE_FAILED(self):
        """Message constant 'PID_DEVICE_SWITCH_MODE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_DEVICE_SWITCH_MODE_FAILED']

    @property
    def PID_BONE_POINT_START(self):
        """Message constant 'PID_BONE_POINT_START'."""
        return Metaclass_AudioPlay.__constants['PID_BONE_POINT_START']

    @property
    def PID_BONE_POINT_DETECTING(self):
        """Message constant 'PID_BONE_POINT_DETECTING'."""
        return Metaclass_AudioPlay.__constants['PID_BONE_POINT_DETECTING']

    @property
    def PID_BONE_POINT_BACK(self):
        """Message constant 'PID_BONE_POINT_BACK'."""
        return Metaclass_AudioPlay.__constants['PID_BONE_POINT_BACK']

    @property
    def PID_BONE_POINT_LEFT(self):
        """Message constant 'PID_BONE_POINT_LEFT'."""
        return Metaclass_AudioPlay.__constants['PID_BONE_POINT_LEFT']

    @property
    def PID_BONE_POINT_RIGHT(self):
        """Message constant 'PID_BONE_POINT_RIGHT'."""
        return Metaclass_AudioPlay.__constants['PID_BONE_POINT_RIGHT']

    @property
    def PID_MODEL_LOADING_START(self):
        """Message constant 'PID_MODEL_LOADING_START'."""
        return Metaclass_AudioPlay.__constants['PID_MODEL_LOADING_START']

    @property
    def PID_MODEL_LOADING_COMPLETE(self):
        """Message constant 'PID_MODEL_LOADING_COMPLETE'."""
        return Metaclass_AudioPlay.__constants['PID_MODEL_LOADING_COMPLETE']

    @property
    def PID_WIFI_CONNECTED_UNKNOWN_NET(self):
        """Message constant 'PID_WIFI_CONNECTED_UNKNOWN_NET'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_CONNECTED_UNKNOWN_NET']

    @property
    def PID_WIFI_FAILED_PLEASE_RETRY(self):
        """Message constant 'PID_WIFI_FAILED_PLEASE_RETRY'."""
        return Metaclass_AudioPlay.__constants['PID_WIFI_FAILED_PLEASE_RETRY']

    @property
    def PID_FOLLOW_TAGS_LOST(self):
        """Message constant 'PID_FOLLOW_TAGS_LOST'."""
        return Metaclass_AudioPlay.__constants['PID_FOLLOW_TAGS_LOST']

    @property
    def PID_SELF_CHECK_START(self):
        """Message constant 'PID_SELF_CHECK_START'."""
        return Metaclass_AudioPlay.__constants['PID_SELF_CHECK_START']

    @property
    def PID_MODEL_VERSION_OLD(self):
        """Message constant 'PID_MODEL_VERSION_OLD'."""
        return Metaclass_AudioPlay.__constants['PID_MODEL_VERSION_OLD']

    @property
    def PID_MODEL_VERSION_UPDATE_SUCCESS(self):
        """Message constant 'PID_MODEL_VERSION_UPDATE_SUCCESS'."""
        return Metaclass_AudioPlay.__constants['PID_MODEL_VERSION_UPDATE_SUCCESS']

    @property
    def PID_MODEL_VERSION_UPDATE_FAIL(self):
        """Message constant 'PID_MODEL_VERSION_UPDATE_FAIL'."""
        return Metaclass_AudioPlay.__constants['PID_MODEL_VERSION_UPDATE_FAIL']

    @property
    def PID_MOVE_FAILED(self):
        """Message constant 'PID_MOVE_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_MOVE_FAILED']

    @property
    def PID_CAMERAR_SELF_CHECK_FAILED(self):
        """Message constant 'PID_CAMERAR_SELF_CHECK_FAILED'."""
        return Metaclass_AudioPlay.__constants['PID_CAMERAR_SELF_CHECK_FAILED']

    @property
    def PID_POWER(self):
        """Message constant 'PID_POWER'."""
        return Metaclass_AudioPlay.__constants['PID_POWER']

    @property
    def PID_PERCENT_0(self):
        """Message constant 'PID_PERCENT_0'."""
        return Metaclass_AudioPlay.__constants['PID_PERCENT_0']

    @property
    def PID_PERCENT_5(self):
        """Message constant 'PID_PERCENT_5'."""
        return Metaclass_AudioPlay.__constants['PID_PERCENT_5']

    @property
    def PID_PERCENT_20(self):
        """Message constant 'PID_PERCENT_20'."""
        return Metaclass_AudioPlay.__constants['PID_PERCENT_20']

    @property
    def PID_PERCENT_30(self):
        """Message constant 'PID_PERCENT_30'."""
        return Metaclass_AudioPlay.__constants['PID_PERCENT_30']


class AudioPlay(metaclass=Metaclass_AudioPlay):
    """
    Message class 'AudioPlay'.

    Constants:
      PID_WIFI_ENTER_CONNECTION_MODE_0
      PID_WIFI_ENTER_CONNECTION_MODE_1
      PID_WIFI_WAIT_FOR_SCAN_CODE_0
      PID_WIFI_SCAN_CODE_SUCCEEDED_0
      PID_WIFI_CONNECTION_SUCCEEDED_0
      PID_WIFI_CONNECTION_SUCCEEDED_1
      PID_WIFI_CONNECTION_FAILED_0
      PID_WIFI_CONNECTION_FAILED_1
      PID_WIFI_CONNECTION_FAILED_2
      PID_WIFI_EXIT_CONNECTION_MODE_0
      PID_WIFI_OFFLINE
      PID_WIFI_COMMUNICATION
      PID_WIFI_SCAN_CODE_IP_ERROR
      PID_WIFI_SCAN_CODE_INFO_ERROR
      PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS
      PID_WIFI_REQUEST_OPEN_CAMERA_FAIL
      PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS
      PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL
      PID_FACE_ENTRY_ADD_FACE
      PID_FACE_ENTRY_CANCLE_ADD_FACE
      PID_FACE_ENTRY_CONFIRM_LAST_FACE
      PID_FACE_ENTRY_UPDATE_FACE_ID
      PID_FACE_ENTRY_DELETE_FACE
      PID_FACE_ENTRY_GET_ALL_FACES
      PID_FACE_ENTRY_FIX_POSE
      PID_FACE_ENTRY_FIX_POSE_LEFT
      PID_FACE_ENTRY_FIX_POSE_RIGHT
      PID_FACE_ENTRY_FIX_POSE_UP
      PID_FACE_ENTRY_FIX_POSE_DOWN
      PID_FACE_ENTRY_FIX_DISTANCE_CLOSE
      PID_FACE_ENTRY_FIX_DISTANCE_NEAR
      PID_FACE_ENTRY_FIX_STABLE
      PID_FACE_ENTRY_MUTIPLE_FACES
      PID_FACE_ENTRY_NONE_FACES
      PID_FACE_ENTRY_TIMEOUT
      PID_FACE_ENTRY_FINISH
      PID_FACE_RECOGNITION_REQUEST
      PID_FACE_DEGREE_HEAD_TILT
      PID_FACE_RECGONITION_FINISH
      PID_FACE_RECGONITION_TIMEOUT
      PID_FACE_ALREADY_EXIST
      PID_CAMERA_START_PIC_TRANSFER
      PID_CAMERA_START_PHOTOS
      PID_CAMERA_TAKE_VIDEOS
      PID_CAMERA_VIDEO_RECORDING
      PID_SELF_CHECK_SUCCESS
      PID_SELF_CHECK_FAILED
      PID_BATTERY_CAPICITY_LOW
      PID_BATTERY_IN_CHARGING
      PID_FACE_ENTRY_START
      PID_BATTERY_CHARGE_COMPELETE
      PID_AI_PLEASE_ENABLE
      PID_AI_ENABLE_SUCCESS
      PID_AI_SERVICE_EXPIRED
      PID_TEST_HARDWARE_AUDIO
      PID_TEST_STAGE_ONE
      PID_TEST_STAGE_THREE
      PID_SOUND_EFFECT_READY
      PID_STOP_AUDIO_PLAY
      PID_FOLLOW_TAGS_START
      PID_FOLLOW_PERSON_START
      PID_FOLLOW_OBJECT_START
      PID_FOLLOW_TAGS_STOP
      PID_FOLLOW_PERSON_STOP
      PID_FOLLOW_OBJECT_STOP
      PID_GPS_SELF_CHECK_FAILED
      PID_LIDAR_SELF_CHECK_FAILED
      PID_TOF_SELF_CHECK_FAILED
      PID_ULTRASONIC_SELF_CHECK_FAILED
      PID_BMS_SELF_CHECK_FAILED
      PID_LED_SELF_CHECK_FAILED
      PID_TOUCH_SELF_CHECK_FAILED
      PID_UWB_SELF_CHECK_FAILED
      PID_AUDIO_SELF_CHECK_FAILED
      PID_MOTION_SELF_CHECK_FAILED
      PID_GPS_SWITCH_MODE_FAILED
      PID_LIDAR_SWITCH_MODE_FAILED
      PID_TOF_SWITCH_MODE_FAILED
      PID_ULTRASONIC_SWITCH_MODE_FAILED
      PID_BMS_SWITCH_MODE_FAILED
      PID_LED_SWITCH_MODE_FAILED
      PID_TOUCH_SWITCH_MODE_FAILED
      PID_UWB_SWITCH_MODE_FAILED
      PID_AUDIO_SWITCH_MODE_FAILED
      PID_MOTION_SWITCH_MODE_FAILED
      PID_SENSOR_SWITCH_MODE_FAILED
      PID_DEVICE_SWITCH_MODE_FAILED
      PID_BONE_POINT_START
      PID_BONE_POINT_DETECTING
      PID_BONE_POINT_BACK
      PID_BONE_POINT_LEFT
      PID_BONE_POINT_RIGHT
      PID_MODEL_LOADING_START
      PID_MODEL_LOADING_COMPLETE
      PID_WIFI_CONNECTED_UNKNOWN_NET
      PID_WIFI_FAILED_PLEASE_RETRY
      PID_FOLLOW_TAGS_LOST
      PID_SELF_CHECK_START
      PID_MODEL_VERSION_OLD
      PID_MODEL_VERSION_UPDATE_SUCCESS
      PID_MODEL_VERSION_UPDATE_FAIL
      PID_MOVE_FAILED
      PID_CAMERAR_SELF_CHECK_FAILED
      PID_POWER
      PID_PERCENT_0
      PID_PERCENT_5
      PID_PERCENT_20
      PID_PERCENT_30
    """

    __slots__ = [
        '_module_name',
        '_play_id',
    ]

    _fields_and_field_types = {
        'module_name': 'string',
        'play_id': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.module_name = kwargs.get('module_name', str())
        self.play_id = kwargs.get('play_id', int())

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
        if self.module_name != other.module_name:
            return False
        if self.play_id != other.play_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def module_name(self):
        """Message field 'module_name'."""
        return self._module_name

    @module_name.setter
    def module_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'module_name' field must be of type 'str'"
        self._module_name = value

    @property
    def play_id(self):
        """Message field 'play_id'."""
        return self._play_id

    @play_id.setter
    def play_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'play_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'play_id' field must be an unsigned integer in [0, 65535]"
        self._play_id = value

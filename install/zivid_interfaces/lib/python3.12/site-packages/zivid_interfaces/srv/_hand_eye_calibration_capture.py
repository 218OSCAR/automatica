# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:srv/HandEyeCalibrationCapture.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HandEyeCalibrationCapture_Request(type):
    """Metaclass of message 'HandEyeCalibrationCapture_Request'."""

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
            module = import_type_support('zivid_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'zivid_interfaces.srv.HandEyeCalibrationCapture_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hand_eye_calibration_capture__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hand_eye_calibration_capture__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hand_eye_calibration_capture__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hand_eye_calibration_capture__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hand_eye_calibration_capture__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HandEyeCalibrationCapture_Request(metaclass=Metaclass_HandEyeCalibrationCapture_Request):
    """Message class 'HandEyeCalibrationCapture_Request'."""

    __slots__ = [
        '_robot_pose',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'robot_pose': 'geometry_msgs/Pose',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.robot_pose = kwargs.get('robot_pose', Pose())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.robot_pose != other.robot_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_pose(self):
        """Message field 'robot_pose'."""
        return self._robot_pose

    @robot_pose.setter
    def robot_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'robot_pose' field must be a sub message of type 'Pose'"
        self._robot_pose = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HandEyeCalibrationCapture_Response(type):
    """Metaclass of message 'HandEyeCalibrationCapture_Response'."""

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
            module = import_type_support('zivid_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'zivid_interfaces.srv.HandEyeCalibrationCapture_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hand_eye_calibration_capture__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hand_eye_calibration_capture__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hand_eye_calibration_capture__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hand_eye_calibration_capture__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hand_eye_calibration_capture__response

            from zivid_interfaces.msg import DetectionResultCalibrationBoard
            if DetectionResultCalibrationBoard.__class__._TYPE_SUPPORT is None:
                DetectionResultCalibrationBoard.__class__.__import_type_support__()

            from zivid_interfaces.msg import DetectionResultFiducialMarkers
            if DetectionResultFiducialMarkers.__class__._TYPE_SUPPORT is None:
                DetectionResultFiducialMarkers.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAPTURE_HANDLE__DEFAULT': -1,
        }

    @property
    def CAPTURE_HANDLE__DEFAULT(cls):
        """Return default value for message field 'capture_handle'."""
        return -1


class HandEyeCalibrationCapture_Response(metaclass=Metaclass_HandEyeCalibrationCapture_Response):
    """Message class 'HandEyeCalibrationCapture_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_capture_handle',
        '_detection_result_calibration_board',
        '_detection_result_fiducial_markers',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'capture_handle': 'int32',
        'detection_result_calibration_board': 'zivid_interfaces/DetectionResultCalibrationBoard',
        'detection_result_fiducial_markers': 'zivid_interfaces/DetectionResultFiducialMarkers',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'msg'], 'DetectionResultCalibrationBoard'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'msg'], 'DetectionResultFiducialMarkers'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.capture_handle = kwargs.get(
            'capture_handle', HandEyeCalibrationCapture_Response.CAPTURE_HANDLE__DEFAULT)
        from zivid_interfaces.msg import DetectionResultCalibrationBoard
        self.detection_result_calibration_board = kwargs.get('detection_result_calibration_board', DetectionResultCalibrationBoard())
        from zivid_interfaces.msg import DetectionResultFiducialMarkers
        self.detection_result_fiducial_markers = kwargs.get('detection_result_fiducial_markers', DetectionResultFiducialMarkers())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.capture_handle != other.capture_handle:
            return False
        if self.detection_result_calibration_board != other.detection_result_calibration_board:
            return False
        if self.detection_result_fiducial_markers != other.detection_result_fiducial_markers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def capture_handle(self):
        """Message field 'capture_handle'."""
        return self._capture_handle

    @capture_handle.setter
    def capture_handle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'capture_handle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'capture_handle' field must be an integer in [-2147483648, 2147483647]"
        self._capture_handle = value

    @builtins.property
    def detection_result_calibration_board(self):
        """Message field 'detection_result_calibration_board'."""
        return self._detection_result_calibration_board

    @detection_result_calibration_board.setter
    def detection_result_calibration_board(self, value):
        if self._check_fields:
            from zivid_interfaces.msg import DetectionResultCalibrationBoard
            assert \
                isinstance(value, DetectionResultCalibrationBoard), \
                "The 'detection_result_calibration_board' field must be a sub message of type 'DetectionResultCalibrationBoard'"
        self._detection_result_calibration_board = value

    @builtins.property
    def detection_result_fiducial_markers(self):
        """Message field 'detection_result_fiducial_markers'."""
        return self._detection_result_fiducial_markers

    @detection_result_fiducial_markers.setter
    def detection_result_fiducial_markers(self, value):
        if self._check_fields:
            from zivid_interfaces.msg import DetectionResultFiducialMarkers
            assert \
                isinstance(value, DetectionResultFiducialMarkers), \
                "The 'detection_result_fiducial_markers' field must be a sub message of type 'DetectionResultFiducialMarkers'"
        self._detection_result_fiducial_markers = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HandEyeCalibrationCapture_Event(type):
    """Metaclass of message 'HandEyeCalibrationCapture_Event'."""

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
            module = import_type_support('zivid_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'zivid_interfaces.srv.HandEyeCalibrationCapture_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hand_eye_calibration_capture__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hand_eye_calibration_capture__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hand_eye_calibration_capture__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hand_eye_calibration_capture__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hand_eye_calibration_capture__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HandEyeCalibrationCapture_Event(metaclass=Metaclass_HandEyeCalibrationCapture_Event):
    """Message class 'HandEyeCalibrationCapture_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<zivid_interfaces/HandEyeCalibrationCapture_Request, 1>',
        'response': 'sequence<zivid_interfaces/HandEyeCalibrationCapture_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'srv'], 'HandEyeCalibrationCapture_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'srv'], 'HandEyeCalibrationCapture_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from zivid_interfaces.srv import HandEyeCalibrationCapture_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, HandEyeCalibrationCapture_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'HandEyeCalibrationCapture_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from zivid_interfaces.srv import HandEyeCalibrationCapture_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, HandEyeCalibrationCapture_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'HandEyeCalibrationCapture_Response'"
        self._response = value


class Metaclass_HandEyeCalibrationCapture(type):
    """Metaclass of service 'HandEyeCalibrationCapture'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('zivid_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'zivid_interfaces.srv.HandEyeCalibrationCapture')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__hand_eye_calibration_capture

            from zivid_interfaces.srv import _hand_eye_calibration_capture
            if _hand_eye_calibration_capture.Metaclass_HandEyeCalibrationCapture_Request._TYPE_SUPPORT is None:
                _hand_eye_calibration_capture.Metaclass_HandEyeCalibrationCapture_Request.__import_type_support__()
            if _hand_eye_calibration_capture.Metaclass_HandEyeCalibrationCapture_Response._TYPE_SUPPORT is None:
                _hand_eye_calibration_capture.Metaclass_HandEyeCalibrationCapture_Response.__import_type_support__()
            if _hand_eye_calibration_capture.Metaclass_HandEyeCalibrationCapture_Event._TYPE_SUPPORT is None:
                _hand_eye_calibration_capture.Metaclass_HandEyeCalibrationCapture_Event.__import_type_support__()


class HandEyeCalibrationCapture(metaclass=Metaclass_HandEyeCalibrationCapture):
    from zivid_interfaces.srv._hand_eye_calibration_capture import HandEyeCalibrationCapture_Request as Request
    from zivid_interfaces.srv._hand_eye_calibration_capture import HandEyeCalibrationCapture_Response as Response
    from zivid_interfaces.srv._hand_eye_calibration_capture import HandEyeCalibrationCapture_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectionResultCalibrationBoard(type):
    """Metaclass of message 'DetectionResultCalibrationBoard'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_NOT_SET': 0,
        'STATUS_OK': 1,
        'STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED': 2,
        'STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED': 3,
        'STATUS_BOARD_DETECTION_FAILED': 4,
        'STATUS_INSUFFICIENT_3D_QUALITY': 5,
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
                'zivid_interfaces.msg.DetectionResultCalibrationBoard')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection_result_calibration_board
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection_result_calibration_board
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection_result_calibration_board
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection_result_calibration_board
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection_result_calibration_board

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_NOT_SET': cls.__constants['STATUS_NOT_SET'],
            'STATUS_OK': cls.__constants['STATUS_OK'],
            'STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED': cls.__constants['STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED'],
            'STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED': cls.__constants['STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED'],
            'STATUS_BOARD_DETECTION_FAILED': cls.__constants['STATUS_BOARD_DETECTION_FAILED'],
            'STATUS_INSUFFICIENT_3D_QUALITY': cls.__constants['STATUS_INSUFFICIENT_3D_QUALITY'],
        }

    @property
    def STATUS_NOT_SET(self):
        """Message constant 'STATUS_NOT_SET'."""
        return Metaclass_DetectionResultCalibrationBoard.__constants['STATUS_NOT_SET']

    @property
    def STATUS_OK(self):
        """Message constant 'STATUS_OK'."""
        return Metaclass_DetectionResultCalibrationBoard.__constants['STATUS_OK']

    @property
    def STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED(self):
        """Message constant 'STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED'."""
        return Metaclass_DetectionResultCalibrationBoard.__constants['STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED']

    @property
    def STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED(self):
        """Message constant 'STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED'."""
        return Metaclass_DetectionResultCalibrationBoard.__constants['STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED']

    @property
    def STATUS_BOARD_DETECTION_FAILED(self):
        """Message constant 'STATUS_BOARD_DETECTION_FAILED'."""
        return Metaclass_DetectionResultCalibrationBoard.__constants['STATUS_BOARD_DETECTION_FAILED']

    @property
    def STATUS_INSUFFICIENT_3D_QUALITY(self):
        """Message constant 'STATUS_INSUFFICIENT_3D_QUALITY'."""
        return Metaclass_DetectionResultCalibrationBoard.__constants['STATUS_INSUFFICIENT_3D_QUALITY']


class DetectionResultCalibrationBoard(metaclass=Metaclass_DetectionResultCalibrationBoard):
    """
    Message class 'DetectionResultCalibrationBoard'.

    Constants:
      STATUS_NOT_SET
      STATUS_OK
      STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED
      STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED
      STATUS_BOARD_DETECTION_FAILED
      STATUS_INSUFFICIENT_3D_QUALITY
    """

    __slots__ = [
        '_status',
        '_status_description',
        '_centroid',
        '_pose',
        '_feature_points',
        '_feature_points_2d',
        '_feature_points_width',
        '_feature_points_height',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
        'status_description': 'string',
        'centroid': 'geometry_msgs/Point',
        'pose': 'geometry_msgs/Pose',
        'feature_points': 'sequence<geometry_msgs/Point>',
        'feature_points_2d': 'sequence<geometry_msgs/Point>',
        'feature_points_width': 'uint64',
        'feature_points_height': 'uint64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.status = kwargs.get('status', int())
        self.status_description = kwargs.get('status_description', str())
        from geometry_msgs.msg import Point
        self.centroid = kwargs.get('centroid', Point())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.feature_points = kwargs.get('feature_points', [])
        self.feature_points_2d = kwargs.get('feature_points_2d', [])
        self.feature_points_width = kwargs.get('feature_points_width', int())
        self.feature_points_height = kwargs.get('feature_points_height', int())

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
        if self.status != other.status:
            return False
        if self.status_description != other.status_description:
            return False
        if self.centroid != other.centroid:
            return False
        if self.pose != other.pose:
            return False
        if self.feature_points != other.feature_points:
            return False
        if self.feature_points_2d != other.feature_points_2d:
            return False
        if self.feature_points_width != other.feature_points_width:
            return False
        if self.feature_points_height != other.feature_points_height:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def status_description(self):
        """Message field 'status_description'."""
        return self._status_description

    @status_description.setter
    def status_description(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'status_description' field must be of type 'str'"
        self._status_description = value

    @builtins.property
    def centroid(self):
        """Message field 'centroid'."""
        return self._centroid

    @centroid.setter
    def centroid(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'centroid' field must be a sub message of type 'Point'"
        self._centroid = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def feature_points(self):
        """Message field 'feature_points'."""
        return self._feature_points

    @feature_points.setter
    def feature_points(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'feature_points' field must be a set or sequence and each value of type 'Point'"
        self._feature_points = value

    @builtins.property
    def feature_points_2d(self):
        """Message field 'feature_points_2d'."""
        return self._feature_points_2d

    @feature_points_2d.setter
    def feature_points_2d(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'feature_points_2d' field must be a set or sequence and each value of type 'Point'"
        self._feature_points_2d = value

    @builtins.property
    def feature_points_width(self):
        """Message field 'feature_points_width'."""
        return self._feature_points_width

    @feature_points_width.setter
    def feature_points_width(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'feature_points_width' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'feature_points_width' field must be an unsigned integer in [0, 18446744073709551615]"
        self._feature_points_width = value

    @builtins.property
    def feature_points_height(self):
        """Message field 'feature_points_height'."""
        return self._feature_points_height

    @feature_points_height.setter
    def feature_points_height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'feature_points_height' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'feature_points_height' field must be an unsigned integer in [0, 18446744073709551615]"
        self._feature_points_height = value

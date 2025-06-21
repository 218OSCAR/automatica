# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:srv/HandEyeCalibrationCalibrate.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'capture_handles'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HandEyeCalibrationCalibrate_Request(type):
    """Metaclass of message 'HandEyeCalibrationCalibrate_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EYE_TO_HAND': 1,
        'EYE_IN_HAND': 2,
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
                'zivid_interfaces.srv.HandEyeCalibrationCalibrate_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hand_eye_calibration_calibrate__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hand_eye_calibration_calibrate__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hand_eye_calibration_calibrate__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hand_eye_calibration_calibrate__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hand_eye_calibration_calibrate__request

            from zivid_interfaces.msg import FixedPlacementOfCalibrationObjects
            if FixedPlacementOfCalibrationObjects.__class__._TYPE_SUPPORT is None:
                FixedPlacementOfCalibrationObjects.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EYE_TO_HAND': cls.__constants['EYE_TO_HAND'],
            'EYE_IN_HAND': cls.__constants['EYE_IN_HAND'],
        }

    @property
    def EYE_TO_HAND(self):
        """Message constant 'EYE_TO_HAND'."""
        return Metaclass_HandEyeCalibrationCalibrate_Request.__constants['EYE_TO_HAND']

    @property
    def EYE_IN_HAND(self):
        """Message constant 'EYE_IN_HAND'."""
        return Metaclass_HandEyeCalibrationCalibrate_Request.__constants['EYE_IN_HAND']


class HandEyeCalibrationCalibrate_Request(metaclass=Metaclass_HandEyeCalibrationCalibrate_Request):
    """
    Message class 'HandEyeCalibrationCalibrate_Request'.

    Constants:
      EYE_TO_HAND
      EYE_IN_HAND
    """

    __slots__ = [
        '_configuration',
        '_capture_handles',
        '_fixed_objects',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'configuration': 'uint8',
        'capture_handles': 'sequence<int32>',
        'fixed_objects': 'zivid_interfaces/FixedPlacementOfCalibrationObjects',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'msg'], 'FixedPlacementOfCalibrationObjects'),  # noqa: E501
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
        self.configuration = kwargs.get('configuration', int())
        self.capture_handles = array.array('i', kwargs.get('capture_handles', []))
        from zivid_interfaces.msg import FixedPlacementOfCalibrationObjects
        self.fixed_objects = kwargs.get('fixed_objects', FixedPlacementOfCalibrationObjects())

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
        if self.configuration != other.configuration:
            return False
        if self.capture_handles != other.capture_handles:
            return False
        if self.fixed_objects != other.fixed_objects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def configuration(self):
        """Message field 'configuration'."""
        return self._configuration

    @configuration.setter
    def configuration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'configuration' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'configuration' field must be an unsigned integer in [0, 255]"
        self._configuration = value

    @builtins.property
    def capture_handles(self):
        """Message field 'capture_handles'."""
        return self._capture_handles

    @capture_handles.setter
    def capture_handles(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'capture_handles' array.array() must have the type code of 'i'"
                self._capture_handles = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'capture_handles' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._capture_handles = array.array('i', value)

    @builtins.property
    def fixed_objects(self):
        """Message field 'fixed_objects'."""
        return self._fixed_objects

    @fixed_objects.setter
    def fixed_objects(self, value):
        if self._check_fields:
            from zivid_interfaces.msg import FixedPlacementOfCalibrationObjects
            assert \
                isinstance(value, FixedPlacementOfCalibrationObjects), \
                "The 'fixed_objects' field must be a sub message of type 'FixedPlacementOfCalibrationObjects'"
        self._fixed_objects = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HandEyeCalibrationCalibrate_Response(type):
    """Metaclass of message 'HandEyeCalibrationCalibrate_Response'."""

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
                'zivid_interfaces.srv.HandEyeCalibrationCalibrate_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hand_eye_calibration_calibrate__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hand_eye_calibration_calibrate__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hand_eye_calibration_calibrate__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hand_eye_calibration_calibrate__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hand_eye_calibration_calibrate__response

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

            from zivid_interfaces.msg import HandEyeCalibrationResidual
            if HandEyeCalibrationResidual.__class__._TYPE_SUPPORT is None:
                HandEyeCalibrationResidual.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HandEyeCalibrationCalibrate_Response(metaclass=Metaclass_HandEyeCalibrationCalibrate_Response):
    """Message class 'HandEyeCalibrationCalibrate_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_transform',
        '_residuals',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'transform': 'geometry_msgs/Transform',
        'residuals': 'sequence<zivid_interfaces/HandEyeCalibrationResidual>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'msg'], 'HandEyeCalibrationResidual')),  # noqa: E501
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
        from geometry_msgs.msg import Transform
        self.transform = kwargs.get('transform', Transform())
        self.residuals = kwargs.get('residuals', [])

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
        if self.transform != other.transform:
            return False
        if self.residuals != other.residuals:
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
    def transform(self):
        """Message field 'transform'."""
        return self._transform

    @transform.setter
    def transform(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'transform' field must be a sub message of type 'Transform'"
        self._transform = value

    @builtins.property
    def residuals(self):
        """Message field 'residuals'."""
        return self._residuals

    @residuals.setter
    def residuals(self, value):
        if self._check_fields:
            from zivid_interfaces.msg import HandEyeCalibrationResidual
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
                 all(isinstance(v, HandEyeCalibrationResidual) for v in value) and
                 True), \
                "The 'residuals' field must be a set or sequence and each value of type 'HandEyeCalibrationResidual'"
        self._residuals = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HandEyeCalibrationCalibrate_Event(type):
    """Metaclass of message 'HandEyeCalibrationCalibrate_Event'."""

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
                'zivid_interfaces.srv.HandEyeCalibrationCalibrate_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hand_eye_calibration_calibrate__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hand_eye_calibration_calibrate__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hand_eye_calibration_calibrate__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hand_eye_calibration_calibrate__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hand_eye_calibration_calibrate__event

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


class HandEyeCalibrationCalibrate_Event(metaclass=Metaclass_HandEyeCalibrationCalibrate_Event):
    """Message class 'HandEyeCalibrationCalibrate_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<zivid_interfaces/HandEyeCalibrationCalibrate_Request, 1>',
        'response': 'sequence<zivid_interfaces/HandEyeCalibrationCalibrate_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'srv'], 'HandEyeCalibrationCalibrate_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'srv'], 'HandEyeCalibrationCalibrate_Response'), 1),  # noqa: E501
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
            from zivid_interfaces.srv import HandEyeCalibrationCalibrate_Request
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
                 all(isinstance(v, HandEyeCalibrationCalibrate_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'HandEyeCalibrationCalibrate_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from zivid_interfaces.srv import HandEyeCalibrationCalibrate_Response
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
                 all(isinstance(v, HandEyeCalibrationCalibrate_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'HandEyeCalibrationCalibrate_Response'"
        self._response = value


class Metaclass_HandEyeCalibrationCalibrate(type):
    """Metaclass of service 'HandEyeCalibrationCalibrate'."""

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
                'zivid_interfaces.srv.HandEyeCalibrationCalibrate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__hand_eye_calibration_calibrate

            from zivid_interfaces.srv import _hand_eye_calibration_calibrate
            if _hand_eye_calibration_calibrate.Metaclass_HandEyeCalibrationCalibrate_Request._TYPE_SUPPORT is None:
                _hand_eye_calibration_calibrate.Metaclass_HandEyeCalibrationCalibrate_Request.__import_type_support__()
            if _hand_eye_calibration_calibrate.Metaclass_HandEyeCalibrationCalibrate_Response._TYPE_SUPPORT is None:
                _hand_eye_calibration_calibrate.Metaclass_HandEyeCalibrationCalibrate_Response.__import_type_support__()
            if _hand_eye_calibration_calibrate.Metaclass_HandEyeCalibrationCalibrate_Event._TYPE_SUPPORT is None:
                _hand_eye_calibration_calibrate.Metaclass_HandEyeCalibrationCalibrate_Event.__import_type_support__()


class HandEyeCalibrationCalibrate(metaclass=Metaclass_HandEyeCalibrationCalibrate):
    from zivid_interfaces.srv._hand_eye_calibration_calibrate import HandEyeCalibrationCalibrate_Request as Request
    from zivid_interfaces.srv._hand_eye_calibration_calibrate import HandEyeCalibrationCalibrate_Response as Response
    from zivid_interfaces.srv._hand_eye_calibration_calibrate import HandEyeCalibrationCalibrate_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

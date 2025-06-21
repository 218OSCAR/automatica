# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:srv/InfieldCorrectionCapture.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InfieldCorrectionCapture_Request(type):
    """Metaclass of message 'InfieldCorrectionCapture_Request'."""

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
                'zivid_interfaces.srv.InfieldCorrectionCapture_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__infield_correction_capture__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__infield_correction_capture__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__infield_correction_capture__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__infield_correction_capture__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__infield_correction_capture__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InfieldCorrectionCapture_Request(metaclass=Metaclass_InfieldCorrectionCapture_Request):
    """Message class 'InfieldCorrectionCapture_Request'."""

    __slots__ = [
        '_check_fields',
    ]

    _fields_and_field_types = {
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_InfieldCorrectionCapture_Response(type):
    """Metaclass of message 'InfieldCorrectionCapture_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_NOT_SET': 0,
        'STATUS_OK': 1,
        'STATUS_DETECTION_FAILED': 2,
        'STATUS_INVALID_CAPTURE_METHOD': 3,
        'STATUS_INVALID_ALIGNMENT': 4,
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
                'zivid_interfaces.srv.InfieldCorrectionCapture_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__infield_correction_capture__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__infield_correction_capture__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__infield_correction_capture__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__infield_correction_capture__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__infield_correction_capture__response

            from zivid_interfaces.msg import DetectionResultCalibrationBoard
            if DetectionResultCalibrationBoard.__class__._TYPE_SUPPORT is None:
                DetectionResultCalibrationBoard.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_NOT_SET': cls.__constants['STATUS_NOT_SET'],
            'STATUS_OK': cls.__constants['STATUS_OK'],
            'STATUS_DETECTION_FAILED': cls.__constants['STATUS_DETECTION_FAILED'],
            'STATUS_INVALID_CAPTURE_METHOD': cls.__constants['STATUS_INVALID_CAPTURE_METHOD'],
            'STATUS_INVALID_ALIGNMENT': cls.__constants['STATUS_INVALID_ALIGNMENT'],
        }

    @property
    def STATUS_NOT_SET(self):
        """Message constant 'STATUS_NOT_SET'."""
        return Metaclass_InfieldCorrectionCapture_Response.__constants['STATUS_NOT_SET']

    @property
    def STATUS_OK(self):
        """Message constant 'STATUS_OK'."""
        return Metaclass_InfieldCorrectionCapture_Response.__constants['STATUS_OK']

    @property
    def STATUS_DETECTION_FAILED(self):
        """Message constant 'STATUS_DETECTION_FAILED'."""
        return Metaclass_InfieldCorrectionCapture_Response.__constants['STATUS_DETECTION_FAILED']

    @property
    def STATUS_INVALID_CAPTURE_METHOD(self):
        """Message constant 'STATUS_INVALID_CAPTURE_METHOD'."""
        return Metaclass_InfieldCorrectionCapture_Response.__constants['STATUS_INVALID_CAPTURE_METHOD']

    @property
    def STATUS_INVALID_ALIGNMENT(self):
        """Message constant 'STATUS_INVALID_ALIGNMENT'."""
        return Metaclass_InfieldCorrectionCapture_Response.__constants['STATUS_INVALID_ALIGNMENT']


class InfieldCorrectionCapture_Response(metaclass=Metaclass_InfieldCorrectionCapture_Response):
    """
    Message class 'InfieldCorrectionCapture_Response'.

    Constants:
      STATUS_NOT_SET
      STATUS_OK
      STATUS_DETECTION_FAILED
      STATUS_INVALID_CAPTURE_METHOD
      STATUS_INVALID_ALIGNMENT
    """

    __slots__ = [
        '_success',
        '_message',
        '_status',
        '_number_of_captures',
        '_detection_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'status': 'uint8',
        'number_of_captures': 'int32',
        'detection_result': 'zivid_interfaces/DetectionResultCalibrationBoard',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'msg'], 'DetectionResultCalibrationBoard'),  # noqa: E501
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
        self.status = kwargs.get('status', int())
        self.number_of_captures = kwargs.get('number_of_captures', int())
        from zivid_interfaces.msg import DetectionResultCalibrationBoard
        self.detection_result = kwargs.get('detection_result', DetectionResultCalibrationBoard())

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
        if self.status != other.status:
            return False
        if self.number_of_captures != other.number_of_captures:
            return False
        if self.detection_result != other.detection_result:
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
    def number_of_captures(self):
        """Message field 'number_of_captures'."""
        return self._number_of_captures

    @number_of_captures.setter
    def number_of_captures(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'number_of_captures' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number_of_captures' field must be an integer in [-2147483648, 2147483647]"
        self._number_of_captures = value

    @builtins.property
    def detection_result(self):
        """Message field 'detection_result'."""
        return self._detection_result

    @detection_result.setter
    def detection_result(self, value):
        if self._check_fields:
            from zivid_interfaces.msg import DetectionResultCalibrationBoard
            assert \
                isinstance(value, DetectionResultCalibrationBoard), \
                "The 'detection_result' field must be a sub message of type 'DetectionResultCalibrationBoard'"
        self._detection_result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InfieldCorrectionCapture_Event(type):
    """Metaclass of message 'InfieldCorrectionCapture_Event'."""

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
                'zivid_interfaces.srv.InfieldCorrectionCapture_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__infield_correction_capture__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__infield_correction_capture__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__infield_correction_capture__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__infield_correction_capture__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__infield_correction_capture__event

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


class InfieldCorrectionCapture_Event(metaclass=Metaclass_InfieldCorrectionCapture_Event):
    """Message class 'InfieldCorrectionCapture_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<zivid_interfaces/InfieldCorrectionCapture_Request, 1>',
        'response': 'sequence<zivid_interfaces/InfieldCorrectionCapture_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'srv'], 'InfieldCorrectionCapture_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'srv'], 'InfieldCorrectionCapture_Response'), 1),  # noqa: E501
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
            from zivid_interfaces.srv import InfieldCorrectionCapture_Request
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
                 all(isinstance(v, InfieldCorrectionCapture_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'InfieldCorrectionCapture_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from zivid_interfaces.srv import InfieldCorrectionCapture_Response
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
                 all(isinstance(v, InfieldCorrectionCapture_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'InfieldCorrectionCapture_Response'"
        self._response = value


class Metaclass_InfieldCorrectionCapture(type):
    """Metaclass of service 'InfieldCorrectionCapture'."""

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
                'zivid_interfaces.srv.InfieldCorrectionCapture')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__infield_correction_capture

            from zivid_interfaces.srv import _infield_correction_capture
            if _infield_correction_capture.Metaclass_InfieldCorrectionCapture_Request._TYPE_SUPPORT is None:
                _infield_correction_capture.Metaclass_InfieldCorrectionCapture_Request.__import_type_support__()
            if _infield_correction_capture.Metaclass_InfieldCorrectionCapture_Response._TYPE_SUPPORT is None:
                _infield_correction_capture.Metaclass_InfieldCorrectionCapture_Response.__import_type_support__()
            if _infield_correction_capture.Metaclass_InfieldCorrectionCapture_Event._TYPE_SUPPORT is None:
                _infield_correction_capture.Metaclass_InfieldCorrectionCapture_Event.__import_type_support__()


class InfieldCorrectionCapture(metaclass=Metaclass_InfieldCorrectionCapture):
    from zivid_interfaces.srv._infield_correction_capture import InfieldCorrectionCapture_Request as Request
    from zivid_interfaces.srv._infield_correction_capture import InfieldCorrectionCapture_Response as Response
    from zivid_interfaces.srv._infield_correction_capture import InfieldCorrectionCapture_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

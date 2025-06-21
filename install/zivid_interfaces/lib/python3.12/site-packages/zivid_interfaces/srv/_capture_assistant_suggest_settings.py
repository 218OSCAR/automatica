# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:srv/CaptureAssistantSuggestSettings.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CaptureAssistantSuggestSettings_Request(type):
    """Metaclass of message 'CaptureAssistantSuggestSettings_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'AMBIENT_LIGHT_FREQUENCY_NONE': 0,
        'AMBIENT_LIGHT_FREQUENCY_50HZ': 1,
        'AMBIENT_LIGHT_FREQUENCY_60HZ': 2,
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
                'zivid_interfaces.srv.CaptureAssistantSuggestSettings_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capture_assistant_suggest_settings__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capture_assistant_suggest_settings__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capture_assistant_suggest_settings__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capture_assistant_suggest_settings__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capture_assistant_suggest_settings__request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'AMBIENT_LIGHT_FREQUENCY_NONE': cls.__constants['AMBIENT_LIGHT_FREQUENCY_NONE'],
            'AMBIENT_LIGHT_FREQUENCY_50HZ': cls.__constants['AMBIENT_LIGHT_FREQUENCY_50HZ'],
            'AMBIENT_LIGHT_FREQUENCY_60HZ': cls.__constants['AMBIENT_LIGHT_FREQUENCY_60HZ'],
        }

    @property
    def AMBIENT_LIGHT_FREQUENCY_NONE(self):
        """Message constant 'AMBIENT_LIGHT_FREQUENCY_NONE'."""
        return Metaclass_CaptureAssistantSuggestSettings_Request.__constants['AMBIENT_LIGHT_FREQUENCY_NONE']

    @property
    def AMBIENT_LIGHT_FREQUENCY_50HZ(self):
        """Message constant 'AMBIENT_LIGHT_FREQUENCY_50HZ'."""
        return Metaclass_CaptureAssistantSuggestSettings_Request.__constants['AMBIENT_LIGHT_FREQUENCY_50HZ']

    @property
    def AMBIENT_LIGHT_FREQUENCY_60HZ(self):
        """Message constant 'AMBIENT_LIGHT_FREQUENCY_60HZ'."""
        return Metaclass_CaptureAssistantSuggestSettings_Request.__constants['AMBIENT_LIGHT_FREQUENCY_60HZ']


class CaptureAssistantSuggestSettings_Request(metaclass=Metaclass_CaptureAssistantSuggestSettings_Request):
    """
    Message class 'CaptureAssistantSuggestSettings_Request'.

    Constants:
      AMBIENT_LIGHT_FREQUENCY_NONE
      AMBIENT_LIGHT_FREQUENCY_50HZ
      AMBIENT_LIGHT_FREQUENCY_60HZ
    """

    __slots__ = [
        '_max_capture_time',
        '_ambient_light_frequency',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'max_capture_time': 'builtin_interfaces/Duration',
        'ambient_light_frequency': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        from builtin_interfaces.msg import Duration
        self.max_capture_time = kwargs.get('max_capture_time', Duration())
        self.ambient_light_frequency = kwargs.get('ambient_light_frequency', int())

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
        if self.max_capture_time != other.max_capture_time:
            return False
        if self.ambient_light_frequency != other.ambient_light_frequency:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def max_capture_time(self):
        """Message field 'max_capture_time'."""
        return self._max_capture_time

    @max_capture_time.setter
    def max_capture_time(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'max_capture_time' field must be a sub message of type 'Duration'"
        self._max_capture_time = value

    @builtins.property
    def ambient_light_frequency(self):
        """Message field 'ambient_light_frequency'."""
        return self._ambient_light_frequency

    @ambient_light_frequency.setter
    def ambient_light_frequency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ambient_light_frequency' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ambient_light_frequency' field must be an unsigned integer in [0, 255]"
        self._ambient_light_frequency = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CaptureAssistantSuggestSettings_Response(type):
    """Metaclass of message 'CaptureAssistantSuggestSettings_Response'."""

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
                'zivid_interfaces.srv.CaptureAssistantSuggestSettings_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capture_assistant_suggest_settings__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capture_assistant_suggest_settings__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capture_assistant_suggest_settings__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capture_assistant_suggest_settings__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capture_assistant_suggest_settings__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CaptureAssistantSuggestSettings_Response(metaclass=Metaclass_CaptureAssistantSuggestSettings_Response):
    """Message class 'CaptureAssistantSuggestSettings_Response'."""

    __slots__ = [
        '_suggested_settings',
        '_success',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'suggested_settings': 'string',
        'success': 'boolean',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.suggested_settings = kwargs.get('suggested_settings', str())
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.suggested_settings != other.suggested_settings:
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def suggested_settings(self):
        """Message field 'suggested_settings'."""
        return self._suggested_settings

    @suggested_settings.setter
    def suggested_settings(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'suggested_settings' field must be of type 'str'"
        self._suggested_settings = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CaptureAssistantSuggestSettings_Event(type):
    """Metaclass of message 'CaptureAssistantSuggestSettings_Event'."""

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
                'zivid_interfaces.srv.CaptureAssistantSuggestSettings_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capture_assistant_suggest_settings__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capture_assistant_suggest_settings__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capture_assistant_suggest_settings__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capture_assistant_suggest_settings__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capture_assistant_suggest_settings__event

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


class CaptureAssistantSuggestSettings_Event(metaclass=Metaclass_CaptureAssistantSuggestSettings_Event):
    """Message class 'CaptureAssistantSuggestSettings_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<zivid_interfaces/CaptureAssistantSuggestSettings_Request, 1>',
        'response': 'sequence<zivid_interfaces/CaptureAssistantSuggestSettings_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'srv'], 'CaptureAssistantSuggestSettings_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'srv'], 'CaptureAssistantSuggestSettings_Response'), 1),  # noqa: E501
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
            from zivid_interfaces.srv import CaptureAssistantSuggestSettings_Request
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
                 all(isinstance(v, CaptureAssistantSuggestSettings_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'CaptureAssistantSuggestSettings_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from zivid_interfaces.srv import CaptureAssistantSuggestSettings_Response
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
                 all(isinstance(v, CaptureAssistantSuggestSettings_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'CaptureAssistantSuggestSettings_Response'"
        self._response = value


class Metaclass_CaptureAssistantSuggestSettings(type):
    """Metaclass of service 'CaptureAssistantSuggestSettings'."""

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
                'zivid_interfaces.srv.CaptureAssistantSuggestSettings')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__capture_assistant_suggest_settings

            from zivid_interfaces.srv import _capture_assistant_suggest_settings
            if _capture_assistant_suggest_settings.Metaclass_CaptureAssistantSuggestSettings_Request._TYPE_SUPPORT is None:
                _capture_assistant_suggest_settings.Metaclass_CaptureAssistantSuggestSettings_Request.__import_type_support__()
            if _capture_assistant_suggest_settings.Metaclass_CaptureAssistantSuggestSettings_Response._TYPE_SUPPORT is None:
                _capture_assistant_suggest_settings.Metaclass_CaptureAssistantSuggestSettings_Response.__import_type_support__()
            if _capture_assistant_suggest_settings.Metaclass_CaptureAssistantSuggestSettings_Event._TYPE_SUPPORT is None:
                _capture_assistant_suggest_settings.Metaclass_CaptureAssistantSuggestSettings_Event.__import_type_support__()


class CaptureAssistantSuggestSettings(metaclass=Metaclass_CaptureAssistantSuggestSettings):
    from zivid_interfaces.srv._capture_assistant_suggest_settings import CaptureAssistantSuggestSettings_Request as Request
    from zivid_interfaces.srv._capture_assistant_suggest_settings import CaptureAssistantSuggestSettings_Response as Response
    from zivid_interfaces.srv._capture_assistant_suggest_settings import CaptureAssistantSuggestSettings_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

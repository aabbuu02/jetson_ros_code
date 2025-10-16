# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/LogCleaning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LogCleaning_Request(type):
    """Metaclass of message 'LogCleaning_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'USE_TIME_AND_SIZE': 0,
        'BASED_ON_TIME': 1,
        'BASED_ON_SIZE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('anscer_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anscer_msgs.srv.LogCleaning_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__log_cleaning__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__log_cleaning__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__log_cleaning__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__log_cleaning__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__log_cleaning__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'USE_TIME_AND_SIZE': cls.__constants['USE_TIME_AND_SIZE'],
            'BASED_ON_TIME': cls.__constants['BASED_ON_TIME'],
            'BASED_ON_SIZE': cls.__constants['BASED_ON_SIZE'],
        }

    @property
    def USE_TIME_AND_SIZE(self):
        """Message constant 'USE_TIME_AND_SIZE'."""
        return Metaclass_LogCleaning_Request.__constants['USE_TIME_AND_SIZE']

    @property
    def BASED_ON_TIME(self):
        """Message constant 'BASED_ON_TIME'."""
        return Metaclass_LogCleaning_Request.__constants['BASED_ON_TIME']

    @property
    def BASED_ON_SIZE(self):
        """Message constant 'BASED_ON_SIZE'."""
        return Metaclass_LogCleaning_Request.__constants['BASED_ON_SIZE']


class LogCleaning_Request(metaclass=Metaclass_LogCleaning_Request):
    """
    Message class 'LogCleaning_Request'.

    Constants:
      USE_TIME_AND_SIZE
      BASED_ON_TIME
      BASED_ON_SIZE
    """

    __slots__ = [
        '_cleaning_hour',
        '_cleaning_size',
        '_mode',
    ]

    _fields_and_field_types = {
        'cleaning_hour': 'float',
        'cleaning_size': 'float',
        'mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cleaning_hour = kwargs.get('cleaning_hour', float())
        self.cleaning_size = kwargs.get('cleaning_size', float())
        self.mode = kwargs.get('mode', int())

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
        if self.cleaning_hour != other.cleaning_hour:
            return False
        if self.cleaning_size != other.cleaning_size:
            return False
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cleaning_hour(self):
        """Message field 'cleaning_hour'."""
        return self._cleaning_hour

    @cleaning_hour.setter
    def cleaning_hour(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cleaning_hour' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cleaning_hour' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cleaning_hour = value

    @builtins.property
    def cleaning_size(self):
        """Message field 'cleaning_size'."""
        return self._cleaning_size

    @cleaning_size.setter
    def cleaning_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cleaning_size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cleaning_size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cleaning_size = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LogCleaning_Response(type):
    """Metaclass of message 'LogCleaning_Response'."""

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
            module = import_type_support('anscer_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anscer_msgs.srv.LogCleaning_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__log_cleaning__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__log_cleaning__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__log_cleaning__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__log_cleaning__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__log_cleaning__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LogCleaning_Response(metaclass=Metaclass_LogCleaning_Response):
    """Message class 'LogCleaning_Response'."""

    __slots__ = [
        '_message',
    ]

    _fields_and_field_types = {
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_LogCleaning(type):
    """Metaclass of service 'LogCleaning'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('anscer_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anscer_msgs.srv.LogCleaning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__log_cleaning

            from anscer_msgs.srv import _log_cleaning
            if _log_cleaning.Metaclass_LogCleaning_Request._TYPE_SUPPORT is None:
                _log_cleaning.Metaclass_LogCleaning_Request.__import_type_support__()
            if _log_cleaning.Metaclass_LogCleaning_Response._TYPE_SUPPORT is None:
                _log_cleaning.Metaclass_LogCleaning_Response.__import_type_support__()


class LogCleaning(metaclass=Metaclass_LogCleaning):
    from anscer_msgs.srv._log_cleaning import LogCleaning_Request as Request
    from anscer_msgs.srv._log_cleaning import LogCleaning_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

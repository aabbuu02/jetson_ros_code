# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:msg/Feedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Feedback(type):
    """Metaclass of message 'Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'IDLE': 0,
        'ACTIVE': 1,
        'SUCCESS': 2,
        'ABORTED': 3,
        'PAUSED': 4,
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
                'anscer_msgs.msg.Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__feedback

            from anscer_msgs.msg import ChargeInfo
            if ChargeInfo.__class__._TYPE_SUPPORT is None:
                ChargeInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'IDLE': cls.__constants['IDLE'],
            'ACTIVE': cls.__constants['ACTIVE'],
            'SUCCESS': cls.__constants['SUCCESS'],
            'ABORTED': cls.__constants['ABORTED'],
            'PAUSED': cls.__constants['PAUSED'],
        }

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_Feedback.__constants['IDLE']

    @property
    def ACTIVE(self):
        """Message constant 'ACTIVE'."""
        return Metaclass_Feedback.__constants['ACTIVE']

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_Feedback.__constants['SUCCESS']

    @property
    def ABORTED(self):
        """Message constant 'ABORTED'."""
        return Metaclass_Feedback.__constants['ABORTED']

    @property
    def PAUSED(self):
        """Message constant 'PAUSED'."""
        return Metaclass_Feedback.__constants['PAUSED']


class Feedback(metaclass=Metaclass_Feedback):
    """
    Message class 'Feedback'.

    Constants:
      IDLE
      ACTIVE
      SUCCESS
      ABORTED
      PAUSED
    """

    __slots__ = [
        '_index',
        '_mission_id',
        '_number',
        '_status',
        '_charge_info',
        '_completion_percentage',
        '_time_elapsed',
        '_priority_level',
    ]

    _fields_and_field_types = {
        'index': 'string',
        'mission_id': 'string',
        'number': 'int16',
        'status': 'int16',
        'charge_info': 'anscer_msgs/ChargeInfo',
        'completion_percentage': 'float',
        'time_elapsed': 'int32',
        'priority_level': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['anscer_msgs', 'msg'], 'ChargeInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.index = kwargs.get('index', str())
        self.mission_id = kwargs.get('mission_id', str())
        self.number = kwargs.get('number', int())
        self.status = kwargs.get('status', int())
        from anscer_msgs.msg import ChargeInfo
        self.charge_info = kwargs.get('charge_info', ChargeInfo())
        self.completion_percentage = kwargs.get('completion_percentage', float())
        self.time_elapsed = kwargs.get('time_elapsed', int())
        self.priority_level = kwargs.get('priority_level', int())

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
        if self.index != other.index:
            return False
        if self.mission_id != other.mission_id:
            return False
        if self.number != other.number:
            return False
        if self.status != other.status:
            return False
        if self.charge_info != other.charge_info:
            return False
        if self.completion_percentage != other.completion_percentage:
            return False
        if self.time_elapsed != other.time_elapsed:
            return False
        if self.priority_level != other.priority_level:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'index' field must be of type 'str'"
        self._index = value

    @builtins.property
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission_id' field must be of type 'str'"
        self._mission_id = value

    @builtins.property
    def number(self):
        """Message field 'number'."""
        return self._number

    @number.setter
    def number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'number' field must be an integer in [-32768, 32767]"
        self._number = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'status' field must be an integer in [-32768, 32767]"
        self._status = value

    @builtins.property
    def charge_info(self):
        """Message field 'charge_info'."""
        return self._charge_info

    @charge_info.setter
    def charge_info(self, value):
        if __debug__:
            from anscer_msgs.msg import ChargeInfo
            assert \
                isinstance(value, ChargeInfo), \
                "The 'charge_info' field must be a sub message of type 'ChargeInfo'"
        self._charge_info = value

    @builtins.property
    def completion_percentage(self):
        """Message field 'completion_percentage'."""
        return self._completion_percentage

    @completion_percentage.setter
    def completion_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'completion_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'completion_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._completion_percentage = value

    @builtins.property
    def time_elapsed(self):
        """Message field 'time_elapsed'."""
        return self._time_elapsed

    @time_elapsed.setter
    def time_elapsed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_elapsed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'time_elapsed' field must be an integer in [-2147483648, 2147483647]"
        self._time_elapsed = value

    @builtins.property
    def priority_level(self):
        """Message field 'priority_level'."""
        return self._priority_level

    @priority_level.setter
    def priority_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority_level' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'priority_level' field must be an integer in [-2147483648, 2147483647]"
        self._priority_level = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:msg/Task.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Task(type):
    """Metaclass of message 'Task'."""

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
                'anscer_msgs.msg.Task')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task

            from anscer_msgs.msg import ACRControl
            if ACRControl.__class__._TYPE_SUPPORT is None:
                ACRControl.__class__.__import_type_support__()

            from anscer_msgs.msg import ChargeInfo
            if ChargeInfo.__class__._TYPE_SUPPORT is None:
                ChargeInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Task(metaclass=Metaclass_Task):
    """Message class 'Task'."""

    __slots__ = [
        '_index',
        '_waypoint_index',
        '_number',
        '_activate',
        '_acr_info',
        '_charge_info',
    ]

    _fields_and_field_types = {
        'index': 'string',
        'waypoint_index': 'int16',
        'number': 'int16',
        'activate': 'boolean',
        'acr_info': 'anscer_msgs/ACRControl',
        'charge_info': 'anscer_msgs/ChargeInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['anscer_msgs', 'msg'], 'ACRControl'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['anscer_msgs', 'msg'], 'ChargeInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.index = kwargs.get('index', str())
        self.waypoint_index = kwargs.get('waypoint_index', int())
        self.number = kwargs.get('number', int())
        self.activate = kwargs.get('activate', bool())
        from anscer_msgs.msg import ACRControl
        self.acr_info = kwargs.get('acr_info', ACRControl())
        from anscer_msgs.msg import ChargeInfo
        self.charge_info = kwargs.get('charge_info', ChargeInfo())

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
        if self.waypoint_index != other.waypoint_index:
            return False
        if self.number != other.number:
            return False
        if self.activate != other.activate:
            return False
        if self.acr_info != other.acr_info:
            return False
        if self.charge_info != other.charge_info:
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
    def waypoint_index(self):
        """Message field 'waypoint_index'."""
        return self._waypoint_index

    @waypoint_index.setter
    def waypoint_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'waypoint_index' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'waypoint_index' field must be an integer in [-32768, 32767]"
        self._waypoint_index = value

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
    def activate(self):
        """Message field 'activate'."""
        return self._activate

    @activate.setter
    def activate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'activate' field must be of type 'bool'"
        self._activate = value

    @builtins.property
    def acr_info(self):
        """Message field 'acr_info'."""
        return self._acr_info

    @acr_info.setter
    def acr_info(self, value):
        if __debug__:
            from anscer_msgs.msg import ACRControl
            assert \
                isinstance(value, ACRControl), \
                "The 'acr_info' field must be a sub message of type 'ACRControl'"
        self._acr_info = value

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

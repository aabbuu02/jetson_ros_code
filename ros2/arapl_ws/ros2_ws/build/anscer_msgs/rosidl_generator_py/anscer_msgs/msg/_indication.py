# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:msg/Indication.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Indication(type):
    """Metaclass of message 'Indication'."""

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
                'anscer_msgs.msg.Indication')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__indication
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__indication
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__indication
            cls._TYPE_SUPPORT = module.type_support_msg__msg__indication
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__indication

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Indication(metaclass=Metaclass_Indication):
    """Message class 'Indication'."""

    __slots__ = [
        '_color',
        '_color_mode',
        '_buzzer',
        '_buzzer_mode',
        '_priority',
    ]

    _fields_and_field_types = {
        'color': 'string',
        'color_mode': 'int8',
        'buzzer': 'boolean',
        'buzzer_mode': 'int8',
        'priority': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.color = kwargs.get('color', str())
        self.color_mode = kwargs.get('color_mode', int())
        self.buzzer = kwargs.get('buzzer', bool())
        self.buzzer_mode = kwargs.get('buzzer_mode', int())
        self.priority = kwargs.get('priority', int())

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
        if self.color != other.color:
            return False
        if self.color_mode != other.color_mode:
            return False
        if self.buzzer != other.buzzer:
            return False
        if self.buzzer_mode != other.buzzer_mode:
            return False
        if self.priority != other.priority:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'color' field must be of type 'str'"
        self._color = value

    @builtins.property
    def color_mode(self):
        """Message field 'color_mode'."""
        return self._color_mode

    @color_mode.setter
    def color_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'color_mode' field must be an integer in [-128, 127]"
        self._color_mode = value

    @builtins.property
    def buzzer(self):
        """Message field 'buzzer'."""
        return self._buzzer

    @buzzer.setter
    def buzzer(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'buzzer' field must be of type 'bool'"
        self._buzzer = value

    @builtins.property
    def buzzer_mode(self):
        """Message field 'buzzer_mode'."""
        return self._buzzer_mode

    @buzzer_mode.setter
    def buzzer_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buzzer_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'buzzer_mode' field must be an integer in [-128, 127]"
        self._buzzer_mode = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'priority' field must be an integer in [-32768, 32767]"
        self._priority = value

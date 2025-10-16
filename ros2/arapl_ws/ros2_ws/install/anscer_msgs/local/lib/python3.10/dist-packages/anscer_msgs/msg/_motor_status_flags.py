# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:msg/MotorStatusFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorStatusFlags(type):
    """Metaclass of message 'MotorStatusFlags'."""

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
                'anscer_msgs.msg.MotorStatusFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_status_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_status_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_status_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_status_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_status_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorStatusFlags(metaclass=Metaclass_MotorStatusFlags):
    """Message class 'MotorStatusFlags'."""

    __slots__ = [
        '_serial_mode',
        '_pulse_mode',
        '_analog_mode',
        '_power_stage_off',
        '_stall_detected',
        '_at_limit',
        '_unused',
        '_micro_basic_script_running',
        '_motor_tuning_mode',
    ]

    _fields_and_field_types = {
        'serial_mode': 'boolean',
        'pulse_mode': 'boolean',
        'analog_mode': 'boolean',
        'power_stage_off': 'boolean',
        'stall_detected': 'boolean',
        'at_limit': 'boolean',
        'unused': 'boolean',
        'micro_basic_script_running': 'boolean',
        'motor_tuning_mode': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.serial_mode = kwargs.get('serial_mode', bool())
        self.pulse_mode = kwargs.get('pulse_mode', bool())
        self.analog_mode = kwargs.get('analog_mode', bool())
        self.power_stage_off = kwargs.get('power_stage_off', bool())
        self.stall_detected = kwargs.get('stall_detected', bool())
        self.at_limit = kwargs.get('at_limit', bool())
        self.unused = kwargs.get('unused', bool())
        self.micro_basic_script_running = kwargs.get('micro_basic_script_running', bool())
        self.motor_tuning_mode = kwargs.get('motor_tuning_mode', bool())

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
        if self.serial_mode != other.serial_mode:
            return False
        if self.pulse_mode != other.pulse_mode:
            return False
        if self.analog_mode != other.analog_mode:
            return False
        if self.power_stage_off != other.power_stage_off:
            return False
        if self.stall_detected != other.stall_detected:
            return False
        if self.at_limit != other.at_limit:
            return False
        if self.unused != other.unused:
            return False
        if self.micro_basic_script_running != other.micro_basic_script_running:
            return False
        if self.motor_tuning_mode != other.motor_tuning_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def serial_mode(self):
        """Message field 'serial_mode'."""
        return self._serial_mode

    @serial_mode.setter
    def serial_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'serial_mode' field must be of type 'bool'"
        self._serial_mode = value

    @builtins.property
    def pulse_mode(self):
        """Message field 'pulse_mode'."""
        return self._pulse_mode

    @pulse_mode.setter
    def pulse_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pulse_mode' field must be of type 'bool'"
        self._pulse_mode = value

    @builtins.property
    def analog_mode(self):
        """Message field 'analog_mode'."""
        return self._analog_mode

    @analog_mode.setter
    def analog_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'analog_mode' field must be of type 'bool'"
        self._analog_mode = value

    @builtins.property
    def power_stage_off(self):
        """Message field 'power_stage_off'."""
        return self._power_stage_off

    @power_stage_off.setter
    def power_stage_off(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_stage_off' field must be of type 'bool'"
        self._power_stage_off = value

    @builtins.property
    def stall_detected(self):
        """Message field 'stall_detected'."""
        return self._stall_detected

    @stall_detected.setter
    def stall_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stall_detected' field must be of type 'bool'"
        self._stall_detected = value

    @builtins.property
    def at_limit(self):
        """Message field 'at_limit'."""
        return self._at_limit

    @at_limit.setter
    def at_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'at_limit' field must be of type 'bool'"
        self._at_limit = value

    @builtins.property
    def unused(self):
        """Message field 'unused'."""
        return self._unused

    @unused.setter
    def unused(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'unused' field must be of type 'bool'"
        self._unused = value

    @builtins.property
    def micro_basic_script_running(self):
        """Message field 'micro_basic_script_running'."""
        return self._micro_basic_script_running

    @micro_basic_script_running.setter
    def micro_basic_script_running(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'micro_basic_script_running' field must be of type 'bool'"
        self._micro_basic_script_running = value

    @builtins.property
    def motor_tuning_mode(self):
        """Message field 'motor_tuning_mode'."""
        return self._motor_tuning_mode

    @motor_tuning_mode.setter
    def motor_tuning_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_tuning_mode' field must be of type 'bool'"
        self._motor_tuning_mode = value

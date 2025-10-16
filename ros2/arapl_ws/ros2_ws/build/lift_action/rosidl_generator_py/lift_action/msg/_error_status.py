# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lift_action:msg/ErrorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ErrorStatus(type):
    """Metaclass of message 'ErrorStatus'."""

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
            module = import_type_support('lift_action')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lift_action.msg.ErrorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__error_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__error_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__error_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__error_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__error_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ErrorStatus(metaclass=Metaclass_ErrorStatus):
    """Message class 'ErrorStatus'."""

    __slots__ = [
        '_lifter_fault',
        '_extractor_fault',
        '_turn_table_fault',
        '_swing_arm_fault',
        '_emergency_pb_fault',
        '_swing_arm_sensor_zero_fault',
        '_swing_arm_sensor_ninety_fault',
        '_turntable_sensor_zero_fault',
        '_extractor_sensor_laser_fault',
    ]

    _fields_and_field_types = {
        'lifter_fault': 'boolean',
        'extractor_fault': 'boolean',
        'turn_table_fault': 'boolean',
        'swing_arm_fault': 'boolean',
        'emergency_pb_fault': 'boolean',
        'swing_arm_sensor_zero_fault': 'boolean',
        'swing_arm_sensor_ninety_fault': 'boolean',
        'turntable_sensor_zero_fault': 'boolean',
        'extractor_sensor_laser_fault': 'boolean',
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
        self.lifter_fault = kwargs.get('lifter_fault', bool())
        self.extractor_fault = kwargs.get('extractor_fault', bool())
        self.turn_table_fault = kwargs.get('turn_table_fault', bool())
        self.swing_arm_fault = kwargs.get('swing_arm_fault', bool())
        self.emergency_pb_fault = kwargs.get('emergency_pb_fault', bool())
        self.swing_arm_sensor_zero_fault = kwargs.get('swing_arm_sensor_zero_fault', bool())
        self.swing_arm_sensor_ninety_fault = kwargs.get('swing_arm_sensor_ninety_fault', bool())
        self.turntable_sensor_zero_fault = kwargs.get('turntable_sensor_zero_fault', bool())
        self.extractor_sensor_laser_fault = kwargs.get('extractor_sensor_laser_fault', bool())

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
        if self.lifter_fault != other.lifter_fault:
            return False
        if self.extractor_fault != other.extractor_fault:
            return False
        if self.turn_table_fault != other.turn_table_fault:
            return False
        if self.swing_arm_fault != other.swing_arm_fault:
            return False
        if self.emergency_pb_fault != other.emergency_pb_fault:
            return False
        if self.swing_arm_sensor_zero_fault != other.swing_arm_sensor_zero_fault:
            return False
        if self.swing_arm_sensor_ninety_fault != other.swing_arm_sensor_ninety_fault:
            return False
        if self.turntable_sensor_zero_fault != other.turntable_sensor_zero_fault:
            return False
        if self.extractor_sensor_laser_fault != other.extractor_sensor_laser_fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lifter_fault(self):
        """Message field 'lifter_fault'."""
        return self._lifter_fault

    @lifter_fault.setter
    def lifter_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lifter_fault' field must be of type 'bool'"
        self._lifter_fault = value

    @builtins.property
    def extractor_fault(self):
        """Message field 'extractor_fault'."""
        return self._extractor_fault

    @extractor_fault.setter
    def extractor_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'extractor_fault' field must be of type 'bool'"
        self._extractor_fault = value

    @builtins.property
    def turn_table_fault(self):
        """Message field 'turn_table_fault'."""
        return self._turn_table_fault

    @turn_table_fault.setter
    def turn_table_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'turn_table_fault' field must be of type 'bool'"
        self._turn_table_fault = value

    @builtins.property
    def swing_arm_fault(self):
        """Message field 'swing_arm_fault'."""
        return self._swing_arm_fault

    @swing_arm_fault.setter
    def swing_arm_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'swing_arm_fault' field must be of type 'bool'"
        self._swing_arm_fault = value

    @builtins.property
    def emergency_pb_fault(self):
        """Message field 'emergency_pb_fault'."""
        return self._emergency_pb_fault

    @emergency_pb_fault.setter
    def emergency_pb_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_pb_fault' field must be of type 'bool'"
        self._emergency_pb_fault = value

    @builtins.property
    def swing_arm_sensor_zero_fault(self):
        """Message field 'swing_arm_sensor_zero_fault'."""
        return self._swing_arm_sensor_zero_fault

    @swing_arm_sensor_zero_fault.setter
    def swing_arm_sensor_zero_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'swing_arm_sensor_zero_fault' field must be of type 'bool'"
        self._swing_arm_sensor_zero_fault = value

    @builtins.property
    def swing_arm_sensor_ninety_fault(self):
        """Message field 'swing_arm_sensor_ninety_fault'."""
        return self._swing_arm_sensor_ninety_fault

    @swing_arm_sensor_ninety_fault.setter
    def swing_arm_sensor_ninety_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'swing_arm_sensor_ninety_fault' field must be of type 'bool'"
        self._swing_arm_sensor_ninety_fault = value

    @builtins.property
    def turntable_sensor_zero_fault(self):
        """Message field 'turntable_sensor_zero_fault'."""
        return self._turntable_sensor_zero_fault

    @turntable_sensor_zero_fault.setter
    def turntable_sensor_zero_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'turntable_sensor_zero_fault' field must be of type 'bool'"
        self._turntable_sensor_zero_fault = value

    @builtins.property
    def extractor_sensor_laser_fault(self):
        """Message field 'extractor_sensor_laser_fault'."""
        return self._extractor_sensor_laser_fault

    @extractor_sensor_laser_fault.setter
    def extractor_sensor_laser_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'extractor_sensor_laser_fault' field must be of type 'bool'"
        self._extractor_sensor_laser_fault = value

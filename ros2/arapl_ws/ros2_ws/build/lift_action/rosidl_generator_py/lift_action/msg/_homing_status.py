# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lift_action:msg/HomingStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HomingStatus(type):
    """Metaclass of message 'HomingStatus'."""

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
                'lift_action.msg.HomingStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__homing_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__homing_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__homing_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__homing_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__homing_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HomingStatus(metaclass=Metaclass_HomingStatus):
    """Message class 'HomingStatus'."""

    __slots__ = [
        '_lifter_status',
        '_extractor_status',
        '_turn_table_status',
        '_is_homed',
    ]

    _fields_and_field_types = {
        'lifter_status': 'boolean',
        'extractor_status': 'boolean',
        'turn_table_status': 'boolean',
        'is_homed': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lifter_status = kwargs.get('lifter_status', bool())
        self.extractor_status = kwargs.get('extractor_status', bool())
        self.turn_table_status = kwargs.get('turn_table_status', bool())
        self.is_homed = kwargs.get('is_homed', bool())

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
        if self.lifter_status != other.lifter_status:
            return False
        if self.extractor_status != other.extractor_status:
            return False
        if self.turn_table_status != other.turn_table_status:
            return False
        if self.is_homed != other.is_homed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lifter_status(self):
        """Message field 'lifter_status'."""
        return self._lifter_status

    @lifter_status.setter
    def lifter_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lifter_status' field must be of type 'bool'"
        self._lifter_status = value

    @builtins.property
    def extractor_status(self):
        """Message field 'extractor_status'."""
        return self._extractor_status

    @extractor_status.setter
    def extractor_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'extractor_status' field must be of type 'bool'"
        self._extractor_status = value

    @builtins.property
    def turn_table_status(self):
        """Message field 'turn_table_status'."""
        return self._turn_table_status

    @turn_table_status.setter
    def turn_table_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'turn_table_status' field must be of type 'bool'"
        self._turn_table_status = value

    @builtins.property
    def is_homed(self):
        """Message field 'is_homed'."""
        return self._is_homed

    @is_homed.setter
    def is_homed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_homed' field must be of type 'bool'"
        self._is_homed = value

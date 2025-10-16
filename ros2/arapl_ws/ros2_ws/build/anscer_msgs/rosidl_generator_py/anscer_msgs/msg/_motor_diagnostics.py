# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:msg/MotorDiagnostics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorDiagnostics(type):
    """Metaclass of message 'MotorDiagnostics'."""

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
                'anscer_msgs.msg.MotorDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_diagnostics

            from anscer_msgs.msg import MotorFaultFlags
            if MotorFaultFlags.__class__._TYPE_SUPPORT is None:
                MotorFaultFlags.__class__.__import_type_support__()

            from anscer_msgs.msg import MotorStatusFlags
            if MotorStatusFlags.__class__._TYPE_SUPPORT is None:
                MotorStatusFlags.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorDiagnostics(metaclass=Metaclass_MotorDiagnostics):
    """Message class 'MotorDiagnostics'."""

    __slots__ = [
        '_name',
        '_fault_flags',
        '_status_flags',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'fault_flags': 'anscer_msgs/MotorFaultFlags',
        'status_flags': 'anscer_msgs/MotorStatusFlags',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['anscer_msgs', 'msg'], 'MotorFaultFlags'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['anscer_msgs', 'msg'], 'MotorStatusFlags'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from anscer_msgs.msg import MotorFaultFlags
        self.fault_flags = kwargs.get('fault_flags', MotorFaultFlags())
        from anscer_msgs.msg import MotorStatusFlags
        self.status_flags = kwargs.get('status_flags', MotorStatusFlags())

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
        if self.name != other.name:
            return False
        if self.fault_flags != other.fault_flags:
            return False
        if self.status_flags != other.status_flags:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def fault_flags(self):
        """Message field 'fault_flags'."""
        return self._fault_flags

    @fault_flags.setter
    def fault_flags(self, value):
        if __debug__:
            from anscer_msgs.msg import MotorFaultFlags
            assert \
                isinstance(value, MotorFaultFlags), \
                "The 'fault_flags' field must be a sub message of type 'MotorFaultFlags'"
        self._fault_flags = value

    @builtins.property
    def status_flags(self):
        """Message field 'status_flags'."""
        return self._status_flags

    @status_flags.setter
    def status_flags(self, value):
        if __debug__:
            from anscer_msgs.msg import MotorStatusFlags
            assert \
                isinstance(value, MotorStatusFlags), \
                "The 'status_flags' field must be a sub message of type 'MotorStatusFlags'"
        self._status_flags = value

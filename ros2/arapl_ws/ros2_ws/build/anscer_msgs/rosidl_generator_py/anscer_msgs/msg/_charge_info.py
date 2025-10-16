# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:msg/ChargeInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChargeInfo(type):
    """Metaclass of message 'ChargeInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONNECTED': 1,
        'DISCONNECTED': 2,
        'OVERRIDE': 3,
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
                'anscer_msgs.msg.ChargeInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__charge_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__charge_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__charge_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__charge_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__charge_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONNECTED': cls.__constants['CONNECTED'],
            'DISCONNECTED': cls.__constants['DISCONNECTED'],
            'OVERRIDE': cls.__constants['OVERRIDE'],
        }

    @property
    def CONNECTED(self):
        """Message constant 'CONNECTED'."""
        return Metaclass_ChargeInfo.__constants['CONNECTED']

    @property
    def DISCONNECTED(self):
        """Message constant 'DISCONNECTED'."""
        return Metaclass_ChargeInfo.__constants['DISCONNECTED']

    @property
    def OVERRIDE(self):
        """Message constant 'OVERRIDE'."""
        return Metaclass_ChargeInfo.__constants['OVERRIDE']


class ChargeInfo(metaclass=Metaclass_ChargeInfo):
    """
    Message class 'ChargeInfo'.

    Constants:
      CONNECTED
      DISCONNECTED
      OVERRIDE
    """

    __slots__ = [
        '_charger_activate',
        '_charge_time',
        '_ignore_time',
        '_charge_percentage',
        '_ignore_percentage',
    ]

    _fields_and_field_types = {
        'charger_activate': 'boolean',
        'charge_time': 'int32',
        'ignore_time': 'boolean',
        'charge_percentage': 'float',
        'ignore_percentage': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.charger_activate = kwargs.get('charger_activate', bool())
        self.charge_time = kwargs.get('charge_time', int())
        self.ignore_time = kwargs.get('ignore_time', bool())
        self.charge_percentage = kwargs.get('charge_percentage', float())
        self.ignore_percentage = kwargs.get('ignore_percentage', bool())

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
        if self.charger_activate != other.charger_activate:
            return False
        if self.charge_time != other.charge_time:
            return False
        if self.ignore_time != other.ignore_time:
            return False
        if self.charge_percentage != other.charge_percentage:
            return False
        if self.ignore_percentage != other.ignore_percentage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def charger_activate(self):
        """Message field 'charger_activate'."""
        return self._charger_activate

    @charger_activate.setter
    def charger_activate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'charger_activate' field must be of type 'bool'"
        self._charger_activate = value

    @builtins.property
    def charge_time(self):
        """Message field 'charge_time'."""
        return self._charge_time

    @charge_time.setter
    def charge_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charge_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'charge_time' field must be an integer in [-2147483648, 2147483647]"
        self._charge_time = value

    @builtins.property
    def ignore_time(self):
        """Message field 'ignore_time'."""
        return self._ignore_time

    @ignore_time.setter
    def ignore_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_time' field must be of type 'bool'"
        self._ignore_time = value

    @builtins.property
    def charge_percentage(self):
        """Message field 'charge_percentage'."""
        return self._charge_percentage

    @charge_percentage.setter
    def charge_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'charge_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'charge_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._charge_percentage = value

    @builtins.property
    def ignore_percentage(self):
        """Message field 'ignore_percentage'."""
        return self._ignore_percentage

    @ignore_percentage.setter
    def ignore_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_percentage' field must be of type 'bool'"
        self._ignore_percentage = value

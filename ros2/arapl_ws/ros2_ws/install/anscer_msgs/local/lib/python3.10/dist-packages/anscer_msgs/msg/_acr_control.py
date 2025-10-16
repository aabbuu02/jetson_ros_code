# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:msg/ACRControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ACRControl(type):
    """Metaclass of message 'ACRControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PICKUP': 0,
        'DROPOFF': 1,
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
                'anscer_msgs.msg.ACRControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__acr_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__acr_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__acr_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__acr_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__acr_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PICKUP': cls.__constants['PICKUP'],
            'DROPOFF': cls.__constants['DROPOFF'],
        }

    @property
    def PICKUP(self):
        """Message constant 'PICKUP'."""
        return Metaclass_ACRControl.__constants['PICKUP']

    @property
    def DROPOFF(self):
        """Message constant 'DROPOFF'."""
        return Metaclass_ACRControl.__constants['DROPOFF']


class ACRControl(metaclass=Metaclass_ACRControl):
    """
    Message class 'ACRControl'.

    Constants:
      PICKUP
      DROPOFF
    """

    __slots__ = [
        '_acr_shelf',
        '_target_shelf',
        '_acr_action',
        '_bar_code_number',
        '_whole_bin_number',
    ]

    _fields_and_field_types = {
        'acr_shelf': 'int16',
        'target_shelf': 'int16',
        'acr_action': 'int16',
        'bar_code_number': 'int64',
        'whole_bin_number': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.acr_shelf = kwargs.get('acr_shelf', int())
        self.target_shelf = kwargs.get('target_shelf', int())
        self.acr_action = kwargs.get('acr_action', int())
        self.bar_code_number = kwargs.get('bar_code_number', int())
        self.whole_bin_number = kwargs.get('whole_bin_number', int())

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
        if self.acr_shelf != other.acr_shelf:
            return False
        if self.target_shelf != other.target_shelf:
            return False
        if self.acr_action != other.acr_action:
            return False
        if self.bar_code_number != other.bar_code_number:
            return False
        if self.whole_bin_number != other.whole_bin_number:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def acr_shelf(self):
        """Message field 'acr_shelf'."""
        return self._acr_shelf

    @acr_shelf.setter
    def acr_shelf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acr_shelf' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'acr_shelf' field must be an integer in [-32768, 32767]"
        self._acr_shelf = value

    @builtins.property
    def target_shelf(self):
        """Message field 'target_shelf'."""
        return self._target_shelf

    @target_shelf.setter
    def target_shelf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_shelf' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'target_shelf' field must be an integer in [-32768, 32767]"
        self._target_shelf = value

    @builtins.property
    def acr_action(self):
        """Message field 'acr_action'."""
        return self._acr_action

    @acr_action.setter
    def acr_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acr_action' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'acr_action' field must be an integer in [-32768, 32767]"
        self._acr_action = value

    @builtins.property
    def bar_code_number(self):
        """Message field 'bar_code_number'."""
        return self._bar_code_number

    @bar_code_number.setter
    def bar_code_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bar_code_number' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'bar_code_number' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._bar_code_number = value

    @builtins.property
    def whole_bin_number(self):
        """Message field 'whole_bin_number'."""
        return self._whole_bin_number

    @whole_bin_number.setter
    def whole_bin_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'whole_bin_number' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'whole_bin_number' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._whole_bin_number = value

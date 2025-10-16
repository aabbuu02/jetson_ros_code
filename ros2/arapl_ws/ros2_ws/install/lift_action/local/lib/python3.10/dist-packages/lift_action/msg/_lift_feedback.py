# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lift_action:msg/LiftFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LiftFeedback(type):
    """Metaclass of message 'LiftFeedback'."""

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
                'lift_action.msg.LiftFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lift_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lift_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lift_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lift_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lift_feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LiftFeedback(metaclass=Metaclass_LiftFeedback):
    """Message class 'LiftFeedback'."""

    __slots__ = [
        '_unique_id',
        '_acr_shelf',
        '_action',
        '_status',
        '_fail_status',
    ]

    _fields_and_field_types = {
        'unique_id': 'string',
        'acr_shelf': 'int16',
        'action': 'int16',
        'status': 'boolean',
        'fail_status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.unique_id = kwargs.get('unique_id', str())
        self.acr_shelf = kwargs.get('acr_shelf', int())
        self.action = kwargs.get('action', int())
        self.status = kwargs.get('status', bool())
        self.fail_status = kwargs.get('fail_status', bool())

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
        if self.unique_id != other.unique_id:
            return False
        if self.acr_shelf != other.acr_shelf:
            return False
        if self.action != other.action:
            return False
        if self.status != other.status:
            return False
        if self.fail_status != other.fail_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def unique_id(self):
        """Message field 'unique_id'."""
        return self._unique_id

    @unique_id.setter
    def unique_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'unique_id' field must be of type 'str'"
        self._unique_id = value

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
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'action' field must be an integer in [-32768, 32767]"
        self._action = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value

    @builtins.property
    def fail_status(self):
        """Message field 'fail_status'."""
        return self._fail_status

    @fail_status.setter
    def fail_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fail_status' field must be of type 'bool'"
        self._fail_status = value

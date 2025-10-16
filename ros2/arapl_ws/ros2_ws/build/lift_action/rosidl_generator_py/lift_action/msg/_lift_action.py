# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lift_action:msg/LiftAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LiftAction(type):
    """Metaclass of message 'LiftAction'."""

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
                'lift_action.msg.LiftAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lift_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lift_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lift_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lift_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lift_action

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LiftAction(metaclass=Metaclass_LiftAction):
    """Message class 'LiftAction'."""

    __slots__ = [
        '_unique_id',
        '_reached',
        '_rack',
        '_shelf',
        '_acr_shelf',
        '_action',
        '_whole_bin_no',
        '_putaway_barcode',
    ]

    _fields_and_field_types = {
        'unique_id': 'string',
        'reached': 'boolean',
        'rack': 'int16',
        'shelf': 'int16',
        'acr_shelf': 'int16',
        'action': 'int16',
        'whole_bin_no': 'string',
        'putaway_barcode': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.unique_id = kwargs.get('unique_id', str())
        self.reached = kwargs.get('reached', bool())
        self.rack = kwargs.get('rack', int())
        self.shelf = kwargs.get('shelf', int())
        self.acr_shelf = kwargs.get('acr_shelf', int())
        self.action = kwargs.get('action', int())
        self.whole_bin_no = kwargs.get('whole_bin_no', str())
        self.putaway_barcode = kwargs.get('putaway_barcode', str())

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
        if self.reached != other.reached:
            return False
        if self.rack != other.rack:
            return False
        if self.shelf != other.shelf:
            return False
        if self.acr_shelf != other.acr_shelf:
            return False
        if self.action != other.action:
            return False
        if self.whole_bin_no != other.whole_bin_no:
            return False
        if self.putaway_barcode != other.putaway_barcode:
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
    def reached(self):
        """Message field 'reached'."""
        return self._reached

    @reached.setter
    def reached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reached' field must be of type 'bool'"
        self._reached = value

    @builtins.property
    def rack(self):
        """Message field 'rack'."""
        return self._rack

    @rack.setter
    def rack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rack' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'rack' field must be an integer in [-32768, 32767]"
        self._rack = value

    @builtins.property
    def shelf(self):
        """Message field 'shelf'."""
        return self._shelf

    @shelf.setter
    def shelf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shelf' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'shelf' field must be an integer in [-32768, 32767]"
        self._shelf = value

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
    def whole_bin_no(self):
        """Message field 'whole_bin_no'."""
        return self._whole_bin_no

    @whole_bin_no.setter
    def whole_bin_no(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'whole_bin_no' field must be of type 'str'"
        self._whole_bin_no = value

    @builtins.property
    def putaway_barcode(self):
        """Message field 'putaway_barcode'."""
        return self._putaway_barcode

    @putaway_barcode.setter
    def putaway_barcode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'putaway_barcode' field must be of type 'str'"
        self._putaway_barcode = value

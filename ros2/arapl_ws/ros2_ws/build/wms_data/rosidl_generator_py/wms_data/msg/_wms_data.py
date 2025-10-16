# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wms_data:msg/WMSData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WMSData(type):
    """Metaclass of message 'WMSData'."""

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
            module = import_type_support('wms_data')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wms_data.msg.WMSData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wms_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wms_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wms_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wms_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wms_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WMSData(metaclass=Metaclass_WMSData):
    """Message class 'WMSData'."""

    __slots__ = [
        '_unique_id',
        '_date',
        '_priority',
        '_rack',
        '_shelf',
        '_bin',
        '_action',
        '_status',
        '_ean_code',
        '_putaway_code',
        '_acr_shelf',
        '_whole_bin_no',
        '_core',
        '_level',
        '_year',
        '_date_data',
        '_serial_no',
    ]

    _fields_and_field_types = {
        'unique_id': 'string',
        'date': 'string',
        'priority': 'int16',
        'rack': 'int16',
        'shelf': 'int16',
        'bin': 'int16',
        'action': 'boolean',
        'status': 'boolean',
        'ean_code': 'string',
        'putaway_code': 'string',
        'acr_shelf': 'int16',
        'whole_bin_no': 'string',
        'core': 'string',
        'level': 'string',
        'year': 'string',
        'date_data': 'string',
        'serial_no': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.unique_id = kwargs.get('unique_id', str())
        self.date = kwargs.get('date', str())
        self.priority = kwargs.get('priority', int())
        self.rack = kwargs.get('rack', int())
        self.shelf = kwargs.get('shelf', int())
        self.bin = kwargs.get('bin', int())
        self.action = kwargs.get('action', bool())
        self.status = kwargs.get('status', bool())
        self.ean_code = kwargs.get('ean_code', str())
        self.putaway_code = kwargs.get('putaway_code', str())
        self.acr_shelf = kwargs.get('acr_shelf', int())
        self.whole_bin_no = kwargs.get('whole_bin_no', str())
        self.core = kwargs.get('core', str())
        self.level = kwargs.get('level', str())
        self.year = kwargs.get('year', str())
        self.date_data = kwargs.get('date_data', str())
        self.serial_no = kwargs.get('serial_no', str())

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
        if self.date != other.date:
            return False
        if self.priority != other.priority:
            return False
        if self.rack != other.rack:
            return False
        if self.shelf != other.shelf:
            return False
        if self.bin != other.bin:
            return False
        if self.action != other.action:
            return False
        if self.status != other.status:
            return False
        if self.ean_code != other.ean_code:
            return False
        if self.putaway_code != other.putaway_code:
            return False
        if self.acr_shelf != other.acr_shelf:
            return False
        if self.whole_bin_no != other.whole_bin_no:
            return False
        if self.core != other.core:
            return False
        if self.level != other.level:
            return False
        if self.year != other.year:
            return False
        if self.date_data != other.date_data:
            return False
        if self.serial_no != other.serial_no:
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
    def date(self):
        """Message field 'date'."""
        return self._date

    @date.setter
    def date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'date' field must be of type 'str'"
        self._date = value

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

    @builtins.property  # noqa: A003
    def bin(self):  # noqa: A003
        """Message field 'bin'."""
        return self._bin

    @bin.setter  # noqa: A003
    def bin(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bin' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'bin' field must be an integer in [-32768, 32767]"
        self._bin = value

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'action' field must be of type 'bool'"
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
    def ean_code(self):
        """Message field 'ean_code'."""
        return self._ean_code

    @ean_code.setter
    def ean_code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ean_code' field must be of type 'str'"
        self._ean_code = value

    @builtins.property
    def putaway_code(self):
        """Message field 'putaway_code'."""
        return self._putaway_code

    @putaway_code.setter
    def putaway_code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'putaway_code' field must be of type 'str'"
        self._putaway_code = value

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
    def core(self):
        """Message field 'core'."""
        return self._core

    @core.setter
    def core(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'core' field must be of type 'str'"
        self._core = value

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'level' field must be of type 'str'"
        self._level = value

    @builtins.property
    def year(self):
        """Message field 'year'."""
        return self._year

    @year.setter
    def year(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'year' field must be of type 'str'"
        self._year = value

    @builtins.property
    def date_data(self):
        """Message field 'date_data'."""
        return self._date_data

    @date_data.setter
    def date_data(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'date_data' field must be of type 'str'"
        self._date_data = value

    @builtins.property
    def serial_no(self):
        """Message field 'serial_no'."""
        return self._serial_no

    @serial_no.setter
    def serial_no(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'serial_no' field must be of type 'str'"
        self._serial_no = value

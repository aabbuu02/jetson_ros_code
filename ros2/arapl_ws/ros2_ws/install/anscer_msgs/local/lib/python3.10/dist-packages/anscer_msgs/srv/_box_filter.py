# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/BoxFilter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BoxFilter_Request(type):
    """Metaclass of message 'BoxFilter_Request'."""

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
                'anscer_msgs.srv.BoxFilter_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__box_filter__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__box_filter__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__box_filter__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__box_filter__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__box_filter__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BoxFilter_Request(metaclass=Metaclass_BoxFilter_Request):
    """Message class 'BoxFilter_Request'."""

    __slots__ = [
        '_filter_enable',
        '_restore_default',
        '_min_safety_x',
        '_max_safety_x',
        '_min_safety_y',
        '_max_safety_y',
        '_min_warn_x',
        '_max_warn_x',
        '_min_warn_y',
        '_max_warn_y',
        '_debounce_time',
    ]

    _fields_and_field_types = {
        'filter_enable': 'boolean',
        'restore_default': 'boolean',
        'min_safety_x': 'double',
        'max_safety_x': 'double',
        'min_safety_y': 'double',
        'max_safety_y': 'double',
        'min_warn_x': 'double',
        'max_warn_x': 'double',
        'min_warn_y': 'double',
        'max_warn_y': 'double',
        'debounce_time': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.filter_enable = kwargs.get('filter_enable', bool())
        self.restore_default = kwargs.get('restore_default', bool())
        self.min_safety_x = kwargs.get('min_safety_x', float())
        self.max_safety_x = kwargs.get('max_safety_x', float())
        self.min_safety_y = kwargs.get('min_safety_y', float())
        self.max_safety_y = kwargs.get('max_safety_y', float())
        self.min_warn_x = kwargs.get('min_warn_x', float())
        self.max_warn_x = kwargs.get('max_warn_x', float())
        self.min_warn_y = kwargs.get('min_warn_y', float())
        self.max_warn_y = kwargs.get('max_warn_y', float())
        self.debounce_time = kwargs.get('debounce_time', int())

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
        if self.filter_enable != other.filter_enable:
            return False
        if self.restore_default != other.restore_default:
            return False
        if self.min_safety_x != other.min_safety_x:
            return False
        if self.max_safety_x != other.max_safety_x:
            return False
        if self.min_safety_y != other.min_safety_y:
            return False
        if self.max_safety_y != other.max_safety_y:
            return False
        if self.min_warn_x != other.min_warn_x:
            return False
        if self.max_warn_x != other.max_warn_x:
            return False
        if self.min_warn_y != other.min_warn_y:
            return False
        if self.max_warn_y != other.max_warn_y:
            return False
        if self.debounce_time != other.debounce_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def filter_enable(self):
        """Message field 'filter_enable'."""
        return self._filter_enable

    @filter_enable.setter
    def filter_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'filter_enable' field must be of type 'bool'"
        self._filter_enable = value

    @builtins.property
    def restore_default(self):
        """Message field 'restore_default'."""
        return self._restore_default

    @restore_default.setter
    def restore_default(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'restore_default' field must be of type 'bool'"
        self._restore_default = value

    @builtins.property
    def min_safety_x(self):
        """Message field 'min_safety_x'."""
        return self._min_safety_x

    @min_safety_x.setter
    def min_safety_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_safety_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_safety_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_safety_x = value

    @builtins.property
    def max_safety_x(self):
        """Message field 'max_safety_x'."""
        return self._max_safety_x

    @max_safety_x.setter
    def max_safety_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_safety_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_safety_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_safety_x = value

    @builtins.property
    def min_safety_y(self):
        """Message field 'min_safety_y'."""
        return self._min_safety_y

    @min_safety_y.setter
    def min_safety_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_safety_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_safety_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_safety_y = value

    @builtins.property
    def max_safety_y(self):
        """Message field 'max_safety_y'."""
        return self._max_safety_y

    @max_safety_y.setter
    def max_safety_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_safety_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_safety_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_safety_y = value

    @builtins.property
    def min_warn_x(self):
        """Message field 'min_warn_x'."""
        return self._min_warn_x

    @min_warn_x.setter
    def min_warn_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_warn_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_warn_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_warn_x = value

    @builtins.property
    def max_warn_x(self):
        """Message field 'max_warn_x'."""
        return self._max_warn_x

    @max_warn_x.setter
    def max_warn_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_warn_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_warn_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_warn_x = value

    @builtins.property
    def min_warn_y(self):
        """Message field 'min_warn_y'."""
        return self._min_warn_y

    @min_warn_y.setter
    def min_warn_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_warn_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_warn_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_warn_y = value

    @builtins.property
    def max_warn_y(self):
        """Message field 'max_warn_y'."""
        return self._max_warn_y

    @max_warn_y.setter
    def max_warn_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_warn_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_warn_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_warn_y = value

    @builtins.property
    def debounce_time(self):
        """Message field 'debounce_time'."""
        return self._debounce_time

    @debounce_time.setter
    def debounce_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'debounce_time' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'debounce_time' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._debounce_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BoxFilter_Response(type):
    """Metaclass of message 'BoxFilter_Response'."""

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
                'anscer_msgs.srv.BoxFilter_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__box_filter__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__box_filter__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__box_filter__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__box_filter__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__box_filter__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BoxFilter_Response(metaclass=Metaclass_BoxFilter_Response):
    """Message class 'BoxFilter_Response'."""

    __slots__ = [
        '_state',
    ]

    _fields_and_field_types = {
        'state': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())

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
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'state' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._state = value


class Metaclass_BoxFilter(type):
    """Metaclass of service 'BoxFilter'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('anscer_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anscer_msgs.srv.BoxFilter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__box_filter

            from anscer_msgs.srv import _box_filter
            if _box_filter.Metaclass_BoxFilter_Request._TYPE_SUPPORT is None:
                _box_filter.Metaclass_BoxFilter_Request.__import_type_support__()
            if _box_filter.Metaclass_BoxFilter_Response._TYPE_SUPPORT is None:
                _box_filter.Metaclass_BoxFilter_Response.__import_type_support__()


class BoxFilter(metaclass=Metaclass_BoxFilter):
    from anscer_msgs.srv._box_filter import BoxFilter_Request as Request
    from anscer_msgs.srv._box_filter import BoxFilter_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

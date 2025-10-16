# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:msg/MissionData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionData(type):
    """Metaclass of message 'MissionData'."""

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
                'anscer_msgs.msg.MissionData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MissionData(metaclass=Metaclass_MissionData):
    """Message class 'MissionData'."""

    __slots__ = [
        '_mission_name',
        '_success_count',
        '_mission_count',
    ]

    _fields_and_field_types = {
        'mission_name': 'string',
        'success_count': 'int16',
        'mission_count': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_name = kwargs.get('mission_name', str())
        self.success_count = kwargs.get('success_count', int())
        self.mission_count = kwargs.get('mission_count', int())

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
        if self.mission_name != other.mission_name:
            return False
        if self.success_count != other.success_count:
            return False
        if self.mission_count != other.mission_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mission_name(self):
        """Message field 'mission_name'."""
        return self._mission_name

    @mission_name.setter
    def mission_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission_name' field must be of type 'str'"
        self._mission_name = value

    @builtins.property
    def success_count(self):
        """Message field 'success_count'."""
        return self._success_count

    @success_count.setter
    def success_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'success_count' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'success_count' field must be an integer in [-32768, 32767]"
        self._success_count = value

    @builtins.property
    def mission_count(self):
        """Message field 'mission_count'."""
        return self._mission_count

    @mission_count.setter
    def mission_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_count' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mission_count' field must be an integer in [-32768, 32767]"
        self._mission_count = value

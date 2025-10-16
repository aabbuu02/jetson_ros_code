# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/BumperOverride.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BumperOverride_Request(type):
    """Metaclass of message 'BumperOverride_Request'."""

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
                'anscer_msgs.srv.BumperOverride_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bumper_override__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bumper_override__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bumper_override__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bumper_override__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bumper_override__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BumperOverride_Request(metaclass=Metaclass_BumperOverride_Request):
    """Message class 'BumperOverride_Request'."""

    __slots__ = [
        '_bumper_override',
    ]

    _fields_and_field_types = {
        'bumper_override': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bumper_override = kwargs.get('bumper_override', int())

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
        if self.bumper_override != other.bumper_override:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bumper_override(self):
        """Message field 'bumper_override'."""
        return self._bumper_override

    @bumper_override.setter
    def bumper_override(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bumper_override' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'bumper_override' field must be an integer in [-128, 127]"
        self._bumper_override = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BumperOverride_Response(type):
    """Metaclass of message 'BumperOverride_Response'."""

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
                'anscer_msgs.srv.BumperOverride_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bumper_override__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bumper_override__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bumper_override__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bumper_override__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bumper_override__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BumperOverride_Response(metaclass=Metaclass_BumperOverride_Response):
    """Message class 'BumperOverride_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', bool())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


class Metaclass_BumperOverride(type):
    """Metaclass of service 'BumperOverride'."""

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
                'anscer_msgs.srv.BumperOverride')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__bumper_override

            from anscer_msgs.srv import _bumper_override
            if _bumper_override.Metaclass_BumperOverride_Request._TYPE_SUPPORT is None:
                _bumper_override.Metaclass_BumperOverride_Request.__import_type_support__()
            if _bumper_override.Metaclass_BumperOverride_Response._TYPE_SUPPORT is None:
                _bumper_override.Metaclass_BumperOverride_Response.__import_type_support__()


class BumperOverride(metaclass=Metaclass_BumperOverride):
    from anscer_msgs.srv._bumper_override import BumperOverride_Request as Request
    from anscer_msgs.srv._bumper_override import BumperOverride_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

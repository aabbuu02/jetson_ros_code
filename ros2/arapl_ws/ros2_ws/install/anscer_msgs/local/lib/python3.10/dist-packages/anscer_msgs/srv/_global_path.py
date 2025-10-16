# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/GlobalPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GlobalPath_Request(type):
    """Metaclass of message 'GlobalPath_Request'."""

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
                'anscer_msgs.srv.GlobalPath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__global_path__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__global_path__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__global_path__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__global_path__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__global_path__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GlobalPath_Request(metaclass=Metaclass_GlobalPath_Request):
    """Message class 'GlobalPath_Request'."""

    __slots__ = [
        '_initate',
    ]

    _fields_and_field_types = {
        'initate': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.initate = kwargs.get('initate', bool())

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
        if self.initate != other.initate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def initate(self):
        """Message field 'initate'."""
        return self._initate

    @initate.setter
    def initate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'initate' field must be of type 'bool'"
        self._initate = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GlobalPath_Response(type):
    """Metaclass of message 'GlobalPath_Response'."""

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
                'anscer_msgs.srv.GlobalPath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__global_path__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__global_path__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__global_path__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__global_path__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__global_path__response

            from anscer_msgs.msg import Paths
            if Paths.__class__._TYPE_SUPPORT is None:
                Paths.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GlobalPath_Response(metaclass=Metaclass_GlobalPath_Response):
    """Message class 'GlobalPath_Response'."""

    __slots__ = [
        '_global_path',
    ]

    _fields_and_field_types = {
        'global_path': 'anscer_msgs/Paths',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['anscer_msgs', 'msg'], 'Paths'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from anscer_msgs.msg import Paths
        self.global_path = kwargs.get('global_path', Paths())

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
        if self.global_path != other.global_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def global_path(self):
        """Message field 'global_path'."""
        return self._global_path

    @global_path.setter
    def global_path(self, value):
        if __debug__:
            from anscer_msgs.msg import Paths
            assert \
                isinstance(value, Paths), \
                "The 'global_path' field must be a sub message of type 'Paths'"
        self._global_path = value


class Metaclass_GlobalPath(type):
    """Metaclass of service 'GlobalPath'."""

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
                'anscer_msgs.srv.GlobalPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__global_path

            from anscer_msgs.srv import _global_path
            if _global_path.Metaclass_GlobalPath_Request._TYPE_SUPPORT is None:
                _global_path.Metaclass_GlobalPath_Request.__import_type_support__()
            if _global_path.Metaclass_GlobalPath_Response._TYPE_SUPPORT is None:
                _global_path.Metaclass_GlobalPath_Response.__import_type_support__()


class GlobalPath(metaclass=Metaclass_GlobalPath):
    from anscer_msgs.srv._global_path import GlobalPath_Request as Request
    from anscer_msgs.srv._global_path import GlobalPath_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

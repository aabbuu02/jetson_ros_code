# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/Distance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Distance_Request(type):
    """Metaclass of message 'Distance_Request'."""

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
                'anscer_msgs.srv.Distance_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__distance__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__distance__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__distance__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__distance__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__distance__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distance_Request(metaclass=Metaclass_Distance_Request):
    """Message class 'Distance_Request'."""

    __slots__ = [
        '_mission_reset',
        '_total_reset',
    ]

    _fields_and_field_types = {
        'mission_reset': 'boolean',
        'total_reset': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_reset = kwargs.get('mission_reset', bool())
        self.total_reset = kwargs.get('total_reset', bool())

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
        if self.mission_reset != other.mission_reset:
            return False
        if self.total_reset != other.total_reset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mission_reset(self):
        """Message field 'mission_reset'."""
        return self._mission_reset

    @mission_reset.setter
    def mission_reset(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mission_reset' field must be of type 'bool'"
        self._mission_reset = value

    @builtins.property
    def total_reset(self):
        """Message field 'total_reset'."""
        return self._total_reset

    @total_reset.setter
    def total_reset(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'total_reset' field must be of type 'bool'"
        self._total_reset = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Distance_Response(type):
    """Metaclass of message 'Distance_Response'."""

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
                'anscer_msgs.srv.Distance_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__distance__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__distance__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__distance__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__distance__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__distance__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distance_Response(metaclass=Metaclass_Distance_Response):
    """Message class 'Distance_Response'."""

    __slots__ = [
        '_mission_distance',
        '_total_distance',
    ]

    _fields_and_field_types = {
        'mission_distance': 'float',
        'total_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_distance = kwargs.get('mission_distance', float())
        self.total_distance = kwargs.get('total_distance', float())

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
        if self.mission_distance != other.mission_distance:
            return False
        if self.total_distance != other.total_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mission_distance(self):
        """Message field 'mission_distance'."""
        return self._mission_distance

    @mission_distance.setter
    def mission_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mission_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mission_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mission_distance = value

    @builtins.property
    def total_distance(self):
        """Message field 'total_distance'."""
        return self._total_distance

    @total_distance.setter
    def total_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_distance = value


class Metaclass_Distance(type):
    """Metaclass of service 'Distance'."""

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
                'anscer_msgs.srv.Distance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__distance

            from anscer_msgs.srv import _distance
            if _distance.Metaclass_Distance_Request._TYPE_SUPPORT is None:
                _distance.Metaclass_Distance_Request.__import_type_support__()
            if _distance.Metaclass_Distance_Response._TYPE_SUPPORT is None:
                _distance.Metaclass_Distance_Response.__import_type_support__()


class Distance(metaclass=Metaclass_Distance):
    from anscer_msgs.srv._distance import Distance_Request as Request
    from anscer_msgs.srv._distance import Distance_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

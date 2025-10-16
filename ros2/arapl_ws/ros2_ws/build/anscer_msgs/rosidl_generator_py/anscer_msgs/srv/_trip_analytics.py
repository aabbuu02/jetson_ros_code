# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/TripAnalytics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TripAnalytics_Request(type):
    """Metaclass of message 'TripAnalytics_Request'."""

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
                'anscer_msgs.srv.TripAnalytics_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trip_analytics__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trip_analytics__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trip_analytics__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trip_analytics__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trip_analytics__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TripAnalytics_Request(metaclass=Metaclass_TripAnalytics_Request):
    """Message class 'TripAnalytics_Request'."""

    __slots__ = [
        '_start_date',
        '_end_date',
    ]

    _fields_and_field_types = {
        'start_date': 'string',
        'end_date': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_date = kwargs.get('start_date', str())
        self.end_date = kwargs.get('end_date', str())

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
        if self.start_date != other.start_date:
            return False
        if self.end_date != other.end_date:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_date(self):
        """Message field 'start_date'."""
        return self._start_date

    @start_date.setter
    def start_date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'start_date' field must be of type 'str'"
        self._start_date = value

    @builtins.property
    def end_date(self):
        """Message field 'end_date'."""
        return self._end_date

    @end_date.setter
    def end_date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'end_date' field must be of type 'str'"
        self._end_date = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TripAnalytics_Response(type):
    """Metaclass of message 'TripAnalytics_Response'."""

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
                'anscer_msgs.srv.TripAnalytics_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trip_analytics__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trip_analytics__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trip_analytics__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trip_analytics__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trip_analytics__response

            from anscer_msgs.msg import MissionDB
            if MissionDB.__class__._TYPE_SUPPORT is None:
                MissionDB.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TripAnalytics_Response(metaclass=Metaclass_TripAnalytics_Response):
    """Message class 'TripAnalytics_Response'."""

    __slots__ = [
        '_mission_db',
    ]

    _fields_and_field_types = {
        'mission_db': 'sequence<anscer_msgs/MissionDB>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['anscer_msgs', 'msg'], 'MissionDB')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_db = kwargs.get('mission_db', [])

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
        if self.mission_db != other.mission_db:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mission_db(self):
        """Message field 'mission_db'."""
        return self._mission_db

    @mission_db.setter
    def mission_db(self, value):
        if __debug__:
            from anscer_msgs.msg import MissionDB
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, MissionDB) for v in value) and
                 True), \
                "The 'mission_db' field must be a set or sequence and each value of type 'MissionDB'"
        self._mission_db = value


class Metaclass_TripAnalytics(type):
    """Metaclass of service 'TripAnalytics'."""

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
                'anscer_msgs.srv.TripAnalytics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__trip_analytics

            from anscer_msgs.srv import _trip_analytics
            if _trip_analytics.Metaclass_TripAnalytics_Request._TYPE_SUPPORT is None:
                _trip_analytics.Metaclass_TripAnalytics_Request.__import_type_support__()
            if _trip_analytics.Metaclass_TripAnalytics_Response._TYPE_SUPPORT is None:
                _trip_analytics.Metaclass_TripAnalytics_Response.__import_type_support__()


class TripAnalytics(metaclass=Metaclass_TripAnalytics):
    from anscer_msgs.srv._trip_analytics import TripAnalytics_Request as Request
    from anscer_msgs.srv._trip_analytics import TripAnalytics_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

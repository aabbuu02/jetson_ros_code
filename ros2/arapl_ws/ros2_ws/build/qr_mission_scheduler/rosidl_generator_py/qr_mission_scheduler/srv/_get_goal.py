# generated from rosidl_generator_py/resource/_idl.py.em
# with input from qr_mission_scheduler:srv/GetGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetGoal_Request(type):
    """Metaclass of message 'GetGoal_Request'."""

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
            module = import_type_support('qr_mission_scheduler')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'qr_mission_scheduler.srv.GetGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_goal__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGoal_Request(metaclass=Metaclass_GetGoal_Request):
    """Message class 'GetGoal_Request'."""

    __slots__ = [
        '_goal_type',
        '_source_id',
        '_target_id',
    ]

    _fields_and_field_types = {
        'goal_type': 'string',
        'source_id': 'double',
        'target_id': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_type = kwargs.get('goal_type', str())
        self.source_id = kwargs.get('source_id', float())
        self.target_id = kwargs.get('target_id', float())

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
        if self.goal_type != other.goal_type:
            return False
        if self.source_id != other.source_id:
            return False
        if self.target_id != other.target_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_type(self):
        """Message field 'goal_type'."""
        return self._goal_type

    @goal_type.setter
    def goal_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'goal_type' field must be of type 'str'"
        self._goal_type = value

    @builtins.property
    def source_id(self):
        """Message field 'source_id'."""
        return self._source_id

    @source_id.setter
    def source_id(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'source_id' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'source_id' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._source_id = value

    @builtins.property
    def target_id(self):
        """Message field 'target_id'."""
        return self._target_id

    @target_id.setter
    def target_id(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_id' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_id' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetGoal_Response(type):
    """Metaclass of message 'GetGoal_Response'."""

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
            module = import_type_support('qr_mission_scheduler')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'qr_mission_scheduler.srv.GetGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_goal__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGoal_Response(metaclass=Metaclass_GetGoal_Response):
    """Message class 'GetGoal_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', str())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value


class Metaclass_GetGoal(type):
    """Metaclass of service 'GetGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('qr_mission_scheduler')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'qr_mission_scheduler.srv.GetGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_goal

            from qr_mission_scheduler.srv import _get_goal
            if _get_goal.Metaclass_GetGoal_Request._TYPE_SUPPORT is None:
                _get_goal.Metaclass_GetGoal_Request.__import_type_support__()
            if _get_goal.Metaclass_GetGoal_Response._TYPE_SUPPORT is None:
                _get_goal.Metaclass_GetGoal_Response.__import_type_support__()


class GetGoal(metaclass=Metaclass_GetGoal):
    from qr_mission_scheduler.srv._get_goal import GetGoal_Request as Request
    from qr_mission_scheduler.srv._get_goal import GetGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

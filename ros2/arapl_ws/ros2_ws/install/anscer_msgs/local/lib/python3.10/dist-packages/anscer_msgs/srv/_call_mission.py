# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/CallMission.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CallMission_Request(type):
    """Metaclass of message 'CallMission_Request'."""

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
                'anscer_msgs.srv.CallMission_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__call_mission__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__call_mission__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__call_mission__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__call_mission__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__call_mission__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CallMission_Request(metaclass=Metaclass_CallMission_Request):
    """Message class 'CallMission_Request'."""

    __slots__ = [
        '_initate',
        '_mission_name',
        '_loops',
    ]

    _fields_and_field_types = {
        'initate': 'boolean',
        'mission_name': 'string',
        'loops': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.initate = kwargs.get('initate', bool())
        self.mission_name = kwargs.get('mission_name', str())
        self.loops = kwargs.get('loops', int())

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
        if self.mission_name != other.mission_name:
            return False
        if self.loops != other.loops:
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
    def loops(self):
        """Message field 'loops'."""
        return self._loops

    @loops.setter
    def loops(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loops' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'loops' field must be an integer in [-32768, 32767]"
        self._loops = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CallMission_Response(type):
    """Metaclass of message 'CallMission_Response'."""

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
                'anscer_msgs.srv.CallMission_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__call_mission__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__call_mission__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__call_mission__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__call_mission__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__call_mission__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CallMission_Response(metaclass=Metaclass_CallMission_Response):
    """Message class 'CallMission_Response'."""

    __slots__ = [
        '_initated',
        '_status',
    ]

    _fields_and_field_types = {
        'initated': 'boolean',
        'status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.initated = kwargs.get('initated', bool())
        self.status = kwargs.get('status', str())

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
        if self.initated != other.initated:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def initated(self):
        """Message field 'initated'."""
        return self._initated

    @initated.setter
    def initated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'initated' field must be of type 'bool'"
        self._initated = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value


class Metaclass_CallMission(type):
    """Metaclass of service 'CallMission'."""

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
                'anscer_msgs.srv.CallMission')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__call_mission

            from anscer_msgs.srv import _call_mission
            if _call_mission.Metaclass_CallMission_Request._TYPE_SUPPORT is None:
                _call_mission.Metaclass_CallMission_Request.__import_type_support__()
            if _call_mission.Metaclass_CallMission_Response._TYPE_SUPPORT is None:
                _call_mission.Metaclass_CallMission_Response.__import_type_support__()


class CallMission(metaclass=Metaclass_CallMission):
    from anscer_msgs.srv._call_mission import CallMission_Request as Request
    from anscer_msgs.srv._call_mission import CallMission_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/WaypointPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WaypointPose_Request(type):
    """Metaclass of message 'WaypointPose_Request'."""

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
                'anscer_msgs.srv.WaypointPose_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__waypoint_pose__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__waypoint_pose__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__waypoint_pose__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__waypoint_pose__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__waypoint_pose__request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointPose_Request(metaclass=Metaclass_WaypointPose_Request):
    """Message class 'WaypointPose_Request'."""

    __slots__ = [
        '_save',
        '_waypoint_id',
        '_waypoint_pose',
        '_waypoint_name',
    ]

    _fields_and_field_types = {
        'save': 'boolean',
        'waypoint_id': 'string',
        'waypoint_pose': 'geometry_msgs/PoseStamped',
        'waypoint_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.save = kwargs.get('save', bool())
        self.waypoint_id = kwargs.get('waypoint_id', str())
        from geometry_msgs.msg import PoseStamped
        self.waypoint_pose = kwargs.get('waypoint_pose', PoseStamped())
        self.waypoint_name = kwargs.get('waypoint_name', str())

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
        if self.save != other.save:
            return False
        if self.waypoint_id != other.waypoint_id:
            return False
        if self.waypoint_pose != other.waypoint_pose:
            return False
        if self.waypoint_name != other.waypoint_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def save(self):
        """Message field 'save'."""
        return self._save

    @save.setter
    def save(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'save' field must be of type 'bool'"
        self._save = value

    @builtins.property
    def waypoint_id(self):
        """Message field 'waypoint_id'."""
        return self._waypoint_id

    @waypoint_id.setter
    def waypoint_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'waypoint_id' field must be of type 'str'"
        self._waypoint_id = value

    @builtins.property
    def waypoint_pose(self):
        """Message field 'waypoint_pose'."""
        return self._waypoint_pose

    @waypoint_pose.setter
    def waypoint_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'waypoint_pose' field must be a sub message of type 'PoseStamped'"
        self._waypoint_pose = value

    @builtins.property
    def waypoint_name(self):
        """Message field 'waypoint_name'."""
        return self._waypoint_name

    @waypoint_name.setter
    def waypoint_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'waypoint_name' field must be of type 'str'"
        self._waypoint_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WaypointPose_Response(type):
    """Metaclass of message 'WaypointPose_Response'."""

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
                'anscer_msgs.srv.WaypointPose_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__waypoint_pose__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__waypoint_pose__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__waypoint_pose__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__waypoint_pose__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__waypoint_pose__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointPose_Response(metaclass=Metaclass_WaypointPose_Response):
    """Message class 'WaypointPose_Response'."""

    __slots__ = [
        '_is_saved',
    ]

    _fields_and_field_types = {
        'is_saved': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_saved = kwargs.get('is_saved', bool())

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
        if self.is_saved != other.is_saved:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_saved(self):
        """Message field 'is_saved'."""
        return self._is_saved

    @is_saved.setter
    def is_saved(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_saved' field must be of type 'bool'"
        self._is_saved = value


class Metaclass_WaypointPose(type):
    """Metaclass of service 'WaypointPose'."""

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
                'anscer_msgs.srv.WaypointPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__waypoint_pose

            from anscer_msgs.srv import _waypoint_pose
            if _waypoint_pose.Metaclass_WaypointPose_Request._TYPE_SUPPORT is None:
                _waypoint_pose.Metaclass_WaypointPose_Request.__import_type_support__()
            if _waypoint_pose.Metaclass_WaypointPose_Response._TYPE_SUPPORT is None:
                _waypoint_pose.Metaclass_WaypointPose_Response.__import_type_support__()


class WaypointPose(metaclass=Metaclass_WaypointPose):
    from anscer_msgs.srv._waypoint_pose import WaypointPose_Request as Request
    from anscer_msgs.srv._waypoint_pose import WaypointPose_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

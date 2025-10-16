# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/EditWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EditWaypoint_Request(type):
    """Metaclass of message 'EditWaypoint_Request'."""

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
                'anscer_msgs.srv.EditWaypoint_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__edit_waypoint__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__edit_waypoint__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__edit_waypoint__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__edit_waypoint__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__edit_waypoint__request

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


class EditWaypoint_Request(metaclass=Metaclass_EditWaypoint_Request):
    """Message class 'EditWaypoint_Request'."""

    __slots__ = [
        '_rename',
        '_replace_id',
        '_replace_to_current_pose',
        '_replace_to_pose',
        '_waypoint_order',
        '_waypoint_id',
        '_new_id',
        '_waypoint_type',
        '_waypoint_name',
        '_waypoint_pose',
    ]

    _fields_and_field_types = {
        'rename': 'boolean',
        'replace_id': 'boolean',
        'replace_to_current_pose': 'boolean',
        'replace_to_pose': 'boolean',
        'waypoint_order': 'int16',
        'waypoint_id': 'string',
        'new_id': 'string',
        'waypoint_type': 'string',
        'waypoint_name': 'string',
        'waypoint_pose': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rename = kwargs.get('rename', bool())
        self.replace_id = kwargs.get('replace_id', bool())
        self.replace_to_current_pose = kwargs.get('replace_to_current_pose', bool())
        self.replace_to_pose = kwargs.get('replace_to_pose', bool())
        self.waypoint_order = kwargs.get('waypoint_order', int())
        self.waypoint_id = kwargs.get('waypoint_id', str())
        self.new_id = kwargs.get('new_id', str())
        self.waypoint_type = kwargs.get('waypoint_type', str())
        self.waypoint_name = kwargs.get('waypoint_name', str())
        from geometry_msgs.msg import PoseStamped
        self.waypoint_pose = kwargs.get('waypoint_pose', PoseStamped())

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
        if self.rename != other.rename:
            return False
        if self.replace_id != other.replace_id:
            return False
        if self.replace_to_current_pose != other.replace_to_current_pose:
            return False
        if self.replace_to_pose != other.replace_to_pose:
            return False
        if self.waypoint_order != other.waypoint_order:
            return False
        if self.waypoint_id != other.waypoint_id:
            return False
        if self.new_id != other.new_id:
            return False
        if self.waypoint_type != other.waypoint_type:
            return False
        if self.waypoint_name != other.waypoint_name:
            return False
        if self.waypoint_pose != other.waypoint_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rename(self):
        """Message field 'rename'."""
        return self._rename

    @rename.setter
    def rename(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rename' field must be of type 'bool'"
        self._rename = value

    @builtins.property
    def replace_id(self):
        """Message field 'replace_id'."""
        return self._replace_id

    @replace_id.setter
    def replace_id(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'replace_id' field must be of type 'bool'"
        self._replace_id = value

    @builtins.property
    def replace_to_current_pose(self):
        """Message field 'replace_to_current_pose'."""
        return self._replace_to_current_pose

    @replace_to_current_pose.setter
    def replace_to_current_pose(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'replace_to_current_pose' field must be of type 'bool'"
        self._replace_to_current_pose = value

    @builtins.property
    def replace_to_pose(self):
        """Message field 'replace_to_pose'."""
        return self._replace_to_pose

    @replace_to_pose.setter
    def replace_to_pose(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'replace_to_pose' field must be of type 'bool'"
        self._replace_to_pose = value

    @builtins.property
    def waypoint_order(self):
        """Message field 'waypoint_order'."""
        return self._waypoint_order

    @waypoint_order.setter
    def waypoint_order(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'waypoint_order' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'waypoint_order' field must be an integer in [-32768, 32767]"
        self._waypoint_order = value

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
    def new_id(self):
        """Message field 'new_id'."""
        return self._new_id

    @new_id.setter
    def new_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'new_id' field must be of type 'str'"
        self._new_id = value

    @builtins.property
    def waypoint_type(self):
        """Message field 'waypoint_type'."""
        return self._waypoint_type

    @waypoint_type.setter
    def waypoint_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'waypoint_type' field must be of type 'str'"
        self._waypoint_type = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EditWaypoint_Response(type):
    """Metaclass of message 'EditWaypoint_Response'."""

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
                'anscer_msgs.srv.EditWaypoint_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__edit_waypoint__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__edit_waypoint__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__edit_waypoint__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__edit_waypoint__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__edit_waypoint__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EditWaypoint_Response(metaclass=Metaclass_EditWaypoint_Response):
    """Message class 'EditWaypoint_Response'."""

    __slots__ = [
        '_status',
        '_edited',
    ]

    _fields_and_field_types = {
        'status': 'string',
        'edited': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', str())
        self.edited = kwargs.get('edited', bool())

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
        if self.edited != other.edited:
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
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @builtins.property
    def edited(self):
        """Message field 'edited'."""
        return self._edited

    @edited.setter
    def edited(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'edited' field must be of type 'bool'"
        self._edited = value


class Metaclass_EditWaypoint(type):
    """Metaclass of service 'EditWaypoint'."""

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
                'anscer_msgs.srv.EditWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__edit_waypoint

            from anscer_msgs.srv import _edit_waypoint
            if _edit_waypoint.Metaclass_EditWaypoint_Request._TYPE_SUPPORT is None:
                _edit_waypoint.Metaclass_EditWaypoint_Request.__import_type_support__()
            if _edit_waypoint.Metaclass_EditWaypoint_Response._TYPE_SUPPORT is None:
                _edit_waypoint.Metaclass_EditWaypoint_Response.__import_type_support__()


class EditWaypoint(metaclass=Metaclass_EditWaypoint):
    from anscer_msgs.srv._edit_waypoint import EditWaypoint_Request as Request
    from anscer_msgs.srv._edit_waypoint import EditWaypoint_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

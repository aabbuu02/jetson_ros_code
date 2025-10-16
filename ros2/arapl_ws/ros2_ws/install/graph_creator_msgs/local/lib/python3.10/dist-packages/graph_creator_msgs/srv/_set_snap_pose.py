# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_creator_msgs:srv/SetSnapPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetSnapPose_Request(type):
    """Metaclass of message 'SetSnapPose_Request'."""

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
            module = import_type_support('graph_creator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'graph_creator_msgs.srv.SetSnapPose_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_snap_pose__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_snap_pose__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_snap_pose__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_snap_pose__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_snap_pose__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSnapPose_Request(metaclass=Metaclass_SetSnapPose_Request):
    """Message class 'SetSnapPose_Request'."""

    __slots__ = [
        '_enable_vertex_snap_mode',
        '_enable_edge_snap_mode',
        '_enable_position_snap_mode',
        '_enable_orientation_snap_mode',
        '_position_grid_size',
        '_orientation_angle',
    ]

    _fields_and_field_types = {
        'enable_vertex_snap_mode': 'boolean',
        'enable_edge_snap_mode': 'boolean',
        'enable_position_snap_mode': 'boolean',
        'enable_orientation_snap_mode': 'boolean',
        'position_grid_size': 'double',
        'orientation_angle': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.enable_vertex_snap_mode = kwargs.get('enable_vertex_snap_mode', bool())
        self.enable_edge_snap_mode = kwargs.get('enable_edge_snap_mode', bool())
        self.enable_position_snap_mode = kwargs.get('enable_position_snap_mode', bool())
        self.enable_orientation_snap_mode = kwargs.get('enable_orientation_snap_mode', bool())
        self.position_grid_size = kwargs.get('position_grid_size', float())
        self.orientation_angle = kwargs.get('orientation_angle', float())

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
        if self.enable_vertex_snap_mode != other.enable_vertex_snap_mode:
            return False
        if self.enable_edge_snap_mode != other.enable_edge_snap_mode:
            return False
        if self.enable_position_snap_mode != other.enable_position_snap_mode:
            return False
        if self.enable_orientation_snap_mode != other.enable_orientation_snap_mode:
            return False
        if self.position_grid_size != other.position_grid_size:
            return False
        if self.orientation_angle != other.orientation_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enable_vertex_snap_mode(self):
        """Message field 'enable_vertex_snap_mode'."""
        return self._enable_vertex_snap_mode

    @enable_vertex_snap_mode.setter
    def enable_vertex_snap_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_vertex_snap_mode' field must be of type 'bool'"
        self._enable_vertex_snap_mode = value

    @builtins.property
    def enable_edge_snap_mode(self):
        """Message field 'enable_edge_snap_mode'."""
        return self._enable_edge_snap_mode

    @enable_edge_snap_mode.setter
    def enable_edge_snap_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_edge_snap_mode' field must be of type 'bool'"
        self._enable_edge_snap_mode = value

    @builtins.property
    def enable_position_snap_mode(self):
        """Message field 'enable_position_snap_mode'."""
        return self._enable_position_snap_mode

    @enable_position_snap_mode.setter
    def enable_position_snap_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_position_snap_mode' field must be of type 'bool'"
        self._enable_position_snap_mode = value

    @builtins.property
    def enable_orientation_snap_mode(self):
        """Message field 'enable_orientation_snap_mode'."""
        return self._enable_orientation_snap_mode

    @enable_orientation_snap_mode.setter
    def enable_orientation_snap_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_orientation_snap_mode' field must be of type 'bool'"
        self._enable_orientation_snap_mode = value

    @builtins.property
    def position_grid_size(self):
        """Message field 'position_grid_size'."""
        return self._position_grid_size

    @position_grid_size.setter
    def position_grid_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_grid_size' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position_grid_size' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position_grid_size = value

    @builtins.property
    def orientation_angle(self):
        """Message field 'orientation_angle'."""
        return self._orientation_angle

    @orientation_angle.setter
    def orientation_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'orientation_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._orientation_angle = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetSnapPose_Response(type):
    """Metaclass of message 'SetSnapPose_Response'."""

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
            module = import_type_support('graph_creator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'graph_creator_msgs.srv.SetSnapPose_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_snap_pose__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_snap_pose__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_snap_pose__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_snap_pose__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_snap_pose__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSnapPose_Response(metaclass=Metaclass_SetSnapPose_Response):
    """Message class 'SetSnapPose_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetSnapPose(type):
    """Metaclass of service 'SetSnapPose'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('graph_creator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'graph_creator_msgs.srv.SetSnapPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_snap_pose

            from graph_creator_msgs.srv import _set_snap_pose
            if _set_snap_pose.Metaclass_SetSnapPose_Request._TYPE_SUPPORT is None:
                _set_snap_pose.Metaclass_SetSnapPose_Request.__import_type_support__()
            if _set_snap_pose.Metaclass_SetSnapPose_Response._TYPE_SUPPORT is None:
                _set_snap_pose.Metaclass_SetSnapPose_Response.__import_type_support__()


class SetSnapPose(metaclass=Metaclass_SetSnapPose):
    from graph_creator_msgs.srv._set_snap_pose import SetSnapPose_Request as Request
    from graph_creator_msgs.srv._set_snap_pose import SetSnapPose_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

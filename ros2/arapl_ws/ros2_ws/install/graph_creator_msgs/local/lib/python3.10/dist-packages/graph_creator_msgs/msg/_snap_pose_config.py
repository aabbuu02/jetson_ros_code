# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_creator_msgs:msg/SnapPoseConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SnapPoseConfig(type):
    """Metaclass of message 'SnapPoseConfig'."""

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
                'graph_creator_msgs.msg.SnapPoseConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__snap_pose_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__snap_pose_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__snap_pose_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__snap_pose_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__snap_pose_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SnapPoseConfig(metaclass=Metaclass_SnapPoseConfig):
    """Message class 'SnapPoseConfig'."""

    __slots__ = [
        '_enable_for_vertices',
        '_enable_for_edges',
        '_enable_position_snap',
        '_enable_orientation_snap',
        '_position_snap_grid_size',
        '_orientation_snap_angle',
    ]

    _fields_and_field_types = {
        'enable_for_vertices': 'boolean',
        'enable_for_edges': 'boolean',
        'enable_position_snap': 'boolean',
        'enable_orientation_snap': 'boolean',
        'position_snap_grid_size': 'double',
        'orientation_snap_angle': 'double',
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
        self.enable_for_vertices = kwargs.get('enable_for_vertices', bool())
        self.enable_for_edges = kwargs.get('enable_for_edges', bool())
        self.enable_position_snap = kwargs.get('enable_position_snap', bool())
        self.enable_orientation_snap = kwargs.get('enable_orientation_snap', bool())
        self.position_snap_grid_size = kwargs.get('position_snap_grid_size', float())
        self.orientation_snap_angle = kwargs.get('orientation_snap_angle', float())

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
        if self.enable_for_vertices != other.enable_for_vertices:
            return False
        if self.enable_for_edges != other.enable_for_edges:
            return False
        if self.enable_position_snap != other.enable_position_snap:
            return False
        if self.enable_orientation_snap != other.enable_orientation_snap:
            return False
        if self.position_snap_grid_size != other.position_snap_grid_size:
            return False
        if self.orientation_snap_angle != other.orientation_snap_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enable_for_vertices(self):
        """Message field 'enable_for_vertices'."""
        return self._enable_for_vertices

    @enable_for_vertices.setter
    def enable_for_vertices(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_for_vertices' field must be of type 'bool'"
        self._enable_for_vertices = value

    @builtins.property
    def enable_for_edges(self):
        """Message field 'enable_for_edges'."""
        return self._enable_for_edges

    @enable_for_edges.setter
    def enable_for_edges(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_for_edges' field must be of type 'bool'"
        self._enable_for_edges = value

    @builtins.property
    def enable_position_snap(self):
        """Message field 'enable_position_snap'."""
        return self._enable_position_snap

    @enable_position_snap.setter
    def enable_position_snap(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_position_snap' field must be of type 'bool'"
        self._enable_position_snap = value

    @builtins.property
    def enable_orientation_snap(self):
        """Message field 'enable_orientation_snap'."""
        return self._enable_orientation_snap

    @enable_orientation_snap.setter
    def enable_orientation_snap(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_orientation_snap' field must be of type 'bool'"
        self._enable_orientation_snap = value

    @builtins.property
    def position_snap_grid_size(self):
        """Message field 'position_snap_grid_size'."""
        return self._position_snap_grid_size

    @position_snap_grid_size.setter
    def position_snap_grid_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_snap_grid_size' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position_snap_grid_size' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position_snap_grid_size = value

    @builtins.property
    def orientation_snap_angle(self):
        """Message field 'orientation_snap_angle'."""
        return self._orientation_snap_angle

    @orientation_snap_angle.setter
    def orientation_snap_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation_snap_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'orientation_snap_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._orientation_snap_angle = value

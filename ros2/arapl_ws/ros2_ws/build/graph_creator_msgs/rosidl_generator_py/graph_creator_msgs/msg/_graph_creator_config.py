# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_creator_msgs:msg/GraphCreatorConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraphCreatorConfig(type):
    """Metaclass of message 'GraphCreatorConfig'."""

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
                'graph_creator_msgs.msg.GraphCreatorConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graph_creator_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graph_creator_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graph_creator_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graph_creator_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graph_creator_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraphCreatorConfig(metaclass=Metaclass_GraphCreatorConfig):
    """Message class 'GraphCreatorConfig'."""

    __slots__ = [
        '_vertex_sphere_scale',
        '_vertex_arrow_scale',
        '_control_pose_scale',
        '_edge_pose_spacing',
        '_bezier_resolution',
    ]

    _fields_and_field_types = {
        'vertex_sphere_scale': 'double',
        'vertex_arrow_scale': 'double',
        'control_pose_scale': 'double',
        'edge_pose_spacing': 'double',
        'bezier_resolution': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vertex_sphere_scale = kwargs.get('vertex_sphere_scale', float())
        self.vertex_arrow_scale = kwargs.get('vertex_arrow_scale', float())
        self.control_pose_scale = kwargs.get('control_pose_scale', float())
        self.edge_pose_spacing = kwargs.get('edge_pose_spacing', float())
        self.bezier_resolution = kwargs.get('bezier_resolution', float())

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
        if self.vertex_sphere_scale != other.vertex_sphere_scale:
            return False
        if self.vertex_arrow_scale != other.vertex_arrow_scale:
            return False
        if self.control_pose_scale != other.control_pose_scale:
            return False
        if self.edge_pose_spacing != other.edge_pose_spacing:
            return False
        if self.bezier_resolution != other.bezier_resolution:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vertex_sphere_scale(self):
        """Message field 'vertex_sphere_scale'."""
        return self._vertex_sphere_scale

    @vertex_sphere_scale.setter
    def vertex_sphere_scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertex_sphere_scale' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertex_sphere_scale' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertex_sphere_scale = value

    @builtins.property
    def vertex_arrow_scale(self):
        """Message field 'vertex_arrow_scale'."""
        return self._vertex_arrow_scale

    @vertex_arrow_scale.setter
    def vertex_arrow_scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertex_arrow_scale' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertex_arrow_scale' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertex_arrow_scale = value

    @builtins.property
    def control_pose_scale(self):
        """Message field 'control_pose_scale'."""
        return self._control_pose_scale

    @control_pose_scale.setter
    def control_pose_scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'control_pose_scale' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'control_pose_scale' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._control_pose_scale = value

    @builtins.property
    def edge_pose_spacing(self):
        """Message field 'edge_pose_spacing'."""
        return self._edge_pose_spacing

    @edge_pose_spacing.setter
    def edge_pose_spacing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'edge_pose_spacing' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'edge_pose_spacing' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._edge_pose_spacing = value

    @builtins.property
    def bezier_resolution(self):
        """Message field 'bezier_resolution'."""
        return self._bezier_resolution

    @bezier_resolution.setter
    def bezier_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bezier_resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bezier_resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bezier_resolution = value

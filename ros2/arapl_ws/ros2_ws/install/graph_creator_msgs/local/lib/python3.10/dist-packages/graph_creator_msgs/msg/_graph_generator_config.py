# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_creator_msgs:msg/GraphGeneratorConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraphGeneratorConfig(type):
    """Metaclass of message 'GraphGeneratorConfig'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GRAPH_GENERATION_TYPE_GRID': 0,
        'GRAPH_GENERATION_TYPE_DXF': 1,
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
                'graph_creator_msgs.msg.GraphGeneratorConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graph_generator_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graph_generator_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graph_generator_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graph_generator_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graph_generator_config

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from graph_creator_msgs.msg import EdgeCreationType
            if EdgeCreationType.__class__._TYPE_SUPPORT is None:
                EdgeCreationType.__class__.__import_type_support__()

            from graph_creator_msgs.msg import EdgeDirectionCreationType
            if EdgeDirectionCreationType.__class__._TYPE_SUPPORT is None:
                EdgeDirectionCreationType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GRAPH_GENERATION_TYPE_GRID': cls.__constants['GRAPH_GENERATION_TYPE_GRID'],
            'GRAPH_GENERATION_TYPE_DXF': cls.__constants['GRAPH_GENERATION_TYPE_DXF'],
        }

    @property
    def GRAPH_GENERATION_TYPE_GRID(self):
        """Message constant 'GRAPH_GENERATION_TYPE_GRID'."""
        return Metaclass_GraphGeneratorConfig.__constants['GRAPH_GENERATION_TYPE_GRID']

    @property
    def GRAPH_GENERATION_TYPE_DXF(self):
        """Message constant 'GRAPH_GENERATION_TYPE_DXF'."""
        return Metaclass_GraphGeneratorConfig.__constants['GRAPH_GENERATION_TYPE_DXF']


class GraphGeneratorConfig(metaclass=Metaclass_GraphGeneratorConfig):
    """
    Message class 'GraphGeneratorConfig'.

    Constants:
      GRAPH_GENERATION_TYPE_GRID
      GRAPH_GENERATION_TYPE_DXF
    """

    __slots__ = [
        '_generation_type',
        '_edge_creation_type',
        '_edge_direction_type',
        '_ignore_vertex_orientation',
        '_use_edge_count_threshold',
        '_edge_count_threshold',
        '_dxf_file_path',
        '_scale_x',
        '_scale_y',
        '_start_pose',
        '_rows',
        '_columns',
        '_row_spacing',
        '_column_spacing',
    ]

    _fields_and_field_types = {
        'generation_type': 'uint8',
        'edge_creation_type': 'graph_creator_msgs/EdgeCreationType',
        'edge_direction_type': 'graph_creator_msgs/EdgeDirectionCreationType',
        'ignore_vertex_orientation': 'boolean',
        'use_edge_count_threshold': 'boolean',
        'edge_count_threshold': 'uint32',
        'dxf_file_path': 'string',
        'scale_x': 'float',
        'scale_y': 'float',
        'start_pose': 'geometry_msgs/Pose',
        'rows': 'uint32',
        'columns': 'uint32',
        'row_spacing': 'float',
        'column_spacing': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['graph_creator_msgs', 'msg'], 'EdgeCreationType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['graph_creator_msgs', 'msg'], 'EdgeDirectionCreationType'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.generation_type = kwargs.get('generation_type', int())
        from graph_creator_msgs.msg import EdgeCreationType
        self.edge_creation_type = kwargs.get('edge_creation_type', EdgeCreationType())
        from graph_creator_msgs.msg import EdgeDirectionCreationType
        self.edge_direction_type = kwargs.get('edge_direction_type', EdgeDirectionCreationType())
        self.ignore_vertex_orientation = kwargs.get('ignore_vertex_orientation', bool())
        self.use_edge_count_threshold = kwargs.get('use_edge_count_threshold', bool())
        self.edge_count_threshold = kwargs.get('edge_count_threshold', int())
        self.dxf_file_path = kwargs.get('dxf_file_path', str())
        self.scale_x = kwargs.get('scale_x', float())
        self.scale_y = kwargs.get('scale_y', float())
        from geometry_msgs.msg import Pose
        self.start_pose = kwargs.get('start_pose', Pose())
        self.rows = kwargs.get('rows', int())
        self.columns = kwargs.get('columns', int())
        self.row_spacing = kwargs.get('row_spacing', float())
        self.column_spacing = kwargs.get('column_spacing', float())

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
        if self.generation_type != other.generation_type:
            return False
        if self.edge_creation_type != other.edge_creation_type:
            return False
        if self.edge_direction_type != other.edge_direction_type:
            return False
        if self.ignore_vertex_orientation != other.ignore_vertex_orientation:
            return False
        if self.use_edge_count_threshold != other.use_edge_count_threshold:
            return False
        if self.edge_count_threshold != other.edge_count_threshold:
            return False
        if self.dxf_file_path != other.dxf_file_path:
            return False
        if self.scale_x != other.scale_x:
            return False
        if self.scale_y != other.scale_y:
            return False
        if self.start_pose != other.start_pose:
            return False
        if self.rows != other.rows:
            return False
        if self.columns != other.columns:
            return False
        if self.row_spacing != other.row_spacing:
            return False
        if self.column_spacing != other.column_spacing:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def generation_type(self):
        """Message field 'generation_type'."""
        return self._generation_type

    @generation_type.setter
    def generation_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'generation_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'generation_type' field must be an unsigned integer in [0, 255]"
        self._generation_type = value

    @builtins.property
    def edge_creation_type(self):
        """Message field 'edge_creation_type'."""
        return self._edge_creation_type

    @edge_creation_type.setter
    def edge_creation_type(self, value):
        if __debug__:
            from graph_creator_msgs.msg import EdgeCreationType
            assert \
                isinstance(value, EdgeCreationType), \
                "The 'edge_creation_type' field must be a sub message of type 'EdgeCreationType'"
        self._edge_creation_type = value

    @builtins.property
    def edge_direction_type(self):
        """Message field 'edge_direction_type'."""
        return self._edge_direction_type

    @edge_direction_type.setter
    def edge_direction_type(self, value):
        if __debug__:
            from graph_creator_msgs.msg import EdgeDirectionCreationType
            assert \
                isinstance(value, EdgeDirectionCreationType), \
                "The 'edge_direction_type' field must be a sub message of type 'EdgeDirectionCreationType'"
        self._edge_direction_type = value

    @builtins.property
    def ignore_vertex_orientation(self):
        """Message field 'ignore_vertex_orientation'."""
        return self._ignore_vertex_orientation

    @ignore_vertex_orientation.setter
    def ignore_vertex_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_vertex_orientation' field must be of type 'bool'"
        self._ignore_vertex_orientation = value

    @builtins.property
    def use_edge_count_threshold(self):
        """Message field 'use_edge_count_threshold'."""
        return self._use_edge_count_threshold

    @use_edge_count_threshold.setter
    def use_edge_count_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_edge_count_threshold' field must be of type 'bool'"
        self._use_edge_count_threshold = value

    @builtins.property
    def edge_count_threshold(self):
        """Message field 'edge_count_threshold'."""
        return self._edge_count_threshold

    @edge_count_threshold.setter
    def edge_count_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'edge_count_threshold' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'edge_count_threshold' field must be an unsigned integer in [0, 4294967295]"
        self._edge_count_threshold = value

    @builtins.property
    def dxf_file_path(self):
        """Message field 'dxf_file_path'."""
        return self._dxf_file_path

    @dxf_file_path.setter
    def dxf_file_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dxf_file_path' field must be of type 'str'"
        self._dxf_file_path = value

    @builtins.property
    def scale_x(self):
        """Message field 'scale_x'."""
        return self._scale_x

    @scale_x.setter
    def scale_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scale_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scale_x = value

    @builtins.property
    def scale_y(self):
        """Message field 'scale_y'."""
        return self._scale_y

    @scale_y.setter
    def scale_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scale_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scale_y = value

    @builtins.property
    def start_pose(self):
        """Message field 'start_pose'."""
        return self._start_pose

    @start_pose.setter
    def start_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'start_pose' field must be a sub message of type 'Pose'"
        self._start_pose = value

    @builtins.property
    def rows(self):
        """Message field 'rows'."""
        return self._rows

    @rows.setter
    def rows(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rows' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rows' field must be an unsigned integer in [0, 4294967295]"
        self._rows = value

    @builtins.property
    def columns(self):
        """Message field 'columns'."""
        return self._columns

    @columns.setter
    def columns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'columns' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'columns' field must be an unsigned integer in [0, 4294967295]"
        self._columns = value

    @builtins.property
    def row_spacing(self):
        """Message field 'row_spacing'."""
        return self._row_spacing

    @row_spacing.setter
    def row_spacing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'row_spacing' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'row_spacing' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._row_spacing = value

    @builtins.property
    def column_spacing(self):
        """Message field 'column_spacing'."""
        return self._column_spacing

    @column_spacing.setter
    def column_spacing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'column_spacing' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'column_spacing' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._column_spacing = value

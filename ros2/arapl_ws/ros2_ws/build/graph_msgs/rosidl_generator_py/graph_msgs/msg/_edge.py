# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_msgs:msg/Edge.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Edge(type):
    """Metaclass of message 'Edge'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STRAIGHT_LINE': 0,
        'CUBIC_BEZIER': 1,
        'FORWARD': 0,
        'REVERSE': 1,
        'BIDIRECTIONAL': 2,
        'CREATED': 0,
        'GENERATED': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('graph_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'graph_msgs.msg.Edge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__edge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__edge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__edge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__edge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__edge

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseArray
            if PoseArray.__class__._TYPE_SUPPORT is None:
                PoseArray.__class__.__import_type_support__()

            from graph_msgs.msg import Property
            if Property.__class__._TYPE_SUPPORT is None:
                Property.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STRAIGHT_LINE': cls.__constants['STRAIGHT_LINE'],
            'CUBIC_BEZIER': cls.__constants['CUBIC_BEZIER'],
            'FORWARD': cls.__constants['FORWARD'],
            'REVERSE': cls.__constants['REVERSE'],
            'BIDIRECTIONAL': cls.__constants['BIDIRECTIONAL'],
            'CREATED': cls.__constants['CREATED'],
            'GENERATED': cls.__constants['GENERATED'],
        }

    @property
    def STRAIGHT_LINE(self):
        """Message constant 'STRAIGHT_LINE'."""
        return Metaclass_Edge.__constants['STRAIGHT_LINE']

    @property
    def CUBIC_BEZIER(self):
        """Message constant 'CUBIC_BEZIER'."""
        return Metaclass_Edge.__constants['CUBIC_BEZIER']

    @property
    def FORWARD(self):
        """Message constant 'FORWARD'."""
        return Metaclass_Edge.__constants['FORWARD']

    @property
    def REVERSE(self):
        """Message constant 'REVERSE'."""
        return Metaclass_Edge.__constants['REVERSE']

    @property
    def BIDIRECTIONAL(self):
        """Message constant 'BIDIRECTIONAL'."""
        return Metaclass_Edge.__constants['BIDIRECTIONAL']

    @property
    def CREATED(self):
        """Message constant 'CREATED'."""
        return Metaclass_Edge.__constants['CREATED']

    @property
    def GENERATED(self):
        """Message constant 'GENERATED'."""
        return Metaclass_Edge.__constants['GENERATED']


class Edge(metaclass=Metaclass_Edge):
    """
    Message class 'Edge'.

    Constants:
      STRAIGHT_LINE
      CUBIC_BEZIER
      FORWARD
      REVERSE
      BIDIRECTIONAL
      CREATED
      GENERATED
    """

    __slots__ = [
        '_name',
        '_alias',
        '_type',
        '_edge_direction_type',
        '_creation_type',
        '_source_vertex_id',
        '_target_vertex_id',
        '_length',
        '_cost_factor',
        '_bidirectional',
        '_independent_orientation',
        '_control_points',
        '_control_orientation',
        '_poses',
        '_properties',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'alias': 'string',
        'type': 'uint8',
        'edge_direction_type': 'uint8',
        'creation_type': 'uint8',
        'source_vertex_id': 'uint32',
        'target_vertex_id': 'uint32',
        'length': 'double',
        'cost_factor': 'double',
        'bidirectional': 'boolean',
        'independent_orientation': 'boolean',
        'control_points': 'sequence<geometry_msgs/Pose>',
        'control_orientation': 'geometry_msgs/Pose',
        'poses': 'geometry_msgs/PoseArray',
        'properties': 'sequence<graph_msgs/Property>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseArray'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['graph_msgs', 'msg'], 'Property')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.alias = kwargs.get('alias', str())
        self.type = kwargs.get('type', int())
        self.edge_direction_type = kwargs.get('edge_direction_type', int())
        self.creation_type = kwargs.get('creation_type', int())
        self.source_vertex_id = kwargs.get('source_vertex_id', int())
        self.target_vertex_id = kwargs.get('target_vertex_id', int())
        self.length = kwargs.get('length', float())
        self.cost_factor = kwargs.get('cost_factor', float())
        self.bidirectional = kwargs.get('bidirectional', bool())
        self.independent_orientation = kwargs.get('independent_orientation', bool())
        self.control_points = kwargs.get('control_points', [])
        from geometry_msgs.msg import Pose
        self.control_orientation = kwargs.get('control_orientation', Pose())
        from geometry_msgs.msg import PoseArray
        self.poses = kwargs.get('poses', PoseArray())
        self.properties = kwargs.get('properties', [])

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
        if self.name != other.name:
            return False
        if self.alias != other.alias:
            return False
        if self.type != other.type:
            return False
        if self.edge_direction_type != other.edge_direction_type:
            return False
        if self.creation_type != other.creation_type:
            return False
        if self.source_vertex_id != other.source_vertex_id:
            return False
        if self.target_vertex_id != other.target_vertex_id:
            return False
        if self.length != other.length:
            return False
        if self.cost_factor != other.cost_factor:
            return False
        if self.bidirectional != other.bidirectional:
            return False
        if self.independent_orientation != other.independent_orientation:
            return False
        if self.control_points != other.control_points:
            return False
        if self.control_orientation != other.control_orientation:
            return False
        if self.poses != other.poses:
            return False
        if self.properties != other.properties:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def alias(self):
        """Message field 'alias'."""
        return self._alias

    @alias.setter
    def alias(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'alias' field must be of type 'str'"
        self._alias = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def edge_direction_type(self):
        """Message field 'edge_direction_type'."""
        return self._edge_direction_type

    @edge_direction_type.setter
    def edge_direction_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'edge_direction_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'edge_direction_type' field must be an unsigned integer in [0, 255]"
        self._edge_direction_type = value

    @builtins.property
    def creation_type(self):
        """Message field 'creation_type'."""
        return self._creation_type

    @creation_type.setter
    def creation_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'creation_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'creation_type' field must be an unsigned integer in [0, 255]"
        self._creation_type = value

    @builtins.property
    def source_vertex_id(self):
        """Message field 'source_vertex_id'."""
        return self._source_vertex_id

    @source_vertex_id.setter
    def source_vertex_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_vertex_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'source_vertex_id' field must be an unsigned integer in [0, 4294967295]"
        self._source_vertex_id = value

    @builtins.property
    def target_vertex_id(self):
        """Message field 'target_vertex_id'."""
        return self._target_vertex_id

    @target_vertex_id.setter
    def target_vertex_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_vertex_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'target_vertex_id' field must be an unsigned integer in [0, 4294967295]"
        self._target_vertex_id = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length = value

    @builtins.property
    def cost_factor(self):
        """Message field 'cost_factor'."""
        return self._cost_factor

    @cost_factor.setter
    def cost_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cost_factor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cost_factor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cost_factor = value

    @builtins.property
    def bidirectional(self):
        """Message field 'bidirectional'."""
        return self._bidirectional

    @bidirectional.setter
    def bidirectional(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bidirectional' field must be of type 'bool'"
        self._bidirectional = value

    @builtins.property
    def independent_orientation(self):
        """Message field 'independent_orientation'."""
        return self._independent_orientation

    @independent_orientation.setter
    def independent_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'independent_orientation' field must be of type 'bool'"
        self._independent_orientation = value

    @builtins.property
    def control_points(self):
        """Message field 'control_points'."""
        return self._control_points

    @control_points.setter
    def control_points(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'control_points' field must be a set or sequence and each value of type 'Pose'"
        self._control_points = value

    @builtins.property
    def control_orientation(self):
        """Message field 'control_orientation'."""
        return self._control_orientation

    @control_orientation.setter
    def control_orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'control_orientation' field must be a sub message of type 'Pose'"
        self._control_orientation = value

    @builtins.property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseArray
            assert \
                isinstance(value, PoseArray), \
                "The 'poses' field must be a sub message of type 'PoseArray'"
        self._poses = value

    @builtins.property
    def properties(self):
        """Message field 'properties'."""
        return self._properties

    @properties.setter
    def properties(self, value):
        if __debug__:
            from graph_msgs.msg import Property
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
                 all(isinstance(v, Property) for v in value) and
                 True), \
                "The 'properties' field must be a set or sequence and each value of type 'Property'"
        self._properties = value

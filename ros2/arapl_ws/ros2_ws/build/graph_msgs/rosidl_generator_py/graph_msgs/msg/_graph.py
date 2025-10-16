# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_msgs:msg/Graph.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Graph(type):
    """Metaclass of message 'Graph'."""

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
            module = import_type_support('graph_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'graph_msgs.msg.Graph')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graph
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graph
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graph
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graph
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graph

            from graph_msgs.msg import Edge
            if Edge.__class__._TYPE_SUPPORT is None:
                Edge.__class__.__import_type_support__()

            from graph_msgs.msg import GraphMetaData
            if GraphMetaData.__class__._TYPE_SUPPORT is None:
                GraphMetaData.__class__.__import_type_support__()

            from graph_msgs.msg import Property
            if Property.__class__._TYPE_SUPPORT is None:
                Property.__class__.__import_type_support__()

            from graph_msgs.msg import Vertex
            if Vertex.__class__._TYPE_SUPPORT is None:
                Vertex.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Graph(metaclass=Metaclass_Graph):
    """Message class 'Graph'."""

    __slots__ = [
        '_header',
        '_meta_data',
        '_vertices',
        '_edges',
        '_properties',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'meta_data': 'graph_msgs/GraphMetaData',
        'vertices': 'sequence<graph_msgs/Vertex>',
        'edges': 'sequence<graph_msgs/Edge>',
        'properties': 'sequence<graph_msgs/Property>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['graph_msgs', 'msg'], 'GraphMetaData'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['graph_msgs', 'msg'], 'Vertex')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['graph_msgs', 'msg'], 'Edge')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['graph_msgs', 'msg'], 'Property')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from graph_msgs.msg import GraphMetaData
        self.meta_data = kwargs.get('meta_data', GraphMetaData())
        self.vertices = kwargs.get('vertices', [])
        self.edges = kwargs.get('edges', [])
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
        if self.header != other.header:
            return False
        if self.meta_data != other.meta_data:
            return False
        if self.vertices != other.vertices:
            return False
        if self.edges != other.edges:
            return False
        if self.properties != other.properties:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def meta_data(self):
        """Message field 'meta_data'."""
        return self._meta_data

    @meta_data.setter
    def meta_data(self, value):
        if __debug__:
            from graph_msgs.msg import GraphMetaData
            assert \
                isinstance(value, GraphMetaData), \
                "The 'meta_data' field must be a sub message of type 'GraphMetaData'"
        self._meta_data = value

    @builtins.property
    def vertices(self):
        """Message field 'vertices'."""
        return self._vertices

    @vertices.setter
    def vertices(self, value):
        if __debug__:
            from graph_msgs.msg import Vertex
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
                 all(isinstance(v, Vertex) for v in value) and
                 True), \
                "The 'vertices' field must be a set or sequence and each value of type 'Vertex'"
        self._vertices = value

    @builtins.property
    def edges(self):
        """Message field 'edges'."""
        return self._edges

    @edges.setter
    def edges(self, value):
        if __debug__:
            from graph_msgs.msg import Edge
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
                 all(isinstance(v, Edge) for v in value) and
                 True), \
                "The 'edges' field must be a set or sequence and each value of type 'Edge'"
        self._edges = value

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

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_msgs:msg/GraphMetaData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraphMetaData(type):
    """Metaclass of message 'GraphMetaData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DIRECTED': 0,
        'UNDIRECTED': 1,
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
                'graph_msgs.msg.GraphMetaData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graph_meta_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graph_meta_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graph_meta_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graph_meta_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graph_meta_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DIRECTED': cls.__constants['DIRECTED'],
            'UNDIRECTED': cls.__constants['UNDIRECTED'],
        }

    @property
    def DIRECTED(self):
        """Message constant 'DIRECTED'."""
        return Metaclass_GraphMetaData.__constants['DIRECTED']

    @property
    def UNDIRECTED(self):
        """Message constant 'UNDIRECTED'."""
        return Metaclass_GraphMetaData.__constants['UNDIRECTED']


class GraphMetaData(metaclass=Metaclass_GraphMetaData):
    """
    Message class 'GraphMetaData'.

    Constants:
      DIRECTED
      UNDIRECTED
    """

    __slots__ = [
        '_header',
        '_graph_name',
        '_graph_type',
        '_number_of_vertices',
        '_number_of_edges',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'graph_name': 'string',
        'graph_type': 'uint8',
        'number_of_vertices': 'uint32',
        'number_of_edges': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.graph_name = kwargs.get('graph_name', str())
        self.graph_type = kwargs.get('graph_type', int())
        self.number_of_vertices = kwargs.get('number_of_vertices', int())
        self.number_of_edges = kwargs.get('number_of_edges', int())

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
        if self.graph_name != other.graph_name:
            return False
        if self.graph_type != other.graph_type:
            return False
        if self.number_of_vertices != other.number_of_vertices:
            return False
        if self.number_of_edges != other.number_of_edges:
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
    def graph_name(self):
        """Message field 'graph_name'."""
        return self._graph_name

    @graph_name.setter
    def graph_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'graph_name' field must be of type 'str'"
        self._graph_name = value

    @builtins.property
    def graph_type(self):
        """Message field 'graph_type'."""
        return self._graph_type

    @graph_type.setter
    def graph_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'graph_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'graph_type' field must be an unsigned integer in [0, 255]"
        self._graph_type = value

    @builtins.property
    def number_of_vertices(self):
        """Message field 'number_of_vertices'."""
        return self._number_of_vertices

    @number_of_vertices.setter
    def number_of_vertices(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_vertices' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'number_of_vertices' field must be an unsigned integer in [0, 4294967295]"
        self._number_of_vertices = value

    @builtins.property
    def number_of_edges(self):
        """Message field 'number_of_edges'."""
        return self._number_of_edges

    @number_of_edges.setter
    def number_of_edges(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_edges' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'number_of_edges' field must be an unsigned integer in [0, 4294967295]"
        self._number_of_edges = value

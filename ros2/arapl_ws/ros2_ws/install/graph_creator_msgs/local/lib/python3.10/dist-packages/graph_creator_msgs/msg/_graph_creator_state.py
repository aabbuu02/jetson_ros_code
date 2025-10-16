# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_creator_msgs:msg/GraphCreatorState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraphCreatorState(type):
    """Metaclass of message 'GraphCreatorState'."""

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
                'graph_creator_msgs.msg.GraphCreatorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graph_creator_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graph_creator_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graph_creator_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graph_creator_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graph_creator_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraphCreatorState(metaclass=Metaclass_GraphCreatorState):
    """Message class 'GraphCreatorState'."""

    __slots__ = [
        '_graph_mode',
        '_current_edge_type',
        '_edge_is_bidirectional',
        '_all_vertices_locked',
        '_all_edges_locked',
    ]

    _fields_and_field_types = {
        'graph_mode': 'uint8',
        'current_edge_type': 'uint8',
        'edge_is_bidirectional': 'boolean',
        'all_vertices_locked': 'boolean',
        'all_edges_locked': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.graph_mode = kwargs.get('graph_mode', int())
        self.current_edge_type = kwargs.get('current_edge_type', int())
        self.edge_is_bidirectional = kwargs.get('edge_is_bidirectional', bool())
        self.all_vertices_locked = kwargs.get('all_vertices_locked', bool())
        self.all_edges_locked = kwargs.get('all_edges_locked', bool())

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
        if self.graph_mode != other.graph_mode:
            return False
        if self.current_edge_type != other.current_edge_type:
            return False
        if self.edge_is_bidirectional != other.edge_is_bidirectional:
            return False
        if self.all_vertices_locked != other.all_vertices_locked:
            return False
        if self.all_edges_locked != other.all_edges_locked:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def graph_mode(self):
        """Message field 'graph_mode'."""
        return self._graph_mode

    @graph_mode.setter
    def graph_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'graph_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'graph_mode' field must be an unsigned integer in [0, 255]"
        self._graph_mode = value

    @builtins.property
    def current_edge_type(self):
        """Message field 'current_edge_type'."""
        return self._current_edge_type

    @current_edge_type.setter
    def current_edge_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_edge_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_edge_type' field must be an unsigned integer in [0, 255]"
        self._current_edge_type = value

    @builtins.property
    def edge_is_bidirectional(self):
        """Message field 'edge_is_bidirectional'."""
        return self._edge_is_bidirectional

    @edge_is_bidirectional.setter
    def edge_is_bidirectional(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'edge_is_bidirectional' field must be of type 'bool'"
        self._edge_is_bidirectional = value

    @builtins.property
    def all_vertices_locked(self):
        """Message field 'all_vertices_locked'."""
        return self._all_vertices_locked

    @all_vertices_locked.setter
    def all_vertices_locked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'all_vertices_locked' field must be of type 'bool'"
        self._all_vertices_locked = value

    @builtins.property
    def all_edges_locked(self):
        """Message field 'all_edges_locked'."""
        return self._all_edges_locked

    @all_edges_locked.setter
    def all_edges_locked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'all_edges_locked' field must be of type 'bool'"
        self._all_edges_locked = value

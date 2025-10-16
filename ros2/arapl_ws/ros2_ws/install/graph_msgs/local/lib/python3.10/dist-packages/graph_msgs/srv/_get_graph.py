# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_msgs:srv/GetGraph.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetGraph_Request(type):
    """Metaclass of message 'GetGraph_Request'."""

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
                'graph_msgs.srv.GetGraph_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_graph__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_graph__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_graph__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_graph__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_graph__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGraph_Request(metaclass=Metaclass_GetGraph_Request):
    """Message class 'GetGraph_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetGraph_Response(type):
    """Metaclass of message 'GetGraph_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_GRAPH_VALID': 0,
        'RESULT_GRAPH_INVALID': 1,
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
                'graph_msgs.srv.GetGraph_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_graph__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_graph__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_graph__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_graph__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_graph__response

            from graph_msgs.msg import Graph
            if Graph.__class__._TYPE_SUPPORT is None:
                Graph.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_GRAPH_VALID': cls.__constants['RESULT_GRAPH_VALID'],
            'RESULT_GRAPH_INVALID': cls.__constants['RESULT_GRAPH_INVALID'],
        }

    @property
    def RESULT_GRAPH_VALID(self):
        """Message constant 'RESULT_GRAPH_VALID'."""
        return Metaclass_GetGraph_Response.__constants['RESULT_GRAPH_VALID']

    @property
    def RESULT_GRAPH_INVALID(self):
        """Message constant 'RESULT_GRAPH_INVALID'."""
        return Metaclass_GetGraph_Response.__constants['RESULT_GRAPH_INVALID']


class GetGraph_Response(metaclass=Metaclass_GetGraph_Response):
    """
    Message class 'GetGraph_Response'.

    Constants:
      RESULT_GRAPH_VALID
      RESULT_GRAPH_INVALID
    """

    __slots__ = [
        '_graph',
        '_result',
    ]

    _fields_and_field_types = {
        'graph': 'graph_msgs/Graph',
        'result': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['graph_msgs', 'msg'], 'Graph'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from graph_msgs.msg import Graph
        self.graph = kwargs.get('graph', Graph())
        self.result = kwargs.get('result', int())

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
        if self.graph != other.graph:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def graph(self):
        """Message field 'graph'."""
        return self._graph

    @graph.setter
    def graph(self, value):
        if __debug__:
            from graph_msgs.msg import Graph
            assert \
                isinstance(value, Graph), \
                "The 'graph' field must be a sub message of type 'Graph'"
        self._graph = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value


class Metaclass_GetGraph(type):
    """Metaclass of service 'GetGraph'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('graph_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'graph_msgs.srv.GetGraph')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_graph

            from graph_msgs.srv import _get_graph
            if _get_graph.Metaclass_GetGraph_Request._TYPE_SUPPORT is None:
                _get_graph.Metaclass_GetGraph_Request.__import_type_support__()
            if _get_graph.Metaclass_GetGraph_Response._TYPE_SUPPORT is None:
                _get_graph.Metaclass_GetGraph_Response.__import_type_support__()


class GetGraph(metaclass=Metaclass_GetGraph):
    from graph_msgs.srv._get_graph import GetGraph_Request as Request
    from graph_msgs.srv._get_graph import GetGraph_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

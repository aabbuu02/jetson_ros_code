# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_msgs:srv/SaveGraph.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveGraph_Request(type):
    """Metaclass of message 'SaveGraph_Request'."""

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
                'graph_msgs.srv.SaveGraph_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_graph__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_graph__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_graph__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_graph__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_graph__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveGraph_Request(metaclass=Metaclass_SaveGraph_Request):
    """Message class 'SaveGraph_Request'."""

    __slots__ = [
        '_graph_file_name',
        '_save_graph_url',
    ]

    _fields_and_field_types = {
        'graph_file_name': 'string',
        'save_graph_url': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.graph_file_name = kwargs.get('graph_file_name', str())
        self.save_graph_url = kwargs.get('save_graph_url', str())

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
        if self.graph_file_name != other.graph_file_name:
            return False
        if self.save_graph_url != other.save_graph_url:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def graph_file_name(self):
        """Message field 'graph_file_name'."""
        return self._graph_file_name

    @graph_file_name.setter
    def graph_file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'graph_file_name' field must be of type 'str'"
        self._graph_file_name = value

    @builtins.property
    def save_graph_url(self):
        """Message field 'save_graph_url'."""
        return self._save_graph_url

    @save_graph_url.setter
    def save_graph_url(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'save_graph_url' field must be of type 'str'"
        self._save_graph_url = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SaveGraph_Response(type):
    """Metaclass of message 'SaveGraph_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_SUCCESS': 0,
        'RESULT_GRAPH_ALREADY_EXISTS': 1,
        'RESULT_INVALID_GRAPH_FILE_NAME': 2,
        'RESULT_INVALID_GRAPH_FILE_PATH': 3,
        'RESULT_UNDEFINED_FAILURE': 255,
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
                'graph_msgs.srv.SaveGraph_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_graph__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_graph__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_graph__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_graph__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_graph__response

            from graph_msgs.msg import Graph
            if Graph.__class__._TYPE_SUPPORT is None:
                Graph.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_GRAPH_ALREADY_EXISTS': cls.__constants['RESULT_GRAPH_ALREADY_EXISTS'],
            'RESULT_INVALID_GRAPH_FILE_NAME': cls.__constants['RESULT_INVALID_GRAPH_FILE_NAME'],
            'RESULT_INVALID_GRAPH_FILE_PATH': cls.__constants['RESULT_INVALID_GRAPH_FILE_PATH'],
            'RESULT_UNDEFINED_FAILURE': cls.__constants['RESULT_UNDEFINED_FAILURE'],
        }

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_SaveGraph_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_GRAPH_ALREADY_EXISTS(self):
        """Message constant 'RESULT_GRAPH_ALREADY_EXISTS'."""
        return Metaclass_SaveGraph_Response.__constants['RESULT_GRAPH_ALREADY_EXISTS']

    @property
    def RESULT_INVALID_GRAPH_FILE_NAME(self):
        """Message constant 'RESULT_INVALID_GRAPH_FILE_NAME'."""
        return Metaclass_SaveGraph_Response.__constants['RESULT_INVALID_GRAPH_FILE_NAME']

    @property
    def RESULT_INVALID_GRAPH_FILE_PATH(self):
        """Message constant 'RESULT_INVALID_GRAPH_FILE_PATH'."""
        return Metaclass_SaveGraph_Response.__constants['RESULT_INVALID_GRAPH_FILE_PATH']

    @property
    def RESULT_UNDEFINED_FAILURE(self):
        """Message constant 'RESULT_UNDEFINED_FAILURE'."""
        return Metaclass_SaveGraph_Response.__constants['RESULT_UNDEFINED_FAILURE']


class SaveGraph_Response(metaclass=Metaclass_SaveGraph_Response):
    """
    Message class 'SaveGraph_Response'.

    Constants:
      RESULT_SUCCESS
      RESULT_GRAPH_ALREADY_EXISTS
      RESULT_INVALID_GRAPH_FILE_NAME
      RESULT_INVALID_GRAPH_FILE_PATH
      RESULT_UNDEFINED_FAILURE
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


class Metaclass_SaveGraph(type):
    """Metaclass of service 'SaveGraph'."""

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
                'graph_msgs.srv.SaveGraph')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__save_graph

            from graph_msgs.srv import _save_graph
            if _save_graph.Metaclass_SaveGraph_Request._TYPE_SUPPORT is None:
                _save_graph.Metaclass_SaveGraph_Request.__import_type_support__()
            if _save_graph.Metaclass_SaveGraph_Response._TYPE_SUPPORT is None:
                _save_graph.Metaclass_SaveGraph_Response.__import_type_support__()


class SaveGraph(metaclass=Metaclass_SaveGraph):
    from graph_msgs.srv._save_graph import SaveGraph_Request as Request
    from graph_msgs.srv._save_graph import SaveGraph_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

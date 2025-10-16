# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_msgs:srv/GetGraphPlan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetGraphPlan_Request(type):
    """Metaclass of message 'GetGraphPlan_Request'."""

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
                'graph_msgs.srv.GetGraphPlan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_graph_plan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_graph_plan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_graph_plan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_graph_plan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_graph_plan__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGraphPlan_Request(metaclass=Metaclass_GetGraphPlan_Request):
    """Message class 'GetGraphPlan_Request'."""

    __slots__ = [
        '_source_id',
        '_target_id',
        '_ignore_goal_orientation',
        '_ignore_path_orientation',
    ]

    _fields_and_field_types = {
        'source_id': 'uint32',
        'target_id': 'uint32',
        'ignore_goal_orientation': 'boolean',
        'ignore_path_orientation': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.source_id = kwargs.get('source_id', int())
        self.target_id = kwargs.get('target_id', int())
        self.ignore_goal_orientation = kwargs.get('ignore_goal_orientation', bool())
        self.ignore_path_orientation = kwargs.get('ignore_path_orientation', bool())

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
        if self.source_id != other.source_id:
            return False
        if self.target_id != other.target_id:
            return False
        if self.ignore_goal_orientation != other.ignore_goal_orientation:
            return False
        if self.ignore_path_orientation != other.ignore_path_orientation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def source_id(self):
        """Message field 'source_id'."""
        return self._source_id

    @source_id.setter
    def source_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'source_id' field must be an unsigned integer in [0, 4294967295]"
        self._source_id = value

    @builtins.property
    def target_id(self):
        """Message field 'target_id'."""
        return self._target_id

    @target_id.setter
    def target_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'target_id' field must be an unsigned integer in [0, 4294967295]"
        self._target_id = value

    @builtins.property
    def ignore_goal_orientation(self):
        """Message field 'ignore_goal_orientation'."""
        return self._ignore_goal_orientation

    @ignore_goal_orientation.setter
    def ignore_goal_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_goal_orientation' field must be of type 'bool'"
        self._ignore_goal_orientation = value

    @builtins.property
    def ignore_path_orientation(self):
        """Message field 'ignore_path_orientation'."""
        return self._ignore_path_orientation

    @ignore_path_orientation.setter
    def ignore_path_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_path_orientation' field must be of type 'bool'"
        self._ignore_path_orientation = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetGraphPlan_Response(type):
    """Metaclass of message 'GetGraphPlan_Response'."""

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
                'graph_msgs.srv.GetGraphPlan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_graph_plan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_graph_plan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_graph_plan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_graph_plan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_graph_plan__response

            from graph_msgs.msg import Vertex
            if Vertex.__class__._TYPE_SUPPORT is None:
                Vertex.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGraphPlan_Response(metaclass=Metaclass_GetGraphPlan_Response):
    """Message class 'GetGraphPlan_Response'."""

    __slots__ = [
        '_vertices_in_plan',
        '_plan',
        '_plan_distance',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'vertices_in_plan': 'sequence<graph_msgs/Vertex>',
        'plan': 'nav_msgs/Path',
        'plan_distance': 'double',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['graph_msgs', 'msg'], 'Vertex')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vertices_in_plan = kwargs.get('vertices_in_plan', [])
        from nav_msgs.msg import Path
        self.plan = kwargs.get('plan', Path())
        self.plan_distance = kwargs.get('plan_distance', float())
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
        if self.vertices_in_plan != other.vertices_in_plan:
            return False
        if self.plan != other.plan:
            return False
        if self.plan_distance != other.plan_distance:
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
    def vertices_in_plan(self):
        """Message field 'vertices_in_plan'."""
        return self._vertices_in_plan

    @vertices_in_plan.setter
    def vertices_in_plan(self, value):
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
                "The 'vertices_in_plan' field must be a set or sequence and each value of type 'Vertex'"
        self._vertices_in_plan = value

    @builtins.property
    def plan(self):
        """Message field 'plan'."""
        return self._plan

    @plan.setter
    def plan(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'plan' field must be a sub message of type 'Path'"
        self._plan = value

    @builtins.property
    def plan_distance(self):
        """Message field 'plan_distance'."""
        return self._plan_distance

    @plan_distance.setter
    def plan_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'plan_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'plan_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._plan_distance = value

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


class Metaclass_GetGraphPlan(type):
    """Metaclass of service 'GetGraphPlan'."""

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
                'graph_msgs.srv.GetGraphPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_graph_plan

            from graph_msgs.srv import _get_graph_plan
            if _get_graph_plan.Metaclass_GetGraphPlan_Request._TYPE_SUPPORT is None:
                _get_graph_plan.Metaclass_GetGraphPlan_Request.__import_type_support__()
            if _get_graph_plan.Metaclass_GetGraphPlan_Response._TYPE_SUPPORT is None:
                _get_graph_plan.Metaclass_GetGraphPlan_Response.__import_type_support__()


class GetGraphPlan(metaclass=Metaclass_GetGraphPlan):
    from graph_msgs.srv._get_graph_plan import GetGraphPlan_Request as Request
    from graph_msgs.srv._get_graph_plan import GetGraphPlan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

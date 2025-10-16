# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graph_msgs:msg/Vertex.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Vertex(type):
    """Metaclass of message 'Vertex'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NORMAL': 0,
        'PARK': 1,
        'CHARGE': 2,
        'CONTROL': 3,
        'REPORT': 4,
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
                'graph_msgs.msg.Vertex')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vertex
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vertex
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vertex
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vertex
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vertex

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from graph_msgs.msg import Property
            if Property.__class__._TYPE_SUPPORT is None:
                Property.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NORMAL': cls.__constants['NORMAL'],
            'PARK': cls.__constants['PARK'],
            'CHARGE': cls.__constants['CHARGE'],
            'CONTROL': cls.__constants['CONTROL'],
            'REPORT': cls.__constants['REPORT'],
        }

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_Vertex.__constants['NORMAL']

    @property
    def PARK(self):
        """Message constant 'PARK'."""
        return Metaclass_Vertex.__constants['PARK']

    @property
    def CHARGE(self):
        """Message constant 'CHARGE'."""
        return Metaclass_Vertex.__constants['CHARGE']

    @property
    def CONTROL(self):
        """Message constant 'CONTROL'."""
        return Metaclass_Vertex.__constants['CONTROL']

    @property
    def REPORT(self):
        """Message constant 'REPORT'."""
        return Metaclass_Vertex.__constants['REPORT']


class Vertex(metaclass=Metaclass_Vertex):
    """
    Message class 'Vertex'.

    Constants:
      NORMAL
      PARK
      CHARGE
      CONTROL
      REPORT
    """

    __slots__ = [
        '_id',
        '_name',
        '_alias',
        '_type',
        '_ignore_orientation',
        '_pose',
        '_properties',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'name': 'string',
        'alias': 'string',
        'type': 'uint8',
        'ignore_orientation': 'boolean',
        'pose': 'geometry_msgs/Pose',
        'properties': 'sequence<graph_msgs/Property>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['graph_msgs', 'msg'], 'Property')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.name = kwargs.get('name', str())
        self.alias = kwargs.get('alias', str())
        self.type = kwargs.get('type', int())
        self.ignore_orientation = kwargs.get('ignore_orientation', bool())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
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
        if self.id != other.id:
            return False
        if self.name != other.name:
            return False
        if self.alias != other.alias:
            return False
        if self.type != other.type:
            return False
        if self.ignore_orientation != other.ignore_orientation:
            return False
        if self.pose != other.pose:
            return False
        if self.properties != other.properties:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

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
    def ignore_orientation(self):
        """Message field 'ignore_orientation'."""
        return self._ignore_orientation

    @ignore_orientation.setter
    def ignore_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_orientation' field must be of type 'bool'"
        self._ignore_orientation = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

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

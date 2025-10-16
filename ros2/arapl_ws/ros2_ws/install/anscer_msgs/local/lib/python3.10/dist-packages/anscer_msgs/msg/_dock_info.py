# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:msg/DockInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DockInfo(type):
    """Metaclass of message 'DockInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FIDUCIALDOCKING': 1,
        'REFLECTORDOCKING': 2,
        'TROLLEYDOCKING': 3,
        'ICPDOCKING': 4,
        'GROUNDMARKERDOCKING': 5,
        'SIDEWISEDOCKING': 6,
        'DOCKSTATE': 1,
        'UNDOCKSTATE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('anscer_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anscer_msgs.msg.DockInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dock_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dock_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dock_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dock_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dock_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FIDUCIALDOCKING': cls.__constants['FIDUCIALDOCKING'],
            'REFLECTORDOCKING': cls.__constants['REFLECTORDOCKING'],
            'TROLLEYDOCKING': cls.__constants['TROLLEYDOCKING'],
            'ICPDOCKING': cls.__constants['ICPDOCKING'],
            'GROUNDMARKERDOCKING': cls.__constants['GROUNDMARKERDOCKING'],
            'SIDEWISEDOCKING': cls.__constants['SIDEWISEDOCKING'],
            'DOCKSTATE': cls.__constants['DOCKSTATE'],
            'UNDOCKSTATE': cls.__constants['UNDOCKSTATE'],
        }

    @property
    def FIDUCIALDOCKING(self):
        """Message constant 'FIDUCIALDOCKING'."""
        return Metaclass_DockInfo.__constants['FIDUCIALDOCKING']

    @property
    def REFLECTORDOCKING(self):
        """Message constant 'REFLECTORDOCKING'."""
        return Metaclass_DockInfo.__constants['REFLECTORDOCKING']

    @property
    def TROLLEYDOCKING(self):
        """Message constant 'TROLLEYDOCKING'."""
        return Metaclass_DockInfo.__constants['TROLLEYDOCKING']

    @property
    def ICPDOCKING(self):
        """Message constant 'ICPDOCKING'."""
        return Metaclass_DockInfo.__constants['ICPDOCKING']

    @property
    def GROUNDMARKERDOCKING(self):
        """Message constant 'GROUNDMARKERDOCKING'."""
        return Metaclass_DockInfo.__constants['GROUNDMARKERDOCKING']

    @property
    def SIDEWISEDOCKING(self):
        """Message constant 'SIDEWISEDOCKING'."""
        return Metaclass_DockInfo.__constants['SIDEWISEDOCKING']

    @property
    def DOCKSTATE(self):
        """Message constant 'DOCKSTATE'."""
        return Metaclass_DockInfo.__constants['DOCKSTATE']

    @property
    def UNDOCKSTATE(self):
        """Message constant 'UNDOCKSTATE'."""
        return Metaclass_DockInfo.__constants['UNDOCKSTATE']


class DockInfo(metaclass=Metaclass_DockInfo):
    """
    Message class 'DockInfo'.

    Constants:
      FIDUCIALDOCKING
      REFLECTORDOCKING
      TROLLEYDOCKING
      ICPDOCKING
      GROUNDMARKERDOCKING
      SIDEWISEDOCKING
      DOCKSTATE
      UNDOCKSTATE
    """

    __slots__ = [
        '_dock_marker',
        '_dock_mode',
    ]

    _fields_and_field_types = {
        'dock_marker': 'int8',
        'dock_mode': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dock_marker = kwargs.get('dock_marker', int())
        self.dock_mode = kwargs.get('dock_mode', int())

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
        if self.dock_marker != other.dock_marker:
            return False
        if self.dock_mode != other.dock_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dock_marker(self):
        """Message field 'dock_marker'."""
        return self._dock_marker

    @dock_marker.setter
    def dock_marker(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dock_marker' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'dock_marker' field must be an integer in [-128, 127]"
        self._dock_marker = value

    @builtins.property
    def dock_mode(self):
        """Message field 'dock_mode'."""
        return self._dock_mode

    @dock_mode.setter
    def dock_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dock_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'dock_mode' field must be an integer in [-128, 127]"
        self._dock_mode = value

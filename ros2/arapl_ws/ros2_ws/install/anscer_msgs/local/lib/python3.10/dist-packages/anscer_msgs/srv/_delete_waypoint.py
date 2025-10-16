# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/DeleteWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeleteWaypoint_Request(type):
    """Metaclass of message 'DeleteWaypoint_Request'."""

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
            module = import_type_support('anscer_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anscer_msgs.srv.DeleteWaypoint_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__delete_waypoint__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__delete_waypoint__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__delete_waypoint__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__delete_waypoint__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__delete_waypoint__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeleteWaypoint_Request(metaclass=Metaclass_DeleteWaypoint_Request):
    """Message class 'DeleteWaypoint_Request'."""

    __slots__ = [
        '_delete_wp',
        '_waypoint_order',
        '_waypoint_id',
        '_waypoint_type',
    ]

    _fields_and_field_types = {
        'delete_wp': 'boolean',
        'waypoint_order': 'int16',
        'waypoint_id': 'string',
        'waypoint_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.delete_wp = kwargs.get('delete_wp', bool())
        self.waypoint_order = kwargs.get('waypoint_order', int())
        self.waypoint_id = kwargs.get('waypoint_id', str())
        self.waypoint_type = kwargs.get('waypoint_type', str())

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
        if self.delete_wp != other.delete_wp:
            return False
        if self.waypoint_order != other.waypoint_order:
            return False
        if self.waypoint_id != other.waypoint_id:
            return False
        if self.waypoint_type != other.waypoint_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def delete_wp(self):
        """Message field 'delete_wp'."""
        return self._delete_wp

    @delete_wp.setter
    def delete_wp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'delete_wp' field must be of type 'bool'"
        self._delete_wp = value

    @builtins.property
    def waypoint_order(self):
        """Message field 'waypoint_order'."""
        return self._waypoint_order

    @waypoint_order.setter
    def waypoint_order(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'waypoint_order' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'waypoint_order' field must be an integer in [-32768, 32767]"
        self._waypoint_order = value

    @builtins.property
    def waypoint_id(self):
        """Message field 'waypoint_id'."""
        return self._waypoint_id

    @waypoint_id.setter
    def waypoint_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'waypoint_id' field must be of type 'str'"
        self._waypoint_id = value

    @builtins.property
    def waypoint_type(self):
        """Message field 'waypoint_type'."""
        return self._waypoint_type

    @waypoint_type.setter
    def waypoint_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'waypoint_type' field must be of type 'str'"
        self._waypoint_type = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DeleteWaypoint_Response(type):
    """Metaclass of message 'DeleteWaypoint_Response'."""

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
            module = import_type_support('anscer_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anscer_msgs.srv.DeleteWaypoint_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__delete_waypoint__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__delete_waypoint__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__delete_waypoint__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__delete_waypoint__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__delete_waypoint__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeleteWaypoint_Response(metaclass=Metaclass_DeleteWaypoint_Response):
    """Message class 'DeleteWaypoint_Response'."""

    __slots__ = [
        '_status',
        '_is_deleted',
    ]

    _fields_and_field_types = {
        'status': 'string',
        'is_deleted': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', str())
        self.is_deleted = kwargs.get('is_deleted', bool())

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
        if self.status != other.status:
            return False
        if self.is_deleted != other.is_deleted:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @builtins.property
    def is_deleted(self):
        """Message field 'is_deleted'."""
        return self._is_deleted

    @is_deleted.setter
    def is_deleted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_deleted' field must be of type 'bool'"
        self._is_deleted = value


class Metaclass_DeleteWaypoint(type):
    """Metaclass of service 'DeleteWaypoint'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('anscer_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'anscer_msgs.srv.DeleteWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__delete_waypoint

            from anscer_msgs.srv import _delete_waypoint
            if _delete_waypoint.Metaclass_DeleteWaypoint_Request._TYPE_SUPPORT is None:
                _delete_waypoint.Metaclass_DeleteWaypoint_Request.__import_type_support__()
            if _delete_waypoint.Metaclass_DeleteWaypoint_Response._TYPE_SUPPORT is None:
                _delete_waypoint.Metaclass_DeleteWaypoint_Response.__import_type_support__()


class DeleteWaypoint(metaclass=Metaclass_DeleteWaypoint):
    from anscer_msgs.srv._delete_waypoint import DeleteWaypoint_Request as Request
    from anscer_msgs.srv._delete_waypoint import DeleteWaypoint_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

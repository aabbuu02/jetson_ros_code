# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/SaveDelay.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveDelay_Request(type):
    """Metaclass of message 'SaveDelay_Request'."""

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
                'anscer_msgs.srv.SaveDelay_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_delay__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_delay__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_delay__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_delay__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_delay__request

            from anscer_msgs.msg import Delay
            if Delay.__class__._TYPE_SUPPORT is None:
                Delay.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveDelay_Request(metaclass=Metaclass_SaveDelay_Request):
    """Message class 'SaveDelay_Request'."""

    __slots__ = [
        '_save',
        '_delay',
    ]

    _fields_and_field_types = {
        'save': 'boolean',
        'delay': 'anscer_msgs/Delay',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['anscer_msgs', 'msg'], 'Delay'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.save = kwargs.get('save', bool())
        from anscer_msgs.msg import Delay
        self.delay = kwargs.get('delay', Delay())

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
        if self.save != other.save:
            return False
        if self.delay != other.delay:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def save(self):
        """Message field 'save'."""
        return self._save

    @save.setter
    def save(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'save' field must be of type 'bool'"
        self._save = value

    @builtins.property
    def delay(self):
        """Message field 'delay'."""
        return self._delay

    @delay.setter
    def delay(self, value):
        if __debug__:
            from anscer_msgs.msg import Delay
            assert \
                isinstance(value, Delay), \
                "The 'delay' field must be a sub message of type 'Delay'"
        self._delay = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SaveDelay_Response(type):
    """Metaclass of message 'SaveDelay_Response'."""

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
                'anscer_msgs.srv.SaveDelay_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_delay__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_delay__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_delay__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_delay__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_delay__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveDelay_Response(metaclass=Metaclass_SaveDelay_Response):
    """Message class 'SaveDelay_Response'."""

    __slots__ = [
        '_status',
        '_is_saved',
    ]

    _fields_and_field_types = {
        'status': 'string',
        'is_saved': 'boolean',
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
        self.is_saved = kwargs.get('is_saved', bool())

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
        if self.is_saved != other.is_saved:
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
    def is_saved(self):
        """Message field 'is_saved'."""
        return self._is_saved

    @is_saved.setter
    def is_saved(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_saved' field must be of type 'bool'"
        self._is_saved = value


class Metaclass_SaveDelay(type):
    """Metaclass of service 'SaveDelay'."""

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
                'anscer_msgs.srv.SaveDelay')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__save_delay

            from anscer_msgs.srv import _save_delay
            if _save_delay.Metaclass_SaveDelay_Request._TYPE_SUPPORT is None:
                _save_delay.Metaclass_SaveDelay_Request.__import_type_support__()
            if _save_delay.Metaclass_SaveDelay_Response._TYPE_SUPPORT is None:
                _save_delay.Metaclass_SaveDelay_Response.__import_type_support__()


class SaveDelay(metaclass=Metaclass_SaveDelay):
    from anscer_msgs.srv._save_delay import SaveDelay_Request as Request
    from anscer_msgs.srv._save_delay import SaveDelay_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

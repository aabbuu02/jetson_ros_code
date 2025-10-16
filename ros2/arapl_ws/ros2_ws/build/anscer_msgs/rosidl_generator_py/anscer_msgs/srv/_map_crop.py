# generated from rosidl_generator_py/resource/_idl.py.em
# with input from anscer_msgs:srv/MapCrop.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapCrop_Request(type):
    """Metaclass of message 'MapCrop_Request'."""

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
                'anscer_msgs.srv.MapCrop_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__map_crop__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__map_crop__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__map_crop__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__map_crop__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__map_crop__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapCrop_Request(metaclass=Metaclass_MapCrop_Request):
    """Message class 'MapCrop_Request'."""

    __slots__ = [
        '_original_map_name',
        '_cropped_map_index',
    ]

    _fields_and_field_types = {
        'original_map_name': 'string',
        'cropped_map_index': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.original_map_name = kwargs.get('original_map_name', str())
        self.cropped_map_index = kwargs.get('cropped_map_index', str())

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
        if self.original_map_name != other.original_map_name:
            return False
        if self.cropped_map_index != other.cropped_map_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def original_map_name(self):
        """Message field 'original_map_name'."""
        return self._original_map_name

    @original_map_name.setter
    def original_map_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'original_map_name' field must be of type 'str'"
        self._original_map_name = value

    @builtins.property
    def cropped_map_index(self):
        """Message field 'cropped_map_index'."""
        return self._cropped_map_index

    @cropped_map_index.setter
    def cropped_map_index(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cropped_map_index' field must be of type 'str'"
        self._cropped_map_index = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MapCrop_Response(type):
    """Metaclass of message 'MapCrop_Response'."""

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
                'anscer_msgs.srv.MapCrop_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__map_crop__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__map_crop__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__map_crop__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__map_crop__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__map_crop__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapCrop_Response(metaclass=Metaclass_MapCrop_Response):
    """Message class 'MapCrop_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_MapCrop(type):
    """Metaclass of service 'MapCrop'."""

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
                'anscer_msgs.srv.MapCrop')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__map_crop

            from anscer_msgs.srv import _map_crop
            if _map_crop.Metaclass_MapCrop_Request._TYPE_SUPPORT is None:
                _map_crop.Metaclass_MapCrop_Request.__import_type_support__()
            if _map_crop.Metaclass_MapCrop_Response._TYPE_SUPPORT is None:
                _map_crop.Metaclass_MapCrop_Response.__import_type_support__()


class MapCrop(metaclass=Metaclass_MapCrop):
    from anscer_msgs.srv._map_crop import MapCrop_Request as Request
    from anscer_msgs.srv._map_crop import MapCrop_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

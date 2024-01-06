# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neo_srvs2:srv/USBoardToggleSensor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_USBoardToggleSensor_Request(type):
    """Metaclass of message 'USBoardToggleSensor_Request'."""

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
            module = import_type_support('neo_srvs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neo_srvs2.srv.USBoardToggleSensor_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__us_board_toggle_sensor__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__us_board_toggle_sensor__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__us_board_toggle_sensor__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__us_board_toggle_sensor__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__us_board_toggle_sensor__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class USBoardToggleSensor_Request(metaclass=Metaclass_USBoardToggleSensor_Request):
    """Message class 'USBoardToggleSensor_Request'."""

    __slots__ = [
        '_state',
    ]

    _fields_and_field_types = {
        'state': 'boolean[16]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 16),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get(
            'state',
            [bool() for x in range(16)]
        )

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
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
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
                 len(value) == 16 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'state' field must be a set or sequence with length 16 and each value of type 'bool'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_USBoardToggleSensor_Response(type):
    """Metaclass of message 'USBoardToggleSensor_Response'."""

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
            module = import_type_support('neo_srvs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neo_srvs2.srv.USBoardToggleSensor_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__us_board_toggle_sensor__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__us_board_toggle_sensor__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__us_board_toggle_sensor__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__us_board_toggle_sensor__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__us_board_toggle_sensor__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class USBoardToggleSensor_Response(metaclass=Metaclass_USBoardToggleSensor_Response):
    """Message class 'USBoardToggleSensor_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


class Metaclass_USBoardToggleSensor(type):
    """Metaclass of service 'USBoardToggleSensor'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('neo_srvs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neo_srvs2.srv.USBoardToggleSensor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__us_board_toggle_sensor

            from neo_srvs2.srv import _us_board_toggle_sensor
            if _us_board_toggle_sensor.Metaclass_USBoardToggleSensor_Request._TYPE_SUPPORT is None:
                _us_board_toggle_sensor.Metaclass_USBoardToggleSensor_Request.__import_type_support__()
            if _us_board_toggle_sensor.Metaclass_USBoardToggleSensor_Response._TYPE_SUPPORT is None:
                _us_board_toggle_sensor.Metaclass_USBoardToggleSensor_Response.__import_type_support__()


class USBoardToggleSensor(metaclass=Metaclass_USBoardToggleSensor):
    from neo_srvs2.srv._us_board_toggle_sensor import USBoardToggleSensor_Request as Request
    from neo_srvs2.srv._us_board_toggle_sensor import USBoardToggleSensor_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

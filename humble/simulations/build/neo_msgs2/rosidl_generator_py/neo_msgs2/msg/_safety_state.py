# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neo_msgs2:msg/SafetyState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SafetyState(type):
    """Metaclass of message 'SafetyState'."""

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
            module = import_type_support('neo_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neo_msgs2.msg.SafetyState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__safety_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__safety_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__safety_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__safety_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__safety_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SafetyState(metaclass=Metaclass_SafetyState):
    """Message class 'SafetyState'."""

    __slots__ = [
        '_time',
        '_current_safety_field',
        '_triggered_cutoff_paths',
    ]

    _fields_and_field_types = {
        'time': 'double',
        'current_safety_field': 'uint8',
        'triggered_cutoff_paths': 'boolean[7]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 7),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time = kwargs.get('time', float())
        self.current_safety_field = kwargs.get('current_safety_field', int())
        self.triggered_cutoff_paths = kwargs.get(
            'triggered_cutoff_paths',
            [bool() for x in range(7)]
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
        if self.time != other.time:
            return False
        if self.current_safety_field != other.current_safety_field:
            return False
        if self.triggered_cutoff_paths != other.triggered_cutoff_paths:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def current_safety_field(self):
        """Message field 'current_safety_field'."""
        return self._current_safety_field

    @current_safety_field.setter
    def current_safety_field(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_safety_field' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_safety_field' field must be an unsigned integer in [0, 255]"
        self._current_safety_field = value

    @builtins.property
    def triggered_cutoff_paths(self):
        """Message field 'triggered_cutoff_paths'."""
        return self._triggered_cutoff_paths

    @triggered_cutoff_paths.setter
    def triggered_cutoff_paths(self, value):
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
                 len(value) == 7 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'triggered_cutoff_paths' field must be a set or sequence with length 7 and each value of type 'bool'"
        self._triggered_cutoff_paths = value

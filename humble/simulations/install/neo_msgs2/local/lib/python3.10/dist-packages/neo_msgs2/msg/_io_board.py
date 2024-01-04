# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neo_msgs2:msg/IOBoard.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'analog_inputs'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IOBoard(type):
    """Metaclass of message 'IOBoard'."""

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
                'neo_msgs2.msg.IOBoard')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__io_board
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__io_board
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__io_board
            cls._TYPE_SUPPORT = module.type_support_msg__msg__io_board
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__io_board

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IOBoard(metaclass=Metaclass_IOBoard):
    """Message class 'IOBoard'."""

    __slots__ = [
        '_header',
        '_digital_inputs',
        '_digital_outputs',
        '_analog_inputs',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'digital_inputs': 'boolean[16]',
        'digital_outputs': 'boolean[16]',
        'analog_inputs': 'int16[8]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.digital_inputs = kwargs.get(
            'digital_inputs',
            [bool() for x in range(16)]
        )
        self.digital_outputs = kwargs.get(
            'digital_outputs',
            [bool() for x in range(16)]
        )
        if 'analog_inputs' not in kwargs:
            self.analog_inputs = numpy.zeros(8, dtype=numpy.int16)
        else:
            self.analog_inputs = numpy.array(kwargs.get('analog_inputs'), dtype=numpy.int16)
            assert self.analog_inputs.shape == (8, )

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
        if self.header != other.header:
            return False
        if self.digital_inputs != other.digital_inputs:
            return False
        if self.digital_outputs != other.digital_outputs:
            return False
        if all(self.analog_inputs != other.analog_inputs):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def digital_inputs(self):
        """Message field 'digital_inputs'."""
        return self._digital_inputs

    @digital_inputs.setter
    def digital_inputs(self, value):
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
                "The 'digital_inputs' field must be a set or sequence with length 16 and each value of type 'bool'"
        self._digital_inputs = value

    @builtins.property
    def digital_outputs(self):
        """Message field 'digital_outputs'."""
        return self._digital_outputs

    @digital_outputs.setter
    def digital_outputs(self, value):
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
                "The 'digital_outputs' field must be a set or sequence with length 16 and each value of type 'bool'"
        self._digital_outputs = value

    @builtins.property
    def analog_inputs(self):
        """Message field 'analog_inputs'."""
        return self._analog_inputs

    @analog_inputs.setter
    def analog_inputs(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'analog_inputs' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 8, \
                "The 'analog_inputs' numpy.ndarray() must have a size of 8"
            self._analog_inputs = value
            return
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'analog_inputs' field must be a set or sequence with length 8 and each value of type 'int' and each integer in [-32768, 32767]"
        self._analog_inputs = numpy.array(value, dtype=numpy.int16)

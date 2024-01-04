# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neo_msgs2:msg/RelayBoardV3.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RelayBoardV3(type):
    """Metaclass of message 'RelayBoardV3'."""

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
                'neo_msgs2.msg.RelayBoardV3')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__relay_board_v3
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__relay_board_v3
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__relay_board_v3
            cls._TYPE_SUPPORT = module.type_support_msg__msg__relay_board_v3
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__relay_board_v3

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RelayBoardV3(metaclass=Metaclass_RelayBoardV3):
    """Message class 'RelayBoardV3'."""

    __slots__ = [
        '_time',
        '_firmware_version',
        '_uptime',
        '_ambient_temperature',
        '_relay_states',
        '_digital_input_states',
        '_keypad_button_states',
        '_key_switch_off_state',
        '_release_structure_state',
    ]

    _fields_and_field_types = {
        'time': 'double',
        'firmware_version': 'string',
        'uptime': 'double',
        'ambient_temperature': 'float',
        'relay_states': 'boolean[4]',
        'digital_input_states': 'boolean[4]',
        'keypad_button_states': 'boolean[4]',
        'key_switch_off_state': 'boolean',
        'release_structure_state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time = kwargs.get('time', float())
        self.firmware_version = kwargs.get('firmware_version', str())
        self.uptime = kwargs.get('uptime', float())
        self.ambient_temperature = kwargs.get('ambient_temperature', float())
        self.relay_states = kwargs.get(
            'relay_states',
            [bool() for x in range(4)]
        )
        self.digital_input_states = kwargs.get(
            'digital_input_states',
            [bool() for x in range(4)]
        )
        self.keypad_button_states = kwargs.get(
            'keypad_button_states',
            [bool() for x in range(4)]
        )
        self.key_switch_off_state = kwargs.get('key_switch_off_state', bool())
        self.release_structure_state = kwargs.get('release_structure_state', bool())

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
        if self.firmware_version != other.firmware_version:
            return False
        if self.uptime != other.uptime:
            return False
        if self.ambient_temperature != other.ambient_temperature:
            return False
        if self.relay_states != other.relay_states:
            return False
        if self.digital_input_states != other.digital_input_states:
            return False
        if self.keypad_button_states != other.keypad_button_states:
            return False
        if self.key_switch_off_state != other.key_switch_off_state:
            return False
        if self.release_structure_state != other.release_structure_state:
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
    def firmware_version(self):
        """Message field 'firmware_version'."""
        return self._firmware_version

    @firmware_version.setter
    def firmware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'firmware_version' field must be of type 'str'"
        self._firmware_version = value

    @builtins.property
    def uptime(self):
        """Message field 'uptime'."""
        return self._uptime

    @uptime.setter
    def uptime(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uptime' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'uptime' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._uptime = value

    @builtins.property
    def ambient_temperature(self):
        """Message field 'ambient_temperature'."""
        return self._ambient_temperature

    @ambient_temperature.setter
    def ambient_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ambient_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ambient_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ambient_temperature = value

    @builtins.property
    def relay_states(self):
        """Message field 'relay_states'."""
        return self._relay_states

    @relay_states.setter
    def relay_states(self, value):
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
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'relay_states' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._relay_states = value

    @builtins.property
    def digital_input_states(self):
        """Message field 'digital_input_states'."""
        return self._digital_input_states

    @digital_input_states.setter
    def digital_input_states(self, value):
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
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'digital_input_states' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._digital_input_states = value

    @builtins.property
    def keypad_button_states(self):
        """Message field 'keypad_button_states'."""
        return self._keypad_button_states

    @keypad_button_states.setter
    def keypad_button_states(self, value):
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
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'keypad_button_states' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._keypad_button_states = value

    @builtins.property
    def key_switch_off_state(self):
        """Message field 'key_switch_off_state'."""
        return self._key_switch_off_state

    @key_switch_off_state.setter
    def key_switch_off_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_switch_off_state' field must be of type 'bool'"
        self._key_switch_off_state = value

    @builtins.property
    def release_structure_state(self):
        """Message field 'release_structure_state'."""
        return self._release_structure_state

    @release_structure_state.setter
    def release_structure_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'release_structure_state' field must be of type 'bool'"
        self._release_structure_state = value

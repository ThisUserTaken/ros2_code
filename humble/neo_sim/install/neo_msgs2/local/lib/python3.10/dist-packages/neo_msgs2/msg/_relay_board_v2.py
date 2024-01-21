# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neo_msgs2:msg/RelayBoardV2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RelayBoardV2(type):
    """Metaclass of message 'RelayBoardV2'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CS_NOT_ESTABLISHED': 0,
        'CS_CONFIGURATION_FAILED': 1,
        'CS_OK': 2,
        'CS_LOST': 3,
        'CS_ERROR': 4,
        'CHS_NOTCHARGING': 0,
        'CHS_START_CHARGING': 1,
        'CHS_CHARGING': 2,
        'CHS_NO_CHARGER': 3,
        'CHS_BRAKES_OPEN': 4,
        'CHS_EMSTOP': 5,
        'CHS_ABORT': 6,
        'CHS_FINISHED': 7,
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
                'neo_msgs2.msg.RelayBoardV2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__relay_board_v2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__relay_board_v2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__relay_board_v2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__relay_board_v2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__relay_board_v2

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CS_NOT_ESTABLISHED': cls.__constants['CS_NOT_ESTABLISHED'],
            'CS_CONFIGURATION_FAILED': cls.__constants['CS_CONFIGURATION_FAILED'],
            'CS_OK': cls.__constants['CS_OK'],
            'CS_LOST': cls.__constants['CS_LOST'],
            'CS_ERROR': cls.__constants['CS_ERROR'],
            'CHS_NOTCHARGING': cls.__constants['CHS_NOTCHARGING'],
            'CHS_START_CHARGING': cls.__constants['CHS_START_CHARGING'],
            'CHS_CHARGING': cls.__constants['CHS_CHARGING'],
            'CHS_NO_CHARGER': cls.__constants['CHS_NO_CHARGER'],
            'CHS_BRAKES_OPEN': cls.__constants['CHS_BRAKES_OPEN'],
            'CHS_EMSTOP': cls.__constants['CHS_EMSTOP'],
            'CHS_ABORT': cls.__constants['CHS_ABORT'],
            'CHS_FINISHED': cls.__constants['CHS_FINISHED'],
        }

    @property
    def CS_NOT_ESTABLISHED(self):
        """Message constant 'CS_NOT_ESTABLISHED'."""
        return Metaclass_RelayBoardV2.__constants['CS_NOT_ESTABLISHED']

    @property
    def CS_CONFIGURATION_FAILED(self):
        """Message constant 'CS_CONFIGURATION_FAILED'."""
        return Metaclass_RelayBoardV2.__constants['CS_CONFIGURATION_FAILED']

    @property
    def CS_OK(self):
        """Message constant 'CS_OK'."""
        return Metaclass_RelayBoardV2.__constants['CS_OK']

    @property
    def CS_LOST(self):
        """Message constant 'CS_LOST'."""
        return Metaclass_RelayBoardV2.__constants['CS_LOST']

    @property
    def CS_ERROR(self):
        """Message constant 'CS_ERROR'."""
        return Metaclass_RelayBoardV2.__constants['CS_ERROR']

    @property
    def CHS_NOTCHARGING(self):
        """Message constant 'CHS_NOTCHARGING'."""
        return Metaclass_RelayBoardV2.__constants['CHS_NOTCHARGING']

    @property
    def CHS_START_CHARGING(self):
        """Message constant 'CHS_START_CHARGING'."""
        return Metaclass_RelayBoardV2.__constants['CHS_START_CHARGING']

    @property
    def CHS_CHARGING(self):
        """Message constant 'CHS_CHARGING'."""
        return Metaclass_RelayBoardV2.__constants['CHS_CHARGING']

    @property
    def CHS_NO_CHARGER(self):
        """Message constant 'CHS_NO_CHARGER'."""
        return Metaclass_RelayBoardV2.__constants['CHS_NO_CHARGER']

    @property
    def CHS_BRAKES_OPEN(self):
        """Message constant 'CHS_BRAKES_OPEN'."""
        return Metaclass_RelayBoardV2.__constants['CHS_BRAKES_OPEN']

    @property
    def CHS_EMSTOP(self):
        """Message constant 'CHS_EMSTOP'."""
        return Metaclass_RelayBoardV2.__constants['CHS_EMSTOP']

    @property
    def CHS_ABORT(self):
        """Message constant 'CHS_ABORT'."""
        return Metaclass_RelayBoardV2.__constants['CHS_ABORT']

    @property
    def CHS_FINISHED(self):
        """Message constant 'CHS_FINISHED'."""
        return Metaclass_RelayBoardV2.__constants['CHS_FINISHED']


class RelayBoardV2(metaclass=Metaclass_RelayBoardV2):
    """
    Message class 'RelayBoardV2'.

    Constants:
      CS_NOT_ESTABLISHED
      CS_CONFIGURATION_FAILED
      CS_OK
      CS_LOST
      CS_ERROR
      CHS_NOTCHARGING
      CHS_START_CHARGING
      CHS_CHARGING
      CHS_NO_CHARGER
      CHS_BRAKES_OPEN
      CHS_EMSTOP
      CHS_ABORT
      CHS_FINISHED
    """

    __slots__ = [
        '_header',
        '_relayboardv2_state',
        '_communication_state',
        '_charging_state',
        '_temperature',
        '_battery_voltage',
        '_charging_current',
        '_relay_states',
        '_keypad',
        '_shutdown',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'relayboardv2_state': 'boolean[16]',
        'communication_state': 'int16',
        'charging_state': 'int16',
        'temperature': 'int16',
        'battery_voltage': 'float',
        'charging_current': 'float',
        'relay_states': 'boolean[4]',
        'keypad': 'boolean[8]',
        'shutdown': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 16),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.relayboardv2_state = kwargs.get(
            'relayboardv2_state',
            [bool() for x in range(16)]
        )
        self.communication_state = kwargs.get('communication_state', int())
        self.charging_state = kwargs.get('charging_state', int())
        self.temperature = kwargs.get('temperature', int())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.charging_current = kwargs.get('charging_current', float())
        self.relay_states = kwargs.get(
            'relay_states',
            [bool() for x in range(4)]
        )
        self.keypad = kwargs.get(
            'keypad',
            [bool() for x in range(8)]
        )
        self.shutdown = kwargs.get('shutdown', bool())

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
        if self.relayboardv2_state != other.relayboardv2_state:
            return False
        if self.communication_state != other.communication_state:
            return False
        if self.charging_state != other.charging_state:
            return False
        if self.temperature != other.temperature:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.charging_current != other.charging_current:
            return False
        if self.relay_states != other.relay_states:
            return False
        if self.keypad != other.keypad:
            return False
        if self.shutdown != other.shutdown:
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
    def relayboardv2_state(self):
        """Message field 'relayboardv2_state'."""
        return self._relayboardv2_state

    @relayboardv2_state.setter
    def relayboardv2_state(self, value):
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
                "The 'relayboardv2_state' field must be a set or sequence with length 16 and each value of type 'bool'"
        self._relayboardv2_state = value

    @builtins.property
    def communication_state(self):
        """Message field 'communication_state'."""
        return self._communication_state

    @communication_state.setter
    def communication_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'communication_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'communication_state' field must be an integer in [-32768, 32767]"
        self._communication_state = value

    @builtins.property
    def charging_state(self):
        """Message field 'charging_state'."""
        return self._charging_state

    @charging_state.setter
    def charging_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charging_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'charging_state' field must be an integer in [-32768, 32767]"
        self._charging_state = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'temperature' field must be an integer in [-32768, 32767]"
        self._temperature = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def charging_current(self):
        """Message field 'charging_current'."""
        return self._charging_current

    @charging_current.setter
    def charging_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'charging_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'charging_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._charging_current = value

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
    def keypad(self):
        """Message field 'keypad'."""
        return self._keypad

    @keypad.setter
    def keypad(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'keypad' field must be a set or sequence with length 8 and each value of type 'bool'"
        self._keypad = value

    @builtins.property
    def shutdown(self):
        """Message field 'shutdown'."""
        return self._shutdown

    @shutdown.setter
    def shutdown(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'shutdown' field must be of type 'bool'"
        self._shutdown = value

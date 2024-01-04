# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neo_msgs2:msg/EmergencyStopState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EmergencyStopState(type):
    """Metaclass of message 'EmergencyStopState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EMFREE': 0,
        'EMSTOP': 1,
        'EMCONFIRMED': 2,
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
                'neo_msgs2.msg.EmergencyStopState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__emergency_stop_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__emergency_stop_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__emergency_stop_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__emergency_stop_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__emergency_stop_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EMFREE': cls.__constants['EMFREE'],
            'EMSTOP': cls.__constants['EMSTOP'],
            'EMCONFIRMED': cls.__constants['EMCONFIRMED'],
        }

    @property
    def EMFREE(self):
        """Message constant 'EMFREE'."""
        return Metaclass_EmergencyStopState.__constants['EMFREE']

    @property
    def EMSTOP(self):
        """Message constant 'EMSTOP'."""
        return Metaclass_EmergencyStopState.__constants['EMSTOP']

    @property
    def EMCONFIRMED(self):
        """Message constant 'EMCONFIRMED'."""
        return Metaclass_EmergencyStopState.__constants['EMCONFIRMED']


class EmergencyStopState(metaclass=Metaclass_EmergencyStopState):
    """
    Message class 'EmergencyStopState'.

    Constants:
      EMFREE
      EMSTOP
      EMCONFIRMED
    """

    __slots__ = [
        '_header',
        '_emergency_button_stop',
        '_scanner_stop',
        '_software_stop',
        '_emergency_state',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'emergency_button_stop': 'boolean',
        'scanner_stop': 'boolean',
        'software_stop': 'boolean',
        'emergency_state': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.emergency_button_stop = kwargs.get('emergency_button_stop', bool())
        self.scanner_stop = kwargs.get('scanner_stop', bool())
        self.software_stop = kwargs.get('software_stop', bool())
        self.emergency_state = kwargs.get('emergency_state', int())

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
        if self.emergency_button_stop != other.emergency_button_stop:
            return False
        if self.scanner_stop != other.scanner_stop:
            return False
        if self.software_stop != other.software_stop:
            return False
        if self.emergency_state != other.emergency_state:
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
    def emergency_button_stop(self):
        """Message field 'emergency_button_stop'."""
        return self._emergency_button_stop

    @emergency_button_stop.setter
    def emergency_button_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_button_stop' field must be of type 'bool'"
        self._emergency_button_stop = value

    @builtins.property
    def scanner_stop(self):
        """Message field 'scanner_stop'."""
        return self._scanner_stop

    @scanner_stop.setter
    def scanner_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'scanner_stop' field must be of type 'bool'"
        self._scanner_stop = value

    @builtins.property
    def software_stop(self):
        """Message field 'software_stop'."""
        return self._software_stop

    @software_stop.setter
    def software_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'software_stop' field must be of type 'bool'"
        self._software_stop = value

    @builtins.property
    def emergency_state(self):
        """Message field 'emergency_state'."""
        return self._emergency_state

    @emergency_state.setter
    def emergency_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emergency_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'emergency_state' field must be an integer in [-32768, 32767]"
        self._emergency_state = value

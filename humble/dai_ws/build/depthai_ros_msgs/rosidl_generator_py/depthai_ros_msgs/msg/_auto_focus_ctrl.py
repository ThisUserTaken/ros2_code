# generated from rosidl_generator_py/resource/_idl.py.em
# with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutoFocusCtrl(type):
    """Metaclass of message 'AutoFocusCtrl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'AF_MODE_AUTO': 0,
        'AF_MODE_MACRO': 1,
        'AF_MODE_CONTINUOUS_VIDEO': 2,
        'AF_MODE_CONTINUOUS_PICTURE': 3,
        'AF_MODE_EDOF': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('depthai_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'depthai_ros_msgs.msg.AutoFocusCtrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__auto_focus_ctrl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__auto_focus_ctrl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__auto_focus_ctrl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__auto_focus_ctrl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__auto_focus_ctrl

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'AF_MODE_AUTO': cls.__constants['AF_MODE_AUTO'],
            'AF_MODE_MACRO': cls.__constants['AF_MODE_MACRO'],
            'AF_MODE_CONTINUOUS_VIDEO': cls.__constants['AF_MODE_CONTINUOUS_VIDEO'],
            'AF_MODE_CONTINUOUS_PICTURE': cls.__constants['AF_MODE_CONTINUOUS_PICTURE'],
            'AF_MODE_EDOF': cls.__constants['AF_MODE_EDOF'],
        }

    @property
    def AF_MODE_AUTO(self):
        """Message constant 'AF_MODE_AUTO'."""
        return Metaclass_AutoFocusCtrl.__constants['AF_MODE_AUTO']

    @property
    def AF_MODE_MACRO(self):
        """Message constant 'AF_MODE_MACRO'."""
        return Metaclass_AutoFocusCtrl.__constants['AF_MODE_MACRO']

    @property
    def AF_MODE_CONTINUOUS_VIDEO(self):
        """Message constant 'AF_MODE_CONTINUOUS_VIDEO'."""
        return Metaclass_AutoFocusCtrl.__constants['AF_MODE_CONTINUOUS_VIDEO']

    @property
    def AF_MODE_CONTINUOUS_PICTURE(self):
        """Message constant 'AF_MODE_CONTINUOUS_PICTURE'."""
        return Metaclass_AutoFocusCtrl.__constants['AF_MODE_CONTINUOUS_PICTURE']

    @property
    def AF_MODE_EDOF(self):
        """Message constant 'AF_MODE_EDOF'."""
        return Metaclass_AutoFocusCtrl.__constants['AF_MODE_EDOF']


class AutoFocusCtrl(metaclass=Metaclass_AutoFocusCtrl):
    """
    Message class 'AutoFocusCtrl'.

    Constants:
      AF_MODE_AUTO
      AF_MODE_MACRO
      AF_MODE_CONTINUOUS_VIDEO
      AF_MODE_CONTINUOUS_PICTURE
      AF_MODE_EDOF
    """

    __slots__ = [
        '_auto_focus_mode',
        '_trigger_auto_focus',
    ]

    _fields_and_field_types = {
        'auto_focus_mode': 'uint8',
        'trigger_auto_focus': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.auto_focus_mode = kwargs.get('auto_focus_mode', int())
        self.trigger_auto_focus = kwargs.get('trigger_auto_focus', bool())

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
        if self.auto_focus_mode != other.auto_focus_mode:
            return False
        if self.trigger_auto_focus != other.trigger_auto_focus:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def auto_focus_mode(self):
        """Message field 'auto_focus_mode'."""
        return self._auto_focus_mode

    @auto_focus_mode.setter
    def auto_focus_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_focus_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'auto_focus_mode' field must be an unsigned integer in [0, 255]"
        self._auto_focus_mode = value

    @builtins.property
    def trigger_auto_focus(self):
        """Message field 'trigger_auto_focus'."""
        return self._trigger_auto_focus

    @trigger_auto_focus.setter
    def trigger_auto_focus(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trigger_auto_focus' field must be of type 'bool'"
        self._trigger_auto_focus = value

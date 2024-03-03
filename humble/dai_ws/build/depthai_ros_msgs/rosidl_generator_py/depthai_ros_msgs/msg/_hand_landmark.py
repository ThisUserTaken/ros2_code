# generated from rosidl_generator_py/resource/_idl.py.em
# with input from depthai_ros_msgs:msg/HandLandmark.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HandLandmark(type):
    """Metaclass of message 'HandLandmark'."""

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
            module = import_type_support('depthai_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'depthai_ros_msgs.msg.HandLandmark')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hand_landmark
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hand_landmark
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hand_landmark
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hand_landmark
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hand_landmark

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HandLandmark(metaclass=Metaclass_HandLandmark):
    """Message class 'HandLandmark'."""

    __slots__ = [
        '_label',
        '_lm_score',
        '_landmark',
        '_position',
        '_is_spatial',
    ]

    _fields_and_field_types = {
        'label': 'string',
        'lm_score': 'float',
        'landmark': 'sequence<geometry_msgs/Pose2D>',
        'position': 'geometry_msgs/Point',
        'is_spatial': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.label = kwargs.get('label', str())
        self.lm_score = kwargs.get('lm_score', float())
        self.landmark = kwargs.get('landmark', [])
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        self.is_spatial = kwargs.get('is_spatial', bool())

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
        if self.label != other.label:
            return False
        if self.lm_score != other.lm_score:
            return False
        if self.landmark != other.landmark:
            return False
        if self.position != other.position:
            return False
        if self.is_spatial != other.is_spatial:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value

    @builtins.property
    def lm_score(self):
        """Message field 'lm_score'."""
        return self._lm_score

    @lm_score.setter
    def lm_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lm_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lm_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lm_score = value

    @builtins.property
    def landmark(self):
        """Message field 'landmark'."""
        return self._landmark

    @landmark.setter
    def landmark(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
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
                 all(isinstance(v, Pose2D) for v in value) and
                 True), \
                "The 'landmark' field must be a set or sequence and each value of type 'Pose2D'"
        self._landmark = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def is_spatial(self):
        """Message field 'is_spatial'."""
        return self._is_spatial

    @is_spatial.setter
    def is_spatial(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_spatial' field must be of type 'bool'"
        self._is_spatial = value

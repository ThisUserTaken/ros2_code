# generated from rosidl_generator_py/resource/_idl.py.em
# with input from depthai_ros_msgs:msg/TrackedFeature.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedFeature(type):
    """Metaclass of message 'TrackedFeature'."""

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
                'depthai_ros_msgs.msg.TrackedFeature')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_feature
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_feature
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_feature
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_feature
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_feature

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

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


class TrackedFeature(metaclass=Metaclass_TrackedFeature):
    """Message class 'TrackedFeature'."""

    __slots__ = [
        '_header',
        '_position',
        '_id',
        '_age',
        '_harris_score',
        '_tracking_error',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'position': 'geometry_msgs/Point',
        'id': 'uint32',
        'age': 'uint32',
        'harris_score': 'float',
        'tracking_error': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        self.id = kwargs.get('id', int())
        self.age = kwargs.get('age', int())
        self.harris_score = kwargs.get('harris_score', float())
        self.tracking_error = kwargs.get('tracking_error', float())

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
        if self.position != other.position:
            return False
        if self.id != other.id:
            return False
        if self.age != other.age:
            return False
        if self.harris_score != other.harris_score:
            return False
        if self.tracking_error != other.tracking_error:
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

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'age' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'age' field must be an unsigned integer in [0, 4294967295]"
        self._age = value

    @builtins.property
    def harris_score(self):
        """Message field 'harris_score'."""
        return self._harris_score

    @harris_score.setter
    def harris_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'harris_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'harris_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._harris_score = value

    @builtins.property
    def tracking_error(self):
        """Message field 'tracking_error'."""
        return self._tracking_error

    @tracking_error.setter
    def tracking_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tracking_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tracking_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tracking_error = value

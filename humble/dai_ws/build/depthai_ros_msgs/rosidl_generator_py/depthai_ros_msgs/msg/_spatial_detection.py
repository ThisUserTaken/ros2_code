# generated from rosidl_generator_py/resource/_idl.py.em
# with input from depthai_ros_msgs:msg/SpatialDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpatialDetection(type):
    """Metaclass of message 'SpatialDetection'."""

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
                'depthai_ros_msgs.msg.SpatialDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__spatial_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__spatial_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__spatial_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__spatial_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__spatial_detection

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from vision_msgs.msg import BoundingBox2D
            if BoundingBox2D.__class__._TYPE_SUPPORT is None:
                BoundingBox2D.__class__.__import_type_support__()

            from vision_msgs.msg import ObjectHypothesis
            if ObjectHypothesis.__class__._TYPE_SUPPORT is None:
                ObjectHypothesis.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpatialDetection(metaclass=Metaclass_SpatialDetection):
    """Message class 'SpatialDetection'."""

    __slots__ = [
        '_results',
        '_bbox',
        '_position',
        '_is_tracking',
        '_tracking_id',
    ]

    _fields_and_field_types = {
        'results': 'sequence<vision_msgs/ObjectHypothesis>',
        'bbox': 'vision_msgs/BoundingBox2D',
        'position': 'geometry_msgs/Point',
        'is_tracking': 'boolean',
        'tracking_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['vision_msgs', 'msg'], 'ObjectHypothesis')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['vision_msgs', 'msg'], 'BoundingBox2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.results = kwargs.get('results', [])
        from vision_msgs.msg import BoundingBox2D
        self.bbox = kwargs.get('bbox', BoundingBox2D())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        self.is_tracking = kwargs.get('is_tracking', bool())
        self.tracking_id = kwargs.get('tracking_id', str())

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
        if self.results != other.results:
            return False
        if self.bbox != other.bbox:
            return False
        if self.position != other.position:
            return False
        if self.is_tracking != other.is_tracking:
            return False
        if self.tracking_id != other.tracking_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def results(self):
        """Message field 'results'."""
        return self._results

    @results.setter
    def results(self, value):
        if __debug__:
            from vision_msgs.msg import ObjectHypothesis
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
                 all(isinstance(v, ObjectHypothesis) for v in value) and
                 True), \
                "The 'results' field must be a set or sequence and each value of type 'ObjectHypothesis'"
        self._results = value

    @builtins.property
    def bbox(self):
        """Message field 'bbox'."""
        return self._bbox

    @bbox.setter
    def bbox(self, value):
        if __debug__:
            from vision_msgs.msg import BoundingBox2D
            assert \
                isinstance(value, BoundingBox2D), \
                "The 'bbox' field must be a sub message of type 'BoundingBox2D'"
        self._bbox = value

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
    def is_tracking(self):
        """Message field 'is_tracking'."""
        return self._is_tracking

    @is_tracking.setter
    def is_tracking(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_tracking' field must be of type 'bool'"
        self._is_tracking = value

    @builtins.property
    def tracking_id(self):
        """Message field 'tracking_id'."""
        return self._tracking_id

    @tracking_id.setter
    def tracking_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tracking_id' field must be of type 'str'"
        self._tracking_id = value

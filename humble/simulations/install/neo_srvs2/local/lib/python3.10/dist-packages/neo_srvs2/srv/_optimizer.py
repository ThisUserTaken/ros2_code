# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neo_srvs2:srv/Optimizer.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Optimizer_Request(type):
    """Metaclass of message 'Optimizer_Request'."""

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
                'neo_srvs2.srv.Optimizer_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__optimizer__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__optimizer__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__optimizer__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__optimizer__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__optimizer__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Optimizer_Request(metaclass=Metaclass_Optimizer_Request):
    """Message class 'Optimizer_Request'."""

    __slots__ = [
        '_current_pose',
        '_current_vel',
        '_carrot_pose',
        '_goal_pose',
        '_switch_opt',
        '_control_interval',
    ]

    _fields_and_field_types = {
        'current_pose': 'geometry_msgs/PoseStamped',
        'current_vel': 'geometry_msgs/Twist',
        'carrot_pose': 'geometry_msgs/PoseStamped',
        'goal_pose': 'geometry_msgs/Pose',
        'switch_opt': 'boolean',
        'control_interval': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.current_pose = kwargs.get('current_pose', PoseStamped())
        from geometry_msgs.msg import Twist
        self.current_vel = kwargs.get('current_vel', Twist())
        from geometry_msgs.msg import PoseStamped
        self.carrot_pose = kwargs.get('carrot_pose', PoseStamped())
        from geometry_msgs.msg import Pose
        self.goal_pose = kwargs.get('goal_pose', Pose())
        self.switch_opt = kwargs.get('switch_opt', bool())
        self.control_interval = kwargs.get('control_interval', float())

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
        if self.current_pose != other.current_pose:
            return False
        if self.current_vel != other.current_vel:
            return False
        if self.carrot_pose != other.carrot_pose:
            return False
        if self.goal_pose != other.goal_pose:
            return False
        if self.switch_opt != other.switch_opt:
            return False
        if self.control_interval != other.control_interval:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_pose(self):
        """Message field 'current_pose'."""
        return self._current_pose

    @current_pose.setter
    def current_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'current_pose' field must be a sub message of type 'PoseStamped'"
        self._current_pose = value

    @builtins.property
    def current_vel(self):
        """Message field 'current_vel'."""
        return self._current_vel

    @current_vel.setter
    def current_vel(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'current_vel' field must be a sub message of type 'Twist'"
        self._current_vel = value

    @builtins.property
    def carrot_pose(self):
        """Message field 'carrot_pose'."""
        return self._carrot_pose

    @carrot_pose.setter
    def carrot_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'carrot_pose' field must be a sub message of type 'PoseStamped'"
        self._carrot_pose = value

    @builtins.property
    def goal_pose(self):
        """Message field 'goal_pose'."""
        return self._goal_pose

    @goal_pose.setter
    def goal_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'goal_pose' field must be a sub message of type 'Pose'"
        self._goal_pose = value

    @builtins.property
    def switch_opt(self):
        """Message field 'switch_opt'."""
        return self._switch_opt

    @switch_opt.setter
    def switch_opt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'switch_opt' field must be of type 'bool'"
        self._switch_opt = value

    @builtins.property
    def control_interval(self):
        """Message field 'control_interval'."""
        return self._control_interval

    @control_interval.setter
    def control_interval(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'control_interval' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'control_interval' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._control_interval = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Optimizer_Response(type):
    """Metaclass of message 'Optimizer_Response'."""

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
                'neo_srvs2.srv.Optimizer_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__optimizer__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__optimizer__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__optimizer__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__optimizer__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__optimizer__response

            from geometry_msgs.msg import TwistStamped
            if TwistStamped.__class__._TYPE_SUPPORT is None:
                TwistStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Optimizer_Response(metaclass=Metaclass_Optimizer_Response):
    """Message class 'Optimizer_Response'."""

    __slots__ = [
        '_output_vel',
    ]

    _fields_and_field_types = {
        'output_vel': 'geometry_msgs/TwistStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import TwistStamped
        self.output_vel = kwargs.get('output_vel', TwistStamped())

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
        if self.output_vel != other.output_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def output_vel(self):
        """Message field 'output_vel'."""
        return self._output_vel

    @output_vel.setter
    def output_vel(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistStamped
            assert \
                isinstance(value, TwistStamped), \
                "The 'output_vel' field must be a sub message of type 'TwistStamped'"
        self._output_vel = value


class Metaclass_Optimizer(type):
    """Metaclass of service 'Optimizer'."""

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
                'neo_srvs2.srv.Optimizer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__optimizer

            from neo_srvs2.srv import _optimizer
            if _optimizer.Metaclass_Optimizer_Request._TYPE_SUPPORT is None:
                _optimizer.Metaclass_Optimizer_Request.__import_type_support__()
            if _optimizer.Metaclass_Optimizer_Response._TYPE_SUPPORT is None:
                _optimizer.Metaclass_Optimizer_Response.__import_type_support__()


class Optimizer(metaclass=Metaclass_Optimizer):
    from neo_srvs2.srv._optimizer import Optimizer_Request as Request
    from neo_srvs2.srv._optimizer import Optimizer_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

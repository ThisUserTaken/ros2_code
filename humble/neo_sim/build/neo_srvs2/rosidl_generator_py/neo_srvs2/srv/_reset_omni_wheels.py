# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neo_srvs2:srv/ResetOmniWheels.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'steer_angles_rad'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ResetOmniWheels_Request(type):
    """Metaclass of message 'ResetOmniWheels_Request'."""

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
                'neo_srvs2.srv.ResetOmniWheels_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reset_omni_wheels__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reset_omni_wheels__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reset_omni_wheels__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reset_omni_wheels__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reset_omni_wheels__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ResetOmniWheels_Request(metaclass=Metaclass_ResetOmniWheels_Request):
    """Message class 'ResetOmniWheels_Request'."""

    __slots__ = [
        '_steer_angles_rad',
    ]

    _fields_and_field_types = {
        'steer_angles_rad': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.steer_angles_rad = array.array('f', kwargs.get('steer_angles_rad', []))

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
        if self.steer_angles_rad != other.steer_angles_rad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def steer_angles_rad(self):
        """Message field 'steer_angles_rad'."""
        return self._steer_angles_rad

    @steer_angles_rad.setter
    def steer_angles_rad(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'steer_angles_rad' array.array() must have the type code of 'f'"
            self._steer_angles_rad = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'steer_angles_rad' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._steer_angles_rad = array.array('f', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ResetOmniWheels_Response(type):
    """Metaclass of message 'ResetOmniWheels_Response'."""

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
                'neo_srvs2.srv.ResetOmniWheels_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reset_omni_wheels__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reset_omni_wheels__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reset_omni_wheels__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reset_omni_wheels__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reset_omni_wheels__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ResetOmniWheels_Response(metaclass=Metaclass_ResetOmniWheels_Response):
    """Message class 'ResetOmniWheels_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ResetOmniWheels(type):
    """Metaclass of service 'ResetOmniWheels'."""

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
                'neo_srvs2.srv.ResetOmniWheels')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__reset_omni_wheels

            from neo_srvs2.srv import _reset_omni_wheels
            if _reset_omni_wheels.Metaclass_ResetOmniWheels_Request._TYPE_SUPPORT is None:
                _reset_omni_wheels.Metaclass_ResetOmniWheels_Request.__import_type_support__()
            if _reset_omni_wheels.Metaclass_ResetOmniWheels_Response._TYPE_SUPPORT is None:
                _reset_omni_wheels.Metaclass_ResetOmniWheels_Response.__import_type_support__()


class ResetOmniWheels(metaclass=Metaclass_ResetOmniWheels):
    from neo_srvs2.srv._reset_omni_wheels import ResetOmniWheels_Request as Request
    from neo_srvs2.srv._reset_omni_wheels import ResetOmniWheels_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

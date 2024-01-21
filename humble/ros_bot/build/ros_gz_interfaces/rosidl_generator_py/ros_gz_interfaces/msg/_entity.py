# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_gz_interfaces:msg/Entity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Entity(type):
    """Metaclass of message 'Entity'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'LIGHT': 1,
        'MODEL': 2,
        'LINK': 3,
        'VISUAL': 4,
        'COLLISION': 5,
        'SENSOR': 6,
        'JOINT': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros_gz_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_gz_interfaces.msg.Entity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__entity
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__entity
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__entity
            cls._TYPE_SUPPORT = module.type_support_msg__msg__entity
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__entity

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'LIGHT': cls.__constants['LIGHT'],
            'MODEL': cls.__constants['MODEL'],
            'LINK': cls.__constants['LINK'],
            'VISUAL': cls.__constants['VISUAL'],
            'COLLISION': cls.__constants['COLLISION'],
            'SENSOR': cls.__constants['SENSOR'],
            'JOINT': cls.__constants['JOINT'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_Entity.__constants['NONE']

    @property
    def LIGHT(self):
        """Message constant 'LIGHT'."""
        return Metaclass_Entity.__constants['LIGHT']

    @property
    def MODEL(self):
        """Message constant 'MODEL'."""
        return Metaclass_Entity.__constants['MODEL']

    @property
    def LINK(self):
        """Message constant 'LINK'."""
        return Metaclass_Entity.__constants['LINK']

    @property
    def VISUAL(self):
        """Message constant 'VISUAL'."""
        return Metaclass_Entity.__constants['VISUAL']

    @property
    def COLLISION(self):
        """Message constant 'COLLISION'."""
        return Metaclass_Entity.__constants['COLLISION']

    @property
    def SENSOR(self):
        """Message constant 'SENSOR'."""
        return Metaclass_Entity.__constants['SENSOR']

    @property
    def JOINT(self):
        """Message constant 'JOINT'."""
        return Metaclass_Entity.__constants['JOINT']


class Entity(metaclass=Metaclass_Entity):
    """
    Message class 'Entity'.

    Constants:
      NONE
      LIGHT
      MODEL
      LINK
      VISUAL
      COLLISION
      SENSOR
      JOINT
    """

    __slots__ = [
        '_id',
        '_name',
        '_type',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'name': 'string',
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.name = kwargs.get('name', str())
        self.type = kwargs.get('type', int())

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
        if self.id != other.id:
            return False
        if self.name != other.name:
            return False
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

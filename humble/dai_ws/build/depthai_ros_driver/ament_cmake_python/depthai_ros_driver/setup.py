from setuptools import find_packages
from setuptools import setup

setup(
    name='depthai_ros_driver',
    version='2.9.0',
    packages=find_packages(
        include=('depthai_ros_driver', 'depthai_ros_driver.*')),
)

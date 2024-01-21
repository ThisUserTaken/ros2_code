from setuptools import find_packages
from setuptools import setup

setup(
    name='ros_gz_interfaces',
    version='0.244.12',
    packages=find_packages(
        include=('ros_gz_interfaces', 'ros_gz_interfaces.*')),
)

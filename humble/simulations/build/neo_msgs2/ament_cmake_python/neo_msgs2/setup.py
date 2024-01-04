from setuptools import find_packages
from setuptools import setup

setup(
    name='neo_msgs2',
    version='0.1.0',
    packages=find_packages(
        include=('neo_msgs2', 'neo_msgs2.*')),
)

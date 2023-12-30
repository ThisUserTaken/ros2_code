from setuptools import find_packages
from setuptools import setup

setup(
    name='t3_action_msg',
    version='0.0.0',
    packages=find_packages(
        include=('t3_action_msg', 't3_action_msg.*')),
)

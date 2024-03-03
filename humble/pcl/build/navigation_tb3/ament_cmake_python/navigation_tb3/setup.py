from setuptools import find_packages
from setuptools import setup

setup(
    name='navigation_tb3',
    version='0.0.0',
    packages=find_packages(
        include=('navigation_tb3', 'navigation_tb3.*')),
)

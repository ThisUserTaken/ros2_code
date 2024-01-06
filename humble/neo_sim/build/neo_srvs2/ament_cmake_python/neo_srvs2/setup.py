from setuptools import find_packages
from setuptools import setup

setup(
    name='neo_srvs2',
    version='0.1.0',
    packages=find_packages(
        include=('neo_srvs2', 'neo_srvs2.*')),
)

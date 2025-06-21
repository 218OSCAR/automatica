from setuptools import find_packages
from setuptools import setup

setup(
    name='zivid_interfaces',
    version='3.1.0',
    packages=find_packages(
        include=('zivid_interfaces', 'zivid_interfaces.*')),
)

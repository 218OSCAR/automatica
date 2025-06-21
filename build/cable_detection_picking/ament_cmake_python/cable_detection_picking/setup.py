from setuptools import find_packages
from setuptools import setup

setup(
    name='cable_detection_picking',
    version='0.0.0',
    packages=find_packages(
        include=('cable_detection_picking', 'cable_detection_picking.*')),
)

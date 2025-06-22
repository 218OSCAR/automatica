from setuptools import find_packages, setup
import os
from glob import glob
from setuptools import setup

package_name = 'panda_moveit_python'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
        (os.path.join('lib', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Tailai Chneg',
    maintainer_email='go34beq@mytum.de',
    description='Python interface for controlling the Franka Emika Panda robot with MoveIt 2',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'motion_planning_python_api_tutorial = panda_moveit_python.motion_planning_python_api_tutorial:main',
        ],
    },
)

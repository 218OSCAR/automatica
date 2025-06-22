from setuptools import setup
from glob import glob
import os

package_name = 'cable_detection_picking'

setup(
    name=package_name,
    version='0.0.1',
    # packages=[package_name],
    packages=['cable_pipeline'],
    py_modules=[],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Tailai Cheng',
    maintainer_email='go34beq@mytum.de',
    description='Pipeline package for Zivid-based cable detection and grasping',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'run_pipeline_server = cable_pipeline.run_pipeline_server:main',
        ],
    },
    # data_files=[
    #     ('share/ament_index/resource_index/packages', ['resource/cable_detection_picking']),
    #     ('share/cable_detection_picking', ['package.xml']),
    #     ('share/cable_detection_picking/action', ['action/RunPipeline.action']),
    #     ('share/cable_detection_picking', glob('cable_detection_picking/*.py')),
    #     ('share/cable_detection_picking', ['_3_estimation_actuation.py']),
    #     ('share/' + package_name + '/data/transformation_data', 
    #         glob('data/transformation_data/*.yaml')),
    # ],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/action', ['action/RunPipeline.action']),
        ('share/' + package_name + '/data/transformation_data', 
            glob('data/transformation_data/*.yaml')),
    ],

)

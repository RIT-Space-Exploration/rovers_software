import os
from glob import glob
from setuptools import setup

package_name = 'spex_rover'

setup(
    name=package_name,
    version='0.0.0',
    # Packages to export
    packages=[package_name],
    # Files we want to install, specifically launch files
    data_files=[
        # Install marker file in the package index
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        # Include our package.xml file
        (os.path.join('share', package_name), ['package.xml']),
        # Include all launch files.
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    author='Sean Clifford',
    author_email='smc6548@rit.edu',
    maintainer='RIT SPEX Rovers Team',
    description='spex_rover is the main package for the SPEX Rover',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'my_script = my_package.my_script:main'
        ],
    },
)

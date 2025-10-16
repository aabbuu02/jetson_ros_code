from setuptools import find_packages
from setuptools import setup

setup(
    name='anscer_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('anscer_msgs', 'anscer_msgs.*')),
)

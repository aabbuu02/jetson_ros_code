from setuptools import find_packages
from setuptools import setup

setup(
    name='lift_action',
    version='0.2.0',
    packages=find_packages(
        include=('lift_action', 'lift_action.*')),
)

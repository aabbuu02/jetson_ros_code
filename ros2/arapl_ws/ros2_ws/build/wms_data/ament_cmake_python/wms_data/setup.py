from setuptools import find_packages
from setuptools import setup

setup(
    name='wms_data',
    version='2.0.0',
    packages=find_packages(
        include=('wms_data', 'wms_data.*')),
)

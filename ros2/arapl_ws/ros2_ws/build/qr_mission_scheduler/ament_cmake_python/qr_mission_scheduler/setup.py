from setuptools import find_packages
from setuptools import setup

setup(
    name='qr_mission_scheduler',
    version='2.0.0',
    packages=find_packages(
        include=('qr_mission_scheduler', 'qr_mission_scheduler.*')),
)

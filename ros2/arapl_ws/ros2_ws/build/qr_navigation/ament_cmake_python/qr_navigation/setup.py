from setuptools import find_packages
from setuptools import setup

setup(
    name='qr_navigation',
    version='2.0.0',
    packages=find_packages(
        include=('qr_navigation', 'qr_navigation.*')),
)

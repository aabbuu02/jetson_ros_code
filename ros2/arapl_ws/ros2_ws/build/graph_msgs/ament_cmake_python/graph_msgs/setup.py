from setuptools import find_packages
from setuptools import setup

setup(
    name='graph_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('graph_msgs', 'graph_msgs.*')),
)

from setuptools import find_packages
from setuptools import setup

setup(
    name='graph_creator_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('graph_creator_msgs', 'graph_creator_msgs.*')),
)

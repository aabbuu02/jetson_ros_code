from setuptools import setup

package_name = 'anscer_teleop'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your_email@example.com',
    description='Teleoperation package for ANSCER AMR with keyboard control',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'anscer_teleop_key = anscer_teleop.anscer_teleop_key:main'
        ],
    },
)

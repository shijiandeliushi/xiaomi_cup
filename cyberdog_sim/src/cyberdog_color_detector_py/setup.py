from setuptools import setup

package_name = 'cyberdog_color_detector_py'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', [f'resource/{package_name}']),
        (f'share/{package_name}', ['package.xml']),
        (f'share/{package_name}/launch', ['launch/ball_detector.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='cyberdog',
    maintainer_email='dev@xiaomi.com',
    description='Blue and orange ball detector for CyberDog simulation RGB camera',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ball_detector_py_node = cyberdog_color_detector_py.ball_detector_py_node:main',
        ],
    },
)

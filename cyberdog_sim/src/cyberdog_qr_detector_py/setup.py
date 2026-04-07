from setuptools import setup

package_name = 'cyberdog_qr_detector_py'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', [f'resource/{package_name}']),
        (f'share/{package_name}', ['package.xml']),
        (f'share/{package_name}/launch', ['launch/qr_detector.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='cyberdog',
    maintainer_email='dev@xiaomi.com',
    description='QR detect and scan node for CyberDog simulation camera',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'qr_detector_py_node = cyberdog_qr_detector_py.qr_detector_py_node:main',
        ],
    },
)

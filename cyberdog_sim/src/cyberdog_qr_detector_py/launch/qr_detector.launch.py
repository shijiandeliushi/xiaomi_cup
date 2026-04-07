from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    image_topic_arg = DeclareLaunchArgument('image_topic', default_value='/rgb/image_raw')
    result_topic_arg = DeclareLaunchArgument('result_topic', default_value='/qr/result')
    scan_topic_arg = DeclareLaunchArgument('scan_result_topic', default_value='/qr/scan_result')
    debug_topic_arg = DeclareLaunchArgument('debug_image_topic', default_value='/qr/debug_image')

    node = Node(
        package='cyberdog_qr_detector_py',
        executable='qr_detector_py_node',
        name='qr_detector_py_node',
        output='screen',
        parameters=[{
            'image_topic': LaunchConfiguration('image_topic'),
            'result_topic': LaunchConfiguration('result_topic'),
            'scan_result_topic': LaunchConfiguration('scan_result_topic'),
            'debug_image_topic': LaunchConfiguration('debug_image_topic'),
        }],
    )

    return LaunchDescription([
        image_topic_arg,
        result_topic_arg,
        scan_topic_arg,
        debug_topic_arg,
        node,
    ])

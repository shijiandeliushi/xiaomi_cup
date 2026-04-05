from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    image_topic = LaunchConfiguration('image_topic')

    return LaunchDescription([
        DeclareLaunchArgument('image_topic', default_value='/rgb/image_raw'),
        Node(
            package='cyberdog_color_detector_py',
            executable='ball_detector_py_node',
            name='ball_detector_py_node',
            output='screen',
            parameters=[{
                'image_topic': image_topic,
                'debug_image_topic': '/ball/debug_image',
                'result_topic': '/ball/result',
            }],
        ),
    ])

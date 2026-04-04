cmake_minimum_required(VERSION 3.8)
project(cyberdog_example)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ===== 依赖查找 =====
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(cyberdog_msg REQUIRED)
find_package(lcm REQUIRED)

# 头文件目录
include_directories(include)

# ===== 可执行目标 1：消息发送器 =====
# 说明：add_executable 定义真正要编译的二进制名称
add_executable(cyberdogmsg_sender src/cyberdogmsg_sender.cpp)
ament_target_dependencies(cyberdogmsg_sender
  rclcpp
  rclcpp_action
  cyberdog_msg
  std_msgs
)

# ===== 可执行目标 2：键盘控制器 =====
add_executable(keybroad_commander src/keybroad_commander.cpp)
ament_target_dependencies(keybroad_commander
  rclcpp
  rclcpp_action
  cyberdog_msg
  std_msgs
)
target_link_libraries(keybroad_commander lcm)

# ===== 安装规则（关键）=====
# 说明：必须安装到 lib/${PROJECT_NAME}，ros2 run 才能发现可执行文件
install(TARGETS
  cyberdogmsg_sender
  keybroad_commander
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()

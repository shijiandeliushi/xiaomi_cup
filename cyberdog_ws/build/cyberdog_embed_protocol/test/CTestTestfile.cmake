# CMake generated Testfile for 
# Source directory: /home/cyberdog_ws/src/bridges/embed_protocol/test
# Build directory: /home/cyberdog_ws/build/cyberdog_embed_protocol/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(embed_protocol_test "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cyberdog_ws/build/cyberdog_embed_protocol/test_results/can_node_test/embed_protocol_test.gtest.xml" "--package-name" "can_node_test" "--output-file" "/home/cyberdog_ws/build/cyberdog_embed_protocol/ament_cmake_gtest/embed_protocol_test.txt" "--command" "/home/cyberdog_ws/build/cyberdog_embed_protocol/test/embed_protocol_test" "--gtest_output=xml:/home/cyberdog_ws/build/cyberdog_embed_protocol/test_results/can_node_test/embed_protocol_test.gtest.xml")
set_tests_properties(embed_protocol_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/cyberdog_ws/build/cyberdog_embed_protocol/test/embed_protocol_test" TIMEOUT "20" WORKING_DIRECTORY "/home/cyberdog_ws/build/cyberdog_embed_protocol/test" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/cyberdog_ws/src/bridges/embed_protocol/test/CMakeLists.txt;49;ament_add_gtest;/home/cyberdog_ws/src/bridges/embed_protocol/test/CMakeLists.txt;0;")
subdirs("../gtest")

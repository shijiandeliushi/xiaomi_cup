# Install script for directory: /home/eigen-git-mirror/unsupported/Eigen

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE FILE FILES
    "/home/eigen-git-mirror/unsupported/Eigen/AdolcForward"
    "/home/eigen-git-mirror/unsupported/Eigen/AlignedVector3"
    "/home/eigen-git-mirror/unsupported/Eigen/ArpackSupport"
    "/home/eigen-git-mirror/unsupported/Eigen/AutoDiff"
    "/home/eigen-git-mirror/unsupported/Eigen/BVH"
    "/home/eigen-git-mirror/unsupported/Eigen/EulerAngles"
    "/home/eigen-git-mirror/unsupported/Eigen/FFT"
    "/home/eigen-git-mirror/unsupported/Eigen/IterativeSolvers"
    "/home/eigen-git-mirror/unsupported/Eigen/KroneckerProduct"
    "/home/eigen-git-mirror/unsupported/Eigen/LevenbergMarquardt"
    "/home/eigen-git-mirror/unsupported/Eigen/MatrixFunctions"
    "/home/eigen-git-mirror/unsupported/Eigen/MoreVectorization"
    "/home/eigen-git-mirror/unsupported/Eigen/MPRealSupport"
    "/home/eigen-git-mirror/unsupported/Eigen/NonLinearOptimization"
    "/home/eigen-git-mirror/unsupported/Eigen/NumericalDiff"
    "/home/eigen-git-mirror/unsupported/Eigen/OpenGLSupport"
    "/home/eigen-git-mirror/unsupported/Eigen/Polynomials"
    "/home/eigen-git-mirror/unsupported/Eigen/Skyline"
    "/home/eigen-git-mirror/unsupported/Eigen/SparseExtra"
    "/home/eigen-git-mirror/unsupported/Eigen/SpecialFunctions"
    "/home/eigen-git-mirror/unsupported/Eigen/Splines"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE DIRECTORY FILES "/home/eigen-git-mirror/unsupported/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/eigen-git-mirror/build/unsupported/Eigen/CXX11/cmake_install.cmake")

endif()


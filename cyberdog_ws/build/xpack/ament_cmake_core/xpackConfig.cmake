# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_xpack_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED xpack_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(xpack_FOUND FALSE)
  elseif(NOT xpack_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(xpack_FOUND FALSE)
  endif()
  return()
endif()
set(_xpack_CONFIG_INCLUDED TRUE)

# output package information
if(NOT xpack_FIND_QUIETLY)
  message(STATUS "Found xpack: 0.0.0 (${xpack_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'xpack' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${xpack_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(xpack_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${xpack_DIR}/${_extra}")
endforeach()

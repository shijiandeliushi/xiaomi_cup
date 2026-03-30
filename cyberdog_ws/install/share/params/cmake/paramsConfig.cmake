# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_params_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED params_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(params_FOUND FALSE)
  elseif(NOT params_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(params_FOUND FALSE)
  endif()
  return()
endif()
set(_params_CONFIG_INCLUDED TRUE)

# output package information
if(NOT params_FIND_QUIETLY)
  message(STATUS "Found params: 0.0.0 (${params_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'params' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${params_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(params_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${params_DIR}/${_extra}")
endforeach()

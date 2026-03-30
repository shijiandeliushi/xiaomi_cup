# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_elec_skin_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED elec_skin_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(elec_skin_FOUND FALSE)
  elseif(NOT elec_skin_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(elec_skin_FOUND FALSE)
  endif()
  return()
endif()
set(_elec_skin_CONFIG_INCLUDED TRUE)

# output package information
if(NOT elec_skin_FIND_QUIETLY)
  message(STATUS "Found elec_skin: 0.0.0 (${elec_skin_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'elec_skin' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${elec_skin_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(elec_skin_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${elec_skin_DIR}/${_extra}")
endforeach()

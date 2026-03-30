#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cyberdog_common::cyberdog_fds" for configuration ""
set_property(TARGET cyberdog_common::cyberdog_fds APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(cyberdog_common::cyberdog_fds PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcyberdog_fds.so"
  IMPORTED_SONAME_NOCONFIG "libcyberdog_fds.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cyberdog_common::cyberdog_fds )
list(APPEND _IMPORT_CHECK_FILES_FOR_cyberdog_common::cyberdog_fds "${_IMPORT_PREFIX}/lib/libcyberdog_fds.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

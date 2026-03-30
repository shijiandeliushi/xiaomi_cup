#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cyberdog_common::cyberdog_log" for configuration ""
set_property(TARGET cyberdog_common::cyberdog_log APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(cyberdog_common::cyberdog_log PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcyberdog_log.so"
  IMPORTED_SONAME_NOCONFIG "libcyberdog_log.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cyberdog_common::cyberdog_log )
list(APPEND _IMPORT_CHECK_FILES_FOR_cyberdog_common::cyberdog_log "${_IMPORT_PREFIX}/lib/libcyberdog_log.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bes_transmit::lcm_log_uploader" for configuration ""
set_property(TARGET bes_transmit::lcm_log_uploader APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(bes_transmit::lcm_log_uploader PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/liblcm_log_uploader.so"
  IMPORTED_SONAME_NOCONFIG "liblcm_log_uploader.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS bes_transmit::lcm_log_uploader )
list(APPEND _IMPORT_CHECK_FILES_FOR_bes_transmit::lcm_log_uploader "${_IMPORT_PREFIX}/lib/liblcm_log_uploader.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

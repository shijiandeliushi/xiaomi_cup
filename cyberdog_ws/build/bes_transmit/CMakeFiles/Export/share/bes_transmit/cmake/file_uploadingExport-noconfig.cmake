#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bes_transmit::file_uploading" for configuration ""
set_property(TARGET bes_transmit::file_uploading APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(bes_transmit::file_uploading PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libfile_uploading.so"
  IMPORTED_SONAME_NOCONFIG "libfile_uploading.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS bes_transmit::file_uploading )
list(APPEND _IMPORT_CHECK_FILES_FOR_bes_transmit::file_uploading "${_IMPORT_PREFIX}/lib/libfile_uploading.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

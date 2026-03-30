#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mqttc::mqttc" for configuration ""
set_property(TARGET mqttc::mqttc APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mqttc::mqttc PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmqttc.so"
  IMPORTED_SONAME_NOCONFIG "libmqttc.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS mqttc::mqttc )
list(APPEND _IMPORT_CHECK_FILES_FOR_mqttc::mqttc "${_IMPORT_PREFIX}/lib/libmqttc.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "depthai_bridge::depthai_bridge" for configuration ""
set_property(TARGET depthai_bridge::depthai_bridge APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(depthai_bridge::depthai_bridge PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdepthai_bridge.so"
  IMPORTED_SONAME_NOCONFIG "libdepthai_bridge.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS depthai_bridge::depthai_bridge )
list(APPEND _IMPORT_CHECK_FILES_FOR_depthai_bridge::depthai_bridge "${_IMPORT_PREFIX}/lib/libdepthai_bridge.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

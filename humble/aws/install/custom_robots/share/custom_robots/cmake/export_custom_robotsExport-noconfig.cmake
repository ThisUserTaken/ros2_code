#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "custom_robots::personplugin" for configuration ""
set_property(TARGET custom_robots::personplugin APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(custom_robots::personplugin PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libpersonplugin.so"
  IMPORTED_SONAME_NOCONFIG "libpersonplugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS custom_robots::personplugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_custom_robots::personplugin "${_IMPORT_PREFIX}/lib/libpersonplugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

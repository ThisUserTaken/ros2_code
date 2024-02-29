#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "depthai_ros_driver" for configuration ""
set_property(TARGET depthai_ros_driver APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(depthai_ros_driver PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdepthai_ros_driver.so"
  IMPORTED_SONAME_NOCONFIG "libdepthai_ros_driver.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS depthai_ros_driver )
list(APPEND _IMPORT_CHECK_FILES_FOR_depthai_ros_driver "${_IMPORT_PREFIX}/lib/libdepthai_ros_driver.so" )

# Import target "depthai_ros_driver_sensor_nodes" for configuration ""
set_property(TARGET depthai_ros_driver_sensor_nodes APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(depthai_ros_driver_sensor_nodes PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdepthai_ros_driver_sensor_nodes.so"
  IMPORTED_SONAME_NOCONFIG "libdepthai_ros_driver_sensor_nodes.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS depthai_ros_driver_sensor_nodes )
list(APPEND _IMPORT_CHECK_FILES_FOR_depthai_ros_driver_sensor_nodes "${_IMPORT_PREFIX}/lib/libdepthai_ros_driver_sensor_nodes.so" )

# Import target "depthai_ros_driver_nn_nodes" for configuration ""
set_property(TARGET depthai_ros_driver_nn_nodes APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(depthai_ros_driver_nn_nodes PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdepthai_ros_driver_nn_nodes.so"
  IMPORTED_SONAME_NOCONFIG "libdepthai_ros_driver_nn_nodes.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS depthai_ros_driver_nn_nodes )
list(APPEND _IMPORT_CHECK_FILES_FOR_depthai_ros_driver_nn_nodes "${_IMPORT_PREFIX}/lib/libdepthai_ros_driver_nn_nodes.so" )

# Import target "depthai_ros_driver_common" for configuration ""
set_property(TARGET depthai_ros_driver_common APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(depthai_ros_driver_common PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdepthai_ros_driver_common.so"
  IMPORTED_SONAME_NOCONFIG "libdepthai_ros_driver_common.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS depthai_ros_driver_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_depthai_ros_driver_common "${_IMPORT_PREFIX}/lib/libdepthai_ros_driver_common.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

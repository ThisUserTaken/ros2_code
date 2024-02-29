#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "depthimage_to_laserscan::DepthImageToLaserScan" for configuration ""
set_property(TARGET depthimage_to_laserscan::DepthImageToLaserScan APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(depthimage_to_laserscan::DepthImageToLaserScan PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libDepthImageToLaserScan.so"
  IMPORTED_SONAME_NOCONFIG "libDepthImageToLaserScan.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS depthimage_to_laserscan::DepthImageToLaserScan )
list(APPEND _IMPORT_CHECK_FILES_FOR_depthimage_to_laserscan::DepthImageToLaserScan "${_IMPORT_PREFIX}/lib/libDepthImageToLaserScan.so" )

# Import target "depthimage_to_laserscan::DepthImageToLaserScanROS" for configuration ""
set_property(TARGET depthimage_to_laserscan::DepthImageToLaserScanROS APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(depthimage_to_laserscan::DepthImageToLaserScanROS PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libDepthImageToLaserScanROS.so"
  IMPORTED_SONAME_NOCONFIG "libDepthImageToLaserScanROS.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS depthimage_to_laserscan::DepthImageToLaserScanROS )
list(APPEND _IMPORT_CHECK_FILES_FOR_depthimage_to_laserscan::DepthImageToLaserScanROS "${_IMPORT_PREFIX}/lib/libDepthImageToLaserScanROS.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

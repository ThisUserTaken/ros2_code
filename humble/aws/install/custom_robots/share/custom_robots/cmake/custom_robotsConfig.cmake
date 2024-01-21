# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_custom_robots_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED custom_robots_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(custom_robots_FOUND FALSE)
  elseif(NOT custom_robots_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(custom_robots_FOUND FALSE)
  endif()
  return()
endif()
set(_custom_robots_CONFIG_INCLUDED TRUE)

# output package information
if(NOT custom_robots_FIND_QUIETLY)
  message(STATUS "Found custom_robots: 0.0.0 (${custom_robots_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'custom_robots' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${custom_robots_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(custom_robots_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${custom_robots_DIR}/${_extra}")
endforeach()

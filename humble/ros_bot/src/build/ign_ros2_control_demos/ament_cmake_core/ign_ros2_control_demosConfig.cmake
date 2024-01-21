# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ign_ros2_control_demos_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ign_ros2_control_demos_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ign_ros2_control_demos_FOUND FALSE)
  elseif(NOT ign_ros2_control_demos_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ign_ros2_control_demos_FOUND FALSE)
  endif()
  return()
endif()
set(_ign_ros2_control_demos_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ign_ros2_control_demos_FIND_QUIETLY)
  message(STATUS "Found ign_ros2_control_demos: 0.7.4 (${ign_ros2_control_demos_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ign_ros2_control_demos' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ign_ros2_control_demos_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ign_ros2_control_demos_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ign_ros2_control_demos_DIR}/${_extra}")
endforeach()

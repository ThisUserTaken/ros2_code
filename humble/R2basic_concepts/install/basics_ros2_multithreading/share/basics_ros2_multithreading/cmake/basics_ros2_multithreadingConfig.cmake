# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_basics_ros2_multithreading_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED basics_ros2_multithreading_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(basics_ros2_multithreading_FOUND FALSE)
  elseif(NOT basics_ros2_multithreading_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(basics_ros2_multithreading_FOUND FALSE)
  endif()
  return()
endif()
set(_basics_ros2_multithreading_CONFIG_INCLUDED TRUE)

# output package information
if(NOT basics_ros2_multithreading_FIND_QUIETLY)
  message(STATUS "Found basics_ros2_multithreading: 0.0.0 (${basics_ros2_multithreading_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'basics_ros2_multithreading' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${basics_ros2_multithreading_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(basics_ros2_multithreading_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${basics_ros2_multithreading_DIR}/${_extra}")
endforeach()

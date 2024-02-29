# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_depthai_descriptions_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED depthai_descriptions_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(depthai_descriptions_FOUND FALSE)
  elseif(NOT depthai_descriptions_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(depthai_descriptions_FOUND FALSE)
  endif()
  return()
endif()
set(_depthai_descriptions_CONFIG_INCLUDED TRUE)

# output package information
if(NOT depthai_descriptions_FIND_QUIETLY)
  message(STATUS "Found depthai_descriptions: 2.9.0 (${depthai_descriptions_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'depthai_descriptions' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${depthai_descriptions_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(depthai_descriptions_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${depthai_descriptions_DIR}/${_extra}")
endforeach()

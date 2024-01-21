# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_zinger_nav_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED zinger_nav_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(zinger_nav_FOUND FALSE)
  elseif(NOT zinger_nav_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(zinger_nav_FOUND FALSE)
  endif()
  return()
endif()
set(_zinger_nav_CONFIG_INCLUDED TRUE)

# output package information
if(NOT zinger_nav_FIND_QUIETLY)
  message(STATUS "Found zinger_nav: 0.0.0 (${zinger_nav_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'zinger_nav' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${zinger_nav_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(zinger_nav_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${zinger_nav_DIR}/${_extra}")
endforeach()

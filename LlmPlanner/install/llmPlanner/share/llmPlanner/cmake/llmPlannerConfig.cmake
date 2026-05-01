# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_llmPlanner_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED llmPlanner_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(llmPlanner_FOUND FALSE)
  elseif(NOT llmPlanner_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(llmPlanner_FOUND FALSE)
  endif()
  return()
endif()
set(_llmPlanner_CONFIG_INCLUDED TRUE)

# output package information
if(NOT llmPlanner_FIND_QUIETLY)
  message(STATUS "Found llmPlanner: 0.0.0 (${llmPlanner_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'llmPlanner' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${llmPlanner_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(llmPlanner_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${llmPlanner_DIR}/${_extra}")
endforeach()
